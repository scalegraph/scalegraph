package org.scalegraph.communities;

import x10.util.HashMap;
import x10.util.ArrayList;
import x10.matrix.DenseMatrix;
import x10.matrix.dist.DistDenseMatrix;

public class RandomWalkResult {
    private val idToIdxMap:HashMap[Long, Int];
    private val score:DistDenseMatrix;

    public def this(idToIdxMap:HashMap[Long, Int], score:DistDenseMatrix) {
        this.idToIdxMap = idToIdxMap;
        this.score = score;
    }
    
    public def getScore(id:Long) {
        return score(idToIdxMap(id)(), 0);
    }

    public def getResultMatrix() {
        val result:DenseMatrix = new DenseMatrix(idToIdxMap.size(), 1);
        for (key in idToIdxMap.keySet()) {
            val idx = idToIdxMap(key)();
            result(idx, 0) = score(idx, 0);
        }
    }
    
    public def toString() {
        var str:String = "";
        for (key in idToIdxMap.keySet()) {
            val idx = idToIdxMap(key)();
            str = str + key + "        [ " + score(idx, 0) + " ]\n";
        }
        return str;
    }
}