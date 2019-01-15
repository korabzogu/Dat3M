package dartagnan.wmm.utils.splitter;

public enum DelimType {
    BEFORE, AFTER, SEPARATELY, EXCLUDE;

    @Override
    public String toString() {
        switch(this){
            case BEFORE:
                return "before";
            case AFTER:
                return "after";
            case SEPARATELY:
                return "separately";
            case EXCLUDE:
                return "exclude";
        }
        return super.toString();
    }
}
