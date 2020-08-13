package com.dat3m.dartagnan.program.arch.pts.utils;


public class Mo {

    public static final String SC       = "_sc";
    public static final String RELAXED  = "_rx";
    public static final String RELEASE  = "_rel";
    public static final String ACQUIRE  = "_acq";
    public static final String CONSUME  = "_con";

    public static String AsmToC(String ShortMo) {
        String result = "";
        if (ShortMo.equals("_rx") || ShortMo.equals("RX")) {
            result = "memory_order_relaxed";
        } else if (ShortMo.equals("_rel") || ShortMo.equals("L")) {
            result = "memory_order_release";
        } else if (ShortMo.equals("_con")) {
            result = "memory_order_consume";
        } else if (ShortMo.equals("_acq") || ShortMo.equals("A")) {
            result = "memory_order_acquire";
        } else if (ShortMo.equals("_sc")) {
            result = "memory_order_seq_cst";
        } else {
            throw new RuntimeException("Invalid Memory Order in Mo.AsmToC(" + ShortMo + ") : " + ShortMo + " does not exist");
        }
        return result;
    }
}
