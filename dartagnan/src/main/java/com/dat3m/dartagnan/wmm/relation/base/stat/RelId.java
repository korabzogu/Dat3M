package com.dat3m.dartagnan.wmm.relation.base.stat;

import com.dat3m.dartagnan.program.event.Event;
import com.dat3m.dartagnan.program.utils.EType;
import com.dat3m.dartagnan.wmm.filter.FilterBasic;
import com.dat3m.dartagnan.wmm.utils.Tuple;
import com.dat3m.dartagnan.wmm.utils.TupleSet;

public class RelId extends StaticRelation {

    public RelId(){
        term = "id";
    }

    @Override
    public TupleSet getMaySet(){
        if(maySet == null){
            maySet = new TupleSet();
            for(Event e : program.getCache().getEvents(FilterBasic.get(EType.VISIBLE))){
                maySet.add(new Tuple(e, e));
            }
        }
        return maySet;
    }
}
