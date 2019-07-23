package com.dat3m.dartagnan.wmm.relation.base.stat;

import com.microsoft.z3.BoolExpr;
import com.dat3m.dartagnan.wmm.relation.Relation;
import com.dat3m.dartagnan.wmm.utils.Tuple;

import static com.dat3m.dartagnan.wmm.utils.Utils.edge;

public abstract class StaticRelation extends Relation {

    public StaticRelation() {
        super();
    }

    public StaticRelation(String name) {
        super(name);
    }

    @Override
    protected BoolExpr encodeKnaster() {
        BoolExpr enc = ctx.mkTrue();
        for(Tuple tuple : activeSet) {
            BoolExpr rel = edge(this.getName(), tuple, ctx);
            enc = ctx.mkAnd(enc, ctx.mkEq(rel, ctx.mkAnd(tuple.getFirst().exec(), tuple.getSecond().exec())));
        }
        return enc;
    }
}
