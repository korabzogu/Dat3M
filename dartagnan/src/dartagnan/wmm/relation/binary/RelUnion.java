package dartagnan.wmm.relation.binary;

import com.google.common.collect.SortedSetMultimap;
import com.google.common.collect.TreeMultimap;
import com.microsoft.z3.BoolExpr;
import dartagnan.program.event.Event;
import dartagnan.utils.Utils;
import dartagnan.wmm.relation.Relation;
import dartagnan.wmm.utils.Tuple;
import dartagnan.wmm.utils.TupleSet;

import java.util.Iterator;
import java.util.Map;
import java.util.SortedSet;

/**
 *
 * @author Florian Furbach
 */
public class RelUnion extends BinaryRelation {

    public static String makeTerm(Relation r1, Relation r2){
        return "(" + r1.getName() + "+" + r2.getName() + ")";
    }

    public RelUnion(Relation r1, Relation r2) {
        super(r1, r2);
        term = makeTerm(r1, r2);
    }

    public RelUnion(Relation r1, Relation r2, String name) {
        super(r1, r2, name);
        term = makeTerm(r1, r2);
    }

    @Override
    public TupleSet getMaxTupleSet(){
        if(maxTupleSet == null){
            maxTupleSet = new TupleSet();
            maxTupleSet.addAll(r1.getMaxTupleSet());
            maxTupleSet.addAll(r2.getMaxTupleSet());
        }
        return maxTupleSet;
    }

    @Override
    public TupleSet getMaxTupleSetRecursive(){
        if(recursiveGroupId > 0 && maxTupleSet != null){
            maxTupleSet.addAll(r1.getMaxTupleSetRecursive());
            maxTupleSet.addAll(r2.getMaxTupleSetRecursive());
            return maxTupleSet;
        }
        return getMaxTupleSet();
    }

    private BoolExpr encodeTuple(Tuple tuple){
        Event e1 = tuple.getFirst();
        Event e2 = tuple.getSecond();
        BoolExpr opt1 = Utils.edge(r1.getName(), e1, e2, ctx);
        BoolExpr opt2 = Utils.edge(r2.getName(), e1, e2, ctx);
        return ctx.mkEq(Utils.edge(getName(), e1, e2, ctx), ctx.mkOr(opt1, opt2));
    }

    private BoolExpr encodeTupleIDL(Tuple tuple){
        Event e1 = tuple.getFirst();
        Event e2 = tuple.getSecond();

        BoolExpr edge = Utils.edge(getName(), e1, e2, ctx);
        BoolExpr opt1 = Utils.edge(r1.getName(), e1, e2, ctx);
        BoolExpr opt2 = Utils.edge(r2.getName(), e1, e2, ctx);

        BoolExpr enc = ctx.mkEq(edge, ctx.mkOr(opt1, opt2));

        if((r1.getRecursiveGroupId() & recursiveGroupId) > 0){
            opt1 = ctx.mkAnd(opt1, ctx.mkGt(Utils.intCount(this.getName(), e1, e2, ctx), Utils.intCount(r1.getName(), e1, e2, ctx)));
        }
        if((r2.getRecursiveGroupId() & recursiveGroupId) > 0){
            opt2 = ctx.mkAnd(opt2, ctx.mkGt(Utils.intCount(this.getName(), e1, e2, ctx), Utils.intCount(r2.getName(), e1, e2, ctx)));
        }
        enc = ctx.mkAnd(enc, ctx.mkEq(edge, ctx.mkOr(opt1, opt2)));

        return enc;
    }

    @Override
    protected BoolExpr encodeApprox() {
        SortedSetMultimap<Long, Tuple> map = TreeMultimap.create();
        for(Map.Entry<Tuple, Long> entry : getTupleGroupMap().entrySet()){
            if(encodeTupleSet.contains(entry.getKey())){
                map.put(entry.getValue(), entry.getKey());
            }
        }

        BoolExpr enc = ctx.mkTrue();

        for(long group : map.keySet()){
            SortedSet<Tuple> tuples = map.get(group);
            Iterator<Tuple> it = tuples.iterator();
            Tuple reprTuple = it.next();
            BoolExpr reprEdge = Utils.edge(getName(), reprTuple.getFirst(), reprTuple.getSecond(), ctx);
            enc = ctx.mkAnd(enc, encodeTuple(reprTuple));

            while(it.hasNext()){
                Tuple tuple = it.next();
                enc = ctx.mkAnd(enc, ctx.mkEq(reprEdge, Utils.edge(getName(), tuple.getFirst(), tuple.getSecond(), ctx)));
            }
        }
        return enc;
    }

    @Override
    protected BoolExpr encodeIDL() {
        if(recursiveGroupId == 0){
            return encodeApprox();
        }

        SortedSetMultimap<Long, Tuple> map = TreeMultimap.create();
        for(Map.Entry<Tuple, Long> entry : getTupleGroupMap().entrySet()){
            if(encodeTupleSet.contains(entry.getKey())){
                map.put(entry.getValue(), entry.getKey());
            }
        }

        BoolExpr enc = ctx.mkTrue();

        for(long group : map.keySet()){
            SortedSet<Tuple> tuples = map.get(group);
            Iterator<Tuple> it = tuples.iterator();
            Tuple reprTuple = it.next();
            BoolExpr reprEdge = Utils.edge(getName(), reprTuple.getFirst(), reprTuple.getSecond(), ctx);
            enc = ctx.mkAnd(enc, encodeTupleIDL(reprTuple));

            while(it.hasNext()){
                Tuple tuple = it.next();
                enc = ctx.mkAnd(enc, ctx.mkEq(reprEdge, Utils.edge(getName(), tuple.getFirst(), tuple.getSecond(), ctx)));
            }
        }
        return enc;
    }

    @Override
    public BoolExpr encodeIteration(int groupId, int iteration){
        BoolExpr enc = ctx.mkTrue();

        if((groupId & recursiveGroupId) > 0 && iteration > lastEncodedIteration){
            lastEncodedIteration = iteration;

            String name = this.getName() + "_" + iteration;

            if(iteration == 0 && isRecursive){
                for(Tuple tuple : encodeTupleSet){
                    enc = ctx.mkAnd(ctx.mkNot(Utils.edge(name, tuple.getFirst(), tuple.getSecond(), ctx)));
                }

            } else {
                int childIteration = isRecursive ? iteration - 1 : iteration;

                boolean recurseInR1 = (r1.getRecursiveGroupId() & groupId) > 0;
                boolean recurseInR2 = (r2.getRecursiveGroupId() & groupId) > 0;

                String r1Name = recurseInR1 ? r1.getName() + "_" + childIteration : r1.getName();
                String r2Name = recurseInR2 ? r2.getName() + "_" + childIteration : r2.getName();

                for(Tuple tuple : encodeTupleSet){
                    BoolExpr edge = Utils.edge(name, tuple.getFirst(), tuple.getSecond(), ctx);
                    BoolExpr opt1 = Utils.edge(r1Name, tuple.getFirst(), tuple.getSecond(), ctx);
                    BoolExpr opt2 = Utils.edge(r2Name, tuple.getFirst(), tuple.getSecond(), ctx);
                    enc = ctx.mkAnd(enc, ctx.mkEq(edge, ctx.mkOr(opt1, opt2)));
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
