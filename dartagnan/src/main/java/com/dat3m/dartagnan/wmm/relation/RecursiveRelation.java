package com.dat3m.dartagnan.wmm.relation;

import com.dat3m.dartagnan.utils.Settings;
import com.microsoft.z3.BoolExpr;
import com.microsoft.z3.Context;
import com.dat3m.dartagnan.program.Program;
import com.dat3m.dartagnan.wmm.utils.Utils;
import com.dat3m.dartagnan.wmm.utils.Tuple;
import com.dat3m.dartagnan.wmm.utils.TupleSet;

/**
 *
 * @author Florian Furbach
 */
public class RecursiveRelation extends Relation {

    private Relation r1;
    private boolean doRecurse = false;

    public RecursiveRelation(String name) {
        super(name);
        term = name;
    }

    public static String makeTerm(String name){
        return name;
    }

    public void initialise(Program program, Context ctx, Settings settings){
        super.initialise(program, ctx, settings);
        r1.initialise(program, ctx, settings);
    }

    public void setConcreteRelation(Relation r1){
        r1.isRecursive = true;
        r1.setName(name);
        this.r1 = r1;
        this.isRecursive = true;
        this.term = r1.getTerm();
    }

    public void setDoRecurse(){
        doRecurse = true;
    }

    @Override
    public TupleSet getMaySet(){
        if(maySet == null){
            maySet = new TupleSet();
        }
        return maySet;
    }

    @Override
    public TupleSet getMaySetRecursive(){
        if(doRecurse){
            doRecurse = false;
            maySet = r1.getMaySetRecursive();
            return maySet;
        }
        return getMaySet();
    }

    @Override
    public void addToActiveSet(TupleSet tuples){
        if(activeSet != tuples){
            activeSet.addAll(tuples);
        }
        if(doRecurse){
            doRecurse = false;
            r1.addToActiveSet(activeSet);
        }
    }

    @Override
    public void setRecursiveGroupId(int id){
        if(doRecurse){
            doRecurse = false;
            forceUpdateRecursiveGroupId = true;
            recursiveGroupId = id;
            r1.setRecursiveGroupId(id);
        }
    }

    @Override
    public int updateRecursiveGroupId(int parentId){
        if(forceUpdateRecursiveGroupId){
            forceUpdateRecursiveGroupId = false;
            int r1Id = r1.updateRecursiveGroupId(parentId | recursiveGroupId);
            recursiveGroupId |= r1Id & parentId;
        }
        return recursiveGroupId;
    }

    @Override
    public BoolExpr encode() {
        if(isEncoded){
            return ctx.mkTrue();
        }
        isEncoded = true;
        return r1.encode();
    }

    @Override
    protected BoolExpr encodeKleene() {
        return r1.encodeKleene();
    }

    @Override
    protected BoolExpr encodeIDL() {
        return r1.encodeIDL();
    }

    @Override
    protected BoolExpr encodeKnaster() {
        return r1.encodeKnaster();
    }

    @Override
    public BoolExpr encodeIteration(int recGroupId, int iteration){
        if(doRecurse){
            doRecurse = false;
            return r1.encodeIteration(recGroupId, iteration);
        }
        return ctx.mkTrue();
    }

    public BoolExpr encodeFinalIteration(int iteration){
        BoolExpr enc = ctx.mkTrue();
        for(Tuple tuple : activeSet){
            enc = ctx.mkAnd(enc, ctx.mkEq(
                    Utils.edge(getName(), tuple, ctx),
                    Utils.edge(getName() + "_" + iteration, tuple, ctx)
            ));
        }
        return enc;
    }
}
