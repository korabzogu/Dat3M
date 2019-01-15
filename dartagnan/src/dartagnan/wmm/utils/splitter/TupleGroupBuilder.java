package dartagnan.wmm.utils.splitter;

import com.google.common.collect.HashMultimap;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.SetMultimap;
import dartagnan.program.event.Event;
import dartagnan.wmm.utils.Tuple;
import dartagnan.wmm.utils.TupleSet;

import java.util.Map;

public class TupleGroupBuilder {

    public static ImmutableMap<Tuple, Long> build(TupleSet set, Map<Event, Long> source, Map<Event, Long> target){
        SetMultimap<Long, Tuple> tupleMap = HashMultimap.create();

        for(Tuple tuple : set){
            tupleMap.put((source.get(tuple.getFirst()) << 32) + target.get(tuple.getSecond()), tuple);
        }

        long newId = -1, oldId = -1;
        ImmutableMap.Builder<Tuple, Long> builder = new ImmutableMap.Builder<>();

        for(Map.Entry<Long, Tuple> entry : tupleMap.entries()){
            if(entry.getKey() != oldId){
                oldId = entry.getKey();
                newId++;
            }
            builder.put(entry.getValue(), newId);
        }
        return builder.build();
    }
}
