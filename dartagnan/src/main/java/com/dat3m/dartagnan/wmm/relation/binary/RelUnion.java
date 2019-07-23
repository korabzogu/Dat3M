package com.dat3m.dartagnan.wmm.relation.binary;

import com.microsoft.z3.BoolExpr;
import com.dat3m.dartagnan.wmm.utils.Utils;
import com.dat3m.dartagnan.wmm.relation.Relation;
import com.dat3m.dartagnan.wmm.utils.Tuple;
import com.dat3m.dartagnan.wmm.utils.TupleSet;

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
    public TupleSet getMaySet(){
        if(maySet == null){
            maySet = new TupleSet();
            maySet.addAll(r1.getMaySet());
            maySet.addAll(r2.getMaySet());
        }
        return maySet;
    }

    @Override
    public TupleSet getMaySetRecursive(){
        if(recursiveGroupId > 0 && maySet != null){
            maySet.addAll(r1.getMaySetRecursive());
            maySet.addAll(r2.getMaySetRecursive());
            return maySet;
        }
        return getMaySet();
    }

    @Override
    protected BoolExpr encodeKnaster() {
        BoolExpr enc = ctx.mkTrue();
        for(Tuple tuple : activeSet){
            BoolExpr opt1 = Utils.edge(r1.getName(), tuple, ctx);
            BoolExpr opt2 = Utils.edge(r2.getName(), tuple, ctx);
            enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(this.getName(), tuple, ctx), ctx.mkOr(opt1, opt2)));
        }
        return enc;
    }

    @Override
    protected BoolExpr encodeIDL() {
        if(recursiveGroupId == 0){
            return encodeKnaster();
        }

        BoolExpr enc = ctx.mkTrue();

        boolean recurseInR1 = (r1.getRecursiveGroupId() & recursiveGroupId) > 0;
        boolean recurseInR2 = (r2.getRecursiveGroupId() & recursiveGroupId) > 0;

        for(Tuple tuple : activeSet){
            BoolExpr opt1 = Utils.edge(r1.getName(), tuple, ctx);
            BoolExpr opt2 = Utils.edge(r2.getName(), tuple, ctx);
            enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(this.getName(), tuple, ctx), ctx.mkOr(opt1, opt2)));

            if(recurseInR1){
                opt1 = ctx.mkAnd(opt1, ctx.mkGt(Utils.intCount(this.getName(), tuple, ctx), Utils.intCount(r1.getName(), tuple, ctx)));
            }
            if(recurseInR2){
                opt2 = ctx.mkAnd(opt2, ctx.mkGt(Utils.intCount(this.getName(), tuple, ctx), Utils.intCount(r2.getName(), tuple, ctx)));
            }
            enc = ctx.mkAnd(enc, ctx.mkEq(Utils.edge(this.getName(), tuple, ctx), ctx.mkOr(opt1, opt2)));
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
                for(Tuple tuple : activeSet){
                    enc = ctx.mkAnd(ctx.mkNot(Utils.edge(name, tuple, ctx)));
                }
            } else {
                int childIteration = isRecursive ? iteration - 1 : iteration;

                boolean recurseInR1 = (r1.getRecursiveGroupId() & groupId) > 0;
                boolean recurseInR2 = (r2.getRecursiveGroupId() & groupId) > 0;

                String r1Name = recurseInR1 ? r1.getName() + "_" + childIteration : r1.getName();
                String r2Name = recurseInR2 ? r2.getName() + "_" + childIteration : r2.getName();

                for(Tuple tuple : activeSet){
                    BoolExpr edge = Utils.edge(name, tuple, ctx);
                    BoolExpr opt1 = Utils.edge(r1Name, tuple, ctx);
                    BoolExpr opt2 = Utils.edge(r2Name, tuple, ctx);
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
