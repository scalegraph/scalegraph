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
    
    protected def distance() = localHandleT().lcDistance;
    protected def graph() = localHandleT().lcGraph;
    protected def buckets() = localHandleT().lcBuckets;
    protected def isDeletedMap() = localHandleT().lcIsDeleted;
    protected def currentBucket() = localHandleT().lcCurrentBucket;
    protected def deletedVertices() = localHandleT().lcDeletedVertices;
    protected def delta() = localHandleT().lcDelta;
    
    // protected val graph: BigGraph;
    // protected var buckets: Bucket;
    protected var currentSource: VertexId;
    // protected var currentBucket: BucketIndex;
    // protected var distance: BigArray[Long];
    // protected var isDeleted: BigArray[Boolean];
    // protected var delta: Long;
    // protected var deletedVertices: GrowableIndexedMemoryChunk[VertexId];
    
    protected var localHandleT: PlaceLocalHandle[LocalState];
    
    
    protected static class LocalState(lcGraph: BigGraph,
                                      lcDistance: BigArray[Long],
                                      lcIsDeleted: BigArray[Boolean],
                                      lcDelta: Long,
                                      lcDeletedVertices: GrowableIndexedMemoryChunk[VertexId],
                                      lcBuckets: Bucket
                                      ) {
        
        var lcCurrentBucket: BucketIndex;
        
        public def this(g: BigGraph,
                        distance: BigArray[Long],
                        isDeleted: BigArray[Boolean],
                        delta: Long,
                        deletedVertices: GrowableIndexedMemoryChunk[VertexId],
                        buckets: Bucket,
                        currentBucket: BucketIndex) {
            
            property(g, distance, isDeleted, delta, deletedVertices, buckets);
            this.lcCurrentBucket = currentBucket; 
        }
    }
    
    protected def this(lch: PlaceLocalHandle[LocalState]) {
        
        localHandleT = lch;;
    }
    
    public def this(serialData: SerialData) {
        
        localHandleT = serialData.data as PlaceLocalHandle[LocalState];
    }
    
    public def serialize(): SerialData {
        
        return new SerialData(localHandleT, null);
    }
    
    public static def run(val g:BigGraph) {
       
        val nodes = g.getVertexCount();
        val distance = BigArray.make[Long](nodes);
        val isDeleted = BigArray.make[Boolean](nodes);
        val delta = 3;
        val initBucketSize = 1000;
        
        val initBigBc = () => {
            
            return new LocalState(g,
                                  distance,
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
    }
    
    protected def deltaSteppingInit() {
        
        Console.OUT.println("Start at " + here.id);
        
        if(here.id == 0) {
            
            distance().fill(Long.MAX_VALUE);
            isDeletedMap().fill(false);
            currentSource = 10L;
        }
        
        // buckets = new GrowableIndexedMemoryChunk[ArrayList[VertexId]](100);
        // deletedVertices = new GrowableIndexedMemoryChunk[VertexId]();
        localHandleT().lcCurrentBucket = 0L;
    }
    
    protected def delta_stepping() {
     
        deltaSteppingInit();
        
        Console.OUT.print("Init completed");
        
        // isDeleted = localHandle().lcIsDeleted;
        // distance = localHandle().lcDistance;
        // delta = localHandle().lcDelta;
        // deletedVertices = localHandle().lcDeletedVertices;
        // buckets = localHandle().lcBuckets;
        
        var nonEmptyCount: Int = 0;
        
        if(here.id == 0) {
            
            Console.OUT.println("Relax source: " + currentSource);
            relax(currentSource, currentSource, 0);
        }
        
        Console.OUT.println("AAAAA");
        do {
            
            // Wait other places
            Team.WORLD.barrier(here.id);
            
            while(currentBucket() < buckets().length()
                    && (buckets()(currentBucket()) == null
                            || buckets()(currentBucket()).isEmpty())) {
                ++localHandleT().lcCurrentBucket;
            }
            
            if(currentBucket() >= buckets().length()) {
                
                localHandleT().lcCurrentBucket = MAX_BUCKET_INDEX; 
            }
            
            // Find smallest bucket
            localHandleT().lcCurrentBucket = Team.WORLD.allreduce(here.id, currentBucket(), Team.MIN);
            
            if(currentBucket() == MAX_BUCKET_INDEX) {
                // No more work to do
                break;
            }
            
            deletedVertices().clear();
            
            do {
                
                if(currentBucket() < buckets().length()
                        && buckets()(currentBucket()) != null) {
                    
                    val bucket = buckets()(currentBucket());
                    
                    while(!bucket.isEmpty()) {
                        
                        val v = bucket.removeFirst();
                        
                        if(!isDeletedMap()(v)) {
                            
                            isDeletedMap()(v) = true;
                            deletedVertices().add(v);
                        }
                        
                        val v_d = distance()(v);
                        val neighbours = graph().getOutNeigbours(v);
                        
                        if(neighbours != null) {
                            
                            for(var i:Int = 0; i < neighbours.size(); ++i) {
                                
                                val w = neighbours(i);
                                val w_d = graph().getWeight(w);
                                
                            	if (w_d <= delta()) {
                            	    
                            	    if(here.id != 0)
                            	    	Console.OUT.println("Relax L: " + here.id);
                            	    
                            	    relax(v, w, v_d + w_d);
                            	}
                            }
                        }
                    }
                }
                
                Team.WORLD.barrier(here.id);
                
                if (currentBucket() < buckets().length()
                        && buckets()(currentBucket()) != null
                        && !buckets()(currentBucket()).isEmpty()) {
                    nonEmptyCount = 1;
                    
                } else {
                    
                    nonEmptyCount = 0;
                }
                
                nonEmptyCount = Team.WORLD.allreduce(here.id, nonEmptyCount, Team.MAX);
                Console.OUT.println(".");
                
            } while(nonEmptyCount > 0);
            
            
            Console.OUT.println("Start Relax heavy");
            // Relax heavy edge
            for(var i: Int = 0; i < deletedVertices().length(); ++i) {
                
                val v = deletedVertices()(i);
                val v_d = distance()(v);
                
                // Console.OUT.println("Relax heavy("+here.id+") " + v);

                val neighbours = graph().getOutNeigbours(v);
                if(neighbours != null) {
                    
                    for(var k:Int = 0; k < neighbours.size(); ++k) {
                        
                        val w = neighbours(k);
                        val w_d = graph().getWeight(w);
                        
                        if(w_d > delta()) {
                            
                            if(here.id != 0)
                            	Console.OUT.println(here.id + ":Relax H");
                            
                            relax(v, w, v_d + w_d);
                        }
                    }
                }
            }
            Console.OUT.println("*");
            ++localHandleT().lcCurrentBucket;
            
        } while(true);
    }
    
    protected def relax(v: VertexId, w: VertexId, x: Long) {
        
        
        val placeId = graph().getPlaceId(w);
        // Console.OUT.println("PlaceID: " + placeId);
        
        if(placeId == here.id) {
            
            val w_d = distance()(w);
            
            if(x < w_d) {
                
                val newIndex = (x / delta()) as BucketIndex;
                
                if (newIndex > buckets().capacity()) {
                    
                    Console.OUT.println("Grow bucket by " + (newIndex + 4));
                    buckets().grow(newIndex + 1);
                }
                
                if(buckets()(newIndex) == null) {
                    
                    buckets()(newIndex) = new ArrayList[VertexId]();
                }
                
                if(w_d != Long.MAX_VALUE && !isDeletedMap()(w)) {
                    
                    val oldIndex = (w_d / delta()) as BucketIndex;
                    
                    if(here.id != 0) Console.OUT.println(here.id + ":Remove "+ w +" to bucket("+oldIndex+")=>" + buckets()(oldIndex).size()  );
                    if(here.id != 0) Console.OUT.println(here.id + ":Put "+ w +" to bucket("+newIndex+")=>" + buckets()(newIndex).size()  );

                    buckets()(oldIndex).remove(w);
                    buckets()(newIndex).add(w);
                    
                } else {
                    
                    if(here.id != 0) Console.OUT.println(here.id + ":New node "+ w +" to bucket("+newIndex+")=>" + buckets()(newIndex).size());
                     
                    buckets()(newIndex).add(w);
                   
                }
                
                distance()(w) = x;
                // if(localHandle().lcDistance.getPlaceId(w) != here.id) {
                //     throw new Exception("Volky");
                // }
                
            } else if (x == w_d) {
                
                // Console.OUT.println("Found predecessor: " + v + " -> " + w);
            }
        } else {
            
            // Console.OUT.println("Remote from: " + here.id);
            at (Place.place(placeId)) async {
                
                relax(v, w, x);
            }
        }
    }
}
    
    
       // protected def estimatedBc() {
    //     
    //     findShortestPath();
    // }
    // 
    // protected def findShortestPath() {
    //     
    //     // Implmenet Delta-stepping
    //     val numVertices = graph.getVerticesCount();
    //     val distance = BigArray.make[Long](numVertices);
    //     val wieght = BigArray.make[Long](numVertices, (Long) => 0L);
    //     val delta = 20L;
    // }
    /*
    protected def bfs() {
        
        Console.OUT.println("BFSSSSSS");
        
        val numVertices = g.getVerticesCount();
        val distance = BigArray.make[Long](numVertices);
        var traverseQ: BigQueue[VertexId] = BigQueue.make[VertexId](numVertices);
        var nextQ: BigQueue[VertexId] = BigQueue.make[VertexId](numVertices);
        
        val bufferSize: Int = 10000;
        val actorsWrap = new Array[Wrap[VertexId]](bufferSize, (Int) =>  new Wrap[Long]());
        val actors = new Array[VertexId](bufferSize);
        val actorsDistanceWrap = new Array[Wrap[Long]](bufferSize, (Int) => new Wrap[Long]());
        val actorsDistance = new Array[Long](bufferSize);
        val neighbourListWrap = new Array[Wrap[VertexList]](bufferSize, (Int) =>  new Wrap[VertexList]());
        val neighbourList = new Array[VertexList](bufferSize);
        
        var key: Key;
        
        // for (var src: Long = 0; src < numVertices; ++src) {
        var src: Long = 1L;
        // for each source
        distance.fill(-1L);
        distance(src) = 0;
        
        traverseQ.clear();
        nextQ.clear();
        
        nextQ.add(src);
        
        while(!nextQ.isEmpty()) {
            
            // Swap Q
            val temp = nextQ;
            nextQ = traverseQ;
            traverseQ = temp;
            
            nextQ.clear();
            
            while(!traverseQ.isEmpty()) {
                
                key = BigGraph.getKey();
                // val w = new Wrap[VertexId]();
                
                var count: Int = traverseQ.count() as Int;
                count = count < bufferSize ? count: bufferSize;
                
                Console.OUT.println("Count: " + count);
                
                // Get vertices in queue
                Console.OUT.println("Get source async");
                for(var i: int = 0; i < count; ++i) {
                    
                    val w = actorsWrap(i);
                    traverseQ.removeFirstAsync(key, w);
                    actors(i) = w();
                }
                
                traverseQ.sync(key, false);
                
                // Get actor distance
                key = BigGraph.getKey();
                
                for (var i: int = 0; i < count; ++i) {
                    
                    val w = actorsDistanceWrap(i);
                    distance.getAsync(key, actors(i), w);
                    actorsDistance(i) = w();
                }
                
                distance.sync(key, false);
                
                Console.OUT.println("Get Neighbours async");
                key = BigGraph.getKey();
                
                finish {
                    
                    for(var i: int = 0; i < count; ++i) {
                        
                        val j = i;
                        
                        async {
                            
                            val n = neighbourListWrap(j);
                            g.getOutNeighboursAsync(key, actors(j), n);
                            neighbourList(j) = n();
                        }
                    }                    
                }
                g.sync(key);
                
                // For each actors
                
                for (var i: int = 0; i < count; ++i) {
                    
                    val actorsIndex = i;
                    val neighbours = neighbourList(i);
                    
                    Console.OUT.println("Actor: " + actors(i) + " N: " + neighbours);
                    
                    if(neighbours == null)
                        continue;

                    // val maxAsync = 20;
                    var j: int = 0;
                    var asyncCount: Int = 0;
                    while(j < neighbours.size()) {
                        
                        asyncCount = 0;
                        
                        clocked finish {
                            
                            for (; j < neighbours.size(); ++j) {
                                
                                ++asyncCount;
                                
                                if(asyncCount > 200) {
                                    break;
                                }
                                // val outloop = neighbours.size() - j;
                                // val loops = maxAsync <  outloop ? maxAsync: outloop;
                                
                                // for (var t: int = 0; t < maxAsync && j < neighbours.size(); ++t, ++j) {
                                
                                val neighbourIndex = j;
                                
                                clocked async {
                                    
                                    val waitRead = BigArray.getKey();
                                    val wrap = new Wrap[Long]();
                                    val nid = neighbours(neighbourIndex);
                                    
                                    distance.getAsync(waitRead, nid, wrap);
                                    distance.sync(waitRead, true);
                                    
                                    val neighbourDistance = wrap();
                                    val waitWrite = BigArray.getKey();
                                    
                                    if (neighbourDistance == -1L) {
                                        
                                        distance.writeAsync(waitWrite, nid, actorsDistance(actorsIndex) + 1);
                                        nextQ.addAsync(waitWrite, nid);
                                        distance.sync(waitWrite, true);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            
            Console.OUT.println("End of traverse");
        }
    }
     */