package org.scalegraph.metrics.centrality;

import org.scalegraph.communities.LongToIntMap;
import x10.matrix.dist.DistDenseMatrix;
import x10.matrix.block.Grid;
import x10.util.HashMap;
  
public class PagerankResult {
  private val vector:DistDenseMatrix;
  private val idToIdxMap:LongToIntMap;
  private val idxToIdMap:HashMap[Int, Long];
  public def this(vector:DistDenseMatrix, idToIdxMap:LongToIntMap,
                  idxToIdMap:HashMap[Int, Long]) {
    this.vector = vector;
    this.idToIdxMap = idToIdxMap;
    this.idxToIdMap = idxToIdMap;
  }

  public def getScore(key:Long) {
    val idx = idToIdxMap(key)();
    return vector(idx, 0);
  }
  
  public def toString() {
    var str:String = "";
    for (key in idToIdxMap.keySet()) {
      val idx = idToIdxMap(key)();
      str += key + "       [ " + vector(idx, 0) + " ]\n";
    }
    return str;
  }
}
