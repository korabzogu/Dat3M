package dartagnan.wmm.relation.binary;

import com.google.common.collect.ImmutableSortedMap;
import com.google.common.collect.SortedSetMultimap;
import com.google.common.collect.TreeMultimap;
import com.microsoft.z3.BoolExpr;
import com.microsoft.z3.Context;
import dartagnan.program.Program;
import dartagnan.utils.Utils;
import dartagnan.wmm.relation.Relation;
import dartagnan.wmm.utils.Tuple;
import dartagnan.wmm.utils.TupleSet;
import dartagnan.wmm.utils.splitter.GroupHelper;

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
    public boolean getIsStatic(){
        return r1.getIsStatic() && r2.getIsStatic();
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

    protected abstract BoolExpr combine(BoolExpr expr1, BoolExpr expr2);

    @Override
    protected BoolExpr encodeApprox() {
        BoolExpr enc = ctx.mkTrue();
        for(Tuple tuple : encodeTupleSet){
            BoolExpr opt1 = Utils.edge(r1.getName(), tuple, ctx);
            BoolExpr opt2 = Utils.edge(r2.getName(), tuple, ctx);
            enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(this.getName(), tuple, ctx), combine(opt1, opt2)));
        }
        return enc;
    }

    @Override
    protected BoolExpr encodeIDL() {
        if(recursiveGroupId != 0){
            BoolExpr enc = ctx.mkTrue();
            boolean recurseInR1 = (r1.getRecursiveGroupId() & recursiveGroupId) > 0;
            boolean recurseInR2 = (r2.getRecursiveGroupId() & recursiveGroupId) > 0;

            for(Tuple tuple : encodeTupleSet){
                BoolExpr opt1 = Utils.edge(r1.getName(), tuple, ctx);
                BoolExpr opt2 = Utils.edge(r2.getName(), tuple, ctx);
                enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(this.getName(), tuple, ctx), combine(opt1, opt2)));

                if(recurseInR1){
                    opt1 = ctx.mkAnd(opt1, ctx.mkGt(Utils.intCount(this.getName(), tuple, ctx), Utils.intCount(r1.getName(), tuple, ctx)));
                }
                if(recurseInR2){
                    opt2 = ctx.mkAnd(opt2, ctx.mkGt(Utils.intCount(this.getName(), tuple, ctx), Utils.intCount(r2.getName(), tuple, ctx)));
                }
                enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(this.getName(), tuple, ctx), combine(opt1, opt2)));
            }
            return enc;
        }
        return encodeApprox();
    }

    @Override
    protected BoolExpr encodeLFP() {
        if(recursiveGroupId > 0){
            return ctx.mkTrue();
        }
        return encodeApprox();
    }

    @Override
    public BoolExpr encodeIteration(int groupId, int iteration){
        BoolExpr enc = ctx.mkTrue();

        if((groupId & recursiveGroupId) > 0 && iteration > lastEncodedIteration){
            lastEncodedIteration = iteration;

            String name = this.getName() + "_" + iteration;

            if(iteration == 0 && isRecursive){
                for(Tuple tuple : encodeTupleSet){
                    enc = ctx.mkAnd(ctx.mkNot(Utils.edge(name, tuple, ctx)));
                }

            } else {
                int childIteration = isRecursive ? iteration - 1 : iteration;

                boolean recurseInR1 = (r1.getRecursiveGroupId() & groupId) > 0;
                boolean recurseInR2 = (r2.getRecursiveGroupId() & groupId) > 0;

                String r1Name = recurseInR1 ? r1.getName() + "_" + childIteration : r1.getName();
                String r2Name = recurseInR2 ? r2.getName() + "_" + childIteration : r2.getName();

                for(Tuple tuple : encodeTupleSet){
                    BoolExpr edge = Utils.edge(name, tuple, ctx);
                    BoolExpr opt1 = Utils.edge(r1Name, tuple, ctx);
                    BoolExpr opt2 = Utils.edge(r2Name, tuple, ctx);
                    enc = ctx.mkAnd(enc, ctx.mkEq(edge, combine(opt1, opt2)));
                }

                if(recurseInR1){
                    enc = ctx.mkAnd(enc, r1.encodeIteration(groupId, childIteration));
                }

                if(recurseInR2){
                    enc = ctx.mkAnd(enc, r2.encodeIteration(groupId, childIteration));
                }
            }
        }

        return enc;
    }
}
