package dartagnan.program.event.rmw.cond;

import dartagnan.expression.ExprInterface;
import dartagnan.program.Location;
import dartagnan.program.Register;

public class RMWReadCondCmp extends RMWReadCond {

    public RMWReadCondCmp(Register reg, ExprInterface cmp, Location loc, String atomic) {
        super(reg, cmp, loc, atomic);
    }

    @Override
    public RMWReadCondCmp clone() {
        if(clone == null){
            Register newReg = reg.clone();
            Location newLoc = loc.clone();
            ExprInterface newCmp = cmp.clone();
            clone = new RMWReadCondCmp(newReg, newCmp, newLoc, atomic);
            clone.setCondLevel(condLevel);
            clone.setHLId(getHLId());
            clone.setUnfCopy(getUnfCopy());
        }
        return (RMWReadCondCmp)clone;
    }
}