package dartagnan.wmm.utils.splitter;

import com.google.common.collect.ImmutableSortedMap;
import dartagnan.program.Program;
import dartagnan.program.Thread;
import dartagnan.program.event.Event;
import dartagnan.program.event.If;
import dartagnan.program.utils.EventRepository;

import java.util.*;

public class GroupSplitter {

    private Map<String, ImmutableSortedMap<Event, Integer>> cache;

    public GroupSplitter(Program program){
        cache = new HashMap<>();
        cache.put(mkId(EventRepository.ALL, null), buildBaseMap(program));
    }

    public ImmutableSortedMap<Event, Integer> get(int mask){
        return get(mask, null);
    }

    public ImmutableSortedMap<Event, Integer> get(int mask, Delim delim){
        String requestedId = mkId(mask, delim);

        if(!cache.containsKey(requestedId)){
            String filteredId = mkId(mask, null);
            if(!cache.containsKey(filteredId)){
                cache.put(filteredId, filtered(mask));
            }
            ImmutableSortedMap<Event, Integer> map = cache.get(filteredId);

            if(delim != null && !delim.children.isEmpty()){
                SortedMap<Event, Integer> result = new TreeMap<>(map);
                for(DelimBase d : delim.children){
                    split(result, d.filter, d.type);
                }
                cache.put(requestedId, ImmutableSortedMap.copyOf(result));
            }
        }
        return cache.get(requestedId);
    }

    public static void print(ImmutableSortedMap<Event, Integer> map){
        for (Map.Entry<Event, Integer> entry : map.entrySet()) {
            System.out.println(entry.getKey().getEId() + " -> " + entry.getValue());
        }
    }

    private ImmutableSortedMap<Event, Integer> buildBaseMap(Program program){
        ImmutableSortedMap.Builder<Event, Integer> builder = ImmutableSortedMap.naturalOrder();
        for(Thread t : program.getThreads()) {
            group(builder, t.getEventRepository().getSortedList(EventRepository.ALL));
        }
        return builder.build();
    }

    private void group(ImmutableSortedMap.Builder<Event, Integer> builder, List<Event> events){
        if(!events.isEmpty()){
            Event e = events.get(0);
            int groupFirstEid = e.getEId();
            builder.put(e, groupFirstEid);

            for(int i = 1; i < events.size(); i++){
                e = events.get(i);

                if(e.isCondExec()){
                    builder.put(e, e.getEId());

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

    private ImmutableSortedMap<Event, Integer> filtered(int mask){
        ImmutableSortedMap.Builder<Event, Integer> builder = ImmutableSortedMap.naturalOrder();
        int oldId = -1, newId = -1;
        for(Map.Entry<Event, Integer> entry : cache.get(mkId(EventRepository.ALL, null)).entrySet()){
            Event e = entry.getKey();
            if(EventRepository.is(e, mask)){
                int origMapping = entry.getValue();
                if(oldId == -1 || oldId != origMapping){
                    oldId = origMapping;
                    newId = e.getEId();
                }
                builder.put(e, newId);
            }
        }
        return builder.build();
    }

    private void split(SortedMap<Event, Integer> map, String filter, DelimType type){
        int oldId = -1, newId = -1;
        for(Map.Entry<Event, Integer> entry : map.entrySet()){
            Event e = entry.getKey();
            int origMapping = entry.getValue();
            if(e.is(filter)){
                switch (type){
                    case BEFORE:
                        if(oldId == -1 || oldId != origMapping){
                            newId = e.getEId();
                        }
                        map.put(e, newId);
                        oldId = newId = -1;
                        break;
                    case AFTER:
                        oldId = origMapping;
                        newId = e.getEId();
                        map.put(e, newId);
                        break;
                    case SEPARATELY:
                        map.put(e, e.getEId());
                        oldId = newId = -1;
                        break;
                    case EXCLUDE:
                        oldId = newId = -1;
                        break;
                }
            } else {
                if(oldId == -1 || oldId != origMapping){
                    oldId = origMapping;
                    newId = e.getEId();
                }
                map.put(e, newId);
            }
        }
    }

    private String mkId(int mask, Delim delim){
        return delim != null ? mask + ":" + delim.id : Integer.toString(mask);
    }
}
