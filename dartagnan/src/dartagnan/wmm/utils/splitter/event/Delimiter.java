package dartagnan.wmm.utils.splitter.event;

import com.google.common.base.Joiner;
import com.google.common.collect.ImmutableSortedSet;

public class Delimiter {

    final ImmutableSortedSet<DelimiterBase> children;
    final String id;

    private Delimiter(String id){
        this.children = null;
        this.id = id;
    }

    private Delimiter(Builder builder){
        this.children = builder.builder.build();
        this.id = Joiner.on("_").join(children);
    }

    public static class Total extends Delimiter {

        private static Total instance = null;

        private Total(){
            super("total");
        }

        public static Total getInstance(){
            if(instance == null){
                instance = new Total();
            }
            return instance;
        }
    }

    public static class Builder {

        private ImmutableSortedSet.Builder<DelimiterBase> builder = ImmutableSortedSet.naturalOrder();

        public Builder add(String filter, DelimiterType type){
            if(filter != null && filter.length() > 0){
                builder.add(new DelimiterBase(filter, type));
            }
            return this;
        }

        public Delimiter build(){
            return new Delimiter(this);
        }
    }
}
