package com.dat3m.dartagnan.program;

import com.dat3m.dartagnan.program.event.CondJump;
import com.dat3m.dartagnan.program.event.Label;
import com.dat3m.dartagnan.program.utils.EType;
import com.dat3m.dartagnan.program.utils.ThreadCache;
import com.dat3m.dartagnan.utils.dependable.DependencyGraph;
import com.dat3m.dartagnan.utils.equivalence.BranchEquivalence;
import com.dat3m.dartagnan.verification.VerificationTask;
import com.dat3m.dartagnan.wmm.filter.FilterBasic;
import com.dat3m.dartagnan.wmm.utils.Arch;
import com.google.common.collect.ImmutableSet;
import com.google.common.collect.Lists;
import com.microsoft.z3.BoolExpr;
import com.microsoft.z3.Context;
import com.dat3m.dartagnan.asserts.AbstractAssert;
import com.dat3m.dartagnan.asserts.AssertCompositeOr;
import com.dat3m.dartagnan.asserts.AssertInline;
import com.dat3m.dartagnan.asserts.AssertTrue;
import com.dat3m.dartagnan.program.event.Event;
import com.dat3m.dartagnan.program.event.Local;
import com.dat3m.dartagnan.program.event.utils.RegWriter;
import com.dat3m.dartagnan.program.memory.Location;
import com.dat3m.dartagnan.program.memory.Memory;

import java.util.*;
import java.util.stream.Collectors;

public class Program {

    private String name;
	private AbstractAssert ass;
    private AbstractAssert assFilter;
	private final List<Thread> threads;
	private final ImmutableSet<Location> locations;
	private final Memory memory;
	private Arch arch;
    private ThreadCache cache;
    private boolean isUnrolled;
    private boolean isCompiled;
    private VerificationTask task;

    public Program(Memory memory, ImmutableSet<Location> locations){
        this("", memory, locations);
    }

	public Program (String name, Memory memory, ImmutableSet<Location> locations) {
		this.name = name;
		this.memory = memory;
		this.locations = locations;
		this.threads = new ArrayList<>();
	}

	public boolean isCompiled(){
        return isCompiled;
    }

    public boolean isUnrolled(){
        return isUnrolled;
    }

	public String getName(){
        return name;
    }

	public void setName(String name){
	    this.name = name;
    }

	public void setArch(Arch arch){
	    this.arch = arch;
    }

	public Arch getArch(){
	    return arch;
    }

    public Memory getMemory(){
        return this.memory;
    }

    public AbstractAssert getAss() {
        return ass;
    }

    public void setAss(AbstractAssert ass) {
        this.ass = ass;
    }

    public AbstractAssert getAssFilter() {
        return assFilter;
    }

    public void setAssFilter(AbstractAssert ass) {
        this.assFilter = ass;
    }

    public void add(Thread t) {
		threads.add(t);
	}

    public ThreadCache getCache(){
        if(cache == null){
            cache = new ThreadCache(getEvents());
        }
        return cache;
    }

    public void clearCache(){
    	for(Thread t : threads){
    		t.clearCache();
    	}
    }

    public List<Thread> getThreads() {
        return threads;
    }

    public ImmutableSet<Location> getLocations(){
        return locations;
    }

	public List<Event> getEvents(){
        List<Event> events = new ArrayList<>();
		for(Thread t : threads){
			events.addAll(t.getCache().getEvents(FilterBasic.get(EType.ANY)));
		}
		return events;
	}

    private BranchEquivalence branchEquivalence;
    public BranchEquivalence getBranchEquivalence() {
        if (branchEquivalence == null) {
            branchEquivalence = new BranchEquivalence(this);
        }
        return branchEquivalence;
    }

	public void updateAssertion() {
		if(ass != null) {
			return;
		}
		List<Event> assertions = new ArrayList<>();
		for(Thread t : threads){
			assertions.addAll(t.getCache().getEvents(FilterBasic.get(EType.ASSERTION)));
		}
		ass = new AssertTrue();
		if(!assertions.isEmpty()) {
    		ass = new AssertInline((Local)assertions.get(0));
    		for(int i = 1; i < assertions.size(); i++) {
    			ass = new AssertCompositeOr(ass, new AssertInline((Local)assertions.get(i)));
    		}
    	}
	}

	public void simplify() {
		// Some simplification are only applicable after others.
		// Thus we apply them iteratively until we reach a fixpoint.
		int size = getEvents().size();
		one_step_simplify();
		while(getEvents().size() != size) {
	    	size = getEvents().size();
	    	one_step_simplify();    		
		}
	}
	
	private void one_step_simplify() {
        for(Thread thread : threads){
            thread.simplify();
        }
        cache = null;
    }

    public void eliminateDeadCode() {
        if (!isCompiled) {
            throw new IllegalStateException("The program needs to be compiled first.");
        }
        BranchEquivalence eq = getBranchEquivalence();
        Set<Event> unreachEvents = eq.getUnreachableClass();
        if (unreachEvents.isEmpty())
            return;

        Event pred = null;
        for (Event e : getEvents()) {
            // NOTE: We don't eliminate assertions because this can accidentally make
            // tasks "safe" if the assertion is unreachable under a small bound
            if (!e.is(EType.ASSERTION) && unreachEvents.contains(e)) {
                e.delete(pred);
                eq.removeUnreachableEvent(e);
            } else {
                pred = e;
            }
        }
        this.cache = null;
        clearCache();
    }

    // Unrolling
    // -----------------------------------------------------------------------------------------------------------------

    public int unroll(int bound, int nextId) {
        for(Thread thread : threads){
            nextId = thread.unroll(bound, nextId);
        }
        isUnrolled = true;
        cache = null;
        return nextId;
    }


    // Compilation
    // -----------------------------------------------------------------------------------------------------------------

    public int compile(Arch target, int nextId) {
        if (!isUnrolled()) {
            throw new IllegalStateException("The program needs to be unrolled first.");
        }

        for(Thread thread : threads){
            nextId = thread.compile(target, nextId);
        }
        isCompiled = true;
        cache = null;
        return nextId;
    }


    // Encoding
    // -----------------------------------------------------------------------------------------------------------------

    public void initialise(VerificationTask task, Context ctx) {
        if (!isCompiled) {
            throw new IllegalStateException("The program needs to be compiled first.");
        }
        this.task = task;
        for(Event e : getEvents()){
            e.initialise(task, ctx);
        }
    }

    public BoolExpr encodeCF(Context ctx) {
        if (this.task == null) {
            throw new RuntimeException("The program needs to get initialised first.");
        }

        BoolExpr enc = memory.encode(ctx);
        for(Thread t : threads){
            enc = ctx.mkAnd(enc, t.encodeCF(ctx));
        }
        return enc;
    }

    public BoolExpr encodeFinalRegisterValues(Context ctx){
        if (this.task == null) {
            throw new RuntimeException("The program needs to get initialised first.");
        }

        Map<Register, List<Event>> eMap = new HashMap<>();
        for(Event e : getCache().getEvents(FilterBasic.get(EType.REG_WRITER))){
            Register reg = ((RegWriter)e).getResultRegister();
            eMap.putIfAbsent(reg, new ArrayList<>());
            eMap.get(reg).add(e);
        }

        BranchEquivalence eq = getBranchEquivalence();
        BoolExpr enc = ctx.mkTrue();
        for (Register reg : eMap.keySet()) {
            Thread thread = threads.get(reg.getThreadId());

            List<Event> events = eMap.get(reg);
            events.sort(Collections.reverseOrder());

            // =======================================================
            // Optimizations that remove registers which are guaranteed to get overwritten
            //TODO: Make sure that this is correct even for EXCL events
            for (int i = 0; i < events.size(); i++) {
                if (eq.isImplied(thread.getExit(), events.get(i))) {
                    events = events.subList(0, i + 1);
                    break;
                }
            }
            final List<Event> events2 = events;
            events.removeIf(x -> events2.stream().anyMatch(y -> y.getCId() > x.getCId() && eq.isImplied(x, y)));
            // ========================================================


            for(int i = 0; i <  events.size(); i++){
                Event w1 = events.get(i);
                BoolExpr lastModReg = w1.exec();
                for(int j = 0; j < i; j++){
                    Event w2 = events.get(j);
                    if (!eq.areMutuallyExclusive(w1, w2)) {
                        lastModReg = ctx.mkAnd(lastModReg, ctx.mkNot(w2.exec()));
                    }
                }
                enc = ctx.mkAnd(enc, ctx.mkImplies(lastModReg,
                        ctx.mkEq(reg.getLastValueExpr(ctx), ((RegWriter)w1).getResultRegisterExpr())));
            }
        }
        return enc;
    }
    
    public BoolExpr encodeNoBoundEventExec(Context ctx){
        if (this.task == null) {
            throw new RuntimeException("The program needs to get initialised first.");
        }

    	BoolExpr enc = ctx.mkTrue();
        for(Event e : getCache().getEvents(FilterBasic.get(EType.BOUND))){
        	enc = ctx.mkAnd(enc, ctx.mkNot(e.exec()));
        }
        return enc;
    }



    // ------------------------- Preprocessing --------------------

    public void reorder() {
        int id = 0;
        for (Thread t : getThreads()) {
            System.out.println("-----------" + t.getId() + "-----------");
            eliminateDeadCode(t);
            id = computeMoveables(t.getEntry(), t.getExit(), id);
            //id = reorder(t, id);
        }
    }

    private int computeMoveables(Event begin, Event end, int id) {
        List<MoveableBranch> moveables = new ArrayList<>();
        Map<Event, MoveableBranch> map = new HashMap<>();

        MoveableBranch cur = new MoveableBranch();
        moveables.add(cur);
        Event e = begin;
        while (e != null) {
            cur.events.add(e);
            map.put(e, cur);

            if (e.equals(end)) {
                break;
            }

            if (e instanceof CondJump && ((CondJump)e).isGoto()) {
                cur = new MoveableBranch();
                moveables.add(cur);
            }
            e = e.getSuccessor();
        }

        for (MoveableBranch br : moveables) {
            for (Event ev : br.events.stream().filter(x -> x instanceof CondJump).collect(Collectors.toList())) {
                CondJump jump = (CondJump) ev;
                br.successors.add(map.get(jump.getLabel()));
            }
        }

        DependencyGraph<MoveableBranch> cfGraph = DependencyGraph.fromSingleton(moveables.get(0), x -> x.successors);

        Event pred = null;
        List<Set<DependencyGraph<MoveableBranch>.Node>> sccs = Lists.reverse(cfGraph.getSCCs());
        for (Set<DependencyGraph<MoveableBranch>.Node> scc : sccs) {
            List<MoveableBranch> branches = scc.stream().map(DependencyGraph.Node::getContent)
                    .sorted(Comparator.comparingInt(x -> x.events.get(0).getOId())).collect(Collectors.toList());
            for (MoveableBranch br : branches) {
                for (Event ev : br.events) {
                    int oId = ev.getOId();
                    ev.setOId(id++);
                    if (pred != null) {
                        pred.setSuccessor(ev);
                    }
                    pred = ev;
                    System.out.println(ev.toString() + " (" + ev.getOId() + ", " + oId + ")");
                    if (ev instanceof CondJump) {
                        CondJump jump = (CondJump) ev;
                        int jumpIndex = cfGraph.get(br).getTopologicalIndex();
                        int labelIndex = cfGraph.get(map.get(jump.getLabel())).getTopologicalIndex();
                        if (jump.getLabel().getOId() < jump.getOId() && labelIndex < jumpIndex) {
                            System.out.println("=== Fake Loop ===");
                        }

                    }
                }

            }
        }
        return id;
    }

    private void computeReachable(Event e, Set<Event> reachable) {
        if (reachable.contains(e))
            return;

        while (e != null && reachable.add(e)) {
            if (e instanceof CondJump) {
                CondJump j = (CondJump) e;
                if (j.isGoto()) {
                    e = j.getLabel();
                    continue;
                }
                else {
                    computeReachable(j.getLabel(), reachable);
                }
            }
            e = e.getSuccessor();
        }
    }

    private void eliminateDeadCode(Thread t) {
        Set<Event> reachableEvents = new HashSet<>();
        computeReachable(t.getEntry(), reachableEvents);

        Event p = null;
        Event cur = t.getEntry();
        while (cur != null) {
            if (!reachableEvents.contains(cur)) {
                cur.delete(p);
                cur = p;
            }
            p = cur;
            cur = cur.getSuccessor();
        }
    }

    private static class MoveableBranch {
        List<Event> events = new ArrayList<>();
        Set<MoveableBranch> successors = new HashSet<>();
    }

}