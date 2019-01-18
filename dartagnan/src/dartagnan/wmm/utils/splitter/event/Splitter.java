package dartagnan.wmm.utils.splitter.event;

import com.google.common.collect.ImmutableSortedMap;
import dartagnan.program.Program;
import dartagnan.program.Thread;
import dartagnan.program.event.Event;
import dartagnan.program.event.If;
import dartagnan.program.utils.EventRepository;

import java.util.*;

public class Splitter {

    private Map<String, ImmutableSortedMap<Event, Long>> cache;

    public Splitter(Program program){
        cache = new HashMap<>();
        cache.put(null, buildBaseMap(program));
        cache.put(Delimiter.Total.getInstance().id, buildDelimitedMap(program));
    }

    public ImmutableSortedMap<Event, Long> get(Delimiter delimiter){
        String requestedId = delimiter != null ? delimiter.id : null;

        if(!cache.containsKey(requestedId)){
            ImmutableSortedMap<Event, Long> map = cache.get(null);

            if(delimiter != null && !delimiter.children.isEmpty()){
                SortedMap<Event, Long> result = new TreeMap<>(map);
                for(DelimiterBase d : delimiter.children){
                    split(result, d.filter, d.type);
                }
                cache.put(requestedId, ImmutableSortedMap.copyOf(result));
            }
        }
        return cache.get(requestedId);
    }

    private ImmutableSortedMap<Event, Long> buildBaseMap(Program program){
        ImmutableSortedMap.Builder<Event, Long> builder = ImmutableSortedMap.naturalOrder();
        for(Thread t : program.getThreads()) {
            group(builder, t.getEventRepository().getSortedList(EventRepository.ALL));
        }
        return builder.build();
    }

    private ImmutableSortedMap<Event, Long> buildDelimitedMap(Program program){
        ImmutableSortedMap.Builder<Event, Long> builder = ImmutableSortedMap.naturalOrder();
        for(Event e : program.getEventRepository().getSortedList(EventRepository.ALL)){
            builder.put(e, (long)e.getEId());
        }
        return builder.build();
    }

    private void group(ImmutableSortedMap.Builder<Event, Long> builder, List<Event> events){
        if(!events.isEmpty()){
            Event e = events.get(0);
            long groupFirstEid = e.getEId();
            builder.put(e, groupFirstEid);

            for(int i = 1; i < events.size(); i++){
                e = events.get(i);

                if(e.isCondExec()){
                    builder.put(e, (long)e.getEId());

                } else if(e instanceof If){
                    builder.put(e, groupFirstEid);

                    List<Event> t1Events = ((If)e).getT1().getEventRepository().getSortedList(EventRepository.ALL);
                    group(builder, t1Events);
                    i += t1Events.size();

                    List<Event> t2Events = ((If)e).getT2().getEventRepository().getSortedList(EventRepository.ALL);
                    group(builder, t2Events);
                    i += t2Events.size();

                } else {
                    builder.put(e, groupFirstEid);
                }
            }
        }
    }

    private void split(SortedMap<Event, Long> map, String filter, DelimiterType type){
        Map<Long, Long> oldToNewMap = new HashMap<>();
        for(Map.Entry<Event, Long> entry : map.entrySet()){
            Event e = entry.getKey();
            long origMapping = entry.getValue();
            long id = e.getEId();

            if(e.is(filter)){
                switch (type){
                    case BEFORE:
                        oldToNewMap.putIfAbsent(origMapping, id);
                        map.put(e, oldToNewMap.get(origMapping));
                        oldToNewMap.remove(origMapping);
                        break;
                    case AFTER:
                        map.put(e, id);
                        oldToNewMap.put(origMapping, id);
                        break;
                    case SEPARATELY:
                        map.put(e, id);
                        oldToNewMap.remove(origMapping);
                        break;
                }
            } else {
                oldToNewMap.putIfAbsent(origMapping, id);
                map.put(e, oldToNewMap.get(origMapping));
            }
        }
    }
}
