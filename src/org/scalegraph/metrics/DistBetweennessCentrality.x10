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

import x10.compiler.Ifndef;
import x10.compiler.Inline;
import x10.compiler.Native;
import x10.util.concurrent.Lock;
import x10.io.SerialData;
import x10.io.File;
import x10.io.FileReader;
import x10.io.IOException;
import x10.util.ArrayList;
import x10.util.IndexedMemoryChunk;
import x10.util.concurrent.AtomicLong;
import x10.util.Team;

import org.scalegraph.util.Dist2D;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.graph.Graph;
import org.scalegraph.blas.SparseMatrix;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.Bitmap2;
import org.scalegraph.Config;

public type Vertex = Long;
public type Distance = Long;

/**
 * A class for computing betweenness centrality for large-scale unweigheted graphs.
 * The implementation is based on Brandes's alogorthm[1] and Edmonds' algorithm[2].
 * The linear-scaling technique[3] is also available for improving the estimation result.
 * 
 * <br><br>
 * Reference:
 * <br>[1] Brandes, Ulrik. "A faster algorithm for betweenness centrality*." Journal of Mathematical Sociology 25.2 (2001): 163-177.
 * <br>[2] Edmonds, Nick, Torsten Hoefler, and Andrew Lumsdaine. "A space-efficient parallel algorithm for computing betweenness centrality in distributed memory." High Performance Computing (HiPC), 2010 International Conference on. IEEE, 2010.
 * <br>[3] Geisberger, Robert, Peter Sanders, and Dominik Schultes. "Better approximation of betweenness centrality." Proceedings of the 10th Workshop on Algorithm Engineering and Experimentation (ALENEX08). To appear. 2008.
 */
public class DistBetweennessCentrality implements x10.io.CustomSerialization {
    private val team: Team;
    private val lgl: Int;
    private val lgc: Int;
    private val lgr: Int;
    private val role: Int;
    private val localGraph: SparseMatrix[Long];
    
    public static class LocalState {
        // 1D CSR graph
        val _distSparseMatrix: DistSparseMatrix[Long];
        
        val _currentSource: Cell[Vertex];
        val _queues: IndexedMemoryChunk[Bitmap2];
        
        // poniters of current queue and next queue
        val _qPointer: Cell[Int];
        
        // current distance from source
        val _currentLevel: Cell[Long];
        
        // the number of local vertices
        val _numLocalVertices: Long;
        
        // betweenness centrality score
        val _score: IndexedMemoryChunk[Double];
        
        // the number of vertices in graph
        val _numberOfVerticesInGraph: Long;
        val _isNormalize: Boolean;
        
        // linear-scaling flag
        val _linearScale: Boolean;
        
        /* Sources stuffs */
        val _sources: Array[Vertex];
        val _sourceRange: LongRange;
        val _numSource: Long;
        
        val _NUM_TASK: Int;
        val _BUFFER_SIZE: Int;
        val _ALIGN = 64;
        val _CONGRUENT = false;
        
        // distance from source
        val _distanceMap: IndexedMemoryChunk[Long];
        
        // predecessor list in bfs-graph
        val _predMap: IndexedMemoryChunk[ArrayList[Long]];
        
        // the number of predecessor
        val _successorCount: IndexedMemoryChunk[Long];
        
        // the number of geodesic paths passing through a vertex
        val _pathCount: IndexedMemoryChunk[Long];
        
        // vertex dependecies
        val _dependencies: IndexedMemoryChunk[Double];
        val _dependenciesLock: IndexedMemoryChunk[Lock];
                
        /* Back tracking stuff */
        val _backtrackingQueues: IndexedMemoryChunk[Bitmap2];
        val _backtrackingQPointer: Cell[Int];
        // The number of vertex's successor that has called back 
        val _numUpdate: IndexedMemoryChunk[Long];
        
        /* Buffer stuffs*/
        val _predBuf: Array[Array[ArrayList[Vertex]]];
        val _succBuf: Array[Array[ArrayList[Vertex]]];
        val _deltaBuf: Array[Array[ArrayList[Double]]];
        val _sigmaBuf: Array[Array[ArrayList[Long]]];
        val _muBuf: Array[Array[ArrayList[Long]]];                
        
        protected def this(dsm: DistSparseMatrix[Long],
                           buffSize: Int,
                           nAllVerticesInG: Long,
                           nSrc: Long,
                           srcs: Array[Vertex],
                           srcRange: LongRange,
                           norm: Boolean,
                           linearScale: Boolean) {
            
            val t = dsm.dist().allTeam();
            _BUFFER_SIZE = buffSize;
            _NUM_TASK = Runtime.NTHREADS;
            _distSparseMatrix = dsm;
            _numberOfVerticesInGraph = nAllVerticesInG;
            _numLocalVertices = dsm.ids().numberOfLocalVertexes();
            _isNormalize = norm;
            _linearScale = linearScale;
            _sources = srcs;
            _numSource = nSrc;
            _sourceRange = srcRange;
            _currentSource = new Cell[Vertex](0);
            _queues = IndexedMemoryChunk.allocateUninitialized[Bitmap2](2,
                            _ALIGN,
                            _CONGRUENT);
            _queues(0) = new Bitmap2(_numLocalVertices);
            _queues(1) = new Bitmap2(_numLocalVertices);
            _qPointer = new Cell[Int](0);
            _currentLevel = new Cell[Long](0);
            
            _score = IndexedMemoryChunk.allocateZeroed[Double](
                    _numLocalVertices,
                    _ALIGN,
                    _CONGRUENT);
            _distanceMap = IndexedMemoryChunk.allocateZeroed[Long](
                    _numLocalVertices,
                    _ALIGN,
                    _CONGRUENT);
            _predMap =IndexedMemoryChunk.allocateUninitialized[ArrayList[Long]](
                    _numLocalVertices,
                    _ALIGN,
                    _CONGRUENT);
            _successorCount = IndexedMemoryChunk.allocateUninitialized[Long](
                    _numLocalVertices,
                    _ALIGN,
                    _CONGRUENT);
            _pathCount = IndexedMemoryChunk.allocateZeroed[Long](
                    _numLocalVertices, 
                    _ALIGN, 
                    _CONGRUENT);
            _dependencies = IndexedMemoryChunk.allocateZeroed[Double](
                    _numLocalVertices, 
                    _ALIGN, 
                    _CONGRUENT);
            _dependenciesLock = IndexedMemoryChunk.allocateZeroed[Lock](
                    _numLocalVertices, 
                    _ALIGN, 
                    _CONGRUENT);

            // Create queue for updating score
            _backtrackingQueues = IndexedMemoryChunk.allocateUninitialized[Bitmap2](
                    2, 
                    _ALIGN,
                    _CONGRUENT);
            _backtrackingQueues(0) = new Bitmap2(_numLocalVertices);
            _backtrackingQueues(1) = new Bitmap2(_numLocalVertices);
            _backtrackingQPointer = new Cell[Int](0);
            _numUpdate = IndexedMemoryChunk.allocateZeroed[Long](
                    _numLocalVertices, 
                    _ALIGN, 
                    _CONGRUENT);
                            
            // Init loop
            for (i in 0..(_numLocalVertices - 1)) {
                _distanceMap(i) = 0L;
                _predMap(i) = null;
                _successorCount(i) = 0;
                _pathCount(i) = 0L;
                _numUpdate(i) = 0;
                _dependencies(i) = 0D;
                _dependenciesLock(i) = new Lock();
                _score(i) = 0D;
            }
            _predBuf = new Array[Array[ArrayList[Vertex]]](_NUM_TASK,
                    (int) => new Array[ArrayList[Vertex]](t.size(),
                            (int) => new ArrayList[Vertex](buffSize)));
            _succBuf = new Array[Array[ArrayList[Vertex]]](_NUM_TASK,
                    (int) => new Array[ArrayList[Vertex]](t.size(),
                            (int) => new ArrayList[Vertex](buffSize)));
            _deltaBuf = new Array[Array[ArrayList[Double]]](_NUM_TASK,
                    (int) => new Array[ArrayList[Double]](t.size(),
                            (int) => new ArrayList[Double](buffSize)));
            _sigmaBuf = new Array[Array[ArrayList[Long]]](_NUM_TASK,
                    (int) => new Array[ArrayList[Long]](t.size(),
                            (int) => new ArrayList[Long](buffSize)));
            _muBuf = new Array[Array[ArrayList[Long]]](_NUM_TASK,
                    (int) => new Array[ArrayList[Long]](t.size(),
                            (int) => new ArrayList[Long](buffSize)));
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
    
    /* Serialize function */
    public def serialize(): SerialData {
        return new SerialData(lch, null);
    }
    
    /* Deserialize function */
    public def this (serialData: SerialData) {
        this(serialData.data as PlaceLocalHandle[LocalState]);
    }
    
    /* GCC Built-in atomic function interface */
    @Native("c++", "__sync_bool_compare_and_swap((#imc)->raw() + #index, #oldVal, #newVal)")
    private static native def compare_and_swap[T](imc: IndexedMemoryChunk[T], index: Long, oldVal: T, newVal: T): Boolean;
    
    @Native("c++", "__sync_val_compare_and_swap((#imc)->raw() + #index, #oldVal, #newVal)")
    private static native def compare_and_swap_val[T](imc: IndexedMemoryChunk[T], index: Long, oldVal: T, newVal: T): T;
    
    @Native("c++", "__sync_fetch_and_add((#imc)->raw() + #index, #value)")
    private static native def fetch_and_add[T](imc: IndexedMemoryChunk[T], index: Long, value: T): T;
    
    @Native("c++", "__sync_add_and_fetch((#imc)->raw() + #index, #value)")
    private static native def add_and_fetch[T](imc: IndexedMemoryChunk[T], index: Long, value: T): T;
    
    /**
     * Calculate exact betweenness centrality
     * <p> 
     * Note: Normalize factor - (N-1)*(N-2) for directed graph and (N-1)*(N-2)/2 for undirected graph
     * @param g A graph to compute betweenness centrality
     * @param directed how to treat directness of the graph, true - directed, false - directed
     * @param attrName name of graph attribute to store betweenness centraltiy score
     * @param normalize normalize result
     */
    public static def calculate(g: Graph, directed: Boolean, attrName: String, normalize: Boolean): void {
        val sourceRange = 0..(g.numberOfVertices() - 1);
        run(g, directed, attrName, normalize, -1, null, sourceRange, false, true);
    }
    
    /**
     * Estimate betweenness centrality, the source vertices will be random selected to number of sources given
     * @param g A graph to compute betweenness centrality
     * @param directed how to treat directness of the graph, true - directed, false - directed
     * @param attrName name of graph attribute to store betweenness centraltiy score
     * @param numSource the number of source vertices used to calculate betweenness centrality
     * @param linearScale use linear-scaling technique
     */
    public static def estimate(g: Graph, directed: Boolean, attrName: String, numSource: Long, linearScale: Boolean): void {
        run(g, directed, attrName, false, numSource, null, 0..(-1 as Long), linearScale, false);
    }
    
    /**
     * Estimate betweenness centrality
     * @param g A graph to compute betweenness centrality
     * @param directed how to treat directness of the graph, true - directed, false - directed
     * @param attrName name of graph attribute to store betweenness centraltiy score
     * @param sources the array of source vertices to calculate betweenness centrality
     * @param linearScale use linear-scaling technique
     */
    public static def estimate(g: Graph, directed: Boolean, attrName: String, sources: Array[Vertex], linearScale: Boolean): void {
        run(g, directed, attrName, false, -1, sources, 0..(-1 as Long), linearScale, false);
    }
    
    /**
     * Estimate betweenness centrality
     * @param g A graph to compute betweenness centrality
     * @param directed how to treat directness of the graph, true - directed, false - directed
     * @param attrName name of graph attribute to store betweenness centraltiy score
     * @param sourceRange the range of source vertex ids to calculate betweenness centrality
     * @param linearScale use linear-scaling technique
     */
    public static def estimate(g: Graph, directed: Boolean, attrName: String, sourceRange: LongRange, linearScale: Boolean): void {
        run(g, directed, attrName, false, -1, null, sourceRange, linearScale, false);
    }
    
    /**
     * Clear memory used by DistBetweennessCentrality
     */
    public def del() {
        // TODO: clear all reference
    }

    /* Should be used by designated API */
    public static def run(g: Graph, directed: Boolean, attrName: String, normalize: Boolean, numSource: Long, sources: Array[Vertex], sourceRange: LongRange, linearScale: Boolean, isExactBc: Boolean) {
        val team = g.team();
        val places = team.placeGroup();
        // Represent graph as CSR
        val csr = g.createDistEdgeIndexMatrix(
                Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS),
                directed,
                true);        
        // Create local state for BC on each place in team
        val transBufferSize = (1 << 10);
        
        // Workaround for init sources for exteral API
        val numSource_ = isExactBc ? -1L: numSource;
        val sources_ = isExactBc ? null: sources;
        val sourceRange_ = isExactBc ? 0..(g.numberOfVertices() - 1): sourceRange;
        val stopWatch = Config.get().stopWatch();
        stopWatch.lap("Graph construction");
        val localState = PlaceLocalHandle.make[LocalState](places, 
                () => { 
                    return (new LocalState(csr,
                            transBufferSize,
                            g.numberOfVertices(),
                            numSource_,
                            sources_,
                            sourceRange_,
                            normalize,
                            linearScale));
                });
        val bc = new DistBetweennessCentrality(localState);
        bc.start();
        // Normalize result
        val N = g.numberOfVertices();
        if (normalize) {
            finish for (p in places) {
                at (p) async {
                    internalIter(0..(bc.lch()._numLocalVertices -1), (i: Long) => {
                        val score = bc.lch()._score(i);
                        var frac: Double = (N - 1) * (N - 2);
                        if (!directed)
                            frac /= 2D;
                        bc.lch()._score(i) = score / (frac);
                    });
                }
            }
        } else if (!directed && isExactBc) {
            // Undirected grapth and exact bc --> result divive by 2
            finish for (p in places) {
                at (p) async {
                    internalIter(0..(bc.lch()._numLocalVertices -1), (i: Long) => {
                        val score = bc.lch()._score(i);
                        bc.lch()._score(i) = score / 2D;
                    });
                }
            }
        }
        // Return result as a graph attribute
        val result = new DistMemoryChunk[Double](places, () => {
            val r = new MemoryChunk[Double](localState()._score.length());
            for (i in 0..(r.size() -1))
                r(i) = localState()._score(i);
            return r;
        });
        // g.setVertexAttribute[Double](attrName, result);
        // //TODO: Remove this line for release
        // // bc.write("dat");
        // // This is workaround for creating vertex attribute for graph,
        // // This problem should be fixed by vertex translator or graph class
        // val vertexIds = new DistMemoryChunk[Long](places, () => {
        //     val id = new MemoryChunk[Long](localState()._score.length());
        //     for (i in 0..(id.size() -1))
        //         id(i) = bc.LocSrcToOrg(i);
        //     return id;
        // });
        // g.setVertexAttribute[Long]("name", vertexIds);
        stopWatch.lap("Betweenness centrality calculation");
        return result;
    }
    
    private def start() {
        // determine sources
        if (lch()._numSource > 0) {
            // generate random sources
            val numSrc = lch()._numSource;
            val numAllVertices = lch()._numberOfVerticesInGraph;
            val srcArray = new Array[Long](numAllVertices as Int, (i: Int) => i as Long);
            val r = new x10.util.Random(System.currentTimeMillis());
            for (i in 0..(srcArray.size -1)) {
                val index = r.nextLong(numAllVertices) as Int;
                val temp = srcArray(i);
                srcArray(i) = srcArray(index);
                srcArray(index) = temp;
            }
            for (i in 0..(numSrc - 1)) {
                computeForSource(srcArray(i as Int));
            }
        } else if (lch()._sources != null) {
            // use sources from given array           
            for (i in 0..(lch()._sources.size - 1)) {
                computeForSource(lch()._sources(i));
            }
        } else if (lch()._sourceRange.min >= 0 && lch()._sourceRange.max >= 0) {
            // use sources from given range
            for (i in lch()._sourceRange) {
                computeForSource(i);
            }
        }
    }
    
    private def computeForSource(src: Vertex) {
        val placeGroup = team.placeGroup();
        finish {
            for (p in placeGroup) { 
                at (p) async {
                    clear();
                    val locSrc = OrgToLocSrc(src);
                    var srcNeighbors: Long = 0;
                    if(isLocalVertex(src)) {
                        srcNeighbors = localGraph.adjacency(locSrc).size();
                    }
                    srcNeighbors = team.allreduce(role, srcNeighbors, Team.ADD);
                    if (srcNeighbors > 0L) {
                        // source has neighbor(s)
                        setLocalSource(src);
                        Runtime.x10rtBlockingProbe();
                        team.barrier(role);
                        
                        travelNonIncDist();
                        Runtime.x10rtBlockingProbe();
                        team.barrier(role);
                        
                        countSuccessor();	
                        Runtime.x10rtBlockingProbe();
                        team.barrier(role);
                        
                        addLeafNodeToUpdate();
                        Runtime.x10rtBlockingProbe();
                        team.barrier(role);
                        
                        backtracking(); 	
                        Runtime.x10rtBlockingProbe();
                        team.barrier(role);
                    }
                }
            }
        }
    }
    
    @Inline
    private def setLocalSource(v: Vertex) {
        lch()._currentSource() = v;
    }
    
    @Inline
    private def clear() {
        nextQ().clearAll();
        currentQ().clearAll();
        backtrackingCurrentQ().clearAll();
        backtrackingNextQ().clearAll();
        lch()._currentLevel() = 0L;
        val numLocalVertices = lch()._numLocalVertices;
        for (i in 0..(lch()._numLocalVertices - 1)) {
            lch()._distanceMap(i) = 0L;
            if (lch()._predMap(i) != null) {
                lch()._predMap(i).clear();
            }
        }
        
        lch()._successorCount.clear(0, numLocalVertices);
        lch()._pathCount.clear(0, numLocalVertices);
        lch()._numUpdate.clear(0, numLocalVertices);
        lch()._dependencies.clear(0, numLocalVertices);
    }
    
    @Inline
    public def isLocalVertex(orgVertex: Vertex): Boolean {
        val vertexPlace = ((1 << (lgc + lgr)) -1) & orgVertex;
        if(vertexPlace == role as Long)
            return true;
        return false;
    }
    
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
    private def swapQ() { lch()._qPointer() = (lch()._qPointer() + 1) & 1; }
     
    @Inline
    private def backtrackingCurrentQ() = lch()._backtrackingQueues(lch()._backtrackingQPointer());
    
    @Inline
    private def backtrackingNextQ() = lch()._backtrackingQueues((lch()._backtrackingQPointer() + 1) & 1);
   
    @Inline
    private def swapUpdateScoreQ() { lch()._backtrackingQPointer() = (lch()._backtrackingQPointer() + 1) & 1; }
    
    @Inline
    private def getVertexPlace(orgVertex: Vertex): Place {
        return team.place(getVertexPlaceRole(orgVertex));
    }
    
    @Inline
    private def getVertexPlaceRole(orgVertex: Vertex): Int {
        val vertexPlaceId = ((1 << (lgc + lgr)) -1) & orgVertex;
        return vertexPlaceId as Int;
    }
         
    private def travelNonIncDist() {
        val bufSize = lch()._BUFFER_SIZE;
        val numTask = lch()._NUM_TASK;
        val predBuf = lch()._predBuf;
        val succBuf = lch()._succBuf;
        val sigmaBuf = lch()._sigmaBuf;
        
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
                    val lv = lch()._currentLevel();
                    visit(preds(k), succs(k), lv, predSigma(k));
                }
            }
            clearBuffer(bufId, pid);
        };
        val _flushAll = () => {
            finish for (i in 0..(numTask -1))
                async for (ii in 0..(team.size() -1)) {
                    if (predBuf(i)(ii).size() > 0)
                        _flush(i, ii);
                }
        };
        val _visitRemote = (bufId: Int, pid: Int, pred: Vertex, succ: Vertex, predSigma: Long) => {
            if (predBuf(bufId)(pid).size() >= bufSize) {  
                _flush(bufId, pid);
            } 
            predBuf(bufId)(pid).add(pred);
            succBuf(bufId)(pid).add(succ);
            sigmaBuf(bufId)(pid).add(predSigma);
        };
        // put source
        val src = lch()._currentSource();
        if (isLocalVertex(src)) {
            val locSrc = OrgToLocSrc(src);
            nextQ().set(locSrc);
            lch()._distanceMap(locSrc) = 0L;
            lch()._pathCount(locSrc) = 1L;
        }
        while(true) {
            swapQ();
            nextQ().clearAll();
            // Check wether there is a vertex on such a place
            val maxVertexCount = team.allreduce(role,
                    currentQ().setBitCount(),
                    Team.MAX);
            if (maxVertexCount == 0L)
                break;
            val traverse = (localSrc: Vertex, threadId: Int) => {           
                val neighbors = localGraph.adjacency(localSrc);
                val predDistance = lch()._distanceMap(localSrc);
                val predSigma = lch()._pathCount(localSrc);
                val orgSrc = LocSrcToOrg(localSrc);                        
                for(i in neighbors.range()) {
                    val orgDst = LocDstToOrg(neighbors(i));
                    if (isLocalVertex(orgDst))  {
                        visit(orgSrc, orgDst, predDistance, predSigma);
                    } else {
                        val bufId = threadId;
                        val p: Place = getVertexPlace(orgDst);
                        _visitRemote(bufId, team.role(p)(0), orgSrc, orgDst, predSigma);
                    }    
                }
            };
            currentQ().examine(traverse);
            _flushAll();
            team.barrier(role);
            lch()._currentLevel(lch()._currentLevel() + 1);
        }
    }
    
    public def visit(orgSrc: Long, orgDst: Long, predDistance: Long, predSigma: Long) {
        val localDst = OrgToLocSrc(orgDst);
        val d = predDistance + 1;
        val f = () => {
            var predMap: ArrayList[Long] = compare_and_swap_val[ArrayList[Long]](lch()._predMap, localDst, null, new ArrayList[Long]());    
            if (predMap == null) { 
                predMap = lch()._predMap(localDst);
            }
            // add predecessor
            atomic predMap.add(orgSrc);
            // increase the number of geodesic paths
            add_and_fetch[Long](lch()._pathCount, localDst, predSigma);
        };
        if (compare_and_swap(lch()._distanceMap, localDst, 0L, d)) {
            // First visit
            nextQ().set(localDst);
        }         
        if (lch()._distanceMap(localDst) == d){
            // Another shortest path
            f();
        }
    }
    
    private def countSuccessor() {
        val bufSize = lch()._BUFFER_SIZE;
        val numTask = lch()._NUM_TASK;
        val predBuf = lch()._predBuf;
        val clearBuffer = (bufId: Int, pid: Int) => {
            predBuf(bufId)(pid).clear();
        };        
        val _flush = (bufId: Int, pid: Int) => {
            val preds = predBuf(bufId)(pid).toArray();
            val p = team.place(pid);
            at (p) {
                for(k in 0..(preds.size - 1)) {
                    val pred = preds(k);
                    val locPred = OrgToLocSrc(pred);
                    add_and_fetch[Long](lch()._successorCount, locPred, 1L);
                }
            }
            clearBuffer(bufId, pid);
        };
        val _flushAll = () => {
            finish for (i in 0..(numTask -1)) {
                val taskId = i;
                async for (ii in 0..(team.size() -1)) {
                    if (predBuf(i)(ii).size() > 0)
                        _flush(taskId, ii);
                }
            }
        };
        val addRemote = (bufId: Int, pid: Int, pred: Vertex) => {
            if (predBuf(bufId)(pid).size() >= bufSize) {  
                _flush(bufId, pid);
            }    
            predBuf(bufId)(pid).add(pred);
        };
        val examine = (threadId: Long, r: LongRange) => {
            for (i in r) {
                if (lch()._predMap(i) != null 
                        && lch()._predMap(i).size() > 0) {  
                    val sz = lch()._predMap(i).size();
                    for (k in 0..(sz -1)) {  
                        val pred = lch()._predMap(i)(k);
                        val locPred = OrgToLocSrc(pred);
                        if (isLocalVertex(pred))  {
                            fetch_and_add[Long](lch()._successorCount, locPred, 1);
                        } else {
                            val targetRole = team.role(getVertexPlace(pred))(0);
                            addRemote(threadId as Int, targetRole, pred);
                        }    
                    }
                }   
            }
        }; 
        // iter(0..(lch()._numLocalVertices - 1), examine);
        internalIter(0..(lch()._numLocalVertices - 1), examine);

        _flushAll();
    }
    
    private def addLeafNodeToUpdate() {
        val checkNode = (threadId: Long, r: LongRange) => {
            for (i in r) {
                if (lch()._predMap(i) != null 
                        && lch()._predMap(i).size() > 0
                        && lch()._successorCount(i) == 0L) {
                    backtrackingNextQ().set(i);
                } 
            }
        };
        internalIter(0..(lch()._numLocalVertices - 1), checkNode);
    }
    
    private def backtracking() {
        val bufSize = lch()._BUFFER_SIZE;
        val numTask = lch()._NUM_TASK;
        val predBuf = lch()._predBuf;
        val deltaBuf = lch()._deltaBuf;
        val sigmaBuf = lch()._sigmaBuf;
        val muBuf = lch()._muBuf;
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
        val calRemote = (bufId: Int, pid: Int, mu: Long, delta: Double, signma: Long, pred: Vertex) => {
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
                val predList = lch()._predMap(localSucc);
                val orgSucc = LocSrcToOrg(localSucc);
                if (predList != null && predList.size() > 0) {
                    val sz = predList.size();
                    for (i in 0..(sz -1)) {  
                        val pred = predList(i);
                        val w_sigma = lch()._pathCount(localSucc);
                        val w_delta = lch()._dependencies(localSucc);
                        val w_mu = lch()._distanceMap(localSucc);
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
    
    private def calDependency(w_mu: Long, w_delta: Double, w_sigma: Long, v: Vertex) {
        val locPred = OrgToLocSrc(v);
        val numUpdates = add_and_fetch[Long](lch()._numUpdate, locPred, 1L);
        val sigma = lch()._pathCount(locPred) as Double;
        
        lch()._dependenciesLock(locPred).lock();
        var dep: Double = 0;
        if (lch()._linearScale) {
            dep = lch()._dependencies(locPred) + (lch()._distanceMap(locPred) as Double / w_mu) * (sigma / w_sigma as Double) * (1 + w_delta);
        } else {
            dep = lch()._dependencies(locPred) + ((sigma as Double)/ w_sigma ) * (1 + w_delta);
        }
        lch()._dependencies(locPred) = dep;
        lch()._dependenciesLock(locPred).unlock();
        
        if(numUpdates == lch()._successorCount(locPred)) {
            if (LocSrcToOrg(locPred) != lch()._currentSource())
                lch()._score(locPred) = lch()._score(locPred) + lch()._dependencies(locPred);
            backtrackingNextQ().set(locPred);
        }
        assert(lch()._successorCount(locPred) > 0 
               && lch()._numUpdate(locPred) <= lch()._successorCount(locPred));
    }
}