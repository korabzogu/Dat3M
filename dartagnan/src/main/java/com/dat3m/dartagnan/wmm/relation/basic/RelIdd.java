package com.dat3m.dartagnan.wmm.relation.basic;

import com.dat3m.dartagnan.program.Register;
import com.dat3m.dartagnan.program.Thread;
import com.dat3m.dartagnan.program.event.Event;
import com.dat3m.dartagnan.program.event.utils.RegReaderData;
import com.dat3m.dartagnan.program.event.utils.RegWriter;
import com.dat3m.dartagnan.program.utils.EType;
import com.dat3m.dartagnan.wmm.filter.FilterBasic;
import com.dat3m.dartagnan.wmm.utils.Tuple;
import com.dat3m.dartagnan.wmm.utils.TupleSet;

import java.util.List;

public class RelIdd extends BasicRegRelation {

    public RelIdd(){
        term = "idd";
        forceDoEncode = true;
    }

    @Override
    public TupleSet getMaxTupleSet(){
        if(maxTupleSet == null){
            maxTupleSet = new TupleSet();
            for(Thread t : program.getThreads()){
                List<Event> regWriters = t.getCache().getEvents(FilterBasic.get(EType.REG_WRITER));
                List<Event> regReaders = t.getCache().getEvents(FilterBasic.get(EType.REG_READER));
                for(Event e1 : regWriters){
                    Register register = ((RegWriter)e1).getResultRegister();
                    for(Event e2 : regReaders){
                        if(e1.getCId() < e2.getCId() && ((RegReaderData)e2).getDataRegs().contains(register)){
                            maxTupleSet.add(new Tuple(e1, e2));
                        }
                    }
                }
            }
        }
        return maxTupleSet;
    }
}
