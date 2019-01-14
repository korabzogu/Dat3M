package dartagnan.wmm.utils;

import com.google.common.collect.ImmutableSortedMap;
import dartagnan.program.Program;
import dartagnan.program.Thread;
import dartagnan.program.event.Event;
import dartagnan.program.event.If;
import dartagnan.program.utils.EventRepository;

import java.util.*;

public class GroupSplitter {

    private Program program;
    private ImmutableSortedMap<Event, Integer> baseMap;

    public GroupSplitter(Program program){
        this.program = program;
        buildBaseMap();
    }

    public ImmutableSortedMap<Event, Integer> get(){
        return baseMap;
    }

    public static void print(ImmutableSortedMap<Event, Integer> map){
        for (Map.Entry<Event, Integer> entry : map.entrySet()) {
            System.out.println(entry.getKey().getEId() + " -> " + entry.getValue());
        }
    }

    private void buildBaseMap(){
        ImmutableSortedMap.Builder<Event, Integer> builder = ImmutableSortedMap.naturalOrder();
        for(Thread t : program.getThreads()) {
            makeGroups(builder, t.getEventRepository().getSortedList(EventRepository.ALL));
        }
        baseMap = builder.build();
    }

    private void makeGroups(ImmutableSortedMap.Builder<Event, Integer> builder, List<Event> events){
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
                    makeGroups(builder, t1Events);
                    i += t1Events.size();

                    List<Event> t2Events = ((If)e).getT2().getEventRepository().getSortedList(EventRepository.ALL);
                    makeGroups(builder, t2Events);
                    i += t2Events.size();

                } else {
                    builder.put(e, groupFirstEid);
                }
            }
        }
    }
}
