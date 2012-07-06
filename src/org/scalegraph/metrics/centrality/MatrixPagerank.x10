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
  private val graph:PlainGraph;
  private val idToIdxMap:LongToIntMap;
  private val idxToIdMap:HashMap[Int, Long];
  private var P:DistSparseMatrix;
  private val grid:Grid;

  public def this(graph:PlainGraph) {
    this.graph = graph;
    nVertex = graph.getVertexCount() as Int;
    idToIdxMap = new LongToIntMap();
    idxToIdMap = new HashMap[Int, Long]();
    grid = Grid.makeMaxRow(nVertex, nVertex, Place.MAX_PLACES, Place.MAX_PLACES);
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
    var vector:DistDenseMatrix =
      DistDenseMatrix.make(Grid.makeMaxRow(nVertex, 1,
                                           Place.MAX_PLACES, Place.MAX_PLACES));
    vector.init(1.0 / nVertex);
    var v:DistDenseMatrix =
      DistDenseMatrix.make(Grid.make(1, nVertex));
    v.init(1.0 / nVertex);
    
    while (true) {
      val startTime = Timer.milliTime();
      var newVector:DistDenseMatrix =
        DistDenseMatrix.make(Grid.makeMaxRow(nVertex, 1,
                                             Place.MAX_PLACES, Place.MAX_PLACES));
      newVector.mult(P, vector, false);

      val tereportValue = (1 - alpha) * tereport(vector);
      val tereportMatrix =
        DistDenseMatrix.make(Grid.makeMaxRow(nVertex, 1,
                                             Place.MAX_PLACES, Place.MAX_PLACES));
      tereportMatrix.init(tereportValue);
      newVector += tereportMatrix;
      if (!end(newVector, vector)) {
        vector = newVector;
      } else {
        break;
      }
      Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
    }
    return vector;
  }

  private def tereport(matrix:DistDenseMatrix) {
    val grid = matrix.grid;
    var sum:Double = 0.0;
    for (var i:Int = 0; i < grid.rowBs.size; i++) {
      val subMatrix = matrix.getBlock(i, 0).getMatrix();
      for (var idx:Int = 0; idx < grid.rowBs(i); idx++) {
        sum += subMatrix(idx, 0);
      }
    }
    return sum / nVertex;
  }

  private def end(A:DistDenseMatrix, B:DistDenseMatrix) {
    val d = norm(A - B);
    Console.OUT.printf("delta = %f\n", d);
    return d < delta;
  }
  
  private def norm(matrix:DistDenseMatrix) {
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
    return Math.sqrt(sum);
  }

  private def initializeMap() {
    class Counter {
      public var cnt:Int;
    }
    val cnt = new Counter();
    val globalCnt:GlobalRef[Counter] = new GlobalRef[Counter](cnt);
    val vertexList = graph.getVertexList();
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
  }

  private def numElements(grid:Grid) {
    val vertexList = graph.getVertexList();
    val numberArray = new Array[Int](0..(Place.MAX_PLACES - 1));
    val globalNumberArray = new GlobalRef[Array[Int]](numberArray);
    for (p in Place.places()) {
      val r = (vertexList.dist | p).region;      
      at (p) {
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
                at (globalNumberArray) {
                  globalNumberArray()(gridId) += 1;
                }
              }
            } else {
              /*
              val ar = grid.find(0 ,vertexIdx);
              val colId = ar(1);
              for (var rowId:Int = 0; rowId < grid.numRowBlocks; rowId++) {
                val gridId = grid.getBlockId(rowId, colId);
                val rowSize = grid.rowBs(rowId);
                at (globalNumberArray) {
                  globalNumberArray()(gridId) += rowSize;
                }
              }
              */
            }
          }
        }
      }
    }
    /* test code */
    class Cnt {
      public var cnt:Int = 0;
    }
    val cnt = GlobalRef[Cnt](new Cnt());
    for (p in Place.places()) {
      val r = (vertexList.dist | p).region;
      at (p) {
        for (i in r) {
          val vertex = vertexList(i);
          if (vertex != -1l) {
            val neighbours = graph.getOutNeighbours(vertexList(i));
            if (neighbours != null) {
              at (cnt) {
                cnt().cnt++;
              }
            }
          }
        }
      }
    }
    var sum:Int = 0;
    for (i in numberArray) {
      Console.OUT.println(i);
      sum += numberArray(i);
    }
    Console.OUT.printf("sum = %d\n", sum);
    Console.OUT.printf("cnt = %d\n", cnt().cnt);

    /*test code 2*/
    for (p in Place.places()) {
      val r = (vertexList.dist | p).region;
      at (p) {
        for (i in r) {
          val vertex = vertexList(i);
          if (vertex != -1l) {
            val neighbours = graph.getOutNeighbours(vertex);
            if (neighbours == null || neighbours.size == 0) {
              Console.OUT.printf("%d\n", idToIdxMap(vertex)());
            }
          }
        }
      }
    }
    return numberArray;
  }

  private def initializeMatrix() {
    val array = DistArray.make[CompressArray](Dist.makeUnique());
    val grid = Grid.makeMaxRow(nVertex, nVertex,
                               Place.MAX_PLACES, Place.MAX_PLACES);
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
    val map = initHashMap();
    val init = (x:Int, y:Int)=>{
      return map.get(x, y);
    };
    Console.OUT.println("start init");
    pp.init(init);
    pp.print();
    P = pp.scale(alpha);
  }

  
  private def initHashMap() {
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

    val vertexList = graph.getVertexList();
    val bf = new BufferedHashMap();
    val globalBf = new GlobalRef[BufferedHashMap](bf);
    for (p in Place.places()) {
      Console.OUT.println("A");
      val reg = (vertexList.dist | p).region;
      at (p) {
        val mpArray = new ArrayList[HashData]();
        Console.OUT.println(p);
        for (i in reg) {
          Console.OUT.println(i);
          val vertex = vertexList(i);
          if (vertex == -1l) {
            continue;
          }
          assert(idToIdxMap(vertex) != null);
          val vIdx = idToIdxMap(vertex)();
          val neighbours = graph.getOutNeighbours(vertex);
          if (neighbours != null && neighbours.size > 0) {
            Console.OUT.println("D");
            for (j in neighbours) {
              val n = neighbours(j);
              val nIdx = idToIdxMap(n)();
              val a = grid.find(nIdx, vIdx);
              Console.OUT.println("E");
              mpArray.add(new HashData(nIdx, vIdx, 1.0 / neighbours.size,
                                     grid.getBlockId(a(0), a(1))));
              Console.OUT.println("F");
            }
          }
        }
        at (globalBf) {
          for (v in mpArray) {
            globalBf().put(v.x, v.y, v.v, v.id);
          }
        }
      }
    }
    Console.OUT.println("G");
    for (id in (0..(Place.MAX_PLACES - 1))) {
      bf.flush(id);
    }
    return bf;
  }
  
  private def initialize() {
    initializeMap();
    initializeMatrix();
  }
}
