package dartagnan.wmm.utils.splitter;

import com.google.common.collect.*;
import dartagnan.program.event.Event;
import dartagnan.wmm.utils.Tuple;
import dartagnan.wmm.utils.TupleSet;

import java.util.Map;

public class GroupHelper {

    public static ImmutableSortedMap<Tuple, Long> build(TupleSet set, Map<Event, Long> source, Map<Event, Long> target){
        SortedSetMultimap<Long, Tuple> map = TreeMultimap.create();
        for(Tuple tuple : set){
            map.put(((source.get(tuple.getFirst()) + 1) << 32) + target.get(tuple.getSecond()) + 1, tuple);
        }
        return invertAndReduce(map);
    }

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
