package org.scalegraph.metrics.centrality;

import x10.array.Array;
import x10.util.HashSet;
import x10.util.HashMap;
import x10.util.Timer;
import x10.matrix.dist.DistDenseMatrix;
import x10.matrix.block.Grid;
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
  private val P:DistDenseMatrix;

  public def this(graph:PlainGraph) {
    this.graph = graph;
    nVertex = graph.getVertexCount() as Int;
    P = DistDenseMatrix.make(Grid.makeMaxRow(nVertex, nVertex,
                                             Place.MAX_PLACES, Place.MAX_PLACES));
    idToIdxMap = new LongToIntMap();
    idxToIdMap = new HashMap[Int, Long]();
  }
  
  public def run() {
    initialize();
    return iteratePagerank();
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
      var newVector:DistDenseMatrix =
        DistDenseMatrix.make(Grid.makeMaxRow(nVertex, 1,
                                             Place.MAX_PLACES, Place.MAX_PLACES));
      newVector.mult(P, vector, false);
      newVector.scale(alpha);
      val tereport:DistDenseMatrix =
        DistDenseMatrix.make(Grid.makeMaxRow(nVertex, 1,
                                             Place.MAX_PLACES, Place.MAX_PLACES));
      tereport.mult(v, vector, false);
      val tereportValue = tereport(0, 0);
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
    }
    return vector;
  }

  private def end(A:DistDenseMatrix, B:DistDenseMatrix) {
    return norm(A - B) < delta;
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
    return sum;
  }
  
  private def initialize() {
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

    var leftColIdx:Int = 0;
    var upRowIdx:Int = 0;
    val grid = P.grid;

    for (var rowId:Int = 0; rowId < grid.numRowBlocks; rowId++) {
      for (var colId:Int = 0; colId < grid.numColBlocks; colId++) {
        val rowSize = grid.rowBs(rowId);
        val colSize = grid.colBs(colId);
        val subMatrix = P.getBlock(rowId, colId).getMatrix();
        val pId = grid.getBlockId(rowId, colId);
        for (var colIdx:Int = 0; colIdx < colSize; colIdx++) {
          val pColIdx = colIdx + leftColIdx;
          val nodeId = idxToIdMap(pColIdx)();
          val neighbours = graph.getOutNeighbours(nodeId);

          if (neighbours != null && neighbours.size != 0) {
            val prob = 1.0 / neighbours.size;

            for (i in neighbours) {
              val neighbourId = neighbours(i);
              val neighbourIdx = idToIdxMap(neighbourId)();

              if (upRowIdx <= neighbourIdx &&
                  neighbourIdx <= upRowIdx + rowSize) {
                val subIdx = neighbourIdx - upRowIdx;
                subMatrix(subIdx, colIdx) = prob;
              }
            }
          } else {
            val prob = 1.0 / nVertex;
            for (var subIdx:Int = 0; subIdx < rowSize; subIdx++) {
              subMatrix(subIdx, colIdx) = prob;
            }
          }
        }
        P.setBlock(pId, subMatrix);
      }
    }
  }
}
