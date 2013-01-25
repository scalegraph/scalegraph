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

public type Vertex = Long;
public type Distance = Long;

class LsBfsVisitor implements x10.io.CustomSerialization {
    
    private val team: Team;
    private val lgl: Int;
    private val lgc: Int;
    private val lgr: Int;
    private val role: Int;
    private val source: Vertex;
    private val sm: SparseMatrix;
    private val distanceMap: MemoryChunk[Long];
    private val visitMap: Bitmap;
    
    val BUFFER_SIZE: Int;
    val succBuf: Array[Array[Array[Long]]];
    val predDistanceBuf: Array[Array[Array[Long]]];
    val predBuf: Array[Array[Array[Long]]];
    val bufCount: Array[Array[Int]];
    
    protected static struct LocalState {
        
        val _distSparseMatrix: DistSparseMatrix;
        val _source: Cell[Vertex];
        val _globalDistance: DistMemoryChunk[Distance];
        val _queues: MemoryChunk[Bitmap];
        val _qPointer: Cell[Int];
        val _distanceMap: MemoryChunk[Long];
        val _visitMap: Bitmap;
        
        // Define buffer
        val _BUFFER_SIZE = 100;
        val _succBuf: Array[Array[Array[Long]]];
        val _predDistanceBuf: Array[Array[Array[Long]]];
        val _predBuf: Array[Array[Array[Long]]];
        val _bufCount: Array[Array[Int]];
        val _bufferSlot: Array[Boolean];
        
        protected def this(dsm: DistSparseMatrix,
                           src: Vertex,
                           globDist: DistMemoryChunk[Distance]) {
            
            this._distSparseMatrix = dsm;
            this._source = new Cell[Vertex](src);
            this._globalDistance = globDist;
            this._queues = new MemoryChunk[Bitmap](2);
            
            // Create queues
            val numLocalVertices = dsm.ids().numberOfLocalVertexes();
            this._queues(0) = new Bitmap(numLocalVertices);
            this._queues(1) = new Bitmap(numLocalVertices);
            this._qPointer = new Cell[Int](0);
            this._visitMap = new Bitmap(numLocalVertices);
            
            // Create distance map
            this._distanceMap = this._globalDistance();
            
            for (i in _distanceMap.range())
                _distanceMap(i) = 0;
            
            _succBuf = new Array[Array[Array[Long]]](Runtime.NTHREADS + 1);
            _predDistanceBuf = new Array[Array[Array[Long]]](Runtime.NTHREADS + 1);
            _predBuf = new Array[Array[Array[Long]]](Runtime.NTHREADS + 1);
            _bufCount = new Array[Array[Int]](Runtime.NTHREADS + 1);
            _bufferSlot = new Array[Boolean](Runtime.NTHREADS + 1);
            // Init buffer
            for (k in 0..(_succBuf.size -1)) {
                
                val t = dsm.dist().allTeam();
                _succBuf(k) = new Array[Array[Long]](t.size());
                _predDistanceBuf(k) = new Array[Array[Long]](t.size());
                _predBuf(k) = new Array[Array[Long]](t.size());
                _bufCount(k) = new Array[Int](t.size());
                
                
                for (i in 0..(_succBuf(k).size -1)) {
                    
                    _succBuf(k)(i) = new Array[Long](_BUFFER_SIZE);
                    _predDistanceBuf(k)(i) = new Array[Long](_BUFFER_SIZE);
                    _predBuf(k)(i) = new Array[Long](_BUFFER_SIZE);
                    _bufCount(k)(i) = 0;
                    
                }
                
                for (j in 0..(_bufferSlot.size - 1))
                    _bufferSlot(j)  = false;
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
        
        // Buffer
        BUFFER_SIZE = lch()()._BUFFER_SIZE;
        succBuf = lch()()._succBuf;
        predDistanceBuf = lch()()._predDistanceBuf;
        predBuf = lch()()._predBuf;
        bufCount = lch()()._bufCount;
         
    }
    
    public def this (serialData: SerialData) {
        
        this(serialData.data as PlaceLocalHandle[Cell[LocalState]]);
    }
    
    public def serialize(): SerialData {
        
        return new SerialData(lch, null);
    }
    
    public static def make(dsm: DistSparseMatrix, handle: LsBfsHandler, src: Vertex) {
        
        val t = dsm.dist().allTeam();
        val places = t.placeGroup();
        
        // Create global distance storage
        val createLocalDistance = () => {
            
            val ids = dsm.ids();
            val numLocalVertices = ids.numberOfLocalVertexes();
            new MemoryChunk[Distance](numLocalVertices)
        };
        
        val globalDistance = new DistMemoryChunk[Distance](places,
                createLocalDistance);
        
        
        // Initial function for creating local state
        val init = () => { 

            return new Cell[LocalState](new LocalState(dsm, src, globalDistance));
        };
        
        val localState = PlaceLocalHandle.make[Cell[LocalState]](places, init);
        
        val visitor = new LsBfsVisitor(localState);
        
        return visitor;
    }
    
    public def run() {
        
        val placeGroup = lch()()._distSparseMatrix.dist().allTeam().placeGroup();
        
        finish {
            for (p in placeGroup) {
                
                async at (p) internalRun();
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
    
    private def internalRun() {
                
        // Putsource
        if (isLocalVertex(source)) {
            
            val locSrc = OrgToLocSrc(source);
            nextQ().set(locSrc);
            distanceMap(locSrc) = 0;
            visitMap.set(locSrc);
        }
        
        team.barrier(role);
        
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
            
            val traverse = (localSrc: Vertex) => {
                              
                val neighbors = sm.adjacency(localSrc);
                val predDistance = distanceMap(localSrc);
                val orgSrc = LocSrcToOrg(localSrc);
                                                
                for(i in neighbors.range()) {
                    
                    val orgDst = LocDstToOrg(neighbors(i));
                                        
                    if (isLocalVertex(orgDst))  {
                        
                        visit(orgSrc, orgDst, predDistance);
                        
                    } else {
                        
                        val bufId = getBufferId();
                        val p: Place = getVertexPlace(orgDst);
                        // async at (p) visit(orgSrc, orgDst, predDistance);
                        visitRemote(bufId, p, orgSrc, orgDst, predDistance);
                        clearBuffer(bufId);
                    }    
                }
            };
            
            	currentQ().examine(traverse);
            	floodAll();
            	team.barrier(role);
        }
    }
    
    private atomic def getBufferId(): Int {
        
        for (k in 0..(lch()()._bufferSlot.size -1))
            if (lch()()._bufferSlot(k) ==  false) {
                lch()()._bufferSlot(k) =  true;
                return k;
            }
        
        // Unexecpedted exception
        throw new Exception("No buffer available");
    }
    
    private atomic def clearBuffer(id: Int) {
        lch()()._bufferSlot(id) = false;
    }
    
    public atomic def visit(orgSrc: Long, orgDst: Long, predDistance: Long) {
        
        // Visit neighbour
        
        val localDst = OrgToLocSrc(orgDst);
        
        if (visitMap.isNotSet(localDst)) {
            
            // First visit
            visitMap.set(localDst);
            distanceMap(localDst) = predDistance + 1;
            
            // if ((predDistance + 1) >= 4L) {
            	Console.OUT.println(orgSrc + " --> " + orgDst + " = " + distanceMap(localDst) + " here: " + here.id);
            // }
            
            nextQ().set(localDst);

        } else if (distanceMap(localDst) == (predDistance + 1)){
            
            // Found another shortest path
        }
    }
    
    public def floodAll() {
        
        val buf = lch()()._bufferSlot;
        
        for(i in 0..(buf.size - 1)) {
            
            for (k in 0..(team.size() - 1)) {
     
                val p = team.getPlace(k);
                
                if (!p.equals(here))
                	flood(i, p);
            }
        }
    }
    
    private def visitRemote(bufId: Int, p: Place, pred: Vertex, v: Vertex, predDist: Long) {
        
        // Console.OUT.println("Worker id " + Runtime.workerId() + ": N " + Runtime.NTHREADS);
        // Console.OUT.println("Target role " + team.getRole(p));
        // Console.OUT.println("BufId: " + bufId);
        
        val targetRole = team.getRole(p);
        var count: Int = bufCount(bufId)(targetRole);

        // 
        if (count == BUFFER_SIZE) {
            
            // Flood
            flood(bufId, p);
            count = 0;
        }
        
        succBuf(bufId)(targetRole)(count) = v;
        predBuf(bufId)(targetRole)(count) = pred;
        predDistanceBuf(bufId)(targetRole)(count) = predDist;
        bufCount(bufId)(targetRole) = count + 1;
    }
    
    private def flood(bufId: Int, p: Place) {
    
        val targetRole = team.getRole(p);
        val count = bufCount(bufId)(targetRole);
        
        if(count == 0)
            return;
        
        val succ = succBuf(bufId)(targetRole);
        val preds = predBuf(bufId)(targetRole);
        val predDist = predDistanceBuf(bufId)(targetRole);
        
        // Console.OUT.println("Worker id " + Runtime.workerId() + ": N " + Runtime.NTHREADS);
        // Console.OUT.println("Target role " + targetRole);
        // Console.OUT.println("Count: " + count);
        // Console.OUT.println("BufId" + bufId);
        // Console.OUT.println(succ);
        // Console.OUT.println(preds);
        // Console.OUT.println(predDist);
        // 
        // Console.OUT.println("=Local=");
        // Console.OUT.println(preds(0));
        // Console.OUT.println(succ(0));
        // Console.OUT.println(predDist(0));
        if (count > 0) {
            
            finish {
                
                 at (p)  {
                    
                    // Console.OUT.println("==Remote=");
                    // Console.OUT.println(preds(0));
                    // Console.OUT.println(succ(0));
                    // Console.OUT.println(predDist(0));
                    
                    for (var t: Int = 0; t < count; ++t) {
                        visit(preds(t), succ(t), predDist(t));
                    }
                }
            }
        }
        
        bufCount(bufId)(targetRole) = 0;
    }
    
    public def del() {
        
        // TODO: clear all reference
    }
    
    /****************** For sake of debug and testing ************/
    public static val inputFormat = (s: String) => {
      
        val items = s.split(" ");
        return Tuple3[Long, Long, Double] (
                Long.parse(items(0)),
                Long.parse(items(1)),
                0D
                );
    };
    
	public static def main(args: Array[String](1)) {
		
	    val team = Team.WORLD;
	    val fileList = new Array[String](1);
	    fileList(0) = args(0);
	    
	    val rawData = DistributedReader.read(team, fileList, inputFormat);
	    val edgeList = rawData.get1();
	    val g = new Graph(team, Graph.VertexType.Long, false);
	    
	    g.addEdges(edgeList.data(team.placeGroup()));
	    
	    val csr = g.constructDistSparseMatrix(
	            Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS),
	            true,
	            true);
	    
	    Console.OUT.println("Graph Loaded!!!");
	    
	    val handler = new LsBfsHandler();
	    val v = LsBfsVisitor.make(csr, handler, 2);
	    v.run();
	    
	    // bm: Bitmap = new Bitmap(12);
	    // bm.set(10);
	    // bm.set(11);
	    // bm.set(3);
	    // bm.set(1);
	    // bm.set(0);
	    
	    // val call = (i: Long) => { Console.OUT.println(i); };
	    // bm.examine(call);
	    
	    // finish for (p in team.placeGroup()) {
	    //     at (p)  v.visitxx(csr, team);
	    // }
	    
		Console.OUT.println("Complete!!!");
	}
	
	public static struct Bitmap {
	    
	    protected val bitLength: Long;
	    protected val data: MemoryChunk[Long];
	    protected val bitPerWord = 64;
	    protected val setCount: Cell[Long];
	    
	    public def this(length: Long) {
	        
	        bitLength = length;
	        val allocSize = (bitLength >> 6) + 1; // div by 64
	        data = new MemoryChunk[Long](allocSize); 
	        
	        // Clear bits
	        for (i in data.range())	            
	           data(i) = 0;
	        
	        setCount = new Cell[Long](0);
	    }
	    
	    public def set(bit: Long) {
	        
	        val bitOffset = bit & ((1L << 6) -1);
	        val wordOffset = bit >> 6;
	        val mask = (1L << (bitOffset as Int));
	        
	        // If it is already set
	        // if (((data(wordOffset) as ULong) & mask as ULong) > 0UL)
	        //     throw new Exception("Bit is already set");
	       
	        data(wordOffset) |= mask;
	        setCount() = setCount() + 1;
	    }
	    
	    public def clear(bit: Long) {
	        
	        val bitOffset = bit & ((1L << 6) -1);
	        val wordOffset = bit >> 6;
	        val mask = ~(1L << (bitOffset as Int));
	        
	        // // If it is already clear
	        // if ((data(wordOffset) | mask) == 0L)
	        //     throw new Exception("Bit is already cleared");

	        data(wordOffset) &= mask;
	        setCount() = setCount() - 1;
	    }
	    
	    public def isSet(bit: Long) = !isNotSet(bit);
	    
	    public def isNotSet(bit: Long): Boolean {
	        
	        val bitOffset = bit & ((1L << 6) -1);
	        val wordOffset = bit >> 6;
	        val mask = (1L << (bitOffset as Int));
	       
	        return (data(wordOffset) as ULong & mask as ULong) == 0UL;
	    }
	    
	    public def examine(callback: (i: Long) => void) {
	        
	        val f = (w: Long) => {
	            
	            val word = data(w);
	            var mask: Long = 0x1;
	            var callCount: Long = 0;
	            if (word == 0L)
	                return;
	            
	            for (var l: Long = 0; l < bitPerWord; ++l) {
	                
	                mask = 1L << (l as Int);
	                
	                if (((word as ULong) & (mask as ULong)) > 0UL) {
	                    
	                    callback(w * bitPerWord + l);
	                    ++callCount;
	                    
	                    if (callCount >= setCount())
	                        break;
	                } 
	            }
	        };
	        
	        if (setCount() > 0)
	            Parallel.iter(data.range(), f);
	    }
	    
	    public def clearAll() {
	        
	        Parallel.iter(data.range(), (i: Long) => { data(i) = 0;});
	        setCount() = 0;
	    }
	    
	    public def setBitCount() = setCount();
	    
	}
}