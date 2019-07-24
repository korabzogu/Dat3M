package com.dat3m.dartagnan.wmm.utils;

import com.dat3m.dartagnan.program.event.Event;

public class Tuple implements Comparable<Tuple> {

    private Event first;
    private Event second;

    public Tuple(Event first, Event second) {
        this.first = first;
        this.second = second;
    }

    public Event getFirst(){
        return first;
    }

    public Event getSecond(){
        return second;
    }

    public String toString() {
        return "(" + first.getId() + ", " + second.getId() + ")";
    }

    @Override
    public int hashCode() {
        return (first.getCId() << 16) + second.getCId();
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;

        if (obj == null || getClass() != obj.getClass())
            return false;

        Tuple tObj = (Tuple) obj;
        return first.getCId() == tObj.getFirst().getCId()
                && second.getCId() == tObj.getSecond().getCId();
    }

    @Override
    public int compareTo(Tuple o) {
        int result = first.compareTo(o.first);
        if(result == 0){
            return second.compareTo(o.second);
        }
        return result;
    }
}
