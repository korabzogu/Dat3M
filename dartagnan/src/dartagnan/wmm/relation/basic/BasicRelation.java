package dartagnan.wmm.relation.basic;

import com.google.common.collect.ImmutableSortedMap;
import com.microsoft.z3.BoolExpr;
import dartagnan.program.event.Event;
import dartagnan.wmm.relation.Relation;
import dartagnan.wmm.utils.Tuple;
import dartagnan.wmm.utils.splitter.GroupHelper;
import dartagnan.wmm.utils.splitter.event.Delimiter;

import java.util.SortedMap;

import static dartagnan.utils.Utils.edge;

public abstract class BasicRelation extends Relation {

    public BasicRelation() {
        super();
    }

    public BasicRelation(String name) {
        super(name);
    }

    protected Delimiter getDelimiter(){
        return null;
    }

    @Override
    public ImmutableSortedMap<Tuple, Long> getTupleGroupMap(){
        if(tupleGroupMap == null){
            if(!getMaxTupleSet().isEmpty()){
                SortedMap<Event, Long> eventMap = program.getGroupSplitter().get(getDelimiter());
                tupleGroupMap = GroupHelper.build(getMaxTupleSet(), eventMap, eventMap);
            } else {
                tupleGroupMap = ImmutableSortedMap.of();
            }
        }
        return tupleGroupMap;
    }

    @Override
    protected BoolExpr encodeApprox() {
        BoolExpr enc = ctx.mkTrue();
        for(Tuple tuple : encodeTupleSet) {
            BoolExpr rel = edge(this.getName(), tuple.getFirst(), tuple.getSecond(), ctx);
            enc = ctx.mkAnd(enc, ctx.mkEq(rel, ctx.mkAnd(tuple.getFirst().executes(ctx), tuple.getSecond().executes(ctx))));
        }
        return enc;
    }
}
