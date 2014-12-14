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

import x10.compiler.Ifndef;
import x10.compiler.Inline;
import x10.compiler.Native;
//import x10.io.SerialData;
import x10.io.Serializer;
import x10.io.Deserializer;
import x10.io.File;
import x10.io.FileReader;
import x10.io.IOException;
import x10.util.ArrayList;
//import x10.util.IndexedMemoryChunk;
import x10.util.concurrent.AtomicLong;
import x10.util.Team;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.Parallel;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.graph.Graph;
import org.scalegraph.blas.SparseMatrix;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.Bitmap2;

/**
 * Traverse graph in level-synchronous bfs fashion
 * <p>
 * Reference:
 * <br>Arjomandi, Eshrat, and D. G. Corneil. "Parallel computations in graph theory." Foundations of Computer Science, 1975., 16th Annual Symposium on. IEEE, 1975.
 * 
 */
public class LsBfsVisitor implements x10.io.CustomSerialization {
    
    private static type Vertex = Long;
    private static type Distance = Long;
    public static type LsBFSHandler = (v: Vertex, pred: Vertex, isFirstVisit: Boolean, dist: Distance) => void;
    
    private val team: Team;
    private val lgl: Int;
    private val lgc: Int;
    private val lgr: Int;
    private val role: Int;
    private val localGraph: SparseMatrix[Long];
    
    public static class LocalState {
        // 1D CSR graph
        val _distSparseMatrix: DistSparseMatrix[Long];
        
        val _source: Cell[Vertex];
        val _queues: Rail[Bitmap2];
        
        // poniters of current queue and next queue
        val _qPointer: Cell[Int];
        
        // current distance from source
        val _currentLevel: Cell[Long];
        
        // the number of local vertices
        val _numLocalVertices: Long;
        
        val _NUM_TASK: Int;
        val _BUFFER_SIZE: Int;
        val _ALIGN = 64;
        val _CONGRUENT = false;
        
        // distance from source
        val _distanceMap: Rail[Long];    
        
        /* Buffer stuffs*/
        val _predBuf: Rail[Rail[ArrayList[Vertex]]];
        val _succBuf: Rail[Rail[ArrayList[Vertex]]];   
        
        val _handler: LsBFSHandler;
        
        protected def this(dsm: DistSparseMatrix[Long],
                           buffSize: Int,
                           h: LsBFSHandler,
                           src: Long) {
            val t = dsm.dist().allTeam();
            _BUFFER_SIZE = buffSize;
            _NUM_TASK = Runtime.NTHREADS;
            _distSparseMatrix = dsm;
            _numLocalVertices = dsm.ids().numberOfLocalVertexes();
            _handler = h;
            
            _source = new Cell[Vertex](src);
            //_queues = IndexedMemoryChunk.allocateUninitialized[Bitmap2](2,
            _queues = Unsafe.allocRailUninitialized[Bitmap2](2);
                            //_ALIGN,
                            //_CONGRUENT);
            _queues(0) = new Bitmap2(_numLocalVertices);
            _queues(1) = new Bitmap2(_numLocalVertices);
            _qPointer = new Cell[Int](0n);
            _currentLevel = new Cell[Long](0);
            
            _distanceMap = Unsafe.allocRailZeroed[Long](
                    _numLocalVertices//,
                    //_ALIGN,
                    //_CONGRUENT);
			);
       
            // Init loop
            for (i in 0..(_numLocalVertices - 1)) {
                _distanceMap(i) = 0L;
            }
            _predBuf = new Rail[Rail[ArrayList[Vertex]]](_NUM_TASK,
                    (Long) => new Rail[ArrayList[Vertex]](t.size(),
                            (Long) => new ArrayList[Vertex](buffSize)));
            _succBuf = new Rail[Rail[ArrayList[Vertex]]](_NUM_TASK,
                    (Long) => new Rail[ArrayList[Vertex]](t.size(),
                            (Long) => new ArrayList[Vertex](buffSize)));

        }
    }
    
    // hold local stat for each place
    private val lch:PlaceLocalHandle[LocalState];
    
    private def this(lch_:PlaceLocalHandle[LocalState]) {
        // Set local state
        lch  = lch_;
        val dsm = lch_()._distSparseMatrix;
        team = 	dsm.dist().allTeam();
        lgl = dsm.ids().lgl;
        lgc = dsm.ids().lgc;
        lgr = dsm.ids().lgr;
        role = team.role(here)(0);
        localGraph = dsm();
    }
    
    ///* Serialize function */
    //public def serialize(): SerialData {
    //    return new SerialData(lch, null);
    //}
    //
    ///* Deserialize function */
    //public def this (serialData: SerialData) {
    //    this(serialData.data as PlaceLocalHandle[LocalState]);
    //}

	public def this(data : Deserializer){
        this(data.readAny() as PlaceLocalHandle[LocalState]);
	}
	public def serialize(s:Serializer) {
		s.writeAny(lch);
	}

    
    /* GCC Built-in atomic function interface */
    @Native("c++", "__sync_bool_compare_and_swap((#imc)->raw + #index, #oldVal, #newVal)")
    private static native def compare_and_swap[T](imc: Rail[T], index: Long, oldVal: T, newVal: T): Boolean;
    
    @Native("c++", "__sync_val_compare_and_swap((#imc)->raw + #index, #oldVal, #newVal)")
    private static native def compare_and_swap_val[T](imc: Rail[T], index: Long, oldVal: T, newVal: T): T;
    
    @Native("c++", "__sync_fetch_and_add((#imc)->raw + #index, #value)")
    private static native def fetch_and_add[T](imc: Rail[T], index: Long, value: T): T;
    
    @Native("c++", "__sync_add_and_fetch((#imc)->raw + #index, #value)")
    private static native def add_and_fetch[T](imc: Rail[T], index: Long, value: T): T;

    /**
     * Factory method for creating visitor
     * @param csr csr representation of a graph
     * @param h handler for handling event when visit a node
     * @param source source vertex 
     */
    public static def make(csr: DistSparseMatrix[Long], h: LsBFSHandler, source: Vertex) {
        val team = csr.dist().allTeam();
        val places = team.placeGroup();
        // Create local state for LsBfs on each place in team
        val transBufferSize = (1 << 10);
        val localState = PlaceLocalHandle.make[LocalState](places, 
                () => { 
                    return (new LocalState(csr,
                                           transBufferSize as Int,
                                           h,
                                           source));
                });
        return new LsBfsVisitor(localState);
    }
    
    /**
     * Start traversing graph
     */
    public def run() {
        internalRun();
    }
    
    /**
     * Set new source vertex
     * @param v a new source vertex
     */
    public def setSource(v: Vertex) {
        finish for(p in team.placeGroup()) {
            at (p) async {
                lch()._source() = v;
            }
        }
    }
    
    /**
     * Clear memory used by visitor
     */
    public def del() {
        // TODO: clear all reference
    }
    
    private def internalRun() {
        val placeGroup = team.placeGroup();
        finish {
            for (p in placeGroup) { 
                at (p) async {
                    traverse();
                }
            }
        }
    }
    
    @Inline
    private def clear() {
        nextQ().clearAll();
        currentQ().clearAll();
        lch()._currentLevel() = 0L;
        for (i in 0..(lch()._numLocalVertices - 1)) {
            lch()._distanceMap(i) = 0L;
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
    private def currentQ() = lch()._queues(lch()._qPointer());
    
    @Inline
    private def nextQ() = lch()._queues((lch()._qPointer() + 1) & 1);
    
    @Inline
    private def swapQ() { lch()._qPointer() = (lch()._qPointer() + 1n) & 1n; }
    
    @Inline
    public def getVertexPlace(orgVertex: Vertex): Place {
        return team.place(getVertexPlaceRole(orgVertex));
    }
    
    @Inline
    public def getVertexPlaceRole(orgVertex: Vertex): Int {
        val vertexPlaceId = ((1 << (lgc + lgr)) -1) & orgVertex;
        return vertexPlaceId as Int;
    }
         
    private def traverse() {
        val bufSize = lch()._BUFFER_SIZE;
        val numTask = lch()._NUM_TASK;
        val predBuf = lch()._predBuf;
        val succBuf = lch()._succBuf;
        
        val clearBuffer = (bufId: Int, pid: Int) => {
            predBuf(bufId)(pid).clear();
            succBuf(bufId)(pid).clear();
        };
        val _flush = (bufId: Int, pid: Int) => {
            val preds = predBuf(bufId)(pid).toRail();
            val succs = succBuf(bufId)(pid).toRail();
            val count = preds.size;
            val p = team.place(pid);
            at (p)  {
                for(k in 0..(count - 1)) {
                    val lv = lch()._currentLevel();
                    visit(preds(k), succs(k), lv);
                }
            }
            clearBuffer(bufId, pid);
        };
        val _flushAll = () => {
            finish for (i in 0..(numTask -1))
                async for (ii in 0..(team.size() -1)) {
                    if (predBuf(i)(ii).size() > 0)
                        _flush(i as Int, ii as Int);
                }
        };
        val _visitRemote = (bufId: Int, pid: Int, pred: Vertex, succ: Vertex) => {
            if (predBuf(bufId)(pid).size() >= bufSize) {  
                _flush(bufId, pid);
            } 
            predBuf(bufId)(pid).add(pred);
            succBuf(bufId)(pid).add(succ);
        };
        // put source
        val src = lch()._source();
        if (isLocalVertex(src)) {
            val locSrc = OrgToLocSrc(src);
            nextQ().set(locSrc);
            lch()._distanceMap(locSrc) = 0L;
        }
        while(true) {
            swapQ();
            nextQ().clearAll();
            // Check wether there is a vertex on such a place
            val maxVertexCount = team.allreduce(//role,
                    currentQ().setBitCount(),
                    Team.MAX);
            if (maxVertexCount == 0L)
                break;
            val traverse = (localSrc: Vertex, threadId: Int) => {           
                val neighbors = localGraph.adjacency(localSrc);
                val predDistance = lch()._distanceMap(localSrc);
                val orgSrc = LocSrcToOrg(localSrc);                        
                for(i in neighbors.range()) {
                    val orgDst = LocDstToOrg(neighbors(i));
                    if (isLocalVertex(orgDst))  {
                        visit(orgSrc, orgDst, predDistance);
                    } else {
                        val bufId = threadId;
                        val p: Place = getVertexPlace(orgDst);
                        _visitRemote(bufId, team.role(p)(0), orgSrc, orgDst);
                    }    
                }
            };
            currentQ().examine(traverse);
            _flushAll();
            team.barrier();
            lch()._currentLevel(lch()._currentLevel() + 1);
        }
    }
    
    public def visit(orgSrc: Long, orgDst: Long, predDistance: Long) {
        val localDst = OrgToLocSrc(orgDst);
        val d = predDistance + 1;
        if (compare_and_swap(lch()._distanceMap, localDst, 0L, d)) {
            // First visit
            nextQ().set(localDst);
            lch()._distanceMap(localDst) = d;
            lch()._handler(orgDst, orgSrc, true, d);
        } else if (lch()._distanceMap(localDst) == d){
            // Another shortest path
            lch()._handler(orgDst, orgSrc, false, d);
        }
    }
    
    protected static def iter(range :LongRange, func :(Long, Int) => void) {
        val size = range.max - range.min + 1;
        if (size == 0L)
            return;
        val nthreads = Math.min(Runtime.NTHREADS as Long, size);
        val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1L);  
        finish for(i in 0..(nthreads-1)) {
            val i_start = range.min + i * chunk_size;
            val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
            val threadId = i as Int;
            async for(ii in i_range) {
                func(ii, threadId);
            }
        }
    }
}
