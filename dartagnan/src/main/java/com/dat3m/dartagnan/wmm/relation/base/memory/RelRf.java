package com.dat3m.dartagnan.wmm.relation.base.memory;

import com.dat3m.dartagnan.program.utils.EType;
import com.dat3m.dartagnan.utils.Settings;
import com.dat3m.dartagnan.wmm.filter.FilterBasic;
import com.microsoft.z3.BoolExpr;
import com.dat3m.dartagnan.program.event.Event;
import com.dat3m.dartagnan.program.event.MemEvent;
import com.dat3m.dartagnan.wmm.relation.Relation;
import com.dat3m.dartagnan.wmm.utils.Tuple;
import com.dat3m.dartagnan.wmm.utils.TupleSet;

import java.util.*;

import static com.dat3m.dartagnan.wmm.utils.Utils.edge;

public class RelRf extends Relation {

    public RelRf(){
        term = "rf";
        forceDoEncode = true;
    }

    @Override
    public TupleSet getMaySet(){
        if(maySet == null){
            maySet = new TupleSet();
            List<Event> eventsLoad = program.getCache().getEvents(FilterBasic.get(EType.READ));
            for(Event e1 : program.getCache().getEvents(FilterBasic.get(EType.WRITE))){
                for(Event e2 : eventsLoad){
                    if(MemEvent.canAddressTheSameLocation((MemEvent) e1, (MemEvent) e2)){
                        maySet.add(new Tuple(e1, e2));
                    }
                }
            }
        }
        return maySet;
    }

    @Override
    protected BoolExpr encodeKnaster() {
        BoolExpr enc = ctx.mkTrue();
        Map<MemEvent, List<BoolExpr>> edgeMap = new HashMap<>();
        boolean useSeqEncoding = settings.getFlag(Settings.FLAG_USE_SEQ_ENCODING_REL_RF);

        for(Tuple tuple : maySet){
            MemEvent w = (MemEvent) tuple.getFirst();
            MemEvent r = (MemEvent) tuple.getSecond();
            BoolExpr edge = edge(term, w, r, ctx);
            BoolExpr sameAddress = ctx.mkEq(w.getMemAddressExpr(), r.getMemAddressExpr());
            BoolExpr sameValue = ctx.mkEq(w.getMemValueExpr(), r.getMemValueExpr());

            edgeMap.putIfAbsent(r, new ArrayList<>());
            edgeMap.get(r).add(edge);

            enc = ctx.mkAnd(enc, ctx.mkImplies(edge, ctx.mkAnd(w.exec(), r.exec(), sameAddress, sameValue)));
        }

        for(MemEvent r : edgeMap.keySet()){
            enc = ctx.mkAnd(enc, useSeqEncoding ? encodeEdgeSeq(r, edgeMap.get(r)) : encodeEdgeNaive(r, edgeMap.get(r)));
        }
        return enc;
    }

    private BoolExpr encodeEdgeNaive(Event read, List<BoolExpr> edges){
        BoolExpr atMostOne = ctx.mkTrue();
        BoolExpr atLeastOne = ctx.mkFalse();
        for(int i = 0; i < edges.size(); i++){
            atLeastOne = ctx.mkOr(atLeastOne, edges.get(i));
            for(int j = i + 1; j < edges.size(); j++){
                atMostOne = ctx.mkAnd(atMostOne, ctx.mkNot(ctx.mkAnd(edges.get(i), edges.get(j))));
            }
        }
        return ctx.mkImplies(read.exec(), ctx.mkAnd(atMostOne, atLeastOne));
    }

    private BoolExpr encodeEdgeSeq(Event read, List<BoolExpr> edges){
        int num = edges.size();
        int readId = read.getCId();
        BoolExpr lastSeqVar = mkSeqVar(readId, 0);
        BoolExpr atMostOne = ctx.mkEq(lastSeqVar, ctx.mkFalse());
        BoolExpr atLeastOne = edges.get(0);

        for(int i = 1; i < num; i++){
            BoolExpr newSeqVar = mkSeqVar(readId, i);
            atMostOne = ctx.mkAnd(atMostOne, ctx.mkEq(newSeqVar, ctx.mkOr(lastSeqVar, edges.get(i - 1))));
            atMostOne = ctx.mkAnd(atMostOne, ctx.mkNot(ctx.mkAnd(edges.get(i), newSeqVar)));
            atLeastOne = ctx.mkOr(atLeastOne, edges.get(i));
            lastSeqVar = newSeqVar;
        }
        return ctx.mkImplies(read.exec(), ctx.mkAnd(atMostOne, atLeastOne));
    }

    private BoolExpr mkSeqVar(int readId, int i) {
        return (BoolExpr) ctx.mkConst("s(" + term + ",E" + readId + "," + i + ")", ctx.mkBoolSort());
    }
}
