/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package org.scalegraph.visitor;

import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.blas.SparseMatrix;
import org.scalegraph.util.MemoryChunk;
import x10.util.IndexedMemoryChunk;
import x10.util.ArrayList;
import org.scalegraph.util.Bitmap2;
import x10.util.GrowableIndexedMemoryChunk;
import x10.util.Team;
import x10.io.SerialData;
import x10.compiler.Inline;
import x10.compiler.Native;

public class DeltaSteppingVisitor {
    
    private static type Vertex = Long;
    private static type Distance = Double;
    public static type DeltaSteppingHandler = (v: Vertex, pred: Vertex, isFirstVisit: Boolean, dist: Distance) => void;
    
    private val MAX_BUCKET_INDEX = Int.MAX_VALUE;
    
    private static type Bucket = Array[Bitmap2]{self.size == 2};
    private static type Buckets = GrowableIndexedMemoryChunk[Bucket];
    private static type BucketIndex = Int;
    
    private val lch: PlaceLocalHandle[LocalState];
    
    private val team: Team;
    private val places: PlaceGroup;
    private val lgl: Int;
    private val lgc: Int;
    private val lgr: Int;
    private val role: Int;
    
    private static class LocalState {
        val gCsr: DistSparseMatrix[Long];
        val gWeight: DistMemoryChunk[Double];
        val csr: SparseMatrix[Long];
        val weight: MemoryChunk[Double];
        val distance: IndexedMemoryChunk[Double];
        val predecessors: IndexedMemoryChunk[ArrayList[Vertex]];
        val deferredVertex: Bitmap2;
        val delta: Int;
        
        val currentSource: Cell[Vertex];
        val currentBucketIndex: Cell[Int];
        val bucketQueuePointer: Cell[Int];
        val numLocalVertices: Long;
        // val numberOfVerticesInGraph: Long;
        
        val ALIGN = 64;
        val CONGRUENT = false;
        val BUFFER_SIZE: Int;
        val INIT_BUCKET_SIZE = 32;
        val NUM_TASK: Int;
        val buckets: Buckets;
        
        val semaphore: IndexedMemoryChunk[Long];
        
        // buffer
        val predBuf: Array[Array[ArrayList[Vertex]]];
        val succBuf: Array[Array[ArrayList[Vertex]]];
        val tentBuf: Array[Array[ArrayList[Double]]];
        val callBack: DeltaSteppingHandler;
        
        private def this (csr_: DistSparseMatrix[Long],
                          weight_: DistMemoryChunk[Double],
                          transferBufSize: Int,
                          source: Long,
                          delta_: Int,
                          h_: DeltaSteppingHandler) {
            gCsr = csr_;
            csr = gCsr();
            gWeight = weight_;
            weight = gWeight();
            BUFFER_SIZE = transferBufSize;
            numLocalVertices = gCsr.ids().numberOfLocalVertexes();
            // numberOfVerticesInGraph = vInGraph;
            currentSource = new Cell[Vertex](source);
            currentBucketIndex = new Cell[Int](0);
            bucketQueuePointer = new Cell[Int](0);
            NUM_TASK = Runtime.NTHREADS;
            delta = delta_;
            callBack = h_;
            
            distance = IndexedMemoryChunk.allocateZeroed[Double](
                    numLocalVertices,
                    ALIGN,
                    CONGRUENT);
            predecessors = IndexedMemoryChunk.allocateZeroed[ArrayList[Vertex]](
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
                distance(i) = Double.MAX_VALUE;
            }

            val team = gCsr.dist().allTeam();
            predBuf = new Array[Array[ArrayList[Vertex]]](NUM_TASK,
                    (int) => new Array[ArrayList[Vertex]](team.size(),
                            (int) => new ArrayList[Vertex](transferBufSize)));
            succBuf = new Array[Array[ArrayList[Vertex]]](NUM_TASK,
                    (int) => new Array[ArrayList[Vertex]](team.size(),
                            (int) => new ArrayList[Vertex](transferBufSize)));
            tentBuf = new Array[Array[ArrayList[Double]]](NUM_TASK,
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
    
    /**
     * Factory method for creating visitor
     * @param csr csr representation of a graph
     * @param h handler for handling event when visit a node
     * @param source source vertex 
     */
    public static def make(csr: DistSparseMatrix[Long], weight:DistMemoryChunk[Double], source: Vertex, delta: Int, h: DeltaSteppingHandler) {
        val team = csr.dist().allTeam();
        val places = team.placeGroup();
        // Create local state for LsBfs on each place in team
        val transBufferSize = (1 << 10);
        val localState = PlaceLocalHandle.make[LocalState](places, 
                () => { 
                    return (new LocalState(csr,
                                           weight,
                                           transBufferSize,
                                           source,
                                           delta,
                                           h));
                });
        return new DeltaSteppingVisitor(localState);
    }    
    
    public def run() { 
        team.placeGroup().broadcastFlat(() => {
            deltaStepping();
        });
    }
    
    public def setSource(src: Vertex) {
        team.placeGroup().broadcastFlat(() => {
            lch().currentSource() = src;
        });
    }
    
    public def clear() {
        // clear data local data
        val numLocalVertices = lch().numLocalVertices;
        for (i in 0..(lch().numLocalVertices - 1)) {
            lch().distance(i) = Double.MAX_VALUE;
            
            if(lch().predecessors(i) != null)
                lch().predecessors(i).clear();
        }   

        lch().currentBucketIndex() = 0;
        lch().bucketQueuePointer() = 0;
        
        for (i in 0..(buckets().capacity() - 1)) {
            buckets()(i)(0).clearAll();
            buckets()(i)(1).clearAll();
        }
    }
    
    @Inline
    private def isLocalVertex(orgVertex: Vertex): Boolean {
        val vertexPlace = ((1 << (lgc + lgr)) -1) & orgVertex;
        if(vertexPlace == role as Long)
            return true;
        return false;
    }
    
    @Inline
    private def OrgToLocSrc(v: Vertex) 
    = (( v & (( 1 << lgr) -1)) << lgl) | (v >> (lgr + lgc));
    
    @Inline
    private def LocSrcToOrg(v: Vertex)
    = ((((v & (( 1 << lgl) -1)) << lgc)| role) << lgr) | (v>> lgl);
    
    @Inline
    private def LocDstToOrg(v: Vertex)
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
        
    /* GCC Built-in atomic function interface */
    @Native("c++", "__sync_bool_compare_and_swap((#imc)->raw() + #index, #oldVal, #newVal)")
    private static native def compare_and_swap[T](imc: IndexedMemoryChunk[T], index: Long, oldVal: T, newVal: T): Boolean;
    
    @Native("c++", "__sync_add_and_fetch((#imc)->raw() + #index, #value)")
    private static native def add_and_fetch[T](imc: IndexedMemoryChunk[T], index: Long, value: T): T;
    
    
    private def deltaStepping() {
        val bufSize = lch().BUFFER_SIZE;
        val NUM_TASK = lch().NUM_TASK;
        val bufferV = lch().predBuf;
        val bufferW = lch().succBuf;
        val bufferX = lch().tentBuf;
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
        //// Console.OUT.println("Before loop");
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
                    lch().callBack(v, w, false, tentative);

                } else if (tentative == wDist && v != w) {
                    if (!predecessors()(localW).contains(v)) {
                        predecessors()(localW).add(v);
                        lch().callBack(v, w, false, tentative);
                    }
                }
                while(true){
                    if(compare_and_swap[Long](lch().semaphore, localW, 1, 0))
                        break;
                }
                break;
            } 
        }
    }   
}