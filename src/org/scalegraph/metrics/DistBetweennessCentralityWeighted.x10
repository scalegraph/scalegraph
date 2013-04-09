package org.scalegraph.metrics;

import org.scalegraph.graph.*;
import x10.io.SerialData;
import x10.util.ArrayList;
import x10.util.IndexedMemoryChunk;
import x10.util.concurrent.Lock;
import x10.util.GrowableIndexedMemoryChunk;
import x10.util.Team;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.concurrent.Dist2D;
import x10.compiler.Inline;
import org.scalegraph.metrics.DistBetweennessCentrality.Bitmap;
import org.scalegraph.util.DistMemoryChunk;
import x10.compiler.Native;


public class DistBetweennessCentralityWeighted implements x10.io.CustomSerialization{

    private static type Vertex = Long;
    // private static type Bucket = ArrayList[Vertex];
    private static type Bucket = Array[Bitmap]{self.size == 2};
    private static type Buckets = GrowableIndexedMemoryChunk[Bucket];
    private static type BucketIndex = Int;
    
    private val MAX_BUCKET_INDEX = Int.MAX_VALUE;
    
    private val team: Team;
    private val places: PlaceGroup;
    private val lgl: Int;
    private val lgc: Int;
    private val lgr: Int;
    private val role: Int;
    
//     
//     protected def distance() = localHandle().lcDistance;
//     protected def score() = localHandle().lcScore;
//     protected def predecessors() = localHandle().lcPredecessor;
//     protected def successors() = localHandle().lcSuccessor;
//     protected def graph() = localHandle().lcGraph;
//     protected def buckets() = localHandle().lcBuckets;
//     protected def isDeletedMap() = localHandle().lcIsDeleted;
//     protected def currentBucket() = localHandle().lcCurrentBucket;
//     protected def deletedVertices() = localHandle().lcDeletedVertices;
//     protected def delta() = localHandle().lcDelta;
//     protected def currentTraverseQ() = localHandle().lcCurrentTraverseQ;
//     protected def nextTraverseQ() = localHandle().lcNextTraverseQ;
//     protected def nonIncDistCurrentQ() = localHandle().lcNonIncreaseDistanceCurrentQ;
//     protected def nonIncDistNextQ() = localHandle().lcNonIncreaseDistanceNextQ;
//     protected def updates() = localHandle().lcUpdates;
//     protected def dependencies() = localHandle().lcDependencies;
//     
//     // Reuse distance array
//     protected def pathCount() = localHandle().lcPathCount;
// 
//     protected def currentSource() = localHandle().lcCurrentSource;
    
    private val lch: PlaceLocalHandle[LocalState];
    
    private static class LocalState {
        
        val gCsr: DistSparseMatrix;
        val gWeight: DistMemoryChunk[Double];
        val csr: SparseMatrix;
        val weight: MemoryChunk[Double];
        val distance: IndexedMemoryChunk[Long];
        val geodesicPath: IndexedMemoryChunk[Long];
        val predecessors: IndexedMemoryChunk[ArrayList[Vertex]];
        val successors: IndexedMemoryChunk[ArrayList[Vertex]];
        val deletedVertexMap: Bitmap;
        val deferredVertex: Bitmap;
        val delta: Int;
        
        val currentSource: Cell[Vertex];
        val currentBucketIndex: Cell[Int];
        val bucketQueuePointer: Cell[Int];
        val numLocalVertices: Long;
        
        val ALIGN = 64;
        val CONGRUENT = false;
        val BUFFER_SIZE: Int;
        val INIT_BUCKET_SIZE = 32;
        val NUM_TASK: Int;
        val buckets: Buckets;
        
        val semaphore: IndexedMemoryChunk[Long];
        // val lcPathCount: BigArray[Long];
        // val lcPredecessor: BigArray[ArrayList[VertexId]];
        // val lcSuccessor: BigArray[ArrayList[VertexId]];
        // val lcIsDeleted: BigArray[Boolean];
        // val lcDelta: Long;
        // val lcDeletedVertices: GrowableIndexedMemoryChunk[VertexId];
        // val lcBuckets: Bucket;
        // val lcScore: BigArray[Double];
        // val lcUpdates: BigArray[Int];
        // val lcDependencies: BigArray[Double];
        
        // var lcCurrentBucket: BucketIndex;
        // var lcCurrentTraverseQ: FixedVertexQueue;
        // var lcNextTraverseQ: FixedVertexQueue;
        // var lcCurrentSource: VertexId;
        // var updateScoreLock: Lock;
        // var updateSuccessorLock: Lock;
        // var lcNonIncreaseDistanceCurrentQ: FixedVertexQueue;
        // var lcNonIncreaseDistanceNextQ: FixedVertexQueue;
        
        protected def this (csr_: DistSparseMatrix,
                            weight_: DistMemoryChunk[Double],
                            transferBufSize: Int,
                            delta_: Int) {
            gCsr = csr_;
            csr = gCsr();
            gWeight = weight_;
            weight = gWeight();
            BUFFER_SIZE = transferBufSize;
            numLocalVertices = gCsr.ids().numberOfLocalVertexes();
            currentSource = new Cell[Vertex](0);
            currentBucketIndex = new Cell[Int](0);
            bucketQueuePointer = new Cell[Int](0);
            NUM_TASK = Runtime.NTHREADS;
            delta = delta_;
            
            distance = IndexedMemoryChunk.allocateZeroed[Long](
                    numLocalVertices,
                    ALIGN,
                    CONGRUENT);
            geodesicPath = IndexedMemoryChunk.allocateZeroed[Long](
                    numLocalVertices,
                    ALIGN,
                    CONGRUENT);
            predecessors = IndexedMemoryChunk.allocateZeroed[ArrayList[Vertex]](
                    numLocalVertices,
                    ALIGN,
                    CONGRUENT);
            successors = IndexedMemoryChunk.allocateZeroed[ArrayList[Vertex]](
                    numLocalVertices,
                    ALIGN,
                    CONGRUENT);
            semaphore = IndexedMemoryChunk.allocateZeroed[Long](
                    numLocalVertices,
                    ALIGN,
                    CONGRUENT);
            
            buckets = new Buckets(INIT_BUCKET_SIZE);
            val nVertices = numLocalVertices;
            for (i in 0..(INIT_BUCKET_SIZE - 1))
                buckets(i) = new Array[Bitmap](2, (Int) => new Bitmap(nVertices));
            deletedVertexMap = new Bitmap(numLocalVertices);
            deferredVertex = new Bitmap(numLocalVertices);
            
            for (i in 0..(numLocalVertices - 1)) {
                predecessors(i) = null;
            }
        }
        // public def this(g: BigGraph,
        //                 currentSource: VertexId,
        //                 distance: BigArray[Long],
        //                 pathCount: BigArray[Long],
        //                 predecessor: BigArray[ArrayList[VertexId]],
        //                 successor: BigArray[ArrayList[VertexId]],
        //                 isDeleted: BigArray[Boolean],
        //                 delta: Long,
        //                 deletedVertices: GrowableIndexedMemoryChunk[VertexId],
        //                 buckets: Bucket,
        //                 currentBucket: BucketIndex,
        //                 currentTraverseQ: FixedVertexQueue,
        //                 nextTraverseQ: FixedVertexQueue,
        //                 score: BigArray[Double],
        //                 nonIncDistCurrentQ: FixedVertexQueue,
        //                 nonIncDistNextQ: FixedVertexQueue,
        //                 updates: BigArray[Int],
        //                 dependencies: BigArray[Double]) {
            
            // property(g, 
            //          distance,
            //          pathCount,
            //          predecessor, 
            //          successor, 
            //          isDeleted, 
            //          delta, 
            //          deletedVertices, 
            //          buckets,
            //          score,
            //          updates,
            //          dependencies);
            // 
            // this.lcCurrentBucket = currentBucket;
            // this.lcCurrentTraverseQ = currentTraverseQ;
            // this.lcNextTraverseQ = nextTraverseQ;
            // this.lcCurrentSource = currentSource;
            // this.lcNonIncreaseDistanceCurrentQ = nonIncDistCurrentQ;
            // this.lcNonIncreaseDistanceNextQ = nonIncDistNextQ;
            // this.updateScoreLock = new Lock();
            // this.updateSuccessorLock = new Lock();
        // }
    }
    
    protected def this(lch_: PlaceLocalHandle[LocalState]) {
        lch = lch_;
        team = lch().gCsr.dist().allTeam();
        places = team.placeGroup();
        lgl = lch().gCsr.ids().lgl;
        lgc = lch().gCsr.ids().lgc;
        lgr = lch().gCsr.ids().lgr;
        role = team.role(here)(0);
    }

    public def this(serialData: SerialData) {
        this( serialData.data as PlaceLocalHandle[LocalState]);
    }
    
    public def serialize(): SerialData {
        
        return new SerialData(lch, null);
    }
    
    public static def run(val g: Graph) {

        // val nodes = g.getVertexCount();
        // val distance = BigArray.make[Long](nodes);
        // val score = BigArray.make[Double](nodes);
        // val pathCount = BigArray.make[Long](nodes);
        // val predecessor = BigArray.make[ArrayList[VertexId]](nodes);
        // val successor = BigArray.make[ArrayList[VertexId]](nodes);
        // val isDeleted = BigArray.make[Boolean](nodes);
        // val updates = BigArray.make[Int](nodes);
        // val delta = 1;
        // val initBucketSize = 20;
        // val currentSource = 1L;
        // val dependecies = BigArray.make[Double](nodes);
        // 
        // val initBigBc = () => {
        //     
        //     val currentTraverseQ = new FixedVertexQueue(nodes);
        //     val nextTraverseQ = new FixedVertexQueue(nodes);
        //     val nonIncDistCurrentQ = new FixedVertexQueue(nodes);
        //     val nonIncDistNextQ = new FixedVertexQueue(nodes);
        //     val buckets = new Bucket(initBucketSize);
        //     
        //     // Init bucket
        //     for (var i: Int = 0; i < buckets.capacity(); ++i) {
        //         
        //         buckets.add(new ArrayList[VertexId]());
        //     }
        //     
        //     val initBucketIndex = 0L;
        //     
        //     return new LocalState(g,
        //                           currentSource,
        //                           distance,
        //                           pathCount,
        //                           predecessor,
        //                           successor,
        //                           isDeleted,
        //                           delta,
        //                           new GrowableIndexedMemoryChunk[VertexId](),
        //                           buckets,
        //                           initBucketIndex,
        //                           currentTraverseQ,
        //                           nextTraverseQ,
        //                           score,
        //                           nonIncDistCurrentQ,
        //                           nonIncDistNextQ,
        //                           updates,
        //                           dependecies);
        // };
        // 
        // // Create struct on each place
        // val dist = Dist.makeUnique();
        // val lch = PlaceLocalHandle.make[LocalState](dist, initBigBc);
        // val bc = new BigBetweennessCentralityWeighted(lch);
        val team = g.team();
        val places = team.placeGroup();
        val transBuf = 1 << 8;
        val delta = 1;
        // Represent graph as CSR
        val csr = g.constructDistSparseMatrix(
                                              Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS),
                                              true,
                                              true);
        // Construct attribute
        val weightAttr = g.constructDistAttribute[Double](csr, false, "weight");
        // create local state for bc on each place
        val localState = PlaceLocalHandle.make[LocalState](places, () => {
            return new LocalState(csr, weightAttr, transBuf, delta);
        });
        val bc = new DistBetweennessCentralityWeighted(localState);
        bc.internalRun();
        // return bc.score();
    }
    
    /* GCC Built-in atomic function interface */
    @Native("c++", "__sync_bool_compare_and_swap((#imc)->raw() + #index, #oldVal, #newVal)")
    private static native def compare_and_swap[T](imc: IndexedMemoryChunk[T], index: Long, oldVal: T, newVal: T): Boolean;
    
    @Inline
    public def isLocalVertex(orgVertex: Vertex): Boolean {
        val vertexPlace = ((1 << (lgc + lgr)) -1) & orgVertex;
        if(vertexPlace == role as Long)
            return true;
        return false;
    }
    
    @Inline
    public def OrgToLocSrc(v: Vertex) 
    = (( v & (( 1 << lgr) -1)) << lgl) | (v >> (lgr + lgc));
    
    @Inline
    public def LocSrcToOrg(v: Vertex)
    = ((((v & (( 1 << lgl) -1)) << lgc)| role) << lgr) | (v>> lgl);
    
    @Inline
    public def LocDstToOrg(v: Vertex)
    = ((((v & (( 1 << lgl) -1)) << lgc | (v >> lgl)) << lgr ) | 0);
    
    @Inline
    private def getVertexPlace(orgVertex: Vertex): Place {
        return team.place(getVertexPlaceRole(orgVertex));
    }
    
    @Inline
    private def getVertexPlaceRole(orgVertex: Vertex): Int {
        val vertexPlaceId = ((1 << (lgc + lgr)) -1) & orgVertex;
        return vertexPlaceId as Int;
    }
    
    @Inline
    private def currentBucketIndex() = lch().currentBucketIndex;
    
    @Inline
    private def buckets() = lch().buckets;
    
    @Inline
    private def deletedVertexMap() = lch().deletedVertexMap;
    
    @Inline
    private def deferredVertex() = lch().deferredVertex;
    
    @Inline
    private def distance() = lch().distance;
    
    @Inline
    private def csr() = lch().csr;
    
    @Inline
    private def delta() = lch().delta;
    
    @Inline
    private def predecessors() = lch().predecessors;
    
    @Inline
    private def successors() = lch().successors;
    
    @Inline
    private def weight() = lch().weight;
    
    @Inline
    private def currentBucketQueue() 
    = lch().buckets(lch().currentBucketIndex())(lch().bucketQueuePointer());
    
    @Inline
    private def nextBucketQueue() 
    = lch().buckets(lch().currentBucketIndex())((lch().bucketQueuePointer() + 1) & 1);
    
    @Inline
    private def swapBucket() {
        lch().bucketQueuePointer() = (lch().bucketQueuePointer() + 1) & 1;
    }
    
    private def internalRun() {
        // cal complete BC
        var time: Long = System.currentTimeMillis();
        val startVertex = 0;
        val endVertex = 0;
        // for each source
        for(var v: Int = startVertex; v <= endVertex; ++v) {
            // set current source
            finish for(p in places) {
                val curSrc = v;
                at (p) async {     
                    clear();
                    calBC(curSrc);
                }
            }
        }
        time = System.currentTimeMillis() - time;
        print();
        Console.OUT.println("BC time: " + time);
    }
    
    private def clear() {
        // clear data local data
        // val predsIMC = localHandle().lcPredecessor.raw();
        // val succsIMC = localHandle().lcSuccessor.raw();
        // for (var k: Int = 0; k < predsIMC.length(); ++k) {
        //     val pList = predsIMC(k);
        //     if(pList != null) {
        //         pList.clear();
        //     }
        //     val sList = succsIMC(k);
        //     if(sList != null) {
        //         sList.clear();
        //     }
        // }
        // nonIncDistCurrentQ().clear();
        // nonIncDistNextQ().clear();
        for (i in 0..(lch().numLocalVertices - 1)) {
            lch().distance(i) = Long.MAX_VALUE;
            lch().geodesicPath(i) = 0;
        }
    }
    
    private def calBC(src: Vertex) {
        Console.OUT.println("Cal BC for source: " + src);
        Console.OUT.println("Start Delta stepping");
      
        lch().currentSource() = src;
        deltaStepping();
        Runtime.x10rtBlockingProbe();

        Console.OUT.println("Find Successors");
        deriveSuccessor();
        Runtime.x10rtBlockingProbe();
        // 
        // // successors().print();
        // Console.OUT.println("Count Path");
        // finish {
        //     
        //     for(p in Place.places()) {
        //         
        //         at(p) async {
        //             
        //             travelInNonIncreasingOrder();
        //         }
        //     }
        // }
        // 
        // // Console.OUT.println("Distance Count");
        // // distance().print();
        // // 
        // // Console.OUT.println("Path Count");
        // // pathCount().print();
        // // Console.OUT.println("Distance of non inc");
        // // distance().print();
        // // 
        // // Console.OUT.println("Initial non inc dist q");
        // // nonIncDistNextQ().print();
        // 
        // Console.OUT.println("Caluculate Score");
        // 
        // finish {
        //     
        //     for (p in Place.places()) {
        //         
        //         at (p) async {
        //             
        //             updateScore();
        //         }
        //     }
        // }
        // 
        // // score().printNoZero();
        // Console.OUT.println("********************");
        
    }
    
    protected def deltaStepping() {
        val bufSize = lch().BUFFER_SIZE;
        val NUM_TASK = lch().NUM_TASK;
        val bufferV = new Array[Array[ArrayList[Vertex]]](NUM_TASK,
                (int) => new Array[ArrayList[Vertex]](team.size(),
                        (int) => new ArrayList[Vertex](bufSize)));
        val bufferW = new Array[Array[ArrayList[Vertex]]](NUM_TASK,
                (int) => new Array[ArrayList[Vertex]](team.size(),
                        (int) => new ArrayList[Vertex](bufSize)));
        val bufferX = new Array[Array[ArrayList[Long]]](NUM_TASK,
                (int) => new Array[ArrayList[Long]](team.size(),
                        (int) => new ArrayList[Long](bufSize)));
        // Declare closures
        val clearBuffer = (threadId: Int, pid: Int) => {
            bufferV(threadId)(pid).clear();
            bufferW(threadId)(pid).clear();
            bufferX(threadId)(pid).clear();
        };
        val flush = (threadId: Int, pid: Int) => {
            // No data return
            if (bufferV(threadId)(pid).size() == 0)
                return;
            val relaxDataV = bufferV(threadId)(pid).toArray();
            val relaxDataW = bufferW(threadId)(pid).toArray();
            val relaxDataX = bufferX(threadId)(pid).toArray();
            val count = relaxDataV.size;
            at (team.place(pid)) {
                for(k in 0..(count - 1)) {
                    relax(relaxDataV(k),
                          relaxDataW(k),
                          relaxDataX(k));
                }
            }
            clearBuffer(threadId, pid);
        };
        val flushAll = () => {
            finish  for (i in 0..(NUM_TASK - 1)) {
                val k = i;
                async for (ii in 0..(team.size() - 1)) {
                    val kk = ii;
                    flush(k, kk);
                }
            }
        };
        val remoteRelax = (threadId: Int, pid: Int, v: Vertex, w: Vertex, x: Long) => {
            if (bufferV(threadId)(pid).size() == bufSize) {
                flush(threadId, pid);
            }
            bufferV(threadId)(pid).add(v);
            bufferW(threadId)(pid).add(w);
            bufferX(threadId)(pid).add(x);
        };       
        // Start delta stepping        
        var dataAvailable: Int = 0;
        val src = lch().currentSource();
        if (role == getVertexPlaceRole(src)) {
            relax(src, src, 0);
        }
        do {
            // clear bucket queue pointer, this makes nextqueue of another buckets deterministic
            lch().bucketQueuePointer() = 0;
            Team.WORLD.barrier(here.id);
            while (currentBucketIndex()() < buckets().capacity()
                    && (buckets()(currentBucketIndex()()) == null
                            || nextBucketQueue().setBitCount() == 0L)) {
                currentBucketIndex()() = currentBucketIndex()() + 1;
            }
            if (currentBucketIndex()() >= buckets().capacity()) {
                currentBucketIndex()() = MAX_BUCKET_INDEX; 
            }
            // Find smallest bucket
            currentBucketIndex()() = Team.WORLD.allreduce(role, currentBucketIndex()(), Team.MIN);
            if (currentBucketIndex()() == MAX_BUCKET_INDEX) {
                // No more work to do
                break;
            }
            deletedVertexMap().clearAll();
            do {
                Console.OUT.println(here.id + ":Loop: index-> " + currentBucketIndex());
                if (currentBucketIndex()() < buckets().capacity()
                        && buckets()(currentBucketIndex()()) != null) {
                    swapBucket();
                    nextBucketQueue().clearAll();
                    
                    val cBucket = currentBucketQueue();
                    cBucket.examine((localV: Long, threadId: Int) => {
                        val v = LocSrcToOrg(localV);
                        if (deletedVertexMap().isNotSet(localV)) {
                            deletedVertexMap().set(localV);
                        }
                        val vDist = distance()(localV);
                        val neighbours = csr().adjacency(localV);
                        val neighboursWeight = csr().attribute(weight(), localV);
                        for (i in 0..(neighbours.size() - 1)) {
                            val localW = neighbours(i);
                            val w = LocDstToOrg(localW);
                            val wWeight = neighboursWeight(i) as Long;                            
                            if (wWeight <= delta()) {
                                if (isLocalVertex(w)) {
                                    relax(v, w, vDist + wWeight);
                                } else {
                                    val pid = getVertexPlaceRole(w);
                                    // at(team.place(pid)) relax(v, w, vDist + wWeight);
                                    remoteRelax(threadId, pid, v, w, vDist + wWeight);
                                    // Console.OUT.println("remoteRelax: " + v + " " + w + " : " + vDist);
                                }
                            } else {
                                deferredVertex().set(localV);
                            }
                        }
                    });
                    flushAll();
                }
                Team.WORLD.barrier(here.id);
                if (currentBucketIndex()() < buckets().capacity()
                        && buckets()(currentBucketIndex()()) != null
                        && nextBucketQueue().setBitCount() > 0) {
                    dataAvailable = 1;
                } else {
                    dataAvailable = 0;
                }
                dataAvailable = Team.WORLD.allreduce(here.id, dataAvailable, Team.MAX);
            } while (dataAvailable > 0);
            
            // Relax heavy edges
            deferredVertex().examine((localV: Long, threadId: Int) => {
                val v = LocSrcToOrg(localV);
                val vDist = distance()(localV);
                val neighbours = csr().adjacency(localV);
                val neighbourWeight = csr().attribute(weight(), localV);
                for (w in neighbours) {
                    val wWeight = neighbourWeight(w) as Long;
                    if (wWeight > delta()) {
                        if (isLocalVertex(w)) {
                            relax(v, w, vDist + wWeight);
                        }  else {
                            val pid = getVertexPlaceRole(w);
                            remoteRelax(threadId, pid, v, w, vDist + wWeight);
                            Console.OUT.println("Heavy remoteRelax: " + v + " " + w + " : " + vDist);
                        }
                    }
                }
                throw new UnsupportedOperationException("have not tested yet");
            });
            flushAll();
            currentBucketIndex()() = currentBucketIndex()() + 1; 
        } while (true);
    }
    
    private def relax(v: Vertex, w: Vertex, x: Long) {  
        val localW = OrgToLocSrc(w);  
        while (true) {
            // non-blocking mutual exclusion
            // increase semaphore
            if (compare_and_swap[Long](lch().semaphore, localW, 0, 1)) {
                val wDist = distance()(localW);
                var tentative: Long = x;
                // Console.OUT.println("Relax: " + v + ", " + w + " : " + x);
                if (tentative < wDist) {
                    val newIndex = (tentative / delta()) as BucketIndex;
                    if (newIndex >= buckets().capacity()) {
                        atomic {
                            // recheck after acquiring lock
                            // TODO: implement non-blocking mutual exclusion, though it may improve the performance
                            // a little bit
                            // TODO: Test more on mutual exclusion, it seems we need lock every op that use bucket
                            if(newIndex >= buckets().capacity()) {
                                val growth = 10;
                                val oldCap = buckets().capacity();
                                val newCap = growth + newIndex;
                                buckets().grow(newCap);
                                for(k in 0..(newCap - oldCap - 1)) {
                                    buckets().add(new Array[Bitmap](2, 
                                            (Int) => new Bitmap(lch().numLocalVertices)));
                                }
                            }
                        }
                    }
                    val getNextBucket = (index: Int) => {
                        return index == lch().currentBucketIndex() ?
                                lch().buckets(index)((lch().bucketQueuePointer() + 1) & 1):                            
                                    lch().buckets(index)(1); // another index, 1st index is next q
                    };
                    if (wDist != Long.MAX_VALUE && deletedVertexMap().isSet(localW)) {
                        val oldIndex = (wDist / delta()) as BucketIndex;
                        if (oldIndex != newIndex) {
                            // Modifed only if changing bucket
                            val oldBucket = getNextBucket(oldIndex);
                            oldBucket.clear(localW);
                            val nextBucket = getNextBucket(newIndex);
                            nextBucket.set(localW);
                        }
                    } else {
                        // vertex has not been added to bucket
                        val nextBucket = getNextBucket(newIndex);
                        nextBucket.set(localW);
                    }
                    
                    distance()(localW) = tentative;
                    
                    if (predecessors()(localW) == null) {
                        predecessors()(localW) = new ArrayList[Vertex]();
                    }
                    predecessors()(localW).clear();
                    predecessors()(localW).add(v);
                } else if (tentative == wDist && v != w) {
                    predecessors()(localW).add(v);
                }
                while(true){
                    if(compare_and_swap[Long](lch().semaphore, localW, 1, 0))
                        break;
                }
                break;
            } 
        }
    }
    
    private def deriveSuccessor() {
        // Closure for managing remote op
        val bufSize = lch().BUFFER_SIZE;
        val NUM_TASK = lch().NUM_TASK;        
        val bufferP = new Array[Array[ArrayList[Vertex]]](NUM_TASK,
                (int) => new Array[ArrayList[Vertex]](team.size(),
                        (int) => new ArrayList[Vertex](bufSize)));
        val bufferS = new Array[Array[ArrayList[Vertex]]](NUM_TASK,
                (int) => new Array[ArrayList[Vertex]](team.size(),
                        (int) => new ArrayList[Vertex](bufSize)));
        val addSuccessor = (p: Long, s: Long) => {
            val localP = OrgToLocSrc(p);
            while (true) {
                // non-blocking mutual exclusion
                // increase semaphore
                if (compare_and_swap[Long](lch().semaphore, localP, 0, 1)) {
                    if (successors()(localP) == null) {
                        successors()(localP) = new ArrayList[Vertex]();
                    }
                    successors()(localP).add(s);
                    while(true){
                        if(compare_and_swap[Long](lch().semaphore, localP, 1, 0))
                            break;
                    }
                    break;
                }
            }
        };
        // Closure for remote op
        val clearBuffer = (threadId: Int, pid: Int) => {
            bufferP(threadId)(pid).clear();
            bufferS(threadId)(pid).clear();
        };
        val flush = (threadId: Int, pid: Int) => {
            // No data return
            if (bufferP(threadId)(pid).size() == 0)
                return;
            val p = bufferP(threadId)(pid).toArray();
            val s = bufferS(threadId)(pid).toArray();
            val count = p.size;
            at (Place.place(pid)) {
                for(k in 0..(count - 1)) {
                    addSuccessor(p(k),
                                 s(k));
                }
            }
            clearBuffer(threadId, pid);
        };
        val flushAll = () => {
            finish  for (i in 0..(NUM_TASK - 1)) {
                val k = i;
                async for (ii in 0..(team.size() - 1)) {
                    val kk = ii;
                    flush(k, kk);
                }
            }
        };
        val remoteAddSuccessor = (threadId: Int, pid: Int, p: Vertex, s: Vertex) => {
            if (bufferP(threadId)(pid).size() >= bufSize) {
                flush(threadId, pid);
            }
            bufferP(threadId)(pid).add(p);
            bufferS(threadId)(pid).add(s);
        };
        DistBetweennessCentrality.iter(0..(lch().numLocalVertices - 1),
                                       (localS: Long, threadId: Int) => {
                                          val preds = predecessors()(localS);
                                          if (preds != null) {
                                              val succ = LocSrcToOrg(localS);
                                              for (i in 0..(preds.size() - 1)) {
                                                  val pred = preds(i);
                                                  if (isLocalVertex(pred)) {
                                                      addSuccessor(pred, succ);
                                                  } else {
                                                      val pid = getVertexPlaceRole(pred);
                                                      remoteAddSuccessor(threadId, pid, pred, succ);
                                                  }
                                              }
                                          }
                                       });
        flushAll();
    }
    
    protected def travelInNonIncreasingOrder() {
        
        // // Clear data 
        // nonIncDistNextQ().clear();
        // nextTraverseQ().clear();
        // currentTraverseQ().clear();
        // 
        // // Place 0th init
        // if (here.id == 0) {
        //     
        //     distance().fill(-1L);
        //     pathCount().fill(0L);
        //     
        //     {
        //         val pid = distance().getPlaceId(currentSource());
        //         // Console.OUT.println("Current src: " + currentSource() + " - " + s);
        //         
        //         val putSource = ()=> {
        //             
        //             val s = currentSource();
        //             distance()(s) = 0L;
        //             pathCount()(s) = 1L;
        //             nextTraverseQ().add(s);
        //             Console.OUT.println("Put source: " + s);
        //         };
        //         
        //         if(pid == here.id) {
        //             
        //             putSource();
        //             
        //         } else {
        //             
        //             at (Place.place(pid)) putSource();
        //         }
        //     }
        //     
//         }
//         
//         
//         
//         
//         val visit = (w: VertexId, vPathCount: Long, vDistance: Long) => {
//             
//             val wDistance = distance()(w);
//             
//             atomic {
//                 
//                 if (wDistance == -1L) {   
//                     
//                     // First visit
//                     distance()(w) = vDistance + 1;
//                     pathCount()(w) = vPathCount;
//                     
//                     nextTraverseQ().add(w);
//                     
//                 } else if (wDistance == vDistance + 1L){
//                     
//                     val c = pathCount()(w);
//                     pathCount()(w) = c + vPathCount;
//                 }
//             }
//         };
//         
//         // Declare closure for remote op
//         val bufSize = 10000;
//         val bufferW = new Array[ArrayList[VertexId]](Place.MAX_PLACES,
//                 (int) => new ArrayList[VertexId](bufSize));
//         val bufferVCount = new Array[ArrayList[VertexId]](Place.MAX_PLACES,
//                 (int) => new ArrayList[VertexId](bufSize));
//         val bufferVDistance = new Array[ArrayList[VertexId]](Place.MAX_PLACES,
//                 (int) => new ArrayList[VertexId](bufSize));
//         
//         // Closure for remote op
//         val clearBuffer = (pid: Int) => {
//             
//             bufferW(pid).clear();
//             bufferVCount(pid).clear();
//             bufferVDistance(pid).clear();
// 
//         };
//         
//         val flood = (pid: Int) => {
//             
//             // No data return
//             if (bufferW(pid).size() == 0)
//                 return;
//             
//             val w = bufferW(pid).toArray();
//             val vCount = bufferVCount(pid).toArray();
//             val vDist = bufferVDistance(pid).toArray();
//             
//             at (Place.place(pid)) {
//                 
//                 for(var k: Int = 0; k < w.size; ++k) {
//                     
//                     visit(w(k), 
//                           vCount(k),
//                           vDist(k));
//                 }
//             }
//             
//             clearBuffer(pid);
//         };
//         
//         val floodAll = () => {
//             
//             for (var i: int = 0; i < Place.MAX_PLACES; ++i) {
//                 
//                 flood(i);
//             }
//         };
//         
//         val visitRemote = (pid: Int, w: VertexId, vCount: Long, vDist: Long) => {
//             
//             if (bufferW(pid).size() >= bufSize) {
//                 
//                 flood(pid);
//             }
//             
//             bufferW(pid).add(w);
//             bufferVCount(pid).add(vCount);
//             bufferVDistance(pid).add(vDist);
// 
//         };
//         
//         var dataAvailable: Int;
//         
//         do {
//             
//             Team.WORLD.barrier(here.id);
//             dataAvailable = nextTraverseQ().isEmpty() == true ? 0 : 1;
//             dataAvailable = Team.WORLD.allreduce(here.id, dataAvailable, Team.MAX);
//             
//             if(dataAvailable == 0) {
//                 
//                 // No one has vertex to travel
//                 break;
//             }
//             
//             swapQ();
//             
//             Team.WORLD.barrier(here.id);
//             
//             while(!currentTraverseQ().isEmpty()) {
//                 
//                 val v = currentTraverseQ().removeFirst();
//                 
//                 val vDistance = distance()(v);
//                 val vPathCount = pathCount()(v);
//                 
//                 // First visit
//                 val succList = successors()(v);
//                 
//                 if (succList == null || succList.size() == 0) {
//                     
//                     nonIncDistNextQ().add(v);
//                     
//                 } else {
//                     
//                     // Has successor
//                     
//                     val len = succList.size();
//                     
//                     for (var i: Int = 0; i < len; ++i) {
//                         
//                         val w = succList(i);
//                         
//                         // Console.OUT.println(here.id + ": " +  v + "Visit: " + w + "v dist: " + vDistance);
//                         
//                         val wPid = successors().getPlaceId(w);
//                         
//                         if (wPid == here.id) {
//                             
//                             visit(w, vPathCount, vDistance);
//                             
//                         } else {
//                             
//                             // at (Place.place(wPid)) visit(w, vPathCount, vDistance);
//                             visitRemote(wPid, w, vPathCount, vDistance);
//                         }
//                     }
//                 }
//             }
//             floodAll();
//         }
//         
//         while(true);
    }
    

    protected def updateScore() {
        
//         val calDependency = (w_theta: Double, w_sigma: Long, v: VertexId) => {
// 
//             updates()(v) = updates()(v) + 1;
//             dependencies()(v) = dependencies()(v) 
//             + (pathCount()(v) as Double / w_sigma)
//             * (1 + w_theta);
//             
//             if(updates()(v) >= successors()(v).size()) {
//                 
//                 nonIncDistNextQ().add(v);
// 
//             }
//         };
//         
//         // Declare closures for remote op
//         val bufSize = 10000;
//         val bufferWTheta = new Array[ArrayList[Double]](Place.MAX_PLACES,
//                 (int) => new ArrayList[Double](bufSize));
//         val bufferWSigma = new Array[ArrayList[VertexId]](Place.MAX_PLACES,
//                 (int) => new ArrayList[Long](bufSize));
//         val bufferV = new Array[ArrayList[VertexId]](Place.MAX_PLACES,
//                 (int) => new ArrayList[VertexId](bufSize));
//         
//         // Closure for remote op
//         val clearBuffer = (pid: Int) => {
//             
//             bufferWTheta(pid).clear();
//             bufferWSigma(pid).clear();
//             bufferV(pid).clear();
// 
//         };
//         
//         val flood = (pid: Int) => {
//             
//             // No data return
//             if (bufferWTheta(pid).size() == 0)
//                 return;
//             
//             val w_theta = bufferWTheta(pid).toArray();
//             val w_sigma = bufferWSigma(pid).toArray();
//             val v = bufferV(pid).toArray();
//             
//             at (Place.place(pid)) {
//                 
//                 for(var k: Int = 0; k < w_theta.size; ++k) {
//                     
//                     calDependency(w_theta(k),
//                                   w_sigma(k),
//                                   v(k));
//                 }
//             }
//             
//             clearBuffer(pid);
//         };
//         
//         val floodAll = () => {
//             
//             for (var i: int = 0; i < Place.MAX_PLACES; ++i) {
//                 
//                 flood(i);
//             }
//         };
//         
//         val calRemote = (pid: Int, w_theta: Double, w_sigma: Long, v: VertexId) => {
//             
//             if (bufferWTheta(pid).size() >= bufSize) {
//                 
//                 flood(pid);
//             }
//             
//             bufferWTheta(pid).add(w_theta);
//             bufferWSigma(pid).add(w_sigma);
//             bufferV(pid).add(v);
// 
//         };
//         
//         
//         
//         // Swap Queue
//         val swap = ()=> {
//             
//             val temp = localHandle().lcNonIncreaseDistanceCurrentQ;
//             localHandle().lcNonIncreaseDistanceCurrentQ = localHandle().lcNonIncreaseDistanceNextQ;
//             localHandle().lcNonIncreaseDistanceNextQ = temp;
//         };
//         
//         var localVertexAvailable: Int;
//         
//         do { 
//             // Console.OUT.println("AAAAAAAAAAAAAAAAAAAAAA");
//             Team.WORLD.barrier(here.id);
//             // Console.OUT.println("BBBBBBBBBBBBBBBBBBBB");
//             localVertexAvailable = nonIncDistNextQ().isEmpty() == true ? 0: 1;            
//             localVertexAvailable = Team.WORLD.allreduce(here.id, localVertexAvailable, Team.MAX);
//             
//             if (localVertexAvailable == 0) {
//                 
//                 break;
//             }
//             
//             swap();
//             // Console.OUT.println("CCCCCCCCCCCCCCCCCCCCCCCCCC");
//             Team.WORLD.barrier(here.id);
//             // Console.OUT.println("DDDDDDDDDDDDDDDDDDDDDDDDDDDDDD");
//             while(!nonIncDistCurrentQ().isEmpty()) {
//                 
//                 val w = nonIncDistCurrentQ().removeFirst();
//                 val preds = predecessors()(w);
//                 val w_sigma = pathCount()(w);
//                 val w_theta = dependencies()(w);
// 
//                 if(preds == null) {
//                     
//                     Console.OUT.println(here.id + ": Attention! Found null pred: " + w);
//                     // continue;
//                 }
//                 // Console.OUT.println("EEEEEEEEEEEEEEEEEEEEEEEEEE");
//                 assert(preds != null);
//                 // Console.OUT.println("FFFFFFFFFFFFFFFFFFFFFFFFFFFFF");
//                 for(var i: Int = 0; i < preds.size(); ++i) {
//                     
//                     val v = preds(i);
//                     val pid = pathCount().getPlaceId(v);
//                     
//                     if (pid == here.id) {
//                         // Console.OUT.println("GGGGGGGGGGGGGGGGGGGGGGG");
//                         calDependency(w_theta, w_sigma, v);
//                         
//                     } else {
//                         // Console.OUT.println("HHHHHHHHHHHHHHHHHHHHHHHHHHHh");
//                         // at(Place.place(pid)) calDependency(w_theta, w_sigma, v);
//                         calRemote(pid, w_theta, w_sigma, v);
//                     }
//                 }
//                 
//                 if(w != currentSource()) {
//                     
//                     score()(w) = score()(w) +  w_theta;
//                 }
//             }
//             // Console.OUT.println("IIIIIIIIIIIIIIIIII"); 
//             floodAll();
//             // Console.OUT.println("JJJJJJJJJJJJJJJJJJJJJJJJJJJJ");
//         } while(true);
    }
    
    protected def putToNextQueue(v: Vertex) {
        
        // nextTraverseQ().add(v);
    }
    
    protected def swapQ() {
        
        // val temp = nextTraverseQ();
        // localHandle().lcNextTraverseQ = currentTraverseQ();
        // localHandle().lcCurrentTraverseQ = temp;
    }
    
    ///***************************** Debug ******************/
    private def print() {
        for (p in team.placeGroup()) {
            for (i in 0..(lch().numLocalVertices - 1)) {
                if (predecessors()(i) != null)
                    if(predecessors()(i).size() > 0) {
                        Console.OUT.println(LocSrcToOrg(i) + " " + successors()(i));
                    }
            }
        }
    }
     
}