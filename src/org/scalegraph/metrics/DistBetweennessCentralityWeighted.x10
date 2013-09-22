/* 
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package org.scalegraph.metrics;

import x10.io.SerialData;
import x10.compiler.Inline;
import x10.compiler.Native;
import x10.util.ArrayList;
import x10.util.IndexedMemoryChunk;
import x10.util.concurrent.Lock;
import x10.util.GrowableIndexedMemoryChunk;
import x10.util.Team;

import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.Dist2D;
import org.scalegraph.graph.*;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.Bitmap2;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.blas.SparseMatrix;
import org.scalegraph.Config;


/**
 * A class for computing betweenness centrality for large-scale weigheted graphs.
 * The implementation is based on Brandes's alogorthm[1] and Edmonds' algorithm[2].
 * The linear-scaling technique[3] is also available for improving the estimation result.
 * 
 * <br><br>
 * Reference:
 * <br>[1] Brandes, Ulrik. "A faster algorithm for betweenness centrality*." Journal of Mathematical Sociology 25.2 (2001): 163-177.
 * <br>[2] Edmonds, Nick, Torsten Hoefler, and Andrew Lumsdaine. "A space-efficient parallel algorithm for computing betweenness centrality in distributed memory." High Performance Computing (HiPC), 2010 International Conference on. IEEE, 2010.
 * <br>[3] Geisberger, Robert, Peter Sanders, and Dominik Schultes. "Better approximation of betweenness centrality." Proceedings of the 10th Workshop on Algorithm Engineering and Experimentation (ALENEX08). To appear. 2008.
 */
public class DistBetweennessCentralityWeighted implements x10.io.CustomSerialization{

    private val MAX_BUCKET_INDEX = Int.MAX_VALUE;
    
    private static type Vertex = Long;
    private static type Bucket = Array[Bitmap2]{self.size == 2};
    private static type Buckets = GrowableIndexedMemoryChunk[Bucket];
    private static type BucketIndex = Int;
    
    private val team: Team;
    private val places: PlaceGroup;
    private val lgl: Int;
    private val lgc: Int;
    private val lgr: Int;
    private val role: Int;
    
    private val lch: PlaceLocalHandle[LocalState];
    
    private static class LocalState {
        val gCsr: DistSparseMatrix[Long];
        val gWeight: DistMemoryChunk[Double];
        val csr: SparseMatrix[Long];
        val weight: MemoryChunk[Double];
        val distance: IndexedMemoryChunk[Double];
        val dependencies: IndexedMemoryChunk[Double];
        val score: IndexedMemoryChunk[Double];
        val predecessors: IndexedMemoryChunk[ArrayList[Vertex]];
        val successors: IndexedMemoryChunk[ArrayList[Vertex]];
        val successorCount: IndexedMemoryChunk[Int];
        val deferredVertex: Bitmap2;
        val delta: Int;
        val linearScale: Boolean = false;
        
        // source
        val numSource: Long;
        val sourceArray: Array[Vertex];
        val sourceRange: LongRange;
        
        val currentSource: Cell[Vertex];
        val currentBucketIndex: Cell[Int];
        val bucketQueuePointer: Cell[Int];
        val numLocalVertices: Long;
        val numberOfVerticesInGraph: Long;
        
        val ALIGN = 64;
        val CONGRUENT = false;
        val BUFFER_SIZE: Int;
        val INIT_BUCKET_SIZE = 32;
        val NUM_TASK: Int;
        val buckets: Buckets;
        
        val semaphore: IndexedMemoryChunk[Long];
        
        // traverse in non-increasing order of distance staff
        val queues: IndexedMemoryChunk[Bitmap2];
        val pathCount: IndexedMemoryChunk[Long];
        val numVisits: IndexedMemoryChunk[Int];
        
        // poniters of current queue and next queue
        val qPointer: Cell[Int];
        
        // Backtracking
        val numUpdates: IndexedMemoryChunk[Int];
        val backtrackingQueues: IndexedMemoryChunk[Bitmap2];
        val backtrackingQPointer: Cell[Int];
        
        // buffer
        val predBuf: Array[Array[ArrayList[Vertex]]];
        val succBuf: Array[Array[ArrayList[Vertex]]];
        val sigmaBuf: Array[Array[ArrayList[Long]]];
        val deltaBuf: Array[Array[ArrayList[Double]]];
        val muBuf: Array[Array[ArrayList[Double]]];
        
        private def this (csr_: DistSparseMatrix[Long],
                            weight_: DistMemoryChunk[Double],
                            transferBufSize: Int,
                            vInGraph: Long,
                            delta_: Int,
                            numSource_: Long,
                            sourceArray_ : Array[Vertex],
                            sourceRange_: LongRange) {
            gCsr = csr_;
            csr = gCsr();
            gWeight = weight_;
            weight = gWeight();
            BUFFER_SIZE = transferBufSize;
            numLocalVertices = gCsr.ids().numberOfLocalVertexes();
            numberOfVerticesInGraph = vInGraph;
            currentSource = new Cell[Vertex](0);
            currentBucketIndex = new Cell[Int](0);
            bucketQueuePointer = new Cell[Int](0);
            NUM_TASK = Runtime.NTHREADS;
            delta = delta_;
            
            numSource = numSource_;
            sourceArray = sourceArray_;
            sourceRange = sourceRange_;
            
            distance = IndexedMemoryChunk.allocateZeroed[Double](
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
            successorCount = IndexedMemoryChunk.allocateZeroed[Int](
                    numLocalVertices,
                    ALIGN,
                    CONGRUENT);
            pathCount = IndexedMemoryChunk.allocateZeroed[Long](
                    numLocalVertices,
                    ALIGN,
                    CONGRUENT);
            dependencies = IndexedMemoryChunk.allocateZeroed[Double](
                    numLocalVertices,
                    ALIGN,
                    CONGRUENT);
            score = IndexedMemoryChunk.allocateZeroed[Double](
                    numLocalVertices,
                    ALIGN,
                    CONGRUENT);
            numVisits = IndexedMemoryChunk.allocateZeroed[Int](
                    numLocalVertices,
                    ALIGN,
                    CONGRUENT);
            numUpdates = IndexedMemoryChunk.allocateZeroed[Int](
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
                buckets(i) = new Array[Bitmap2](2, (Int) => new Bitmap2(nVertices));
            deferredVertex = new Bitmap2(numLocalVertices);
            
            for (i in 0..(numLocalVertices - 1)) {
                predecessors(i) = null;
            }
            
            queues = IndexedMemoryChunk.allocateUninitialized[Bitmap2](2,
                    ALIGN,
                    CONGRUENT);
            queues(0) = new Bitmap2(numLocalVertices);
            queues(1) = new Bitmap2(numLocalVertices);
            qPointer = new Cell[Int](0);
            
            // Create queue for updating score
            backtrackingQueues = IndexedMemoryChunk.allocateUninitialized[Bitmap2](
                    2, 
                    ALIGN,
                    CONGRUENT);
            backtrackingQueues(0) = new Bitmap2(numLocalVertices);
            backtrackingQueues(1) = new Bitmap2(numLocalVertices);
            backtrackingQPointer = new Cell[Int](0);
            
            val team = gCsr.dist().allTeam();
            predBuf = new Array[Array[ArrayList[Vertex]]](NUM_TASK,
                    (int) => new Array[ArrayList[Vertex]](team.size(),
                            (int) => new ArrayList[Vertex](transferBufSize)));
            succBuf = new Array[Array[ArrayList[Vertex]]](NUM_TASK,
                    (int) => new Array[ArrayList[Vertex]](team.size(),
                            (int) => new ArrayList[Vertex](transferBufSize)));
            sigmaBuf = new Array[Array[ArrayList[Long]]](NUM_TASK,
                    (int) => new Array[ArrayList[Long]](team.size(),
                            (int) => new ArrayList[Long](transferBufSize)));
            deltaBuf = new Array[Array[ArrayList[Double]]](NUM_TASK,
                    (int) => new Array[ArrayList[Double]](team.size(),
                            (int) => new ArrayList[Double](transferBufSize)));
            muBuf = new Array[Array[ArrayList[Double]]](NUM_TASK,
                    (int) => new Array[ArrayList[Double]](team.size(),
                            (int) => new ArrayList[Double](transferBufSize)));
        }
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
    
    /* GCC Built-in atomic function interface */
    @Native("c++", "__sync_bool_compare_and_swap((#imc)->raw() + #index, #oldVal, #newVal)")
    private static native def compare_and_swap[T](imc: IndexedMemoryChunk[T], index: Long, oldVal: T, newVal: T): Boolean;
    
    @Native("c++", "__sync_add_and_fetch((#imc)->raw() + #index, #value)")
    private static native def add_and_fetch[T](imc: IndexedMemoryChunk[T], index: Long, value: T): T;
    
    
    /* Work around when optimizing. Parallel class will ca */
    private static @Inline def internalIter(range :LongRange, func :(Long, LongRange)=>void) {
        val size = range.max - range.min + 1;
        if(size == 0L) return ;
        val nthreads = Math.min(Runtime.NTHREADS as Long, size);
        val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1L);
        finish for(i in 0..(nthreads-1)) {
            val idx = i;
            val i_start = range.min + i*chunk_size;
            val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
            async func(idx, i_range);
        }
    }
    
    public static @Inline def internalIter(range :LongRange, func :(Long)=>void) {
        val size = range.max - range.min + 1;
        if(size == 0L) return ;
        val nthreads = Math.min(Runtime.NTHREADS as Long, size);
        val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1L);
        finish for(i in 0..(nthreads-1)) {
            val i_start = range.min + i*chunk_size;
            val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
            async for(ii in i_range) func(ii);
        }
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
    private def successorCount() = lch().successorCount;
    
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
    
    @Inline
    private def currentTraverseQ() = lch().queues(lch().qPointer());
    
    @Inline
    private def nextTraverseQ() = lch().queues((lch().qPointer() + 1) & 1);
    
    @Inline
    private def swapTraverseQ() { lch().qPointer() = (lch().qPointer() + 1) & 1; }
    
    @Inline
    private def pathCount() = lch().pathCount;
    
    @Inline
    private def dependencies() = lch().dependencies;
    
    @Inline
    private def numVisits() = lch().numVisits;
    
    @Inline
    private def numUpdates() = lch().numUpdates;
    
    @Inline
    private def score() = lch().score;
    
    @Inline
    private def backtrackingCurrentQ() = lch().backtrackingQueues(lch().backtrackingQPointer());
    
    @Inline
    private def backtrackingNextQ() = lch().backtrackingQueues((lch().backtrackingQPointer() + 1) & 1);
    
    @Inline
    private def swapUpdateScoreQ() { lch().backtrackingQPointer() = (lch().backtrackingQPointer() + 1) & 1; }
    
   
//     public static def calculate(g: Graph, directed: Boolean, weightAttrName: String, bcAttrName: String, delta: Int, normalize: Boolean): void {
//         val sourceRange = 0..(g.numberOfVertices() - 1);
//         run(g, directed, weightAttrName, bcAttrName, delta, false, -1, null, sourceRange, false, true);
// 
//     }
//     
//   
//     public static def estimate(g: Graph, directed: Boolean, weightAttrName: String, bcAttrName: String, numSource: Long, delta: Int, linearScale: Boolean): void {
//         run(g, directed, weightAttrName, bcAttrName, delta, false, numSource, null, 0..(-1 as Long), linearScale, false);
//     }
//     
// 
//     public static def estimate(g: Graph, directed: Boolean, weightAttrName: String, bcAttrName: String, sources: Array[Vertex], delta: Int,  linearScale: Boolean): void {
//         run(g, directed, weightAttrName, bcAttrName, delta, false, -1, sources, 0..(-1 as Long), linearScale, false);
//     }
//     
//     public static def estimate(g: Graph, directed: Boolean, weightAttrName: String, bcAttrName: String, sourceRange: LongRange, delta: Int, linearScale: Boolean): void {
//         run(g, directed, weightAttrName, bcAttrName, delta, false, -1, null, sourceRange, linearScale, false);
// 
//     }
    
    // Suppose to be called by API wrapper
    public static def run(g: Graph,
                          directed: Boolean,
                          weightAttrName: String,
                          /*bcAttrName: String,*/
                          delta: Int,
                          normalize: Boolean,
                          numSource: Long,
                          sources: Array[Vertex],
                          sourceRange: LongRange,
                          linearScale: Boolean,
                          isExactBc: Boolean) {
        if (delta <= 0) {
            throw new UnsupportedOperationException("Delta must be a positive number");
        }
        val team = g.team();
        val places = team.placeGroup();
        val transBuf = 1 << 10;
        val N = g.numberOfVertices();
        val numSource_ = isExactBc ? -1L: numSource;
        val sources_ = isExactBc ? null: sources;
        val sourceRange_ = isExactBc ? 0..(N - 1): sourceRange;
        // Represent graph as CSR
        val csr = g.createDistEdgeIndexMatrix(
                                              Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS),
                                              true,
                                              true);
        // Construct attribute
        val weightAttr = g.createDistAttribute[Double](csr, false, weightAttrName);
        // create local state for bc on each place
        val localState = PlaceLocalHandle.make[LocalState](places, () => {
            return new LocalState(csr, weightAttr, transBuf, N, delta, numSource_, sources_, sourceRange_);
        });
        val stopWatch = Config.get().stopWatch();
        stopWatch.lap("Graph construction");
        val bc = new DistBetweennessCentralityWeighted(localState);
        bc.start();
        
        // Normalize result
        if (normalize) {
            finish for (p in places) {
                at (p) async {
                    internalIter(0..(bc.lch().numLocalVertices -1), (i: Long) => {
                        val score = bc.lch().score(i);
                        var frac: Double = (N - 1) * (N - 2);
                        if (!directed)
                            frac /= 2D;
                        bc.lch().score(i) = score / (frac);
                    });
                }
            }
        } else if (!directed && isExactBc) {
            // Undirected grapth and exact bc --> result divive by 2
            finish for (p in places) {
                at (p) async {
                    internalIter(0..(bc.lch().numLocalVertices -1), (i: Long) => {
                        val score = bc.lch().score(i);
                        bc.lch().score(i) = score / 2D;
                    });
                }
            }
        }
        // return result as a graph attribute
        val result = new DistMemoryChunk[Double](places, () => {
            val r = new MemoryChunk[Double](localState().score.length());
            for (i in 0..(r.size() -1))
                r(i) = localState().score(i);
            return r;
        });
        // g.setVertexAttribute[Double](bcAttrName, result);
        // //TODO: Remove this line for release
        // // This is workaround for creating vertex attribute for graph,
        // // This problem should be fixed by vertex translator or graph class
        // val vertexIds = new DistMemoryChunk[Long](places, () => {
        //     val id = new MemoryChunk[Long](localState().score.length());
        //     for (i in 0..(id.size() -1))
        //         id(i) = bc.LocSrcToOrg(i);
        //     return id;
        // });
        // g.setVertexAttribute[Long]("name", vertexIds);
        stopWatch.lap("Betweenness centrality (Weighted) calculation");
        return result;
    }
    
    private def start() {
        var time: Long = System.currentTimeMillis();
        // determine sources
        if (lch().numSource > 0) {
            // generate random sources
            val numSrc = lch().numSource;
            val numAllVertices = lch().numberOfVerticesInGraph;
            val srcArray = new Array[Long](numAllVertices as Int, (i: Int) => i as Long);
            val r = new x10.util.Random(System.currentTimeMillis());
            for (i in 0..(srcArray.size -1)) {
                val index = r.nextLong(numAllVertices) as Int;
                val temp = srcArray(i);
                srcArray(i) = srcArray(index);
                srcArray(index) = temp;
            }
            for (i in 0..(numSrc - 1)) {
                calBC(srcArray(i as Int));
            }
        } 
        else if (lch().sourceArray != null) {
            // use sources from given array           
            for (i in 0..(lch().sourceArray.size - 1)) {
                calBC(lch().sourceArray(i));
            }
        } 
        else if (lch().sourceRange.min >= 0 && lch().sourceRange.max >= 0) {
            // use sources from given range
            for (i in lch().sourceRange) {
                calBC(i);
            }
        } 
        else {
            throw new IllegalArgumentException("Invalid source");
        }
        time = System.currentTimeMillis() - time;
        // print();
        // Console.OUT.println("BC time: " + time);
    }
    
    private def clear() {
        // clear data local data
        val numLocalVertices = lch().numLocalVertices;
        for (i in 0..(lch().numLocalVertices - 1)) {
            lch().distance(i) = Double.MAX_VALUE;
            
            if(lch().predecessors(i) != null)
                lch().predecessors(i).clear();
            if(lch().successors(i) != null)
                lch().successors(i).clear();
        }   
            
        lch().dependencies.clear(0 , numLocalVertices);
        lch().successorCount.clear(0 , numLocalVertices);
        lch().pathCount.clear(0 , numLocalVertices);
        lch().numVisits.clear(0 , numLocalVertices);
        lch().numUpdates.clear(0 , numLocalVertices);
       
        lch().currentBucketIndex() = 0;
        lch().backtrackingQPointer() = 0;
        lch().qPointer() = 0;
        lch().bucketQueuePointer() = 0;
        
        lch().queues(0).clearAll();
        lch().queues(1).clearAll();
        lch().backtrackingQueues(0).clearAll();
        lch().backtrackingQueues(1).clearAll();
        
        for (i in 0..(buckets().capacity() - 1)) {
            buckets()(i)(0).clearAll();
            buckets()(i)(1).clearAll();
        }
    }
    
    private def calBC(src: Vertex) {
        finish for (p in team.placeGroup()) {
            at (p) async {
                clear();
                lch().currentSource() = src;
                team.barrier(role);
                deltaStepping();
                Runtime.x10rtBlockingProbe();
                team.barrier(role);
                
                deriveSuccessor();
                Runtime.x10rtBlockingProbe();
                team.barrier(role);
                
                travelInNonIncreasingOrder();
                Runtime.x10rtBlockingProbe();
                team.barrier(role);
                
                updateScore();
                Runtime.x10rtBlockingProbe();
                team.barrier(role);
            }
        }
    }
    
    protected def deltaStepping() {
        // buffer name may not reflec its use
        val bufSize = lch().BUFFER_SIZE;
        val NUM_TASK = lch().NUM_TASK;
        val bufferV = lch().predBuf;
        val bufferW = lch().succBuf;
        val bufferX = lch().muBuf;
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
        val remoteRelax = (threadId: Int, pid: Int, v: Vertex, w: Vertex, x: Double) => {
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
            val v = LocSrcToOrg(src);
            // clear predecessor of root vertex
            predecessors()(v).clear();
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
            deferredVertex().clearAll();
            do {
                if (currentBucketIndex()() < buckets().capacity()
                        && buckets()(currentBucketIndex()()) != null) {
                    swapBucket();
                    nextBucketQueue().clearAll();
                    
                    val cBucket = currentBucketQueue();
                    val nBucket = nextBucketQueue();
                    cBucket.examine((localV: Long, threadId: Int) => {
                        val v = LocSrcToOrg(localV);
                        // No need to relax vertex that will be relaxed in next turn right now
                        if (nBucket.isSet(localV))
                            return;

                        val vDist = distance()(localV);
                        val neighbours = csr().adjacency(localV);
                        val neighboursWeight = csr().attribute[Double](weight(), localV);
                        for (i in 0..(neighbours.size() - 1)) {
                            val localW = neighbours(i);
                            val w = LocDstToOrg(localW);
                            val wWeight = neighboursWeight(i);
                            
                            assert(wWeight > 0.0);
                            
                            val tentative = vDist + wWeight;
                            if (wWeight <= delta()) {
                                if (isLocalVertex(w)) {
                                    relax(v, w, tentative);
                                } else {
                                    val pid = getVertexPlaceRole(w);
                                    remoteRelax(threadId, pid, v, w, tentative);
                                }
                            } else {
                                if (deferredVertex().isNotSet(localV)) {
                                    deferredVertex().set(localV);
                                }
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
                for (i in 0..(neighbours.size() - 1)) {
                    val localW = neighbours(i);
                    val w = LocDstToOrg(localW);
                    val wWeight = neighbourWeight(i);
                    assert(wWeight > 0.0);
                    val tentative = vDist + wWeight;
                    if (wWeight > delta()) {
                        if (isLocalVertex(w)) {
                            relax(v, w, tentative);
                        }  else {
                            val pid = getVertexPlaceRole(w);
                            remoteRelax(threadId, pid, v, w, tentative);
                        }
                    }
                }
            });
            flushAll();
            currentBucketIndex()() = currentBucketIndex()() + 1; 
        } while (true);
    }
    
    private def relax(v: Vertex, w: Vertex, x: Double) {  
        val localW = OrgToLocSrc(w);  
        while (true) {
            // non-blocking mutual exclusion
            // increase semaphore
            if (compare_and_swap[Long](lch().semaphore, localW, 0, 1)) {
                val wDist = distance()(localW);
                var tentative: Double = x;
                if (tentative < wDist) {
                    val newIndex = Math.floor(tentative / delta()) as BucketIndex;
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
                                    buckets().add(new Array[Bitmap2](2, 
                                            (Int) => new Bitmap2(lch().numLocalVertices)));
                                }
                            }
                        }
                    }
                    val getNextBucket = (index: Int) => {
                        return index == lch().currentBucketIndex() ?
                                lch().buckets(index)((lch().bucketQueuePointer() + 1) & 1):                            
                                    lch().buckets(index)(1); // another index, 1st index is next q
                    };
                    if (wDist != Double.MAX_VALUE) {
                        val oldIndex = Math.floor (wDist / delta()) as BucketIndex;
                        if (oldIndex != newIndex) {
                            // Modifed only if changing bucket
                            val oldBucket = getNextBucket(oldIndex);
                            val nextBucket = getNextBucket(newIndex);
                            oldBucket.clear(localW);
                            nextBucket.set(localW);
                        } else {
                            val nextBucket = getNextBucket(newIndex);
                            if (!nextBucket.isSet(localW)) {
                                nextBucket.set(localW);
                            }
                        }
                    } else {
                        // vertex has not been found
                        val nextBucket = getNextBucket(newIndex);
                        if (!nextBucket.isSet(localW)) {
                        	nextBucket.set(localW);
                        }
                    }
                    
                    distance()(localW) = tentative;
                   
                    if (predecessors()(localW) == null) {
                        predecessors()(localW) = new ArrayList[Vertex]();
                    }
                    predecessors()(localW).clear();
                    predecessors()(localW).add(v);
                } else if (tentative == wDist && v != w) {
                    if (!predecessors()(localW).contains(v))
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
        // Closure for managing remote operations
        val bufSize = lch().BUFFER_SIZE;
        val NUM_TASK = lch().NUM_TASK;        
        val bufferP = lch().predBuf;
        val bufferS = lch().succBuf;
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
                    successorCount()(localP) = successorCount()(localP) + 1; 
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
        
        val f = (threadId: Long, r: LongRange) => {
            for (localS in r) {
                val preds = predecessors()(localS);
                if (preds != null) {
                    val succ = LocSrcToOrg(localS);
                    for (i in 0..(preds.size() - 1)) {
                        val pred = preds(i);
                        if (isLocalVertex(pred)) {
                            addSuccessor(pred, succ);
                        } else {
                            val pid = getVertexPlaceRole(pred);
                            remoteAddSuccessor(threadId as Int, pid, pred, succ);
                        }
                    }
                }
            }
        };
        internalIter(0..(lch().numLocalVertices - 1), f);
        flushAll();
    }
    
    private def travelInNonIncreasingOrder() {
        val bufSize = lch().BUFFER_SIZE;
        val numTask = lch().NUM_TASK;
        val predBuf = lch().predBuf;
        val succBuf = lch().succBuf;
        val sigmaBuf = lch().sigmaBuf;
        
        val clearBuffer = (bufId: Int, pid: Int) => {
            predBuf(bufId)(pid).clear();
            succBuf(bufId)(pid).clear();
            sigmaBuf(bufId)(pid).clear();
        };
        val _flush = (bufId: Int, pid: Int) => {
            val preds = predBuf(bufId)(pid).toArray();
            val succs = succBuf(bufId)(pid).toArray();
            val predSigma = sigmaBuf(bufId)(pid).toArray();
            val count = preds.size;
            val p = team.place(pid);
            at (p)  {
                for(k in 0..(count - 1)) {
                    visit(preds(k), succs(k), predSigma(k));
                }
            }
            clearBuffer(bufId, pid);
        };
        val _flushAll = () => {
            finish for (i in 0..(numTask - 1)) {
                val k = i;
                async for (ii in 0..(team.size() - 1)) {
                    val kk = ii;
                    if (predBuf(k)(kk).size() > 0)
                        _flush(k, kk);
                }
            }
        };
        val _visitRemote = (bufId: Int, pid: Int, pred: Vertex, succ: Vertex, predSigma: Long) => {
            if (predBuf(bufId)(pid).size() == bufSize) {  
                _flush(bufId, pid);
            } 
            predBuf(bufId)(pid).add(pred);
            succBuf(bufId)(pid).add(succ);
            sigmaBuf(bufId)(pid).add(predSigma);
        };
        // put source
        val src = lch().currentSource();
        if (isLocalVertex(src)) {
            val locSrc = OrgToLocSrc(src);
            nextTraverseQ().set(locSrc);
            pathCount()(locSrc) = 1L;
        }
        while(true) {
            swapTraverseQ();
            nextTraverseQ().clearAll();
            // Check wether there is a vertex on such a place
            val maxVertexCount = team.allreduce(role,
                                                currentTraverseQ().setBitCount(),
                                                Team.MAX);
            if (maxVertexCount == 0L)
                break;
            val traverse = (localSrc: Vertex, threadId: Int) => {           
                val succs = successors()(localSrc);
                if (succs == null || succs.size() == 0) {
                    // No successor is leave node
                    if (!backtrackingNextQ().isSet(localSrc))
                        backtrackingNextQ().set(localSrc);
                } else {
                    val predSigma = pathCount()(localSrc);
                    val orgSrc = LocSrcToOrg(localSrc);                        
                    for(i in 0..(succs.size() - 1)) {
                        val orgDst = succs(i);
                        if (isLocalVertex(orgDst))  {
                            visit(orgSrc, orgDst, predSigma);
                        } else {
                            val bufId = threadId;
                            val p: Place = getVertexPlace(orgDst);
                            // at (p) visit(orgSrc, orgDst, predDistance, predSigma);
                            _visitRemote(bufId, team.role(p)(0), orgSrc, orgDst, predSigma);
                        }    
                    }
                }
            };
            currentTraverseQ().examine(traverse);
            _flushAll();
            team.barrier(role);
        }
    }
    
    private def visit(orgSrc: Long, orgDst: Long, predSigma: Long) {
        val localDst = OrgToLocSrc(orgDst);
        
        add_and_fetch[Long](pathCount(), localDst, predSigma);
        
        if(add_and_fetch[Int](numVisits(), localDst, 1) == predecessors()(localDst).size()) {
            nextTraverseQ().set(localDst);
        }
    }
    
    private def updateScore() {
        val bufSize = lch().BUFFER_SIZE;
        val numTask = lch().NUM_TASK;
        val predBuf = lch().predBuf;
        val deltaBuf = lch().deltaBuf;
        val sigmaBuf = lch().sigmaBuf;
        val muBuf = lch().muBuf;
        val clearBuffer = (bufId: Int, pid: Int) => {
            predBuf(bufId)(pid).clear();
            deltaBuf(bufId)(pid).clear();
            sigmaBuf(bufId)(pid).clear();
            muBuf(bufId)(pid).clear();
        };
        val _flush = (bufId: Int, pid: Int) => {
            val preds = predBuf(bufId)(pid).toArray();
            val delta = deltaBuf(bufId)(pid).toArray();
            val sigma = sigmaBuf(bufId)(pid).toArray();
            val mu = muBuf(bufId)(pid).toArray();
            val p = team.place(pid);
            at (p) {
                for(k in 0..(preds.size - 1)) {
                    val pred = preds(k);
                    calDependency(mu(k), delta(k), sigma(k), preds(k));
                }
            }
            clearBuffer(bufId, pid);
        };
        val _flushAll = () => {
            finish for (i in 0..(numTask -1))
                async for ( ii in 0..(team.size() -1)) {
                    if (predBuf(i)(ii).size() > 0)
                        _flush(i, ii);
                }
        };
        val calRemote = (bufId: Int, pid: Int, mu: Double, delta: Double, signma: Long, pred: Vertex) => {
            if (predBuf(bufId)(pid).size() >= bufSize) {  
                _flush(bufId, pid);
            } 
            muBuf(bufId)(pid).add(mu);
            deltaBuf(bufId)(pid).add(delta);
            sigmaBuf(bufId)(pid).add(signma);
            predBuf(bufId)(pid).add(pred);
        };
        while(true) {
            swapUpdateScoreQ();
            backtrackingNextQ().clearAll();
            team.barrier(role);
            // Check wether there is a vertex on such a place
            val maxVertexCount = team.allreduce(role, backtrackingCurrentQ().setBitCount(), Team.MAX);
            if (maxVertexCount == 0L)
                break;
            val traverse = (localSucc: Vertex, threadId: Int) => {           
                val predList = predecessors()(localSucc);
                val orgSucc = LocSrcToOrg(localSucc);
                if (predList != null && predList.size() > 0) {
                    val sz = predList.size();
                    for (i in 0..(sz - 1)) {  
                        val pred = predList(i);
                        val w_sigma = pathCount()(localSucc);
                        val w_delta = dependencies()(localSucc);
                        val w_mu = distance()(localSucc);
                        if (isLocalVertex(pred))  {
                            calDependency(w_mu, w_delta, w_sigma, pred);
                        } else {
                            val bufId = threadId;
                            val pid = getVertexPlaceRole(pred);
                            calRemote(threadId, pid, w_mu, w_delta, w_sigma, pred);
                        }    
                    }
                }
            };
            backtrackingCurrentQ().examine(traverse);
            _flushAll();
            team.barrier(role);
        }
    }
        
    private def calDependency(w_mu: Double, w_delta: Double, w_sigma: Long, v: Vertex) {
        val inst = lch();
        val locPred = OrgToLocSrc(v);
        
        while (true) {
            // non-blocking mutual exclusion
            // increase semaphore
            if (compare_and_swap[Long](inst.semaphore, locPred, 0, 1)) {
                val numUpdates = add_and_fetch[Int](numUpdates(), locPred, 1);
                val sigma = pathCount()(locPred);
                // val tmp_w_delta = w_delta;
                var dep: Double = 0;
                if (lch().linearScale) {
                    dep = dependencies()(locPred) + (distance()(locPred) as Double / w_mu) * (sigma / w_sigma as Double) * (1 + w_delta);
                } else {
                    dep = dependencies()(locPred) + ((sigma as Double)/ w_sigma ) * (1 + w_delta);
                }
                dependencies()(locPred) = dep;
                
                if(numUpdates == successorCount()(locPred)) {
                    if (v != lch().currentSource()) {
                        score()(locPred) = score()(locPred) + dependencies()(locPred);
                    }
                    backtrackingNextQ().set(locPred);
                }
                while(true){
                    if(compare_and_swap[Long](inst.semaphore, locPred, 1, 0))
                        break;
                }
                break;
            }
        }
    }
}