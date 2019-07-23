package com.dat3m.dartagnan.wmm.relation.base.stat;

import com.microsoft.z3.BoolExpr;
import com.dat3m.dartagnan.wmm.relation.Relation;
import com.dat3m.dartagnan.wmm.utils.TupleSet;

public class RelEmpty extends Relation {

    public RelEmpty(String name) {
        super(name);
        term = name;
    }

    @Override
    public TupleSet getMaySet(){
        if(maySet == null){
            maySet = new TupleSet();
        }
        return maySet;
    }

    @Override
    protected BoolExpr encodeKnaster() {
        return ctx.mkTrue();
    }
}
