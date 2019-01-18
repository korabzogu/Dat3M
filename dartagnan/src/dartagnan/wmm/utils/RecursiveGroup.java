package dartagnan.wmm.utils;

import com.google.common.collect.ImmutableSortedMap;
import com.microsoft.z3.BoolExpr;
import com.microsoft.z3.Context;
import dartagnan.wmm.relation.RecursiveRelation;
import dartagnan.wmm.relation.Relation;

import java.util.*;

public class RecursiveGroup {

    private final int id;
    private List<RecursiveRelation> relations;
    private int encodeIterations = 0;

    public RecursiveGroup(int id, Collection<RecursiveRelation> relations){
        for(RecursiveRelation relation : relations){
            relation.setDoRecurse();
            relation.setRecursiveGroupId(id);
        }
        this.relations = new ArrayList<>(relations);
        this.id = id;
    }

    public int getId(){
        return id;
    }

    public void setDoRecurse(){
        for(RecursiveRelation relation : relations){
            relation.setDoRecurse();
        }
    }

    public BoolExpr encode(Context ctx){
        BoolExpr enc = ctx.mkTrue();
        for(int i = 0; i < encodeIterations; i++){
            for(RecursiveRelation relation : relations){
                relation.setDoRecurse();
                enc = ctx.mkAnd(enc, relation.encodeIteration(id, i));
            }
        }

        for(RecursiveRelation relation : relations){
            enc = ctx.mkAnd(enc, relation.encodeFinalIteration(encodeIterations - 1));
        }

        return enc;
    }

    public void initMaxTupleSets(){
        int iterationCounter = 0;
        boolean changed = true;

        while(changed){
            changed = false;
            for(RecursiveRelation relation : relations){
                relation.setDoRecurse();
                int oldSize = relation.getMaxTupleSet().size();
                if(oldSize != relation.getMaxTupleSetRecursive().size()){
                    changed = true;
                }
            }
            iterationCounter++;
        }
        // TODO: bounds
        encodeIterations = iterationCounter + 2;
    }

    public void intTupleGroupMaps(){
        Map<RecursiveRelation, Integer> fromMap = new HashMap<>();
        Map<RecursiveRelation, Integer> toMap = new HashMap<>();
        for(RecursiveRelation relation : relations){
            fromMap.put(relation, 0);
            toMap.put(relation, 0);
        }

        boolean changed = true;
        while(changed){
            changed = false;
            for(RecursiveRelation relation : relations){
                relation.setDoRecurse();
            }
            for(RecursiveRelation relation : relations){
                ImmutableSortedMap<Tuple, Long> map = relation.getTupleGroupMapRecursive();
                int from = map.size();
                Set<Long> temp = new HashSet<>(map.values());
                int to = temp.size();

                if(fromMap.get(relation) != from){
                    fromMap.put(relation, from);
                    changed = true;
                }

                if(toMap.get(relation) != to){
                    toMap.put(relation, to);
                    changed = true;
                }
            }
        }
    }

    public void updateEncodeTupleSets(){
        Map<Relation, Integer> encodeSetSizes = new HashMap<>();
        for(Relation relation : relations){
            encodeSetSizes.put(relation, 0);
        }

        boolean changed = true;
        while(changed){
            changed = false;
            for(RecursiveRelation relation : relations){
                relation.setDoRecurse();
                relation.addEncodeTupleSet(relation.getEncodeTupleSet());
                int newSize = relation.getEncodeTupleSet().size();
                if(newSize != encodeSetSizes.get(relation)){
                    encodeSetSizes.put(relation, newSize);
                    changed = true;
                }
            }
        }
    }
}
