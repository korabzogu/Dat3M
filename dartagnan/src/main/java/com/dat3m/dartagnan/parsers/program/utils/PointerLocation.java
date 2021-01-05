package com.dat3m.dartagnan.parsers.program.utils;

public class PointerLocation {
    private int threadID;
    private String ptr;
    private String loc;
    public PointerLocation(int threadID, String ptr, String loc) {
        this.threadID = threadID;
        this.ptr = ptr;
        this.loc = loc;
    }
    public int getThreadID() {
        return threadID;
    }
    public String getPtr() {
        return ptr;
    }
    public String getLoc() {
        return loc;
    }
}