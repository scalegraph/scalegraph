package org.scalegraph.metrics.centrality;

import x10.util.ArrayList;

import org.scalegraph.graph.*;
import org.scalegraph.graph.BigGraph;

import org.scalegraph.util.*;
import org.scalegraph.util.BigArray;
import org.scalegraph.util.Wrap;
import x10.io.SerialData;
import x10.util.GrowableIndexedMemoryChunk;
import x10.util.Team;

public type Bucket = GrowableIndexedMemoryChunk[ArrayList[VertexId]];
public type BucketIndex = Int;


public class BigBetweennessCentrality implements x10.io.CustomSerialization{

    public static val MAX_BUCKET_INDEX = Int.MAX_VALUE;
    
    protected def distance() = localHandle().lcDistance;
    protected def predecessor() = localHandle().lcPredecessor;
    protected def graph() = localHandle().lcGraph;
    protected def buckets() = localHandle().lcBuckets;
    protected def isDeletedMap() = localHandle().lcIsDeleted;
    protected def currentBucket() = localHandle().lcCurrentBucket;
    protected def deletedVertices() = localHandle().lcDeletedVertices;
    protected def delta() = localHandle().lcDelta;

    protected var currentSource: VertexId;

    
    protected var localHandle: PlaceLocalHandle[LocalState];
    
    
    protected static class LocalState(lcGraph: BigGraph,
                                      lcDistance: BigArray[Long],
                                      lcPredecessor: BigArray[ArrayList[VertexId]],
                                      lcIsDeleted: BigArray[Boolean],
                                      lcDelta: Long,
                                      lcDeletedVertices: GrowableIndexedMemoryChunk[VertexId],
                                      lcBuckets: Bucket
                                      ) {
        
        var lcCurrentBucket: BucketIndex;
        
        public def this(g: BigGraph,
                        distance: BigArray[Long],
                        predecessor: BigArray[ArrayList[VertexId]],
                        isDeleted: BigArray[Boolean],
                        delta: Long,
                        deletedVertices: GrowableIndexedMemoryChunk[VertexId],
                        buckets: Bucket,
                        currentBucket: BucketIndex) {
            
            property(g, distance, predecessor, isDeleted, delta, deletedVertices, buckets);
            this.lcCurrentBucket = currentBucket; 
        }
    }
    
    protected def this(lch: PlaceLocalHandle[LocalState]) {
        
        localHandle = lch;;
    }
    
    public def this(serialData: SerialData) {
        
        localHandle = serialData.data as PlaceLocalHandle[LocalState];
    }
    
    public def serialize(): SerialData {
        
        return new SerialData(localHandle, null);
    }
    
    public static def run(val g:BigGraph) {

        val nodes = g.getVertexCount();
        val distance = BigArray.make[Long](nodes);
        val predecessor = BigArray.make[ArrayList[VertexId]](nodes);
        val isDeleted = BigArray.make[Boolean](nodes);
        val delta = 1;
        val initBucketSize = 20;
        
        val initBigBc = () => {
            
            return new LocalState(g,
                                  distance,
                                  predecessor,
                                  isDeleted,
                                  delta,
                                  new GrowableIndexedMemoryChunk[VertexId](),
                                  new Bucket(initBucketSize),
                                  0L);
        };
        
        val dist = Dist.makeUnique();
        val lch = PlaceLocalHandle.make[LocalState](dist, initBigBc);
        val bc = new BigBetweennessCentrality(lch);
        
        bc.internalRun();
    }
    
    public def internalRun() {
        
        finish { 
            for(p in Place.places()) {
                
                at(p) async {
                    
                    delta_stepping();
                }
            }
        }
        
        predecessor().print();
    }
    
    protected def deltaSteppingInit() {
        
        // Console.OUT.println("Start at " + here.id);
        
        if(here.id == 0) {
            
            distance().fill(Long.MAX_VALUE);
            isDeletedMap().fill(false);
            currentSource = 10L;
        }
        
        localHandle().lcCurrentBucket = 0L;
    }
    
    protected def delta_stepping() {
     
        deltaSteppingInit();
        
        var nonEmptyCount: Int = 0;
        
        if (here.id == 0) {
            
            finish relax(currentSource, currentSource, 0);
        }
        
        do {
            
            // Wait other places
            Team.WORLD.barrier(here.id);
            
            while(currentBucket() < buckets().length()
                    && (buckets()(currentBucket()) == null
                            || buckets()(currentBucket()).isEmpty())) {
                ++localHandle().lcCurrentBucket;
            }
            
            if(currentBucket() >= buckets().length()) {
                
                localHandle().lcCurrentBucket = MAX_BUCKET_INDEX; 
            }
            
            // Find smallest bucket
            localHandle().lcCurrentBucket = Team.WORLD.allreduce(here.id, currentBucket(), Team.MIN);
            
            if(currentBucket() == MAX_BUCKET_INDEX) {
                // No more work to do
                break;
            }
            
            deletedVertices().clear();
            
            do {
                
                // Console.OUT.println(here.id + "still working");
                
                if(currentBucket() < buckets().capacity()
                        && buckets()(currentBucket()) != null) {
                    
                    val bucket = buckets()(currentBucket());
                    
                    finish {
                        
                        while(!bucket.isEmpty()) {
                            
                            val v = bucket.removeFirst();
                            
                            if(!isDeletedMap()(v)) {
                                
                                isDeletedMap()(v) = true;
                                deletedVertices().add(v);
                            }
                            
                            val v_d = distance()(v);
                            val neighbours = graph().getOutNeigbours(v);
                            
                            // if(here.id != 0)
                            	Console.OUT.println(here.id + ":Visit L: " + v + " N: " + neighbours);
                            
                            if(neighbours != null) {
                                
                                for(var i:Int = 0; i < neighbours.size(); ++i) {
                                    
                                    val w = neighbours(i);
                                    val w_d = graph().getWeight(w);
                                    
                                    if (w_d <= delta()) {
                                        
                                        relax(v, w, v_d + w_d);
                                    }
                                }
                            }
                        }
                    }
                }
                
                Team.WORLD.barrier(here.id);
                
                if (currentBucket() < buckets().capacity()
                        && buckets()(currentBucket()) != null
                        && !buckets()(currentBucket()).isEmpty()) {
                    nonEmptyCount = 1;
                    
                } else {
                    
                    nonEmptyCount = 0;
                }
                
                nonEmptyCount = Team.WORLD.allreduce(here.id, nonEmptyCount, Team.MAX);
                
            } while(nonEmptyCount > 0);
            
            // Relax heavy edge
            finish {
                
                for(var i: Int = 0; i < deletedVertices().length(); ++i) {
                    
                    val v = deletedVertices()(i);
                    val v_d = distance()(v);
                    val neighbours = graph().getOutNeigbours(v);
                    
                    // if(here.id != 0)
                    Console.OUT.println(here.id + ":Visit H: " + v + " N: " + neighbours);
                    
                    if(neighbours != null) {
                        
                        for(var k:Int = 0; k < neighbours.size(); ++k) {
                            
                            val w = neighbours(k);
                            val w_d = graph().getWeight(w);
                            
                            if(w_d > delta()) {                    
                                
                                relax(v, w, v_d + w_d);
                            }
                        }
                    }
                }
            }
            
            ++localHandle().lcCurrentBucket;
            
        } while(true);
    }
    
    protected def relax(v: VertexId, w: VertexId, x: Long) {
        
        
        val placeId = graph().getPlaceId(w);
                
        if(placeId == here.id) {
            // distance().print();
            val w_d = distance()(w);
            
            if(x < w_d) {
                
                val newIndex = (x / delta()) as BucketIndex;
                
                if (newIndex > buckets().capacity()) {
                    
                    buckets().grow(newIndex + 1);
                }
                
                if(buckets()(newIndex) == null) {
                    
                    buckets()(newIndex) = new ArrayList[VertexId]();
                }
                
                if(w_d != Long.MAX_VALUE && !isDeletedMap()(w)) {
                    
                    val oldIndex = (w_d / delta()) as BucketIndex;
                    
                    buckets()(oldIndex).remove(w);
                    buckets()(newIndex).add(w);
                    
                } else {
                    
                    // if(here.id != 0)
                        Console.OUT.println(here.id + ":Put vertex: " + w);
                                         
                    buckets()(newIndex).add(w);
                }
                
                distance()(w) = x;
                
                if(predecessor()(w) == null) {
                    
                    predecessor()(w) = new ArrayList[VertexId]();
                }
                
                predecessor()(w).clear();
                predecessor()(w).add(v);
                
            } else if (x == w_d) {
                
                predecessor()(w).add(v);
                Console.OUT.println(here.id + ": " + v + " => " + w);
            }
            
        } else {
            
            at (Place.place(placeId)) {
                
                relax(v, w, x);
            }
        }
    }
}