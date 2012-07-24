package org.scalegraph.metrics.centrality;

import x10.array.Array;
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

public class MatrixPagerank {
  private val alpha:Double = 0.85;
  private val delta:Double = 0.0001;
  private val nVertex:Int;
  private val vertexList:DistArray[Long];
  private val graph:PlainGraph;
  private val idToIdxMap:LongToIntMap;
  private val idxToIdMap:HashMap[Int, Long];
  private var P:DistSparseMatrix;
  private val grid:Grid;
  private var dangling:DistDenseMatrix;

  public def this(graph:PlainGraph) {
	val funStart = Timer.milliTime();
    this.graph = graph;
    this.nVertex = graph.getVertexCount() as Int;
	this.vertexList = graph.getVertexList();
    idToIdxMap = new LongToIntMap();
    idxToIdMap = new HashMap[Int, Long]();
    grid = Grid.makeMaxRow(nVertex, nVertex, Place.MAX_PLACES, Place.MAX_PLACES);
	Console.OUT.printf("this = %f\n", (Timer.milliTime() - funStart) / 1000.0);
  }
  
  public def run() {
    {
      val startTime = Timer.milliTime();
      initialize();
      Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) /1000);
    }
    {
      val startTime = Timer.milliTime();
      val res = iteratePagerank();
      Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) /1000);
      return new PagerankResult(res, idToIdxMap, idxToIdMap);
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

  private def initializeMap() {
	val funStart = Timer.milliTime();
    class Counter {
      public var cnt:Int;
    }
    val cnt = new Counter();
    val globalCnt:GlobalRef[Counter] = new GlobalRef[Counter](cnt);
    val globalIdToIdxMap = new GlobalRef[LongToIntMap](idToIdxMap);
    val globalIdxToIdMap = new GlobalRef[HashMap[Int,Long]](idxToIdMap);
  
    for (p in Place.places()) {
      val r = (vertexList.dist | p).region;

      at (p) {
        for (i in r) {
          val vertex = vertexList(i);
          if (vertex != -1l) {
            at (globalIdToIdxMap) {
              globalIdToIdxMap().put(vertex, globalCnt().cnt);
            }
            at (globalIdxToIdMap) {
              globalIdxToIdMap().put(globalCnt().cnt, vertex);
            }
            at (globalCnt) {
              globalCnt().cnt++;
            }
          }
        }
      }
    }
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
            val vertexIdx = idToIdxMap(vertex)();
            val neighbours = graph.getOutNeighbours(vertex);
            if (neighbours != null && neighbours.size > 0) {
              for (j in neighbours) {
                val neighbour = neighbours(j);
                val neighbourIdx = idToIdxMap(neighbour)();
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

  private def initializeMatrix() {
	val funStart = Timer.milliTime();
    val array = DistArray.make[CompressArray](Dist.makeUnique());
    val grid = Grid.makeMaxRow(nVertex, nVertex,
                               Place.MAX_PLACES, Place.MAX_PLACES);

    val map = initHashMap();
	Console.OUT.printf("map.size = %d\n", map.size());
	
    val nNodes = numElements(grid);
    for (p in Place.places()) {
      at (p) {
        array(p.id) = CompressArray.make(nNodes(p.id));
      }
    }
    
    val pp = DistSparseMatrix.make(grid, array);
    for (p in Place.places()) {
      at (p) {
        Console.OUT.println(array(p.id));
      }
    }

    val init = (x:Int, y:Int)=>{
      return map.get(x, y);
    };
    Console.OUT.println("start init");
    pp.init(init);
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
		Console.OUT.println(p);
        val mpArray = new ArrayList[HashData]();
		val innerStart = Timer.milliTime();

        for (i in reg) {
          val vertex = vertexList(i);
          if (vertex == -1l) {
            continue;
          }
          //assert(idToIdxMap(vertex) != null);
          val vIdx = idToIdxMap(vertex)();
          val neighbours = graph.getOutNeighbours(vertex);
          if (neighbours != null && neighbours.size > 0) {
			Console.OUT.printf("neighbours = %d\n", neighbours.size);
            for (j in neighbours) {
              val n = neighbours(j);
              val nIdx = idToIdxMap(n)();
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
			  Console.OUT.printf("%f\n", (time - Timer.milliTime()) / 1000.0);
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
        val nodeId = idxToIdMap(upIdx + i)();
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
    initializeMap();
    initializeMatrix();
    initializeDanglingVector();
	Console.OUT.printf("initialize = %f\n", (Timer.milliTime() - funStart) / 1000.0);
  }
}
