package dartagnan.wmm.utils.splitter;

import com.google.common.collect.ImmutableMap;
import dartagnan.program.event.Event;
import dartagnan.wmm.utils.Tuple;

import java.util.Map;
import java.util.SortedMap;

public class DebugHelper {

    public static void printEventToEidMap(SortedMap<Event, Long> map){
        for (Map.Entry<Event, Long> entry : map.entrySet()) {
            System.out.println(entry.getKey().getEId() + " -> " + entry.getValue());
        }
    }

    public static void printTupleToGroupMap(ImmutableMap<Tuple, Long> map){
        for(Map.Entry<Tuple, Long> entry : map.entrySet()){
            System.out.println("(" + entry.getKey().getFirst().getEId() + ","
                    + entry.getKey().getSecond().getEId() + ")" + " -> " + entry.getValue());
        }
    }
}
