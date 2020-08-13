package com.dat3m.dartagnan.program.event;

import com.dat3m.dartagnan.program.arch.pts.utils.Mo;

public class FenceOpt extends Fence {

    private final String opt;

    public FenceOpt(String name, String opt){
        super(name);
        this.opt = opt;
        filter.add(name + "." + opt);
    }

    protected FenceOpt(FenceOpt other){
        super(other);
        this.opt = other.opt;
    }

    @Override
    public String getName(){
        return name + "." + opt;
    }

    // Unrolling
    // -----------------------------------------------------------------------------------------------------------------

    @Override
    public FenceOpt getCopy(){
        return new FenceOpt(this);
    }

    @Override
    public String AsmToC() {
        return "// TODO: atomic_thread_fence(" + Mo.AsmToC("L") + "); " + name + " event.FenceOpt" + "\n";

    }
}
