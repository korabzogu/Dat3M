package dartagnan.program.event.rmw.cond;

import com.microsoft.z3.BoolExpr;
import com.microsoft.z3.Context;
import dartagnan.program.event.Event;
import dartagnan.program.event.Fence;

public class FenceCond extends Fence {

    private RMWReadCond loadEvent;

    public FenceCond (RMWReadCond loadEvent, String name){
        super(name);
        this.loadEvent = loadEvent;
    }

    @Override
    public boolean isCondExec(){
        return true;
    }

    @Override
    public BoolExpr encodeCF(Context ctx) {
        return ctx.mkEq(ctx.mkAnd(ctx.mkBoolConst(cfVar()), loadEvent.getCond()), executes(ctx));
    }

    @Override
    public String toString(){
        return String.format("%1$-" + Event.PRINT_PAD_EXTRA + "s", super.toString()) + loadEvent.condToString();
    }

    @Override
    public FenceCond clone() {
        if(clone == null){
            clone = new FenceCond(loadEvent.clone(), name);
            afterClone();
        }
        return (FenceCond)clone;
    }
}
