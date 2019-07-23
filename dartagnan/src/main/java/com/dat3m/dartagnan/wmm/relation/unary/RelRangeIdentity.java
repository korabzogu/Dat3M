package com.dat3m.dartagnan.wmm.relation.unary;

import com.dat3m.dartagnan.program.event.Event;
import com.dat3m.dartagnan.wmm.utils.Utils;
import com.dat3m.dartagnan.wmm.relation.Relation;
import com.dat3m.dartagnan.wmm.utils.Tuple;
import com.dat3m.dartagnan.wmm.utils.TupleSet;
import com.microsoft.z3.BoolExpr;

import java.util.HashSet;
import java.util.Set;

public class RelRangeIdentity extends UnaryRelation {

    public static String makeTerm(Relation r1){
        return "[range(" + r1.getName() + ")]";
    }

    public RelRangeIdentity(Relation r1){
        super(r1);
        term = makeTerm(r1);
    }

    public RelRangeIdentity(Relation r1, String name) {
        super(r1, name);
        term = makeTerm(r1);
    }

    @Override
    public TupleSet getMaySet(){
        if(maySet == null){
            maySet = new TupleSet();
            for(Tuple tuple : r1.getMaySet()){
                maySet.add(new Tuple(tuple.getSecond(), tuple.getSecond()));
            }
        }
        return maySet;
    }

    @Override
    public void addToActiveSet(TupleSet tuples){
        activeSet.addAll(tuples);
        Set<Tuple> activeSet = new HashSet<>(tuples);
        activeSet.retainAll(maySet);
        if(!activeSet.isEmpty()){
            TupleSet r1Set = new TupleSet();
            for(Tuple tuple : activeSet){
                r1Set.addAll(r1.getMaySet().getBySecond(tuple.getFirst()));
            }
            r1.addToActiveSet(r1Set);
        }
    }

    @Override
    protected BoolExpr encodeKnaster() {
        BoolExpr enc = ctx.mkTrue();
        for(Tuple tuple1 : activeSet){
            Event e = tuple1.getFirst();
            BoolExpr opt = ctx.mkFalse();
            for(Tuple tuple2 : r1.getMaySet().getBySecond(e)){
                opt = ctx.mkOr(Utils.edge(r1.getName(), tuple2.getFirst(), e, ctx));
            }
            enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(this.getName(), e, e, ctx), opt));
        }
        return enc;
    }
}
