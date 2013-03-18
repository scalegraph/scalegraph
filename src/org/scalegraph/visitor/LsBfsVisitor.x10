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
import x10.util.concurrent.Lock;
import x10.compiler.RemoteInvocation;

public type Vertex = Long;
public type Distance = Long;

public class LsBfsVisitor implements x10.io.CustomSerialization {
    
    private val team: Team;
    private val lgl: Int;
    private val lgc: Int;
    private val lgr: Int;
    private val role: Int;
    private val source: Cell[Vertex];
    private val currentLevel: Cell[Long];
   
    protected static struct Buffer {
        val _pred: Array[Long];
        val _succ: Array[Long];
        val count: Cell[Long];
        
        def this(sz: Long) {
            _pred = new Array[Long](IndexedMemoryChunk.allocateZeroed[Long](sz, 
                    64,
                    false));
            count = new Cell[Long](0);
            _succ = new Array[Long](IndexedMemoryChunk.allocateZeroed[Long](sz, 
                    64,
                    false));
        }
    }
    
    protected static struct BufferAll {
        val item: Array[Buffer];
        
        def this(p: Int, sz: Long) {
            item = new Array[Buffer](IndexedMemoryChunk.allocateZeroed[Buffer](p, 
                    64,
                    false));
            
            for (i in (0..(p-1)))
                item(i) = new Buffer(sz);
        }
    }
    
    public static struct LocalState {
        val _callback: Cell[LsBfsHandler];
        val _distSparseMatrix: DistSparseMatrix;
        val _source: Cell[Vertex];
        val _globalDistance: DistMemoryChunk[Distance];
        val _queues: MemoryChunk[Bitmap];
        val _qPointer: Cell[Int];
        val _distanceMap: MemoryChunk[Long];
        val _visitMap: Bitmap;
        val _currentLevel: Cell[Long];
        val _bf: Array[BufferAll];
        
        // Define buffer
        val _BUFFER_SLOT: Int;
        val _BUFFER_SIZE: Int;
        static val _ALIGN = 64;
        static val _CONGRUENT = false;
        
        protected def this(dsm: DistSparseMatrix,
                           src: Vertex,
                           globDist: DistMemoryChunk[Distance],
                           buffSize: Int,
                           cb: LsBfsHandler) {
            
            this._distSparseMatrix = dsm;
            this._source = new Cell[Vertex](src);
            this._globalDistance = globDist;
            this._queues = new MemoryChunk[Bitmap](2, _ALIGN);
            
            // Create queues
            val numLocalVertices = dsm.ids().maxLocalId;
            this._queues(0) = new Bitmap(numLocalVertices);
            this._queues(1) = new Bitmap(numLocalVertices);
            this._visitMap = new Bitmap(numLocalVertices);
            this._qPointer = new Cell[Int](0);
            
            this._BUFFER_SIZE = buffSize;
            this._currentLevel = new Cell[Long](0);
            this._callback = new Cell[LsBfsHandler](cb);
            
            // Create distance map
            this._distanceMap = this._globalDistance();
            
            for (i in _distanceMap.range())
                _distanceMap(i) = 0L;
            
            _BUFFER_SLOT = Runtime.NTHREADS;
            
            this._bf = new Array[BufferAll](_BUFFER_SLOT);
            val t = dsm.dist().allTeam();
            for (i in 0..(_BUFFER_SLOT - 1)) {
                _bf(i) = new BufferAll(t.size(), _BUFFER_SIZE);
            }
        }
    }
    
    public val lch:PlaceLocalHandle[Cell[LocalState]];
    
    private def this(lch_:PlaceLocalHandle[Cell[LocalState]]) {
        
        // Set local state
        lch  = lch_;
        
        // Init fields
        val dsm = lch_()()._distSparseMatrix;
        
        team = 	dsm.dist().allTeam();
        lgl = dsm.ids().lgl;
        lgc = dsm.ids().lgc;
        lgr = dsm.ids().lgr;
        role = team.role();
        source = lch()()._source();
        currentLevel = lch()()._currentLevel; 
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
        
        // Create distance storage for each vertex
        val globalDistance = new DistMemoryChunk[Distance](places,() => {
            val ids = dsm.ids();
            val numLocalVertices = ids.maxLocalId;
            val distance = new MemoryChunk[Distance](numLocalVertices, 64);
            
            for (i in distance.range())
                distance(i) = 0L;
            
            return distance;
        });
        
        // Create local state
        val localState = PlaceLocalHandle.make[Cell[LocalState]](places, () => { 
            return new Cell[LocalState](
                    new LocalState(dsm, src, globalDistance, (1 << 15), callback));
        });
        
        val visitor = new LsBfsVisitor(localState);
        
        return visitor;
    }
    
    public def run() { 
        val placeGroup = lch()()._distSparseMatrix.dist().allTeam().placeGroup();
        
        finish {
            for (p in placeGroup) {
                if(p != here)
                 	at (p) async internalRun();
                else
                   async internalRun();
            }
        }
    }
    
    public def setHandler(cb: LsBfsHandler) {
        
        val placeGroup = lch()()._distSparseMatrix.dist().allTeam().placeGroup();
        
        finish {
            for (p in placeGroup) {
                at (p) async lch()()._callback() = cb;
            }
        }
    }
    
    public def reRun(src: Vertex) {
        val placeGroup = lch()()._distSparseMatrix.dist().allTeam().placeGroup();
        val func = () => {
            
            lch()()._queues(0).clearAll();
            lch()()._queues(1).clearAll();
            
            for (i in lch()()._distanceMap.range())
                lch()()._distanceMap(i) = 0L;
            
            setSource(src);
            internalRun();
        };
        
        finish {
            for (p in placeGroup) {
                if(p != here)
                    at (p) async func();
                else
                    async func();
            }
        }
    }
    
    public def setSource(v: Vertex) {
        source() = v;
        lch()()._source() = v;
    }
    
    
    @Inline public def isLocalVertex(orgVertex: Vertex): Boolean {
        val vertexPlace = ((1 << (lgc + lgr)) -1) & orgVertex;
        
        if(vertexPlace == role as Long)
            return true;
        
        return false;
    }
    
    @Inline public def OrgToLocSrc(v: Vertex) 
    	= (( v & (( 1 << lgr) -1)) << lgl) | (v >> (lgr + lgc));
    
    @Inline public def LocSrcToOrg(v: Vertex)
    	= ((((v & (( 1 << lgl) -1)) << lgc)| role) << lgr) | (v>> lgl);
    
    @Inline public def LocDstToOrg(v: Vertex)
    	= ((((v & (( 1 << lgl) -1)) << lgc | (v >> lgl)) << lgr ) | 0);
    
    @Inline private def currentQ() = lch()()._queues(lch()()._qPointer());
    
    @Inline private def nextQ() = lch()()._queues((lch()()._qPointer() + 1) & 1);
   
    @Inline private def swapQ() {
        
        lch()()._qPointer() = (lch()()._qPointer() + 1) & 1;
    }
    
    public def getVertexPlace(orgVertex: Vertex): Place {
        val vertexPlaceId = ((1 << (lgc + lgr)) -1) & orgVertex;
        return team.place(vertexPlaceId as Int);
    }
    
    private @Inline def allocNewBuffer(slotId: Int, pid: Int) {  
        lch()()._bf(slotId).item(pid) = new Buffer(lch()()._BUFFER_SIZE);
    }
    
    private def internalRun() {    
        lch()()._callback().initialize();
        
        // Putsource
        if (isLocalVertex(source())) {
            val locSrc = OrgToLocSrc(source());
            nextQ().set(locSrc);
            lch()()._distanceMap(locSrc) = 0;
            lch()()._visitMap.set(locSrc);
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
                val neighbors = lch()()._distSparseMatrix().adjacency(localSrc);
                val predDistance = lch()()._distanceMap(localSrc);
                val orgSrc = LocSrcToOrg(localSrc);
                                                
                for(i in neighbors.range()) {  
                    val orgDst = LocDstToOrg(neighbors(i));
                    if (isLocalVertex(orgDst))  {
                        visit(orgSrc, orgDst, predDistance);
                    } else {
                        val bufId = threadId;
                        val p: Place = getVertexPlace(orgDst);
                        // at (p) visit(orgSrc, orgDst, predDistance);
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
        lch()()._callback().terminate();
    }
    
    public def visit(orgSrc: Long, orgDst: Long, predDistance: Long) {
        val localDst = OrgToLocSrc(orgDst);
        val d = predDistance + 1;
        
        if (lch()()._visitMap.isNotSetAndMark(localDst)) {
            // First visit
            nextQ().set(localDst);
            lch()()._distanceMap.atomicAdd(localDst, d);
            lch()()._callback().firstVisit(orgSrc, orgDst, d);
        } else if (lch()()._distanceMap(localDst) == d){
            // Found another shortest path
            lch()()._callback().revisit(orgSrc, orgDst, d);
        }
    }
    
    private def flood(bufId: Int, p: Place) {
        val targetRole = team.role(p);
        val count = lch()()._bf(bufId).item(targetRole).count();
        
        if(count <= 0)
            return;
        
        val succ = new RemoteArray[Long](lch()()._bf(bufId).item(targetRole)._succ);
        val preds = new RemoteArray[Long](lch()()._bf(bufId).item(targetRole)._pred);
        val level = lch()()._currentLevel();
        
        at (p) {
            val num = count as Int;
            val t_s = new Array[Long](IndexedMemoryChunk.allocateZeroed[Long](
                    num, 
                    lch()()._ALIGN,
                    lch()()._CONGRUENT));
            val t_p = new Array[Long](IndexedMemoryChunk.allocateZeroed[Long](
                    num, 
                    lch()()._ALIGN,
                    lch()()._CONGRUENT));
            
            finish {
                Array.asyncCopy(succ, 0, t_s, 0, num);
                Array.asyncCopy(preds, 0, t_p, 0, num);
            }
            
            for (var t: Int = 0; t < num; ++t) {
                visit(t_p(t), t_s(t), level);
            } 
        }

        lch()()._bf(bufId).item(targetRole).count() = 0;
        allocNewBuffer(bufId, targetRole);
    }
    
    public def floodAll() {
        finish  for(i in 0..(lch()()._BUFFER_SLOT - 1)) {
             for (k in 0..(team.size() - 1)) {
     
                val p = team.place(k);
                
                if (!p.equals(here)){
                    flood(i, p);
                }
            }
        }
    }
    
    private def visitRemote(bufId: Int, p: Place, pred: Vertex, v: Vertex, predDist: Long) {
        val targetRole = team.role(p);
        var count: Int = lch()()._bf(bufId).item(targetRole).count() as Int;

        if (count == lch()()._BUFFER_SIZE) {
            flood(bufId, p);
            lch()()._bf(bufId).item(targetRole).count() = 0;
            count = 0;
        }
        lch()()._bf(bufId).item(targetRole)._succ(count) = v;
        lch()()._bf(bufId).item(targetRole)._pred(count) = pred;
        lch()()._bf(bufId).item(targetRole).count() = count + 1;
    }
    
    public def clear() {
        val func = () => {
            lch()()._queues(0).clearAll();
            lch()()._queues(1).clearAll();
            
            for (i in lch()()._distanceMap.range())
                lch()()._distanceMap(i) = 0L;
        };
        
        finish for (p in team.placeGroup())
            if (p == here) 
                async func();
            else 
                at (p) func();
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
	        data = new MemoryChunk[Long](allocSize, 64); 
	        
	        // Clear bits
	        for (i in data.range())	            
	           data(i) = 0L;
	        
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
	        if (((data(wordOffset) as ULong) & mask as ULong) > 0UL)
	            throw new Exception("Bit is already set");
	       
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
	        if ((data(wordOffset) | mask) == 0L)
	            throw new Exception("Bit is already cleared");

	        data.atomicAnd(wordOffset, mask);
	        setCount.decrementAndGet();
	    }
	    
	    public atomic def isNotSetAndMark(bit: Long): Boolean {
	        if (isNotSet(bit)) {
	            set(bit);
	            return true;
	        } else {
	            return false;
	        }
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
	                    val bitPos = w * bitPerWord + l;
	                    
	                    if (bitPos >= bitLength)
	                        break;
	                    
	                    callback(bitPos , threadId);
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
	            async for(ii in i_range) {
	                func(ii, i as Int);
	                }
	        }
	    }
	    
	    public def clearAll() {   
	        Parallel.iter(data.range(), (i: Long) => { data(i) = 0L;});
	        setCount.set(0L);
	    }
	    
	    public def setBitCount() = setCount.longValue();
	}
}
