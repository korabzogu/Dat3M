package dartagnan.wmm.relation.basic;

import com.microsoft.z3.BoolExpr;
import dartagnan.program.Thread;
import dartagnan.program.event.Event;
import dartagnan.program.utils.EventRepository;
import dartagnan.wmm.relation.Relation;
import dartagnan.wmm.utils.Tuple;
import dartagnan.wmm.utils.TupleSet;

import java.util.Set;

import static dartagnan.utils.Utils.edge;

public class RelIdd extends Relation {

    public RelIdd(){
        term = "idd";
    }

    @Override
    public TupleSet getMaxTupleSet(){
        if(maxTupleSet == null){
            maxTupleSet = new TupleSet();
            for(Thread t : program.getThreads()){
                Set<Event> regWriters = t.getEventRepository().getEvents(EventRepository.LOCAL | EventRepository.LOAD);
                Set<Event> regReaders = t.getEventRepository().getEvents(EventRepository.STORE | EventRepository.LOCAL | EventRepository.IF);
                for(Event e1 : regWriters){
                    for(Event e2 : regReaders){
                        if(e1.getEId() < e2.getEId() && e2.getExpr().getRegs().contains(e1.getReg())){
                            maxTupleSet.add(new Tuple(e1, e2));
                        }
                    }
                }
            }
        }
        return maxTupleSet;
    }

    @Override
    protected BoolExpr encodeApprox() {
        BoolExpr enc = ctx.mkTrue();
        for(Tuple tuple1 : encodeTupleSet) {
            Event e1 = tuple1.getFirst();
            Event e2 = tuple1.getSecond();
            BoolExpr clause = ctx.mkAnd(e1.executes(ctx), e2.executes(ctx));
            for(Tuple tuple2 : maxTupleSet){
                if(e2.getEId() == tuple2.getSecond().getEId()
                        && e1.getReg() == tuple2.getFirst().getReg()
                        && e1.getEId() < tuple2.getFirst().getEId()){
                    clause = ctx.mkAnd(clause, ctx.mkNot(tuple2.getFirst().executes(ctx)));
                }
            }
            enc = ctx.mkAnd(enc, ctx.mkEq(edge(this.getName(), e1, e2, ctx), clause));
        }
        return enc;
    }
}