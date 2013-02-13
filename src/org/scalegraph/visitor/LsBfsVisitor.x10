package org.scalegraph.visitor;

import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import x10.util.Team;
import org.scalegraph.graph.Graph;
import org.scalegraph.concurrent.Dist2D;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.util.MathAppend;
import org.scalegraph.graph.DistSparseMatrix;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import x10.io.SerialData;
import x10.compiler.Inline;
import org.scalegraph.graph.SparseMatrix;
import x10.array.RemoteArray;
import x10.util.concurrent.AtomicLong;
import x10.compiler.Ifndef;
import x10.util.IndexedMemoryChunk;

public type Vertex = Long;
public type Distance = Long;

public class LsBfsVisitor implements x10.io.CustomSerialization {
    
    private val team: Team;
    private val lgl: Int;
    private val lgc: Int;
    private val lgr: Int;
    private val role: Int;
    private val source: Vertex;
    private val sm: SparseMatrix;
    private val distanceMap: MemoryChunk[Long];
    private val visitMap: Bitmap;
    private val currentLevel: Cell[Long];
    
    val BUFFER_SIZE: Int;
    val succBuf: Array[Array[Array[Long]]];
    val predBuf: Array[Array[Array[Long]]];
    val bufCount: Array[Array[Long]];
    
    protected static struct LocalState {
        
        val _distSparseMatrix: DistSparseMatrix;
        val _source: Cell[Vertex];
        val _globalDistance: DistMemoryChunk[Distance];
        val _queues: MemoryChunk[Bitmap];
        val _qPointer: Cell[Int];
        val _distanceMap: MemoryChunk[Long];
        val _visitMap: Bitmap;
        val _currentLevel: Cell[Long];
        val _callback: LsBfsHandler;
        
        // Define buffer
        val _BUFFER_SIZE: Int = (1 << 10);
        val _succBuf: Array[Array[Array[Long]]];
        val _predBuf: Array[Array[Array[Long]]];
        val _bufCount: Array[Array[Long]];
        val _BUFFER_SLOT = Runtime.NTHREADS;
        val _ALIGN = 64;
        val _CONGRUENT = false;
        
        protected def this(dsm: DistSparseMatrix,
                           src: Vertex,
                           globDist: DistMemoryChunk[Distance],
                           cb: LsBfsHandler) {
            
            this._distSparseMatrix = dsm;
            this._source = new Cell[Vertex](src);
            this._globalDistance = globDist;
            this._queues = new MemoryChunk[Bitmap](2, _ALIGN);
            
            // Create queues
            val numLocalVertices = dsm.ids().numberOfLocalVertexes();
            this._queues(0) = new Bitmap(numLocalVertices);
            this._queues(1) = new Bitmap(numLocalVertices);
            this._qPointer = new Cell[Int](0);
            this._visitMap = new Bitmap(numLocalVertices);
            this._currentLevel = new Cell[Long](0);
            this._callback = cb;
            
            // Create distance map
            this._distanceMap = this._globalDistance();
            
            for (i in _distanceMap.range())
                _distanceMap(i) = 0;
            
            _succBuf = new Array[Array[Array[Long]]](_BUFFER_SLOT);
            _predBuf = new Array[Array[Array[Long]]](_BUFFER_SLOT);
            _bufCount = new Array[Array[Long]](_BUFFER_SLOT);
            
            // Init buffer
            for (k in 0..(_succBuf.size -1)) {
                
                val t = dsm.dist().allTeam();
                _succBuf(k) = new Array[Array[Long]](
                        IndexedMemoryChunk.allocateZeroed[Array[Long]](t.size(), 
                                _ALIGN,
                                _CONGRUENT));
                _predBuf(k) = new Array[Array[Long]](
                        IndexedMemoryChunk.allocateZeroed[Array[Long]](t.size(), 
                                _ALIGN,
                                _CONGRUENT));
                _bufCount(k) = new Array[Long](
                        IndexedMemoryChunk.allocateZeroed[Long](t.size(), 
                                _ALIGN,
                                _CONGRUENT));
                
                
                for (i in 0..(_succBuf(k).size -1)) {
                    
                    _succBuf(k)(i) = new Array[Long](
                            IndexedMemoryChunk.allocateZeroed[Long](
                                    _BUFFER_SIZE, 
                                    _ALIGN,
                                    _CONGRUENT));
                    _predBuf(k)(i) = new Array[Long](
                            IndexedMemoryChunk.allocateZeroed[Long](
                                    _BUFFER_SIZE, 
                                    _ALIGN,
                                    _CONGRUENT));
                    _bufCount(k)(i) = 0;
                    
                }
            }
        }
    }
    
    private val lch:PlaceLocalHandle[Cell[LocalState]];
    
    private def this(lch_:PlaceLocalHandle[Cell[LocalState]]) {
        
        // Set local state
        lch  = lch_;
        
        // Init fields
        val dsm = lch_()()._distSparseMatrix;
        
        team = 	dsm.dist().allTeam();
        lgl = dsm.ids().lgl;
        lgc = dsm.ids().lgc;
        lgr = dsm.ids().lgr;
        role = team.getRole(here);
        source = lch()()._source();
        sm = dsm();
        visitMap = lch()()._visitMap;
        distanceMap = lch()()._distanceMap;
        currentLevel = lch()()._currentLevel;
        
        // Buffer
        BUFFER_SIZE = lch()()._BUFFER_SIZE;
        succBuf = lch()()._succBuf;
        predBuf = lch()()._predBuf;
        bufCount = lch()()._bufCount;
         
    }
    
    public def this (serialData: SerialData) {
        
        this(serialData.data as PlaceLocalHandle[Cell[LocalState]]);
    }
    
    public def serialize(): SerialData {
        
        return new SerialData(lch, null);
    }
    
    public static def make(dsm: DistSparseMatrix, callback: LsBfsHandler, src: Vertex) {
        
        val t = dsm.dist().allTeam();
        val places = t.placeGroup();
        
        // Create global distance storage
        val createLocalDistance = () => {
            
            val ids = dsm.ids();
            val numLocalVertices = ids.numberOfLocalVertexes();
            new MemoryChunk[Distance](numLocalVertices, 64)
        };
        
        val globalDistance = new DistMemoryChunk[Distance](places,
                createLocalDistance);
        
        
        // Initial function for creating local state
        val init = () => { 

            return new Cell[LocalState](new LocalState(dsm, src, globalDistance, callback));
        };
        
        val localState = PlaceLocalHandle.make[Cell[LocalState]](places, init);
        
        val visitor = new LsBfsVisitor(localState);
        
        return visitor;
    }
    
    public def run() {
        
        val placeGroup = lch()()._distSparseMatrix.dist().allTeam().placeGroup();
        
        finish {
            for (p in placeGroup) {
                at (p) async internalRun();
            }
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
    private def currentQ() = lch()()._queues(lch()()._qPointer());
    
    @Inline
    private def nextQ() = lch()()._queues((lch()()._qPointer() + 1) & 1);
    
    @Inline
    private def swapQ() {
        
        lch()()._qPointer() = (lch()()._qPointer() + 1) & 1;
    }
    
    @Inline
    private def getVertexPlace(orgVertex: Vertex): Place {
        
        val vertexPlaceId = ((1 << (lgc + lgr)) -1) & orgVertex;
        return team.getPlace(vertexPlaceId as Int);
    }
    
    private @Inline def allocNewBuffer(slotId: Int, pid: Int) {
            
            succBuf(slotId)(pid) = new Array[Long](
                    IndexedMemoryChunk.allocateZeroed[Long](
                            lch()()._BUFFER_SIZE, 
                            lch()()._ALIGN,
                            lch()()._CONGRUENT));
            predBuf(slotId)(pid) = new Array[Long](
                    IndexedMemoryChunk.allocateZeroed[Long](
                            lch()()._BUFFER_SIZE, 
                            lch()()._ALIGN,
                            lch()()._CONGRUENT));
            bufCount(slotId)(pid) = 0;
    }
    
    private def internalRun() {
          
        lch()()._callback.initialize();
        
        // Putsource
        if (isLocalVertex(source)) {
            
            val locSrc = OrgToLocSrc(source);
            nextQ().set(locSrc);
            distanceMap(locSrc) = 0;
            visitMap.set(locSrc);
        }
        
        // team.barrier(role);
        
        if (here.id == 0)
        	Console.OUT.println("Start BFS");
        
        // Start traveling
        while(true) {
            
            swapQ();
            nextQ().clearAll();
            team.barrier(role);

            // Check wether vertex is available
            val maxVertexCount = team.allreduce(role, currentQ().setBitCount(), Team.MAX);
            if (maxVertexCount == 0L)
                break;
            
            val traverse = (localSrc: Vertex, threadId: Int) => {
                              
                val neighbors = sm.adjacency(localSrc);
                val predDistance = distanceMap(localSrc);
                val orgSrc = LocSrcToOrg(localSrc);
                                                
                finish for(i in neighbors.range()) {
                    
                    val orgDst = LocDstToOrg(neighbors(i));
                                        
                    if (isLocalVertex(orgDst))  {
                        
                        visit(orgSrc, orgDst, predDistance);
                        
                    } else {
                        
                        val bufId = threadId;
                        val p: Place = getVertexPlace(orgDst);
                        visitRemote(bufId, p, orgSrc, orgDst, predDistance);
                    }    
                    
                }
            };
            
            	currentQ().examine(traverse);
            	floodAll();
            	team.barrier(role);
            	currentLevel(currentLevel() + 1);
        }
        
        // Signal handler
        lch()()._callback.terminate();
    }
    
    public atomic def visit(orgSrc: Long, orgDst: Long, predDistance: Long) {

        val localDst = OrgToLocSrc(orgDst);
        
        if (visitMap.isNotSet(localDst)) {
            
            // First visit
            visitMap.set(localDst);
            distanceMap(localDst) = predDistance + 1;
            lch()()._callback.examine(true, orgSrc, orgDst, predDistance + 1);
            nextQ().set(localDst);

        } else if (distanceMap(localDst) == (predDistance + 1)){
            
            // Found another shortest path
        }
    }
    
    private def flood(bufId: Int, p: Place) {
        
        val targetRole = team.getRole(p);
        val count = bufCount(bufId)(targetRole);
        
        if(count <= 0)
            return;
        
            
        val succ = new RemoteArray[Long](succBuf(bufId)(targetRole));
        val preds = new RemoteArray[Long](predBuf(bufId)(targetRole));
        val num = new Cell[Long](count);
        
        at (p) {
            
            val c = num() as Int;
            val t_s = new Array[Long]( IndexedMemoryChunk.allocateZeroed[Long](
                    c, 
                    lch()()._ALIGN,
                    lch()()._CONGRUENT));
            val t_p = new Array[Long]( IndexedMemoryChunk.allocateZeroed[Long](
                    c, 
                    lch()()._ALIGN,
                    lch()()._CONGRUENT));
           
            finish {
                Array.asyncCopy(succ, 0, t_s, 0, c);
                Array.asyncCopy(preds, 0, t_p, 0, c);
            }
            
            for (var t: Int = 0; t < c; ++t) {
                visit(t_p(t), t_s(t), lch()()._currentLevel());
            } 
        }

        bufCount(bufId)(targetRole) = 0;
    }
    
    public def floodAll() {

        finish  for(i in 0..(lch()()._BUFFER_SLOT - 1)) {
            
             for (k in 0..(team.size() - 1)) {
     
                val p = team.getPlace(k);
                
                if (!p.equals(here)){
                    
                    flood(i, p);
                    allocNewBuffer(i, k); 
                }
            }
        }
    }
    
    private def visitRemote(bufId: Int, p: Place, pred: Vertex, v: Vertex, predDist: Long) {
        
        val targetRole = team.getRole(p);
        var count: Int = bufCount(bufId)(targetRole) as Int;

        if (count == BUFFER_SIZE) {

            flood(bufId, p);
            allocNewBuffer(bufId, targetRole);
            bufCount(bufId)(targetRole) = 0;
            count = 0;
        }

        succBuf(bufId)(targetRole)(count) = v;
        predBuf(bufId)(targetRole)(count) = pred;
        bufCount(bufId)(targetRole) = count + 1;
    }

    public def del() {
        
        // TODO: clear all reference
    }
	
	public static struct Bitmap {
	    
	    protected val bitLength: Long;
	    protected val data: MemoryChunk[Long];
	    protected val bitPerWord = 64;
	    protected val setCount: AtomicLong;
	    
	    public def this(length: Long) {
	        bitLength = length;
	        val allocSize = (bitLength >> 6) + 1; // div by 64
	        data = new MemoryChunk[Long](allocSize); 
	        
	        // Clear bits
	        for (i in data.range())	            
	           data(i) = 0;
	        
	        setCount = new AtomicLong(0);
	    }
	    
	    public def set(bit: Long) {
	        val bitOffset = bit & ((1L << 6) -1);
	        val wordOffset = bit >> 6;
	        val mask = (1L << (bitOffset as Int));
	        
	        @Ifndef("NO_BOUNDS_CHECKS") {
	            if(bit < 0 || bit >= bitLength)
	                throw new ArrayIndexOutOfBoundsException("bit (" + bit + ") not contained in BitMap");
	        }
	        
	        // If it is already set
	        // if (((data(wordOffset) as ULong) & mask as ULong) > 0UL)
	        //     throw new Exception("Bit is already set");
	       
	        data.atomicOr(wordOffset, mask);
	        setCount.incrementAndGet();
	    }
	    
	    public def clear(bit: Long) {
	        val bitOffset = bit & ((1L << 6) -1);
	        val wordOffset = bit >> 6;
	        val mask = ~(1L << (bitOffset as Int));
	        
	        @Ifndef("NO_BOUNDS_CHECKS") {
	            if(bit < 0 || bit >= bitLength)
	                throw new ArrayIndexOutOfBoundsException("bit (" + bit + ") not contained in BitMap");
	        }
	        
	        // If it is already clear
	        // if ((data(wordOffset) | mask) == 0L)
	        //     throw new Exception("Bit is already cleared");

	        data.atomicAnd(wordOffset, mask);
	        setCount.decrementAndGet();
	    }
	    
	    public def isSet(bit: Long) = !isNotSet(bit);
	    
	    public def isNotSet(bit: Long): Boolean {
	        val bitOffset = bit & ((1L << 6) -1);
	        val wordOffset = bit >> 6;
	        val mask = (1L << (bitOffset as Int));
	       
	        return (data(wordOffset) as ULong & mask as ULong) == 0UL;
	    }
	    
	    public def examine(callback: (i: Long, threadId: Int) => void) {
	        val f = (w: Long, threadId: Int) => {
	            val word = data(w);
	            var mask: Long = 0x1;
	            var callCount: Long = 0;
	            
	            if (word == 0L)
	                return;
	            
	            for (var l: Long = 0; l < bitPerWord; ++l) { 
	                mask = 1L << (l as Int);
	                
	                if (((word as ULong) & (mask as ULong)) > 0UL) {
	                    val bitPos = w * bitPerWord+ l;
	                    
	                    if (bitPos > bitLength)
	                        break;
	                    
	                    callback(bitPos , threadId);
	                    ++callCount;
	                    
	                    if (callCount >= setCount.longValue())
	                        break;
	                } 
	            }
	        };
	        
	        if (setCount.longValue() > 0)
	            iter(data.range(), f);
	    }
	    
	    public @Inline def iter(range :LongRange, func :(Long, Int) => void) {
	        
	        val size = range.max - range.min + 1;
	        
	        if (size == 0L)
	            return ;
	        
	        val nthreads = Math.min(Runtime.NTHREADS as Long, size);
	        val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1L);
	        
	        finish for(i in 0..(nthreads-1)) {
	            val i_start = range.min + i*chunk_size;
	            val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
	            async for(ii in i_range) func(ii, i as Int);
	        }
	    }
	    
	    public def clearAll() {
	        
	        Parallel.iter(data.range(), (i: Long) => { data(i) = 0;});
	        setCount.set(0);
	    }
	    
	    public def setBitCount() = setCount.longValue();
	}
}