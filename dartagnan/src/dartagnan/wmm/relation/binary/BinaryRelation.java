package dartagnan.wmm.relation.binary;

import com.google.common.collect.ImmutableMap;
import com.google.common.collect.SortedSetMultimap;
import com.google.common.collect.TreeMultimap;
import com.microsoft.z3.BoolExpr;
import com.microsoft.z3.Context;
import dartagnan.program.Program;
import dartagnan.wmm.relation.Relation;
import dartagnan.wmm.utils.Tuple;
import dartagnan.wmm.utils.TupleSet;
import dartagnan.wmm.utils.splitter.TupleGroupBuilder;

/**
 *
 * @author Florian Furbach
 */
public abstract class BinaryRelation extends Relation {

    protected Relation r1;
    protected Relation r2;

    protected int lastEncodedIteration = -1;

    BinaryRelation(Relation r1, Relation r2) {
        this.r1 = r1;
        this.r2 = r2;
    }

    BinaryRelation(Relation r1, Relation r2, String name) {
        super(name);
        this.r1 = r1;
        this.r2 = r2;
    }

    @Override
    public ImmutableMap<Tuple, Long> getTupleGroupMap(){
        if(tupleGroupMap == null){
            SortedSetMultimap<Long, Tuple> tupleMap = TreeMultimap.create();
            ImmutableMap<Tuple, Long> g1 = r1.getTupleGroupMap();
            ImmutableMap<Tuple, Long> g2 = r2.getTupleGroupMap();
            long defVal = 0;

            for(Tuple tuple : getMaxTupleSet()){
                tupleMap.put((g1.getOrDefault(tuple, defVal) << 32) + g2.getOrDefault(tuple, defVal), tuple);
            }
            tupleGroupMap = TupleGroupBuilder.invertAndReduce(tupleMap);
        }
        return tupleGroupMap;
    }

    @Override
    public int updateRecursiveGroupId(int parentId){
        if(recursiveGroupId == 0 || forceUpdateRecursiveGroupId){
            forceUpdateRecursiveGroupId = false;
            int r1Id = r1.updateRecursiveGroupId(parentId | recursiveGroupId);
            int r2Id = r2.updateRecursiveGroupId(parentId | recursiveGroupId);
            recursiveGroupId |= (r1Id | r2Id) & parentId;
        }
        return recursiveGroupId;
    }

    @Override
    public void initialise(Program program, Context ctx, int encodingMode){
        super.initialise(program, ctx, encodingMode);
        lastEncodedIteration = -1;
    }

    @Override
    public void addEncodeTupleSet(TupleSet tuples){
        TupleSet activeSet = new TupleSet();
        activeSet.addAll(tuples);
        activeSet.removeAll(encodeTupleSet);
        encodeTupleSet.addAll(activeSet);
        activeSet.retainAll(maxTupleSet);
        if(!activeSet.isEmpty()){
            r1.addEncodeTupleSet(activeSet);
            r2.addEncodeTupleSet(activeSet);
        }
    }

    @Override
    public BoolExpr encode() {
        if(isEncoded){
            return ctx.mkTrue();
        }
        isEncoded = true;
        return ctx.mkAnd(r1.encode(), r2.encode(), doEncode());
    }

    @Override
    protected BoolExpr encodeLFP() {
        if(recursiveGroupId > 0){
            return ctx.mkTrue();
        }
        return encodeApprox();
    }
}
