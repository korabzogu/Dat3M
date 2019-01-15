package dartagnan.wmm.utils.splitter;

class DelimBase implements Comparable<DelimBase> {

    final String filter;
    final DelimType type;

    DelimBase(String filter, DelimType type){
        this.filter = filter;
        this.type = type;
    }

    @Override
    public String toString(){
        return filter + "_" + type;
    }

    @Override
    public int compareTo(DelimBase o){
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

        DelimBase tO = (DelimBase) o;
        return filter.equals(tO.filter) && type.equals(tO.type);
    }
}
