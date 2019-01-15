package dartagnan.wmm.utils.splitter.event;

public enum DelimiterType {
    BEFORE, AFTER, SEPARATELY;

    @Override
    public String toString() {
        switch(this){
            case BEFORE:
                return "before";
            case AFTER:
                return "after";
            case SEPARATELY:
                return "separately";
        }
        return super.toString();
    }
}
