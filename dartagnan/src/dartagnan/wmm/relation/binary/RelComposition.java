package dartagnan.wmm.relation.binary;

import com.google.common.collect.*;
import com.microsoft.z3.BoolExpr;
import dartagnan.program.event.Event;
import dartagnan.utils.Utils;
import dartagnan.wmm.relation.Relation;
import dartagnan.wmm.utils.Tuple;
import dartagnan.wmm.utils.TupleSet;

import java.util.*;

/**
 *
 * @author Florian Furbach
 */
public class RelComposition extends BinaryRelation {

    public static String makeTerm(Relation r1, Relation r2){
        return "(" + r1.getName() + ";" + r2.getName() + ")";
    }

    private Map<Tuple, Set<Event>> groupedIntermediateEvents = new HashMap<>();

    public RelComposition(Relation r1, Relation r2) {
        super(r1, r2);
        term = makeTerm(r1, r2);
    }

    public RelComposition(Relation r1, Relation r2, String name) {
        super(r1, r2, name);
        term = makeTerm(r1, r2);
    }

    @Override
    public TupleSet getMaxTupleSet(){
        if(maxTupleSet == null){
            maxTupleSet = new TupleSet();
            TupleSet set1 = r1.getMaxTupleSet();
            TupleSet set2 = r2.getMaxTupleSet();
            for(Tuple rel1 : set1){
                for(Tuple rel2 : set2.getByFirst(rel1.getSecond())){
                    maxTupleSet.add(new Tuple(rel1.getFirst(), rel2.getSecond()));
                }
            }
        }
        return maxTupleSet;
    }

    @Override
    public TupleSet getMaxTupleSetRecursive(){
        if(recursiveGroupId > 0 && maxTupleSet != null){
            TupleSet set1 = r1.getMaxTupleSetRecursive();
            TupleSet set2 = r2.getMaxTupleSetRecursive();
            for(Tuple rel1 : set1){
                for(Tuple rel2 : set2.getByFirst(rel1.getSecond())){
                    maxTupleSet.add(new Tuple(rel1.getFirst(), rel2.getSecond()));
                }
            }
            return maxTupleSet;
        }
        return getMaxTupleSet();
    }

    @Override
    public ImmutableSortedMap<Tuple, Long> getTupleGroupMap(){
        if(tupleGroupMap == null){
            SetMultimap<Set<Long>, Tuple> aggregated = HashMultimap.create();
            ImmutableMap<Tuple, Long> g1 = r1.getTupleGroupMap();
            ImmutableMap<Tuple, Long> g2 = r2.getTupleGroupMap();
            long defVal = 0;

            for(Tuple tuple : getMaxTupleSet()){
                Set<Event> intermediateSet = new HashSet<>();
                Set<Long> pathIds = new HashSet<>();
                Set<Tuple> s1 = r1.getMaxTupleSet().getByFirst(tuple.getFirst());
                Set<Tuple> s2 = r2.getMaxTupleSet().getBySecond(tuple.getSecond());
                for(Tuple t1 : s1){
                    for(Tuple t2 : s2){
                        if(t1.getSecond().equals(t2.getFirst())){
                            long tripleId = (g1.getOrDefault(t1, defVal) << 32) + g2.getOrDefault(t2, defVal);
                            if(!pathIds.contains(tripleId)){
                                pathIds.add(tripleId);
                                intermediateSet.add(t1.getSecond());
                            }
                        }
                    }
                }
                aggregated.put(pathIds, tuple);
                groupedIntermediateEvents.put(tuple, intermediateSet);
            }

            ImmutableSortedMap.Builder<Tuple, Long> builder = ImmutableSortedMap.naturalOrder();
            long i = 1;
            for(Set<Long> key : aggregated.keySet()){
                for(Tuple tuple : aggregated.get(key)){
                    builder.put(tuple, i);
                }
                i++;
            }
            tupleGroupMap = builder.build();
        }
        return tupleGroupMap;
    }

    @Override
    public ImmutableSortedMap<Tuple, Long> getTupleGroupMapRecursive(){
        if(recursiveGroupId > 0){
            SetMultimap<Set<Long>, Tuple> aggregated = HashMultimap.create();
            ImmutableMap<Tuple, Long> g1 = r1.getTupleGroupMapRecursive();
            ImmutableMap<Tuple, Long> g2 = r2.getTupleGroupMapRecursive();
            long defVal = 0;

            TupleSet r1Set = new TupleSet();
            r1Set.addAll(g1.keySet());

            TupleSet r2Set = new TupleSet();
            r2Set.addAll(g2.keySet());

            TupleSet tupleIterationSet = new TupleSet();
            for(Tuple rel1 : r1Set){
                for(Tuple rel2 : r2Set.getByFirst(rel1.getSecond())){
                    tupleIterationSet.add(new Tuple(rel1.getFirst(), rel2.getSecond()));
                }
            }

            for(Tuple tuple : tupleIterationSet){
                Set<Event> intermediateSet = new HashSet<>();
                Set<Long> pathIds = new HashSet<>();
                Set<Tuple> s1 = r1Set.getByFirst(tuple.getFirst());
                Set<Tuple> s2 = r2Set.getBySecond(tuple.getSecond());
                for(Tuple t1 : s1){
                    for(Tuple t2 : s2){
                        if(t1.getSecond().equals(t2.getFirst())){
                            long tripleId = (g1.getOrDefault(t1, defVal) << 32) + g2.getOrDefault(t2, defVal);
                            if(!pathIds.contains(tripleId)){
                                pathIds.add(tripleId);
                                intermediateSet.add(t1.getSecond());
                            }
                        }
                    }
                }
                aggregated.put(pathIds, tuple);
                groupedIntermediateEvents.put(tuple, intermediateSet);
            }

            ImmutableSortedMap.Builder<Tuple, Long> builder = ImmutableSortedMap.naturalOrder();
            long i = 1;
            for(Set<Long> key : aggregated.keySet()){
                for(Tuple tuple : aggregated.get(key)){
                    builder.put(tuple, i);
                }
                i++;
            }

            tupleGroupMap = builder.build();
        }
        return getTupleGroupMap();
    }

    @Override
    public void addEncodeTupleSet(TupleSet tuples){
        Set<Tuple> activeSet = new HashSet<>(tuples);
        activeSet.removeAll(encodeTupleSet);
        encodeTupleSet.addAll(tuples);
        activeSet.retainAll(maxTupleSet);

        if(!activeSet.isEmpty()){
            TupleSet r1Set = new TupleSet();
            TupleSet r2Set = new TupleSet();

            Map<Integer, Set<Integer>> myMap = new HashMap<>();
            for(Tuple tuple : activeSet){
                int eid1 = tuple.getFirst().getEId();
                int eid2 = tuple.getSecond().getEId();
                myMap.putIfAbsent(eid1, new HashSet<>());
                myMap.get(eid1).add(eid2);
            }

            for(Tuple tuple1 : r1.getMaxTupleSet()){
                Event e1 = tuple1.getFirst();
                Set<Integer> ends = myMap.get(e1.getEId());
                if(ends == null) continue;
                for(Tuple tuple2 : r2.getMaxTupleSet().getByFirst(tuple1.getSecond())){
                    Event e2 = tuple2.getSecond();
                    if(ends.contains(e2.getEId())){
                        r1Set.add(tuple1);
                        r2Set.add(tuple2);
                    }
                }
            }

            r1.addEncodeTupleSet(r1Set);
            r2.addEncodeTupleSet(r2Set);
        }
    }

    private BoolExpr encodeTuple(Tuple tuple){
        BoolExpr orClause = ctx.mkFalse();
        Event e1 = tuple.getFirst();
        Event e2 = tuple.getSecond();

        for(Event e : groupedIntermediateEvents.get(tuple)){
            orClause = ctx.mkOr(orClause, ctx.mkAnd(
                    Utils.edge(r1.getName(), e1, e, ctx),
                    Utils.edge(r2.getName(), e, e2, ctx)
            ));
        }
        return ctx.mkEq(Utils.edge(getName(), e1, e2, ctx), orClause);
    }

    private BoolExpr encodeTupleIDL(Tuple tuple){
        BoolExpr orClause = ctx.mkFalse();
        BoolExpr idlClause = ctx.mkFalse();

        Event e1 = tuple.getFirst();
        Event e2 = tuple.getSecond();

        BoolExpr edge = Utils.edge(getName(), e1, e2, ctx);

        for(Event e : groupedIntermediateEvents.get(tuple)){
            BoolExpr opt1 = Utils.edge(r1.getName(), e1, e, ctx);
            BoolExpr opt2 = Utils.edge(r2.getName(), e, e2, ctx);
            orClause = ctx.mkOr(orClause, ctx.mkAnd(opt1, opt2));

            if((r1.getRecursiveGroupId() & recursiveGroupId) > 0){
                opt1 = ctx.mkAnd(opt1, ctx.mkGt(Utils.intCount(this.getName(), e1, e2, ctx), Utils.intCount(r1.getName(), e1, e, ctx)));
            }
            if((r2.getRecursiveGroupId() & recursiveGroupId) > 0){
                opt2 = ctx.mkAnd(opt2, ctx.mkGt(Utils.intCount(this.getName(), e1, e2, ctx), Utils.intCount(r2.getName(), e, e2, ctx)));
            }
            idlClause = ctx.mkOr(idlClause, ctx.mkAnd(opt1, opt2));
        }

        return ctx.mkAnd(ctx.mkEq(edge, orClause), ctx.mkEq(edge, idlClause));
    }

    @Override
    protected BoolExpr encodeApprox() {
        SortedSetMultimap<Long, Tuple> map = TreeMultimap.create();
        for(Map.Entry<Tuple, Long> entry : getTupleGroupMap().entrySet()){
            if(encodeTupleSet.contains(entry.getKey())){
                map.put(entry.getValue(), entry.getKey());
            }
        }

        BoolExpr enc = ctx.mkTrue();
        for(long group : map.keySet()){
            SortedSet<Tuple> tuples = map.get(group);
            Iterator<Tuple> it = tuples.iterator();
            Tuple reprTuple = it.next();
            BoolExpr reprEdge = Utils.edge(getName(), reprTuple.getFirst(), reprTuple.getSecond(), ctx);
            enc = ctx.mkAnd(enc, encodeTuple(reprTuple));

            while(it.hasNext()){
                Tuple tuple = it.next();
                enc = ctx.mkAnd(enc, ctx.mkEq(reprEdge, Utils.edge(getName(), tuple.getFirst(), tuple.getSecond(), ctx)));
            }
        }

        return enc;
    }

    @Override
    protected BoolExpr encodeIDL() {
        if(recursiveGroupId == 0){
            return encodeApprox();
        }

        SortedSetMultimap<Long, Tuple> map = TreeMultimap.create();
        for(Map.Entry<Tuple, Long> entry : getTupleGroupMap().entrySet()){
            if(encodeTupleSet.contains(entry.getKey())){
                map.put(entry.getValue(), entry.getKey());
            }
        }

        BoolExpr enc = ctx.mkTrue();
        for(long group : map.keySet()){
            SortedSet<Tuple> tuples = map.get(group);
            Iterator<Tuple> it = tuples.iterator();
            Tuple reprTuple = it.next();
            BoolExpr reprEdge = Utils.edge(getName(), reprTuple.getFirst(), reprTuple.getSecond(), ctx);
            enc = ctx.mkAnd(enc, encodeTupleIDL(reprTuple));

            while(it.hasNext()){
                Tuple tuple = it.next();
                enc = ctx.mkAnd(enc, ctx.mkEq(reprEdge, Utils.edge(getName(), tuple.getFirst(), tuple.getSecond(), ctx)));
            }
        }

        return enc;
    }

    @Override
    public BoolExpr encodeIteration(int groupId, int iteration){
        BoolExpr enc = ctx.mkTrue();

        if((groupId & recursiveGroupId) > 0 && iteration > lastEncodedIteration) {
            lastEncodedIteration = iteration;
            String name = this.getName() + "_" + iteration;

            if(iteration == 0 && isRecursive){
                for(Tuple tuple : encodeTupleSet){
                    enc = ctx.mkAnd(ctx.mkNot(Utils.edge(name, tuple.getFirst(), tuple.getSecond(), ctx)));
                }

            } else {
                int childIteration = isRecursive ? iteration - 1 : iteration;

                boolean recurseInR1 = (r1.getRecursiveGroupId() & groupId) > 0;
                boolean recurseInR2 = (r2.getRecursiveGroupId() & groupId) > 0;

                String r1Name = recurseInR1 ? r1.getName() + "_" + childIteration : r1.getName();
                String r2Name = recurseInR2 ? r2.getName() + "_" + childIteration : r2.getName();

                TupleSet r1Set = new TupleSet();
                r1Set.addAll(r1.getEncodeTupleSet());
                r1Set.retainAll(r1.getMaxTupleSet());

                TupleSet r2Set = new TupleSet();
                r2Set.addAll(r2.getEncodeTupleSet());
                r2Set.retainAll(r2.getMaxTupleSet());

                Map<Integer, BoolExpr> exprMap = new HashMap<>();
                for(Tuple tuple : encodeTupleSet){
                    exprMap.put(tuple.hashCode(), ctx.mkFalse());
                }

                for(Tuple tuple1 : r1Set){
                    Event e1 = tuple1.getFirst();
                    Event e3 = tuple1.getSecond();
                    for(Tuple tuple2 : r2Set.getByFirst(e3)){
                        Event e2 = tuple2.getSecond();
                        int id = Tuple.toHashCode(e1.getEId(), e2.getEId());
                        if(exprMap.containsKey(id)){
                            BoolExpr e = exprMap.get(id);
                            e = ctx.mkOr(e, ctx.mkAnd(Utils.edge(r1Name, e1, e3, ctx), Utils.edge(r2Name, e3, e2, ctx)));
                            exprMap.put(id, e);
                        }
                    }
                }

                for(Tuple tuple : encodeTupleSet){
                    enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(name, tuple.getFirst(), tuple.getSecond(), ctx), exprMap.get(tuple.hashCode())));
                }

                if(recurseInR1){
                    enc = ctx.mkAnd(enc, r1.encodeIteration(groupId, childIteration));
                }

                if(recurseInR2){
                    enc = ctx.mkAnd(enc, r2.encodeIteration(groupId, childIteration));
                }
            }
        }

        return enc;
    }
}
