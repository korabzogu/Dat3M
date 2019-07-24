package com.dat3m.dartagnan.wmm.relation.binary;

import com.dat3m.dartagnan.program.Program;
import com.dat3m.dartagnan.utils.Settings;
import com.microsoft.z3.BoolExpr;
import com.dat3m.dartagnan.wmm.utils.Utils;
import com.dat3m.dartagnan.wmm.relation.Relation;
import com.dat3m.dartagnan.wmm.utils.Tuple;
import com.dat3m.dartagnan.wmm.utils.TupleSet;
import com.microsoft.z3.Context;
import com.microsoft.z3.IntExpr;

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

    private Map<Tuple, Map<Tuple, Tuple>> map;

    public RelComposition(Relation r1, Relation r2) {
        super(r1, r2);
        term = makeTerm(r1, r2);
    }

    public RelComposition(Relation r1, Relation r2, String name) {
        super(r1, r2, name);
        term = makeTerm(r1, r2);
    }

    @Override
    public void initialise(Program program, Context ctx, Settings settings){
        super.initialise(program, ctx, settings);
        map = new HashMap<>();
    }

    @Override
    public TupleSet getMaySet(){
        if(maySet == null){
            TupleSet set1 = r1.getMaySet();
            TupleSet set2 = r2.getMaySet();
            for(Tuple tuple1 : set1){
                for(Tuple tuple2 : set2.getByFirst(tuple1.getSecond())){
                    Tuple tuple = new Tuple(tuple1.getFirst(), tuple2.getSecond());
                    map.putIfAbsent(tuple, new HashMap<>());
                    map.get(tuple).put(tuple1, tuple2);
                }
            }
            maySet = new TupleSet();
            maySet.addAll(map.keySet());
        }
        return maySet;
    }

    @Override
    public TupleSet getMaySetRecursive(){
        if(recursiveGroupId > 0 && maySet != null){
            TupleSet set1 = r1.getMaySetRecursive();
            TupleSet set2 = r2.getMaySetRecursive();
            for(Tuple tuple1 : set1){
                for(Tuple tuple2 : set2.getByFirst(tuple1.getSecond())){
                    Tuple tuple = new Tuple(tuple1.getFirst(), tuple2.getSecond());
                    map.putIfAbsent(tuple, new HashMap<>());
                    map.get(tuple).put(tuple1, tuple2);
                    maySet.add(tuple);
                }
            }
            return maySet;
        }
        return getMaySet();
    }

    @Override
    public void addToActiveSet(TupleSet tuples){
        Set<Tuple> activeSet = new HashSet<>(tuples);
        activeSet.removeAll(this.activeSet);
        this.activeSet.addAll(tuples);
        activeSet.retainAll(maySet);

        if(!activeSet.isEmpty()) {
            TupleSet r1Set = new TupleSet();
            TupleSet r2Set = new TupleSet();
            for (Tuple tuple : activeSet) {
                Map<Tuple, Tuple> childMap = map.get(tuple);
                r1Set.addAll(childMap.keySet());
                r2Set.addAll(childMap.values());
            }
            r1.addToActiveSet(r1Set);
            r2.addToActiveSet(r2Set);
        }
    }

    @Override
    protected BoolExpr encodeKnaster() {
        BoolExpr enc = ctx.mkTrue();
        for(Tuple tuple : activeSet){
            BoolExpr expr = ctx.mkFalse();
            for(Map.Entry<Tuple, Tuple> entry : map.get(tuple).entrySet()){
                BoolExpr edge1 = Utils.edge(r1.getName(), entry.getKey(), ctx);
                BoolExpr edge2 = Utils.edge(r2.getName(), entry.getValue(), ctx);
                expr = ctx.mkOr(expr, ctx.mkAnd(edge1, edge2));
            }
            enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(this.getName(), tuple, ctx), expr));
        }
        return enc;
    }

    @Override
    protected BoolExpr encodeIDL() {
        if(recursiveGroupId == 0){
            return encodeKnaster();
        }

        BoolExpr enc = ctx.mkTrue();
        boolean recurseInR1 = (r1.getRecursiveGroupId() & recursiveGroupId) > 0;
        boolean recurseInR2 = (r2.getRecursiveGroupId() & recursiveGroupId) > 0;

        for(Tuple tuple : activeSet){
            BoolExpr edge = Utils.edge(this.getName(), tuple, ctx);
            BoolExpr base = ctx.mkFalse();
            BoolExpr idl = ctx.mkFalse();

            for(Map.Entry<Tuple, Tuple> entry : map.get(tuple).entrySet()){
                BoolExpr edge1 = Utils.edge(r1.getName(), entry.getKey(), ctx);
                BoolExpr edge2 = Utils.edge(r2.getName(), entry.getValue(), ctx);
                base = ctx.mkOr(base, ctx.mkAnd(edge1, edge2));

                IntExpr count = Utils.intCount(this.getName(), tuple, ctx);
                if(recurseInR1){
                    edge1 = ctx.mkAnd(edge1, ctx.mkGt(count, Utils.intCount(r1.getName(), entry.getKey(), ctx)));
                }
                if(recurseInR2){
                    edge2 = ctx.mkAnd(edge2, ctx.mkGt(count, Utils.intCount(r2.getName(), entry.getValue(), ctx)));
                }
                idl = ctx.mkOr(idl, ctx.mkAnd(edge1, edge2));
            }

            enc = ctx.mkAnd(enc, ctx.mkAnd(ctx.mkEq(edge, base), ctx.mkEq(edge, idl)));
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
                for(Tuple tuple : activeSet){
                    enc = ctx.mkAnd(ctx.mkNot(Utils.edge(name, tuple, ctx)));
                }
            } else {
                int childIteration = isRecursive ? iteration - 1 : iteration;
                boolean recurseInR1 = (r1.getRecursiveGroupId() & groupId) > 0;
                boolean recurseInR2 = (r2.getRecursiveGroupId() & groupId) > 0;
                String r1Name = recurseInR1 ? r1.getName() + "_" + childIteration : r1.getName();
                String r2Name = recurseInR2 ? r2.getName() + "_" + childIteration : r2.getName();

                for(Tuple tuple : activeSet){
                    BoolExpr expr = ctx.mkFalse();
                    for(Map.Entry<Tuple, Tuple> entry : map.get(tuple).entrySet()){
                        BoolExpr edge1 = Utils.edge(r1Name, entry.getKey(), ctx);
                        BoolExpr edge2 = Utils.edge(r2Name, entry.getValue(), ctx);
                        expr = ctx.mkOr(expr, ctx.mkAnd(edge1, edge2));
                    }
                    enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(name, tuple, ctx), expr));
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
