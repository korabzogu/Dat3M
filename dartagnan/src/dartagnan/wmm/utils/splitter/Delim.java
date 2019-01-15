package dartagnan.wmm.utils.splitter;

import com.google.common.base.Joiner;
import com.google.common.collect.ImmutableSortedSet;

public class Delim {

    final ImmutableSortedSet<DelimBase> children;
    final String id;

    private Delim(Builder builder){
        children = builder.builder.build();
        id = Joiner.on("_").join(children);
    }

    public static class Builder {

        private ImmutableSortedSet.Builder<DelimBase> builder = ImmutableSortedSet.naturalOrder();

        public Builder add(String filter, DelimType type){
            if(filter != null && filter.length() > 0){
                builder.add(new DelimBase(filter, type));
            }
            return this;
        }

        public Delim build(){
            return new Delim(this);
        }
    }
}
