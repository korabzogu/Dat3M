package com.dat3m.dartagnan.program.event;

import com.microsoft.z3.Context;
import com.microsoft.z3.IntExpr;
import com.dat3m.dartagnan.expression.ExprInterface;
import com.dat3m.dartagnan.expression.IExpr;
import com.dat3m.dartagnan.program.Register;
import com.dat3m.dartagnan.program.event.utils.RegWriter;
import com.dat3m.dartagnan.program.utils.EType;

public class Load extends MemEvent implements RegWriter {

    protected final Register resultRegister;
    protected final String mo;

    public Load(Register register, IExpr address, String mo) {
        super(address);
        this.mo = mo;
        this.resultRegister = register;
        addFilters(EType.ANY, EType.VISIBLE, EType.MEMORY, EType.READ, EType.REG_WRITER);
    }

    protected Load(Load other){
        super(other);
        this.mo = other.mo;
        this.resultRegister = other.resultRegister;
    }

    @Override
    public boolean is(String param){
        return super.is(param) || (mo != null && mo.equals(param));
    }

    @Override
    public void initialise(Context ctx) {
        memValueExpr = resultRegister.toZ3IntResult(this, ctx);
        memAddressExpr = address.toZ3Int(this, ctx);
    }

    @Override
    public Register getResultRegister(){
        return resultRegister;
    }

    @Override
    public IntExpr getResultRegisterExpr(){
        return memValueExpr;
    }

    @Override
    public String toString() {
        return resultRegister + " = load(*" + address + (mo != null ? ", " + mo : "") + ")";
    }

    @Override
    public String label(){
        return "R" + (mo != null ? "_" + mo : "");
    }

    @Override
    public ExprInterface getMemValue(){
        return resultRegister;
    }

    // Unrolling
    // -----------------------------------------------------------------------------------------------------------------

    @Override
    protected Load mkCopy(){
        return new Load(this);
    }
}
