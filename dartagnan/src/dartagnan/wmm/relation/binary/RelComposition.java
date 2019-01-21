package dartagnan.wmm.relation.binary;

import com.google.common.collect.*;
import com.microsoft.z3.BoolExpr;
import dartagnan.program.event.Event;
import dartagnan.utils.Utils;
import dartagnan.wmm.relation.Relation;
import dartagnan.wmm.utils.Tuple;
import dartagnan.wmm.utils.TupleSet;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

/**
 *
 * @author Florian Furbach
 */
public class RelComposition extends BinaryRelation {

    public static String makeTerm(Relation r1, Relation r2){
        return "(" + r1.getName() + ";" + r2.getName() + ")";
    }

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
                Set<Long> pathIds = new HashSet<>();
                Set<Tuple> s1 = r1.getMaxTupleSet().getByFirst(tuple.getFirst());
                Set<Tuple> s2 = r2.getMaxTupleSet().getBySecond(tuple.getSecond());
                for(Tuple t1 : s1){
                    for(Tuple t2 : s2){
                        if(t1.getSecond().equals(t2.getFirst())){
                            long tripleId = (g1.getOrDefault(t1, defVal) << 32) + g2.getOrDefault(t2, defVal);
                            pathIds.add(tripleId);
                        }
                    }
                }
                aggregated.put(pathIds, tuple);
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
        if(recursiveGroupId == 0){
            return getTupleGroupMap();
        }

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
            Set<Long> pathIds = new HashSet<>();
            Set<Tuple> s1 = r1Set.getByFirst(tuple.getFirst());
            Set<Tuple> s2 = r2Set.getBySecond(tuple.getSecond());
            for(Tuple t1 : s1){
                for(Tuple t2 : s2){
                    if(t1.getSecond().equals(t2.getFirst())){
                        long tripleId = (g1.getOrDefault(t1, defVal) << 32) + g2.getOrDefault(t2, defVal);
                        pathIds.add(tripleId);
                    }
                }
            }
            aggregated.put(pathIds, tuple);
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
        return tupleGroupMap;
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

    @Override
    protected BoolExpr combine(BoolExpr expr1, BoolExpr expr2){
        throw new UnsupportedOperationException("Method combine is not supported by " + getClass().getName());
    }

    @Override
    protected BoolExpr encodeApprox() {
        Map<Long, Tuple> map = new HashMap<>();
        for(Map.Entry<Tuple, Long> entry : getTupleGroupMap().entrySet()){
            if(encodeTupleSet.contains(entry.getKey())){
                map.putIfAbsent(entry.getValue(), entry.getKey());
            }
        }

        BoolExpr enc = ctx.mkTrue();

        TupleSet r1Set = new TupleSet();
        r1Set.addAll(r1.getEncodeTupleSet());
        r1Set.retainAll(r1.getMaxTupleSet());

        TupleSet r2Set = new TupleSet();
        r2Set.addAll(r2.getEncodeTupleSet());
        r2Set.retainAll(r2.getMaxTupleSet());

        Map<Integer, BoolExpr> exprMap = new HashMap<>();
        for(Tuple tuple : map.values()){
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
                    e = ctx.mkOr(e, ctx.mkAnd(Utils.edge(r1.getName(), e1, e3, ctx), Utils.edge(r2.getName(), e3, e2, ctx)));
                    exprMap.put(id, e);
                }
            }
        }

        for(Tuple tuple : map.values()){
            enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(this.getName(), tuple, ctx), exprMap.get(tuple.hashCode())));
        }

        for(Tuple tuple : encodeTupleSet){
            if(!map.values().contains(tuple)){
                Tuple encTuple = map.get(tupleGroupMap.get(tuple));
                enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(this.getName(), tuple, ctx), Utils.edge(this.getName(), encTuple, ctx)));
            }
        }

        return enc;
    }

    @Override
    protected BoolExpr encodeIDL() {
        if(recursiveGroupId == 0){
            return encodeApprox();
        }

        BoolExpr enc = ctx.mkTrue();

        boolean recurseInR1 = (r1.getRecursiveGroupId() & recursiveGroupId) > 0;
        boolean recurseInR2 = (r2.getRecursiveGroupId() & recursiveGroupId) > 0;

        TupleSet r1Set = new TupleSet();
        r1Set.addAll(r1.getEncodeTupleSet());
        r1Set.retainAll(r1.getMaxTupleSet());

        TupleSet r2Set = new TupleSet();
        r2Set.addAll(r2.getEncodeTupleSet());
        r2Set.retainAll(r2.getMaxTupleSet());

        Map<Integer, BoolExpr> orClauseMap = new HashMap<>();
        Map<Integer, BoolExpr> idlClauseMap = new HashMap<>();
        for(Tuple tuple : encodeTupleSet){
            orClauseMap.put(tuple.hashCode(), ctx.mkFalse());
            idlClauseMap.put(tuple.hashCode(), ctx.mkFalse());
        }

        for(Tuple tuple1 : r1Set){
            Event e1 = tuple1.getFirst();
            Event e3 = tuple1.getSecond();
            for(Tuple tuple2 : r2Set.getByFirst(e3)){
                Event e2 = tuple2.getSecond();
                int id = Tuple.toHashCode(e1.getEId(), e2.getEId());
                if(orClauseMap.containsKey(id)){
                    BoolExpr opt1 = Utils.edge(r1.getName(), e1, e3, ctx);
                    BoolExpr opt2 = Utils.edge(r2.getName(), e3, e2, ctx);
                    orClauseMap.put(id, ctx.mkOr(orClauseMap.get(id), ctx.mkAnd(opt1, opt2)));

                    if(recurseInR1){
                        opt1 = ctx.mkAnd(opt1, ctx.mkGt(Utils.intCount(this.getName(), e1, e2, ctx), Utils.intCount(r1.getName(), e1, e3, ctx)));
                    }
                    if(recurseInR2){
                        opt2 = ctx.mkAnd(opt2, ctx.mkGt(Utils.intCount(this.getName(), e1, e2, ctx), Utils.intCount(r1.getName(), e3, e2, ctx)));
                    }
                    idlClauseMap.put(id, ctx.mkOr(idlClauseMap.get(id), ctx.mkAnd(opt1, opt2)));
                }
            }
        }

        for(Tuple tuple : encodeTupleSet){
            enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(this.getName(), tuple, ctx), orClauseMap.get(tuple.hashCode())));
            enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(this.getName(), tuple, ctx), idlClauseMap.get(tuple.hashCode())));
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
                    enc = ctx.mkAnd(ctx.mkNot(Utils.edge(name, tuple, ctx)));
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
                    enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(name, tuple, ctx), exprMap.get(tuple.hashCode())));
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
