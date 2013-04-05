package org.scalegraph.metrics;

import org.scalegraph.graph.*;
import x10.io.SerialData;
import x10.util.ArrayList;
import x10.util.IndexedMemoryChunk;
import x10.util.concurrent.Lock;
import x10.util.GrowableIndexedMemoryChunk;
import x10.util.Team;
import org.scalegraph.concurrent.Dist2D;
import x10.compiler.Inline;
import org.scalegraph.metrics.DistBetweennessCentrality.Bitmap;



public class DistBetweennessCentralityWeighted implements x10.io.CustomSerialization{

    private static type Vertex = Long;
    private static type Buckets = GrowableIndexedMemoryChunk[ArrayList[Vertex]];
    private static type Bucket = ArrayList[Vertex];
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
        val csr: SparseMatrix;
        val distance: IndexedMemoryChunk[Long];
        val geodesicPath: IndexedMemoryChunk[Long];
        val predecessors: IndexedMemoryChunk[ArrayList[Vertex]];
        val deletedVertexMap: Bitmap;
        val deferredVertex: Bitmap;
        val delta: Int;
        
        // the number of local vertices
        val currentSource: Cell[Vertex];
        val currentBucketIndex: Cell[Int];
        val numLocalVertices: Long;
        
        val ALIGN = 64;
        val CONGRUENT = false;
        val BUFFER_SIZE: Int;
        val INIT_BUCKET_SIZE = 8;
        val buckets: Buckets;
        
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
                            transferBufSize: Int,
                            delta_: Int) {
            gCsr = csr_;
            csr = gCsr();
            BUFFER_SIZE = transferBufSize;
            numLocalVertices = gCsr.ids().numberOfLocalVertexes();
            currentSource = new Cell[Vertex](0);
            currentBucketIndex = new Cell[Int](0);
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
            
            buckets = new Buckets(INIT_BUCKET_SIZE);
            for (i in 0..(INIT_BUCKET_SIZE - 1))
                buckets(i) = new Bucket();
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
        val transBuf = 1 << 10;
        val delta = 1;
        // Represent graph as CSR
        val csr = g.constructDistSparseMatrix(
                                              Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS),
                                              true,
                                              true);        
        // create local state for bc on each place
        val localState = PlaceLocalHandle.make[LocalState](places, () => {
            return new LocalState(csr, transBuf, delta);
        });
        val bc = new DistBetweennessCentralityWeighted(localState);
        bc.internalRun();
        
        // return bc.score();
    }
    
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
    
    private def internalRun() {
        // cal complete BC
        val startVertex = 0;
        val endVertex = 0;
        // for each source
        for(var v: Int = startVertex; v <= endVertex; ++v) {
            // set current source
            finish for(p in places) {
                val curSrc = v;
                 at (p) async {     
                    calBC(curSrc);
                }
            }
        }
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

        // finish { 
        //     for (p in Place.places()) {
        //         at (p) async {
                    // deltaSteppingInit();
        clear();
        lch().currentSource() = src;
        deltaStepping();
        //         }
        //     }
        // }
        printPred();
        // predecessors().print();
        // Console.OUT.println("Find Successors");
        
        // finish {
        //     
        //     for(p in Place.places()) {
        //         
        //         at(p) async {
        //             
        //             deriveSuccessor();
        //         }
        //     }
        // }
        // 
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
    
    // protected def deltaSteppingInit() {
    //     
    //     // Console.OUT.println("Start at " + here.id);
    //     
    //     if(here.id == 0) {
    //         
    //         distance().fill(Long.MAX_VALUE);
    //         isDeletedMap().fill(false);
    //         dependencies().fill(0);        
    //         updates().fill(0);
    //     }
    //     
    //     localHandle().lcCurrentBucket = 0L;
    // }
    
    protected def deltaStepping() {
        
        // Structure to keep
        val bufSize = lch().BUFFER_SIZE;
        val bufferV = new Array[ArrayList[Vertex]](team.size(),
                (int) => new ArrayList[Vertex](bufSize));
        val bufferW = new Array[ArrayList[Vertex]](team.size(),
                (int) => new ArrayList[Vertex](bufSize));
        val bufferX = new Array[ArrayList[Vertex]](team.size(),
                (int) => new ArrayList[Vertex](bufSize));
        
        // Declare closures
        val clearBuffer = (pid: Int) => {
            bufferV(pid).clear();
            bufferW(pid).clear();
            bufferX(pid).clear();
        };
        
        val flush = (pid: Int) => {
            // No data return
            if (bufferV(pid).size() == 0)
                return;
            val relaxDataV = bufferV(pid).toArray();
            val relaxDataW = bufferW(pid).toArray();
            val relaxDataX = bufferX(pid).toArray();
            
            at (Place.place(pid)) {
                for(k in 0..(relaxDataV.size - 1)) {
                    relax(relaxDataV(k),
                          relaxDataW(k),
                          relaxDataX(k));
                }
            }
            clearBuffer(pid);
        };
        
        val flushAll = () => {
            async for (i in 0..(team.size() - 1)) {
                val ii = i;
                flush(ii);
            }
        };
        
        val remoteRelax = (v: Vertex, w: Vertex, x: Long) => {
            val pid = getVertexPlaceRole(w);
            if (bufferV(pid).size() >= bufSize) {
                flush(pid);
            }
            bufferV(pid).add(v);
            bufferW(pid).add(w);
            bufferX(pid).add(x);
        };
        
        // val isRemoteRelax = (w: Vertex) => {
        //     return graph().getPlaceId(w) != here.id;
        // };
        
        // Start delta stepping        
        var dataAvailable: Int = 0;
        val src = lch().currentSource();
        if (role == getVertexPlaceRole(src)) {
            relax(src, src, -1);
        }
        do {
            // Wait other places
            Team.WORLD.barrier(here.id);
            while (currentBucketIndex()() < buckets().capacity()
                    && (buckets()(currentBucketIndex()()) == null
                            || buckets()(currentBucketIndex()()).isEmpty())) {
                
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
            // deletedVertices().clear();
            
            do {
                if (currentBucketIndex()() < buckets().capacity()
                        && buckets()(currentBucketIndex()()) != null) {
                    
                    val bucket = buckets()(currentBucketIndex()());
                    
                    while(!bucket.isEmpty()) {
                        
                        val v = bucket.removeFirst();
                        
                        // if (!isDeletedMap()(v)) {
                        //     
                        //     isDeletedMap()(v) = true;
                        //     deletedVertices().add(v);
                        // }
                        val localV = OrgToLocSrc(v);
                        if (deletedVertexMap().isNotSet(localV)) {
                            deletedVertexMap().set(localV);
                        }
                        val vDist = distance()(localV);
                        val neighbours = csr().adjacency(localV);
                        
                        // if (neighbours != null) {
                        //     
                        //     for (var i:Int = 0; i < neighbours.size(); ++i) {
                        //         
                        //         val w = neighbours(i);
                        //         val w_d = graph().getWeight(w);
                        //         
                        //         if (w_d <= delta()) {
                        //             
                        //             if (isRemoteRelax(w)) {
                        //                 
                        //                 addRelax(v, w, v_d + w_d);
                        //                 
                        //             } else {
                        //                 
                        //                 relax(v, w, v_d + w_d);
                        //             }
                        //         }
                        //     }
                        // }
                        for (localW in neighbours) {
                            val w = LocDstToOrg(localW);
                            val wWeight = 1;
                            if (isLocalVertex(w)) {
                                if (wWeight <= delta()) {
                                    relax(v, w, vDist);
                                } else {
                                    // TODO: Add deffered vertex
                                    deferredVertex().set(localV);
                                }
                            } else {
                                remoteRelax(v, w, vDist);
                                Console.OUT.println("remoteRelax: " + v + " " + w + " : " + vDist);
                            }
                        }
                    }
                    flushAll();
                }
                Team.WORLD.barrier(here.id);
                if (currentBucketIndex()() < buckets().capacity()
                        && buckets()(currentBucketIndex()()) != null
                        && !buckets()(currentBucketIndex()()).isEmpty()) {
                    dataAvailable = 1;
                } else {
                    dataAvailable = 0;
                }
                dataAvailable = Team.WORLD.allreduce(here.id, dataAvailable, Team.MAX);
            } while (dataAvailable > 0);
            
            // Relax heavy edge 
            // for(var i: Int = 0; i < deletedVertices().length(); ++i) {
            //     
            //     val v = deletedVertices()(i);
            //     val v_d = distance()(v);
            //     val neighbours = graph().getOutNeigbours(v);
            //     
            //     if (neighbours != null) {
            //         
            //         for (var k:Int = 0; k < neighbours.size(); ++k) {
            //             
            //             val w = neighbours(k);
            //             val w_d = graph().getWeight(w);
            //             
            //             if (w_d > delta()) {                    
            //                 
            //                 if (isRemoteRelax(w)) {
            //                     
            //                     addRelax(v, w, v_d + w_d);
            //                     
            //                 } else {
            //                     
            //                     relax(v, w, v_d + w_d);
            //                 }
            //             }
            //         }
            //     }
            // }
            // Relax heavy edges
            deferredVertex().examine((localV: Long, threadId: Int) => {;
                val v = LocSrcToOrg(localV);
                val vDist = distance()(localV);
                val neighbours = csr().adjacency(localV);
                for (w in neighbours) {
                    val wWeight = 1;
                    if (isLocalVertex(w)) {
                        if (wWeight > delta()) {
                            throw new UnsupportedOperationException("Upsupported Yet");
                            // relax(v, w, vDist);
                        } 
                    }
                }
            });
            flushAll();
            currentBucketIndex()() = currentBucketIndex()() + 1; 
        } while (true);
    }
    
    protected def relax(v: Vertex, w: Vertex, vDist: Long) {        
        val localW = OrgToLocSrc(w);
        var wWeight: Long = 1;
        val wDist = distance()(localW);
        var tentative: Long = vDist + wWeight;
        
        Console.OUT.println("Relax: " + v + ", " + w +  " : " + vDist);
        
        if (vDist == -1L) {
            // relax src
            wWeight = 0;
            tentative = 0;
        }
        
        if (tentative < wDist) {
            val newIndex = (tentative / delta()) as BucketIndex;
            if (newIndex >= buckets().capacity()) {
                val growth = 10;
                val oldCap = buckets().capacity();
                val newCap = growth + newIndex;
                buckets().grow(newCap);
                for(k in 0..(newCap - oldCap - 1)) {
                    buckets().add(new ArrayList[Vertex]());
                }
            }
            if (wDist != Long.MAX_VALUE && deletedVertexMap().isSet(localW)) {
                val oldIndex = (wDist / delta()) as BucketIndex;
                buckets()(oldIndex).remove(w);
                buckets()(newIndex).add(w);
            } else {
                buckets()(newIndex).add(w);
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
        
//         if (placeId == here.id) {
// 
//             val w_d = distance()(w);
//             
//             if (x < w_d) {
//                 
//                 val newIndex = (x / delta()) as BucketIndex;
//                 
//                 if (newIndex >= buckets().capacity()) {
//                     
//                     val growth = 10;
//                     buckets().grow(newIndex + growth);
//                     val cap = buckets().capacity();
//                     
//                     for(var k: Int = buckets().length(); k <= cap; ++k) {
//                         buckets().add(new ArrayList[VertexId]());
//                     }
//                 }
//                 
//                 if (buckets()(newIndex) == null) {
//                     
//                     buckets()(newIndex) = new ArrayList[VertexId]();
//                 }
//                 
//                 if (w_d != Long.MAX_VALUE && !isDeletedMap()(w)) {
//                     
//                     val oldIndex = (w_d / delta()) as BucketIndex;
//                     
//                     buckets()(oldIndex).remove(w);
//                     buckets()(newIndex).add(w);
//                     
//                 } else {
//                     
//                     buckets()(newIndex).add(w);
//                 }
//                 
//                 distance()(w) = x;
//                 
//                 if (predecessors()(w) == null) {
//                     
//                     predecessors()(w) = new ArrayList[VertexId]();
//                 }
//                 
//                 predecessors()(w).clear();
//                 predecessors()(w).add(v);
//                 
//             } else if (x == w_d) {
//                 
//                 // Found predecessor
//                 if(w != v) {
//                     
//                     // Dont add itself to its successor
//                     predecessors()(w).add(v);
//                 }
//             }
//             
//         } else {
//             
//             val local = here.id;
//             
//             at (Place.place(placeId)) {
//                 
//                 relax(v, w, x);
//             }
//         }
    }
    
    protected def deriveSuccessor() {
        
//         // Closure for managing remote op
//         val bufSize = 10000;
//         val bufferP = new Array[ArrayList[VertexId]](Place.MAX_PLACES,
//                 (int) => new ArrayList[VertexId](bufSize));
//         val bufferS = new Array[ArrayList[VertexId]](Place.MAX_PLACES,
//                 (int) => new ArrayList[VertexId](bufSize));
//         
//         val addSuccessor = (p: Long, s: Long) => {
//             
//             // localHandle().updateSuccessorLock.lock();
//             // atomic {
//             
//             if (successors()(p) == null) {
//                 
//                 successors()(p) = new ArrayList[VertexId]();
//             }
//             
//             successors()(p).add(s);
//             // }
//             // localHandle().updateSuccessorLock.unlock();
//         };
//         
//         // Closure for remote op
//         val clearBuffer = (pid: Int) => {
//             
//             bufferP(pid).clear();
//             bufferS(pid).clear();
// 
//         };
//         
//         val flood = (pid: Int) => {
//             
//             // No data return
//             if (bufferP(pid).size() == 0)
//                 return;
//             
//             val p = bufferP(pid).toArray();
//             val s = bufferS(pid).toArray();
//             
//             at (Place.place(pid)) {
//                 
//                 for(var k: Int = 0; k < p.size; ++k) {
//                     
//                     addSuccessor(p(k),
//                                  s(k));
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
//         val addRemote = (pid: Int, p: VertexId, s: VertexId) => {
//             
//             // val pid = graph().getPlaceId(p);
//             
//             if (bufferP(pid).size() >= bufSize) {
//                 
//                 flood(pid);
//             }
//             
//             bufferP(pid).add(p);
//             bufferS(pid).add(s);
// 
//         };
//         
//         val startLocal = predecessors().getLocalStartIndex();
//         val endLocal = predecessors().getLocalEndIndex();
//         
//         Console.OUT.println(here.id + ":derive index-> pos: " + startLocal + "-" + endLocal);
//         
//         // Loop all local index
//         for (var succ: long = startLocal; succ <= endLocal; ++succ) {
//             
//             val preds = predecessors()(succ);
//             val s = succ;
//             
//             if (preds == null)
//                 continue;
//             
//             for (var k: int = 0; k < preds.size(); ++k) {
//                 
//                 val pred = preds(k);
//                 
//                 val pid = successors().getPlaceId(pred);
//                 
//                 if (pid == here.id) {
//                     
//                     addSuccessor(pred, succ);
//                     
//                 } else {
//                     
//                     addRemote(pid, pred, s);
//                 }
//                 
//             }
//         }
//         
//         floodAll();
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
    private def printPred() {
        for (i in 0..(lch().numLocalVertices - 1)) {
            if (predecessors()(i) != null)
                if(predecessors()(i).size() > 0) {
                    Console.OUT.println(LocSrcToOrg(i) + " " + predecessors()(i));
                }
        }
    }
     
}