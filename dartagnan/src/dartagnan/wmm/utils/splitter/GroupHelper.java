package dartagnan.wmm.utils.splitter;

import com.google.common.collect.*;
import dartagnan.wmm.utils.Tuple;

import java.util.Map;

public class GroupHelper {

    public static ImmutableSortedMap<Tuple, Long> invertAndReduce(SortedSetMultimap<Long, Tuple> map){
        long newId = 0, oldId = 0;
        ImmutableSortedMap.Builder<Tuple, Long> builder = ImmutableSortedMap.naturalOrder();
        for(Map.Entry<Long, Tuple> entry : map.entries()){
            if(entry.getKey() != oldId){
                oldId = entry.getKey();
                newId++;
            }
            builder.put(entry.getValue(), newId);
        }
        return builder.build();
    }
}
