package org.scalegraph.metrics.centrality;

import x10.array.Array;
import x10.util.ArrayBuilder;
import x10.util.HashSet;
import x10.util.HashMap;
import x10.util.Timer;
import x10.util.ArrayList;
import x10.matrix.dist.DistDenseMatrix;
import x10.matrix.block.Grid;
import x10.matrix.sparse.CompressArray;
import x10.matrix.dist.DistSparseMatrix;
import x10.array.DistArray;
import x10.util.Pair;
import org.scalegraph.communities.LongToIntMap;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.communities.LongToIntMap;
import org.scalegraph.util.VertexInfo;

struct MatrixElement1 {
    public val x:Int;
    public val y:Long;
    public val value:Double;
    public def this(x:Int, y:Long, value:Double) {
        this.x = x;
        this.y = y;
        this.value = value;
    }
};

struct MatrixElement2 {
    public val x:Int;
    public val y:Int;
    public val value:Double;
    public def this(x:Int, y:Int, value:Double) {
        this.x = x;
        this.y = y;
        this.value = value;
    }
};

public class MatrixPagerank {
    private val alpha:Double = 0.85;
    private val delta:Double = 0.0001;
    private val nVertex:Int;
    private val vertexList:DistArray[Long];
    private val graph:PlainGraph;
    private val vertexInfo:VertexInfo;
    private var P:DistSparseMatrix;
    private val grid:Grid;
    private var dangling:DistDenseMatrix;

    public def this(graph:PlainGraph) {
	    val funStart = Timer.milliTime();
        this.graph = graph;
        this.nVertex = graph.getVertexCount() as Int;
	    this.vertexList = graph.getVertexList();
        this.vertexInfo = VertexInfo.make(graph);
        grid = Grid.makeMaxRow(nVertex, nVertex, Place.MAX_PLACES, Place.MAX_PLACES);
	    Console.OUT.printf("this = %f\n", (Timer.milliTime() - funStart) / 1000.0);
    }
    
    public def run() {
        {
	        val startTime = Timer.milliTime();
	        initialize();
	        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) /1000.0);
        }
        {
	        val startTime = Timer.milliTime();
	        val res = iteratePagerank();
	        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) /1000.0);
	        return new PagerankResult(res, vertexInfo, graph);
        }
    }

    private def iteratePagerank() {
	    val funStart = Timer.milliTime();
        var vector:DistDenseMatrix =
	        DistDenseMatrix.make(Grid.makeMaxRow(nVertex, 1,
										         Place.MAX_PLACES, Place.MAX_PLACES));
        vector.init(1.0 / nVertex);
        
        while (true) {
	        val startTime = Timer.milliTime();
	        var newVector:DistDenseMatrix =
                DistDenseMatrix.make(Grid.makeMaxRow(nVertex, 1,
                                                     Place.MAX_PLACES, Place.MAX_PLACES));
	        {
		        val multStart = Timer.milliTime();
		        newVector.mult(P, vector, false);
		        Console.OUT.printf("multiply time = %f\n",
						           (Timer.milliTime() - multStart) /  1000.0);
	        }
	        val tereportValue = (1 - alpha) * tereport(vector);
	        val tereportMatrix =
                DistDenseMatrix.make(Grid.makeMaxRow(nVertex, 1,
                                                     Place.MAX_PLACES, Place.MAX_PLACES));
	        tereportMatrix.init(tereportValue);
	        newVector += tereportMatrix;
	        val dang = alpha * dangling(vector);
	        val danglingScore =
		        DistDenseMatrix.make(Grid.makeMaxRow(nVertex, 1,
											         Place.MAX_PLACES, Place.MAX_PLACES));
	        danglingScore.init(dang);
	        newVector += danglingScore;
	        if (!end(newVector, vector)) {
                vector = newVector;
	        } else {
                break;
	        }
	        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
        }
	    Console.OUT.printf("iteratePagerank = %f\n", (Timer.milliTime() - funStart) / 1000.0);
        return vector;
    }

    private def dangling(matrix:DistDenseMatrix) {
	    val funStart = Timer.milliTime();
	    var sum:Double = 0.0;
	    val grid = matrix.grid;
        for (var i:Int = 0; i < grid.rowBs.size; i++) {
	        val subMatrix = matrix.getBlock(i, 0).getMatrix();
	        val subDangling = dangling.getBlock(i, 0).getMatrix();
	        for (var idx:Int = 0; idx < grid.rowBs(i); idx++) {
		        sum += subMatrix(idx, 0) * subDangling(idx, 0);
	        }
        }
	    Console.OUT.printf("dangling = %f\n", (Timer.milliTime() - funStart) / 1000.0);
	    return sum;
    }
    
    private def tereport(matrix:DistDenseMatrix) {
	    val funStart = Timer.milliTime();
        val grid = matrix.grid;
        var sum:Double = 0.0;
        for (var i:Int = 0; i < grid.rowBs.size; i++) {
	        val subMatrix = matrix.getBlock(i, 0).getMatrix();
	        for (var idx:Int = 0; idx < grid.rowBs(i); idx++) {
                sum += subMatrix(idx, 0);
	        }
        }
	    Console.OUT.printf("tereport = %f\n", (Timer.milliTime() - funStart) / 1000.0);
        return sum / nVertex;
    }

    private def end(A:DistDenseMatrix, B:DistDenseMatrix) {
	    val funStart = Timer.milliTime();
        val d = norm(A - B);
        Console.OUT.printf("delta = %f\n", d);
	    Console.OUT.printf("end = %f\n", (Timer.milliTime() - funStart) / 1000.0);
        return d < delta;
    }
    
    private def norm(matrix:DistDenseMatrix) {
	    val funStart = Timer.milliTime();
        var leftColIdx:Int = 0;
        var upRowIdx:Int = 0;
        val grid = matrix.grid;
        var sum:Double = 0.0;
        for (var rowBlockId:Int = 0; rowBlockId < grid.numRowBlocks; rowBlockId++) {
	        for (var colBlockId:Int = 0; colBlockId < grid.numColBlocks; colBlockId++) {
                val subMatrix = matrix.getBlock(rowBlockId, colBlockId).getMatrix();
                val rowSize = grid.rowBs(rowBlockId);
                val colSize = grid.colBs(colBlockId);
                for (var i:Int = 0; i < rowSize; i++) {
		            for (var j:Int = 0; j < colSize; j++) {
                        sum += subMatrix(i, j) * subMatrix(i, j);
		            }
                }
                if (colBlockId < grid.numColBlocks - 1) {
		            leftColIdx += colSize;
                } else {
		            leftColIdx = 0;
		            upRowIdx += rowSize;
                }
	        }
        }
	    Console.OUT.printf("norm = %f\n", (Timer.milliTime() - funStart) / 1000.0);	
        return Math.sqrt(sum);
    }

    /*
     * This method initializes maps (idToIdxMap and idxToIdMap)
     */
    private def initializeMap() {
	    val funStart = Timer.milliTime();
	    Console.OUT.printf("initializeMap = %f\n", (Timer.milliTime() - funStart) / 1000.0);
    }

    private def numElements(grid:Grid) {
	    val funStart = Timer.milliTime();
	    val distNumberArray =
	        DistArray.make[Array[Int]](Dist.makeUnique());
	    
        for (p in Place.places()) {
	        val r = (vertexList.dist | p).region;      
	        at (p) {
		        distNumberArray(p.id) = new Array[Int](0..(Place.MAX_PLACES - 1));
                for (i in r) {
		            val vertex = vertexList(i);
		            if (vertex != -1l) {
                        val vertexIdx = vertexInfo.getIDX(vertex)();
                        val neighbours = graph.getOutNeighbours(vertex);
                        if (neighbours != null && neighbours.size > 0) {
			                for (j in neighbours) {
                                val neighbour = neighbours(j);
                                val neighbourIdx = vertexInfo.getIDX(neighbour)();
                                val ar = grid.find(neighbourIdx, vertexIdx);
                                val gridId = grid.getBlockId(ar(0), ar(1));
				                distNumberArray(p.id)(gridId) += 1;
			                }
                        } 
		            }
                }
	        }
        }

	    val reducer = (res:Array[Int], arr:Array[Int]):Array[Int] => {
	        return res.map(arr, (x:Int, y:Int)=>{x+y});
	    };
	    val numberArray = distNumberArray.reduce(reducer, new Array[Int](0..(Place.MAX_PLACES - 1)));
	    Console.OUT.printf("numElements = %f\n", (Timer.milliTime() - funStart) / 1000.0);
        return numberArray;
    }

    private def print(o:Any) {
        Console.OUT.println(o);
        Console.OUT.flush();
    }
    
    private def nodeInfo() {
        val funStart = Timer.milliTime();
        print("nodeInfo start");
        val dstBuf =
            PlaceLocalHandle.make[Array[Array[Long]]](Dist.makeUnique(),
                                                      ()=>(new Array[Array[Long]](Place.MAX_PLACES)));
        finish for (p in Place.places()) async {
            val reg = (vertexList.dist | p).region;
            //print(p);
            at (p) {
                val nodeIdList =
                    new Array[ArrayBuilder[Long]](Place.MAX_PLACES,
                                                  (Int)=>(new ArrayBuilder[Long]()));
                //print("B");
                for (i in reg) {
                    val nodeId = vertexList(i);
                    //print("C");
                    if (nodeId != -1l) {
                        //print("D");
                        val pId = vertexInfo.getPlaceID(nodeId);
                        //print("E");
                        nodeIdList(pId).add(nodeId);
                        //print("F");
                    }
                }
                
                for (p1 in Place.places()) finish {
                    at (p1) {
                        //print(p1);
                        //print("G");
                        dstBuf()(p.id) = nodeIdList(p1.id).result();
                        //print("H");
                    }
                }
            }
        }

        //print("I");
        val recvBuf = PlaceLocalHandle.make[Array[Array[MatrixElement1]]]
        (Dist.makeUnique(), ()=>(new Array[Array[MatrixElement1]](Place.MAX_PLACES)));
        //print("J");
        finish for (p in Place.places()) async at (p) {
            //print(p);
            val nodeIdxList = new Array[ArrayBuilder[MatrixElement1]](
                Place.MAX_PLACES,
                (Int)=>(new ArrayBuilder[MatrixElement1]()));
            //print("K");
            for (i in dstBuf()) {
                for (j in dstBuf()(i)) {
                    //print("L");
                    val nodeId = dstBuf()(i)(j);
                    assert(here.id == vertexInfo.getPlace(nodeId).id);
                    //print("M");
                    val nodeIdx = vertexInfo.getIDXFromHere(nodeId)();
                    //print("N");
                    val neighbours = graph.getOutNeighbours(nodeId);
                    //print("O");
                    if (neighbours != null && neighbours.size != 0) {
                        //print("P");
                        val value = 1.0 / neighbours.size;
                        for (nIdx in neighbours) {
                            //print("Q");
                            val nbId = neighbours(nIdx);
                            nodeIdxList(vertexInfo.getPlaceID(nbId)).add(
                                MatrixElement1(nodeIdx, nbId, value));
                            //print("R");
                        }
                    }
                }
            }

            // remote array copy
            finish for (pl in Place.places()) {
                //print(p);
                val nNodes = nodeIdxList(pl.id).length();
                //print("S");
                val dbuffer = at(pl) {
                    recvBuf()(p.id) = new Array[MatrixElement1](nNodes);
                    new RemoteArray[MatrixElement1](recvBuf()(p.id) as Array[MatrixElement1](1){self!=null})
                };
                //print("T");
                finish {
                    Array.asyncCopy[MatrixElement1](nodeIdxList(pl.id).result(), 0, dbuffer, 0, nNodes);
                }
                //print("U");
            }
        }


        val mapArray = PlaceLocalHandle.make[Array[Array[MatrixElement2]]]
        (Dist.makeUnique(), ()=>(new Array[Array[MatrixElement2]](Place.MAX_PLACES)));
        //print("V");
        finish for (p in Place.places()) async at (p) {
            //print(p);
            val srcArray = new Array[ArrayBuilder[MatrixElement2]](
                Place.MAX_PLACES,
                (Int)=>(new ArrayBuilder[MatrixElement2]()));
            //print("W");
            for (i in recvBuf()) {
                for (j in recvBuf()(i)) {
                    //print("X");
                    val elem = recvBuf()(i)(j);
                    //print("Y");
                    val y = vertexInfo.getIDXFromHere(elem.y)();
                    //print("Z");
                    val ar = grid.find(y, elem.x);
                    //print("A1");
                    val gridId = grid.getBlockId(ar(0), ar(1));
                    //print("B1");
                    srcArray(gridId).add(MatrixElement2(y, elem.x, elem.value));
                    //print("C1");
                }
            }
            
            finish for (pl in Place.places()) {
                //print("D1");
                val nNodes = srcArray(pl.id).length();
                //print("E1");
                val dbuffer = at(pl) {
                    //print("F1");
                    mapArray()(p.id) = new Array[MatrixElement2](nNodes);
                    //print("G1");
                    new RemoteArray[MatrixElement2](mapArray()(p.id) as Array[MatrixElement2](1){self!=null})
                };
                //print("H1");
                finish {
                   Array.asyncCopy[MatrixElement2](srcArray(pl.id).result(), 0, dbuffer, 0, nNodes);
                }
                //print("I1");
            }
        }
    
        val map:MatrixMap = new MatrixMap();
        val arr = new Array[Int](Place.MAX_PLACES);

        val numNodes = PlaceLocalHandle.make[Cell[Int]](
            Dist.makeUnique(),
            ()=>(Cell.make[Int](0)));

        for (p in Place.places()) async at (p) {
            for (i in 0..(mapArray().size - 1)) {
                for (j in 0..(mapArray()(i).size - 1)) {
                    val v = mapArray()(i)(j);
                    map.put(v.x, v.y, v.value);
                    numNodes()(numNodes()() + 1);
                }
            }
        }
        
        Console.OUT.printf("nodeInfo time = %f\n", (Timer.milliTime() - funStart) / 1000.0);
        return new Pair[MatrixMap, PlaceLocalHandle[Cell[Int]]](map, numNodes);
    }
    
    private def initializeMatrix(map:MatrixMap, numNodes:PlaceLocalHandle[Cell[Int]]) {
	    val funStart = Timer.milliTime();
        val array = DistArray.make[CompressArray](Dist.makeUnique());
        val grid = Grid.makeMaxRow(nVertex, nVertex,
							       Place.MAX_PLACES, Place.MAX_PLACES);

        /*
         val map = initHashMap();
	     Console.OUT.printf("map.size = %d\n", map.size());
	    */
        //val nNodes = numElements(grid);
        for (p in Place.places()) {
	        at (p) {
                array(p.id) = CompressArray.make(numNodes()());
	        }
        }
        
        val pp = DistSparseMatrix.make(grid, array);
        for (p in Place.places()) {
	        at (p) {
                Console.OUT.println(array(p.id));
	        }
        }

        val init = (x:Int, y:Int)=>{
            /*
             val ar = grid.find(x, y);
             val id = grid.getBlockId(ar(0), ar(1));
             assert(here.id == id);
            */
	        return map.get(x, y);
        };
        Console.OUT.println("start init");
        val initStart = Timer.milliTime();
        pp.init(init);
        Console.OUT.printf("init = %f\n", (Timer.milliTime() - initStart) / 1000.0);
        //pp.print();
        P = pp.scale(alpha);
	    //P.print();
	    Console.OUT.printf("initializeMatrix = %f\n", (Timer.milliTime() - funStart) / 1000.0);
    }

    
    private def initHashMap() {
	    val funStart = Timer.milliTime();
        class HashData {
	        val x:Int;
	        val y:Int;
	        val v:Double;
	        val id:Int;
	        public def this(x:Int, y:Int, v:Double, id:Int) {
                this.x = x;
                this.y = y;
                this.v = v;
                this.id = id;
	        }
        }
        
        val bf = new BufferedHashMap();
        val globalBf = new GlobalRef[BufferedHashMap](bf);
        for (p in Place.places()) {
	        val reg = (vertexList.dist | p).region;
	        at (p) {
                val mpArray = new ArrayList[HashData]();
		        val innerStart = Timer.milliTime();

                for (i in reg) {
		            val vertex = vertexList(i);
		            if (vertex == -1l) {
                        continue;
		            }
		            //assert(idToIdxMap(vertex) != null);
                    val vIdx = vertexInfo.getIDX(vertex)();
		            val neighbours = graph.getOutNeighbours(vertex);
		            if (neighbours != null && neighbours.size > 0) {
			            //Console.OUT.printf("neighbours = %d\n", neighbours.size);
                        for (j in neighbours) {
			                val n = neighbours(j);
                            val nIdx = vertexInfo.getIDX(n)();
			                val a = grid.find(nIdx, vIdx);
			                mpArray.add(new HashData(nIdx, vIdx, 1.0 / neighbours.size,
									                 grid.getBlockId(a(0), a(1))));
                        }
		            }
                }
		        Console.OUT.printf("init in place = %f\n",
						           (Timer.milliTime() - innerStart) / 1000.0);

                at (globalBf) {
		            var cnt:Int = 1000;
		            var time:Double = Timer.milliTime();
		            for (v in mpArray) {
                        globalBf().put(v.x, v.y, v.v, v.id);
			            cnt++;
			            if (cnt > 1000) {
			                //Console.OUT.printf("%f\n", (time - Timer.milliTime()) / 1000.0);
			                cnt = 0;
			                time = Timer.milliTime();
			            }
		            }
                }
	        }
        }
        for (id in (0..(Place.MAX_PLACES - 1))) {
	        bf.flush(id);
        }
	    Console.OUT.printf("initHashMap = %f\n", (Timer.milliTime() - funStart) / 1000.0);
        return bf;
	    
    }

    private def initializeDanglingVector() {
	    val funStart = Timer.milliTime();
        val grid = Grid.makeMaxRow(nVertex, 1, Place.MAX_PLACES, Place.MAX_PLACES);
        dangling = DistDenseMatrix.make(grid);

        var upIdx:Int = 0;
        for (var rowId:Int = 0; rowId < grid.numRowBlocks; rowId++) {
	        val subId = grid.getBlockId(rowId, 0);
	        val subMatrix = dangling.getBlock(subId).getMatrix();
	        for (var i:Int = 0; i < subMatrix.M; i++) {
                val nodeId = vertexInfo.getID(upIdx + i)();
                val neighbours = graph.getOutNeighbours(nodeId);
                if (neighbours == null || neighbours.size == 0) {
		            subMatrix(i, 0) = 1.0 / nVertex;
                }
	        }
	        upIdx += subMatrix.M;
	        dangling.setBlock(subId, subMatrix);
        }
	    Console.OUT.printf("initDanglingVector = %f\n", (Timer.milliTime() - funStart) / 1000.0);
	    //dangling.print();
    }
    
    private def initialize() {
	    val funStart = Timer.milliTime();
        val p = nodeInfo();
        val map = p.first;
        val numNodes = p.second;
        initializeMatrix(map, numNodes);
        initializeDanglingVector();
	    Console.OUT.printf("initialize = %f\n", (Timer.milliTime() - funStart) / 1000.0);
    }
}
