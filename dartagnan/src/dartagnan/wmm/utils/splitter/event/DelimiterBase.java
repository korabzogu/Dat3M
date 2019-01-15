package dartagnan.wmm.utils.splitter.event;

class DelimiterBase implements Comparable<DelimiterBase> {

    final String filter;
    final DelimiterType type;

    DelimiterBase(String filter, DelimiterType type){
        this.filter = filter;
        this.type = type;
    }

    @Override
    public String toString(){
        return filter + "_" + type;
    }

    @Override
    public int compareTo(DelimiterBase o){
        int diff = filter.compareTo(o.filter);
        if(diff == 0){
            diff = type.toString().compareTo(o.type.toString());
        }
        return diff;
    }

    @Override
    public int hashCode() {
        return filter.hashCode() + type.hashCode();
    }

    @Override
    public boolean equals(Object o) {
        if (this == o)
            return true;

        if (o == null || getClass() != o.getClass())
            return false;

        DelimiterBase tO = (DelimiterBase) o;
        return filter.equals(tO.filter) && type.equals(tO.type);
    }
}
