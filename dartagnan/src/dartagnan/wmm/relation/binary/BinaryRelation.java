package dartagnan.wmm.relation.binary;

import com.google.common.collect.ImmutableSortedMap;
import com.google.common.collect.SortedSetMultimap;
import com.google.common.collect.TreeMultimap;
import com.microsoft.z3.BoolExpr;
import com.microsoft.z3.Context;
import com.microsoft.z3.IntExpr;
import dartagnan.program.Program;
import dartagnan.utils.Utils;
import dartagnan.wmm.relation.Relation;
import dartagnan.wmm.utils.Tuple;
import dartagnan.wmm.utils.TupleSet;
import dartagnan.wmm.utils.splitter.GroupHelper;

import java.util.*;

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
    public ImmutableSortedMap<Tuple, Long> getTupleGroupMap(){
        if(tupleGroupMap == null){
            SortedSetMultimap<Long, Tuple> tupleMap = TreeMultimap.create();
            ImmutableSortedMap<Tuple, Long> g1 = r1.getTupleGroupMap();
            ImmutableSortedMap<Tuple, Long> g2 = r2.getTupleGroupMap();

            long defVal = 0;

            for(Tuple tuple : getMaxTupleSet()){
                tupleMap.put((g1.getOrDefault(tuple, defVal) << 32) + g2.getOrDefault(tuple, defVal), tuple);
            }
            tupleGroupMap = GroupHelper.invertAndReduce(tupleMap);
        }
        return tupleGroupMap;
    }

    @Override
    public ImmutableSortedMap<Tuple, Long> getTupleGroupMapRecursive(){
        if(recursiveGroupId > 0){
            SortedSetMultimap<Long, Tuple> tupleMap = TreeMultimap.create();
            ImmutableSortedMap<Tuple, Long> g1 = r1.getTupleGroupMapRecursive();
            ImmutableSortedMap<Tuple, Long> g2 = r2.getTupleGroupMapRecursive();

            TupleSet tupleIterationSet = new TupleSet();
            tupleIterationSet.addAll(g1.keySet());
            tupleIterationSet.addAll(g2.keySet());

            long defVal = 0;

            for(Tuple tuple : tupleIterationSet){
                tupleMap.put((g1.getOrDefault(tuple, defVal) << 32) + g2.getOrDefault(tuple, defVal), tuple);
            }
            tupleGroupMap = GroupHelper.invertAndReduce(tupleMap);
        }
        return getTupleGroupMap();
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

    protected BoolExpr combine(BoolExpr r1Expr, BoolExpr r2Expr){
        throw new UnsupportedOperationException("Method combine is not available for binary relation " + getClass().getName());
    }

    @Override
    protected BoolExpr encodeApprox() {
        return encodeBase(false);
    }

    @Override
    protected BoolExpr encodeIDL() {
        return encodeBase(true);
    }

    @Override
    protected BoolExpr encodeLFP() {
        if(recursiveGroupId > 0){
            return ctx.mkTrue();
        }
        return encodeApprox();
    }

    protected BoolExpr encodeBase(boolean isIdl) {
        boolean recurseInR1 = isIdl && ((r1.getRecursiveGroupId() & recursiveGroupId) > 0);
        boolean recurseInR2 = isIdl && ((r2.getRecursiveGroupId() & recursiveGroupId) > 0);

        SortedSetMultimap<Long, Tuple> map = TreeMultimap.create();
        for(Map.Entry<Tuple, Long> entry : getTupleGroupMap().entrySet()){
            if(encodeTupleSet.contains(entry.getKey())){
                map.put(entry.getValue(), entry.getKey());
            }
        }

        BoolExpr enc = ctx.mkTrue();

        for(long group : map.keySet()) {
            SortedSet<Tuple> tuples = map.get(group);
            Iterator<Tuple> it = tuples.iterator();
            Tuple tuple = it.next();

            BoolExpr edge = Utils.edge(getName(), tuple, ctx);
            BoolExpr opt1 = Utils.edge(r1.getName(), tuple, ctx);
            BoolExpr opt2 = Utils.edge(r2.getName(), tuple, ctx);

            enc = ctx.mkAnd(enc, ctx.mkEq(edge, combine(opt1, opt2)));

            if(recurseInR1 || recurseInR2){
                IntExpr intCount = Utils.intCount(this.getName(), tuple, ctx);
                if (recurseInR1) {
                    opt1 = ctx.mkAnd(opt1, ctx.mkGt(intCount, Utils.intCount(r1.getName(), tuple, ctx)));
                }
                if (recurseInR2) {
                    opt2 = ctx.mkAnd(opt2, ctx.mkGt(intCount, Utils.intCount(r2.getName(), tuple, ctx)));
                }
                enc = ctx.mkAnd(enc, ctx.mkEq(edge, combine(opt1, opt2)));
            }

            while (it.hasNext()) {
                enc = ctx.mkAnd(enc, ctx.mkEq(edge, Utils.edge(getName(), it.next(), ctx)));
            }
        }
        return enc;
    }
}
