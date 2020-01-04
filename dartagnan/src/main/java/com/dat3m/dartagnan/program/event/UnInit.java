package com.dat3m.dartagnan.program.event;

import com.dat3m.dartagnan.expression.ExprInterface;
import com.dat3m.dartagnan.program.utils.EType;
import com.microsoft.z3.IntExpr;

public class UnInit extends MemEvent {

    private final MemEvent event;

    public UnInit(MemEvent e){
        super(e.getAddress(), null);
        this.event = e;
        addFilters(EType.ANY, EType.VISIBLE, EType.MEMORY, EType.WRITE, EType.UNINIT);
    }

    private UnInit(UnInit other){
        super(other);
        this.event = other.event;
    }

    @Override
    public IntExpr getMemAddressExpr(){
        return event.getMemAddressExpr();
    }

    @Override
    public IntExpr getMemValueExpr(){
        return event.getMemValueExpr();
    }

    @Override
    public String toString() {
        return "*" + address + " := N/A";
    }

    @Override
    public String label(){
        return "UW";
    }

    @Override
    public ExprInterface getMemValue(){
        return event.getMemValue();
    }

    // Unrolling
    // -----------------------------------------------------------------------------------------------------------------

    @Override
    public UnInit getCopy(){
        return new UnInit(this);
    }
}
