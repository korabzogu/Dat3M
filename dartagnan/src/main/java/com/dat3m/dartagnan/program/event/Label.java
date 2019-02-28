package com.dat3m.dartagnan.program.event;

import com.dat3m.dartagnan.program.utils.EType;

public class Label extends Event {

    private final String name;

    public Label(String name){
        this.name = name;
        addFilters(EType.ANY);
    }

    private Label(Label other){
        super(other);
        this.name = other.name;
    }

    public String getName(){
        return name;
    }

    @Override
    public String toString(){
        return name + ":";
    }

    // Unrolling
    // -----------------------------------------------------------------------------------------------------------------

    @Override
    protected Label mkCopy(){
        throw new UnsupportedOperationException("Unrolling of Label inside cycles is not implemented");
    }
}
