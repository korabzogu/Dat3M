package com.dat3m.dartagnan.wmm.relation;

import com.dat3m.dartagnan.utils.Settings;
import com.dat3m.dartagnan.wmm.utils.Mode;
import com.microsoft.z3.BoolExpr;
import com.microsoft.z3.Context;
import com.dat3m.dartagnan.program.Program;
import com.dat3m.dartagnan.wmm.utils.Tuple;
import com.dat3m.dartagnan.wmm.utils.TupleSet;

import java.util.HashSet;
import java.util.Set;

import static com.dat3m.dartagnan.wmm.utils.Utils.edge;

/**
 *
 * @author Florian Furbach
 */
public abstract class Relation {

    protected String name;
    protected String term;

    protected Settings settings;
    protected Program program;
    protected Context ctx;

    protected boolean isEncoded;

    protected TupleSet maySet;
    protected TupleSet activeSet;

    protected int recursiveGroupId = 0;
    protected boolean forceUpdateRecursiveGroupId = false;
    protected boolean isRecursive = false;
    protected boolean forceDoEncode = false;

    public Relation() {}

    public Relation(String name) {
        this.name = name;
    }

    public int getRecursiveGroupId(){
        return recursiveGroupId;
    }

    public void setRecursiveGroupId(int id){
        forceUpdateRecursiveGroupId = true;
        recursiveGroupId = id;
    }

    public int updateRecursiveGroupId(int parentId){
        return recursiveGroupId;
    }

    public void initialise(Program program, Context ctx, Settings settings){
        this.program = program;
        this.ctx = ctx;
        this.settings = settings;
        this.maySet = null;
        this.isEncoded = false;
        activeSet = new TupleSet();
    }

    public abstract TupleSet getMaySet();

    public TupleSet getMaySetRecursive(){
        return getMaySet();
    }

    public TupleSet getActiveSet(){
        return activeSet;
    }

    public void addToActiveSet(TupleSet tuples){
        activeSet.addAll(tuples);
    }

    public String getName() {
        if(name != null){
            return name;
        }
        return term;
    }

    public Relation setName(String name){
        this.name = name;
        return this;
    }

    public String getTerm(){
        return term;
    }

    public boolean getIsNamed(){
        return name != null;
    }

    @Override
    public String toString(){
        if(name != null){
            return name + " := " + term;
        }
        return term;
    }

    @Override
    public int hashCode(){
        return getName().hashCode();
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;

        if (obj == null || getClass() != obj.getClass())
            return false;

        return getName().equals(((Relation)obj).getName());
    }

    public BoolExpr encode() {
        if(isEncoded){
            return ctx.mkTrue();
        }
        isEncoded = true;
        return doEncode();
    }

    protected BoolExpr encodeKleene() {
        return encodeKnaster();
    }

    protected BoolExpr encodeIDL() {
        return encodeKnaster();
    }

    protected abstract BoolExpr encodeKnaster();

    public BoolExpr encodeIteration(int recGroupId, int iteration){
        return ctx.mkTrue();
    }

    protected BoolExpr doEncode(){
        BoolExpr enc = encodeNegations();
        if(!activeSet.isEmpty() || forceDoEncode){
            if(settings.getMode() == Mode.KLEENE) {
                return ctx.mkAnd(enc, encodeKleene());
            } else if(settings.getMode() == Mode.IDL) {
                return ctx.mkAnd(enc, encodeIDL());
            }
            return ctx.mkAnd(enc, encodeKnaster());
        }
        return enc;
    }

    private BoolExpr encodeNegations(){
        BoolExpr enc = ctx.mkTrue();
        if(!activeSet.isEmpty()){
            Set<Tuple> negations = new HashSet<>(activeSet);
            negations.removeAll(maySet);
            for(Tuple tuple : negations){
                enc = ctx.mkAnd(enc, ctx.mkNot(edge(this.getName(), tuple.getFirst(), tuple.getSecond(), ctx)));
            }
            activeSet.removeAll(negations);
        }
        return enc;
    }
}
