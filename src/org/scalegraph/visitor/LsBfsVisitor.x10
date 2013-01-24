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
    val succBuf: Array[Array[Long]];
    val predDistanceBuf: Array[Array[Long]];
    val predBuf: Array[Array[Long]];
    val bufCount: Array[Int];
    
    protected static struct LocalState {
        
        val _distSparseMatrix: DistSparseMatrix;
        val _source: Cell[Vertex];
        val _globalDistance: DistMemoryChunk[Distance];
        val _queues: MemoryChunk[Bitmap];
        val _qPointer: Cell[Int];
        val _distanceMap: MemoryChunk[Long];
        val _visitMap: Bitmap;
        
        // Define buffer
        val _BUFFER_SIZE = 500;
        val _succBuf: Array[Array[Long]];
        val _predDistanceBuf: Array[Array[Long]];
        val _predBuf: Array[Array[Long]];
        val _bufCount: Array[Int];
        
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
            this._distanceMap = new MemoryChunk[Long](numLocalVertices);
            
            for (i in _distanceMap.range())
                _distanceMap(i) = 0;
            
            // Init buffer
            val t = dsm.dist().allTeam();
            _succBuf = new Array[Array[Long]](t.size());
            _predDistanceBuf = new Array[Array[Long]](t.size());
            _predBuf = new Array[Array[Long]](t.size());
            _bufCount = new Array[Int](t.size());
            
            for (i in 0..(_succBuf.size - 1)) {
                
                _succBuf(i) = new Array[Long](_BUFFER_SIZE);
                _predDistanceBuf(i) = new Array[Long](_BUFFER_SIZE);
                _predBuf(i) = new Array[Long](_BUFFER_SIZE);
                _bufCount(i) = 0;
                
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
    
    private def init() {
        
    }
    
    public static def make(dsm: DistSparseMatrix, handle: LsBfsHandler, src: Vertex) {
        
        val t = dsm.dist().allTeam();
        val places = t.placeGroup();
        
        // Initial function for creating local state
        val init = () => { 
            
            val ids = dsm.ids();
            val numLocalVertices = ids.numberOfLocalVertexes();
            
            val localDistance = new MemoryChunk[Distance](numLocalVertices);
            
            // Set initial distance value
            Parallel.iter(localDistance.range(), (i: Long) => {localDistance(i) = -1;});
            
            val globalDistance = new DistMemoryChunk[Distance](places,
                    () => localDistance);
            
            return new Cell[LocalState](new LocalState(dsm, src, globalDistance));
        };
        
        val localState = PlaceLocalHandle.make[Cell[LocalState]](places, init);
        
        val visitor = new LsBfsVisitor(localState);
        visitor.init();
        
        return visitor;
    }
    
    public def run() {
        
        val placeGroup = lch()()._distSparseMatrix.dist().allTeam().placeGroup();
        
        finish for (p in placeGroup) {
            at (p) async internalRun();
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
            // Console.OUT.println("PS: " + here.id + " src:" + source + " Loc: " + locSrc);
            nextQ().set(locSrc);
            distanceMap(locSrc) = 0;
            visitMap.set(locSrc);
        }
        
        team.barrier(role);
        // Console.OUT.println("S: " + here.id);
                
        // Start traveling
        while(true) {
            
            // Console.OUT.println(here.id + ":A");
            swapQ();
            nextQ().clearAll();
            // Console.OUT.println(here.id + ":B");
            team.barrier(role);

            // Check wether vertex is available
            val maxVertexCount = team.allreduce(role, currentQ().setBitCount(), Team.MAX);
            if (maxVertexCount == 0L)
                break;
            
            // Console.OUT.println(here.id + ":C");
            val traverse = (localSrc: Vertex) => {
                              
                val neighbors = sm.adjacency(localSrc);
                val predDistance = distanceMap(localSrc);
                val orgSrc = LocSrcToOrg(localSrc);
                
                // Console.OUT.println(here.id + ": examine: Loc " + localSrc + " orgSrc: " + orgSrc);
                // Console.OUT.println(here.id + ": neighours " + neighbors);
                                                
                for(i in neighbors.range()) {
                    
                    val orgDst = LocDstToOrg(neighbors(i));
                                        
                    if (isLocalVertex(orgDst))  {
                        
                        // Console.OUT.println(here.id + ": local vist: " + orgSrc + " => " + orgDst);
                        visit(orgSrc, orgDst, predDistance);
                        
                        // val p = getVertexPlace(orgDst);
                        // visitRemote(p, orgSrc, orgDst, predDistance);
                        
                    } else {
                        
                        val p: Place = getVertexPlace(orgDst);
                        // Console.OUT.println(here.id + ": Remote vist: " + orgSrc + " => " + orgDst);
                        // at (p) async visit(orgSrc, orgDst, predDistance);
                        // atomic visitRemote(p, orgSrc, orgDst, predDistance);
                        visit2(p, orgSrc, orgDst, predDistance);
                    }    
                }
            };
            
            	currentQ().examine(traverse);
            	// Console.OUT.println(here.id + ":D");
            	floodAll();
            	team.barrier(role);
        }
    }
    
    public atomic def visit(orgSrc: Long, orgDst: Long, predDistance: Long) {
        
        // Visit neighbour
        
        val localDst = OrgToLocSrc(orgDst);
        
        if (visitMap.isNotSet(localDst)) {
            
            // First visit
            visitMap.set(localDst);
            distanceMap(localDst) = predDistance + 1;
            
            Console.OUT.println(orgSrc + " --> " + orgDst + " = " + distanceMap(localDst) + " here: " + here.id);
            nextQ().set(localDst);

        } else if (distanceMap(localDst) == predDistance + 1){
            
            // Found another shortest path
        }
    }
    
    public def floodAll() {
        // Console.OUT.println(here.id + ": FlooodALL: " + Runtime.workerId());
        
        for (i in 0..(team.size() - 1)) {
            val p = team.getPlace(i);
            if (p != here)
                flood(p);
        }
    }
    
    public def visit2(p: Place, pred: Vertex, v: Vertex, predDist: Long) {
        
        val targetRole = team.getRole(p);
        var count: Int = bufCount(targetRole);
        
        // Console.OUT.println(team.size());
        // Console.OUT.println(targetRole);
        // Console.OUT.println(count);
        // Console.OUT.println("-----");
        
        if (count == BUFFER_SIZE) {
            
            // Console.OUT.println(here.id + ": before flood");
            // Flood
            flood(p);
            count = 0;
            // Console.OUT.println(here.id + ": After buffer full");
        }
        
        succBuf(targetRole)(count) = v;
        predBuf(targetRole)(count) = pred;
        predDistanceBuf(targetRole)(count) = predDist;
        bufCount(targetRole) = count + 1;
    }
    
    private def flood(p: Place) {
        
        
        val targetRole = team.getRole(p);
        val succ = succBuf(targetRole);
        val preds = predBuf(targetRole);
        val predDist = predDistanceBuf(targetRole);
        val count = bufCount(targetRole);
        
        // Console.OUT.println(here.id + ": Enter flood" + " to -> " + p + " count: "  + count);
        // Console.OUT.println(Runtime.workerId());
        // Console.OUT.println(Runtime.NTHREADS);
        // Console.OUT.println(team.size());
        // Console.OUT.println(targetRole);
        // Console.OUT.println(count);
        
        if(count > 0) {
            
            at (p) async {
                
                // Console.OUT.println("HUUUUUUUUU");
                // Console.OUT.println(here.id + ": At remote" + " count: "  + count);
                for (var t: Int = 0; t < count; ++t)
                    visit(preds(t), succ(t), predDist(t));
            }
        }
        
        bufCount(targetRole) = 0;
        // Console.OUT.println(here.id + ": Finish flood" + " to -> " + p);
    }
    
    public def del() {
        
        // TODO: clear all reference
    }
    
	/*
    var lgl: Int;
    var lgr: Int;
    var lgc: Int;
    var source: Vertex;
    var distSparseMatrix: DistSparseMatrix;
    
    */
    public def visitxx(csr: DistSparseMatrix, team: Team) {
        
        val mat =  csr();
        val ids = csr.ids();
        val lgl = ids.lgl;
        val lgr = ids.lgr;
        val lgc = ids.lgc;
        
        Console.OUT.println("----(" + here.id + ")----");
        val r = 0;
        val c = team.placeGroup().indexOf(here);
        for (i in 0..(ids.numberOfLocalVertexes() - 1)) {
            for( k in mat.adjacency(i)) {
                val s = ((((i & (( 1 << lgl) -1)) << lgc)| c) << lgr) | (i>> lgl);
                val d = ((((k & (( 1 << lgl) -1)) << lgc | (k >> lgl)) << lgr ) | r);
                Console.OUT.println(s + " " + d + " local: " + i);
            }
        }
    }
    
    private def internalSetup(dsm: DistSparseMatrix,src: Vertex) {
        
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
	            if(word == 0L)
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
	        
	        if(setCount() > 0)
	        	Parallel.iter(data.range(), f);
	    }
	    
	    public def clearAll() {
	        
	        Parallel.iter(data.range(), (i: Long) => { data(i) = 0;});
	        setCount() = 0;
	    }
	    
	    public def setBitCount() = setCount();
	    
	}
}