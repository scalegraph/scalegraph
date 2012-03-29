package org.scalegraph.communities;

import x10.util.HashMap;
import x10.util.ArrayList;
import x10.matrix.DenseMatrix;

public class RandomWalkResult {
    private val idToIdxMap:HashMap[Long, Int];
    private val score:DenseMatrix;

    public def this(idToIdxMap:HashMap[Long, Int], score:DenseMatrix) {
        this.idToIdxMap = idToIdxMap;
        this.score = score;
    }
    
    public def getScore(id:Long) {
        return score(idToIdxMap(id)(), 0);
    }

    public def toString() {
        var str:String = "";
        for (key in idToIdxMap.keySet()) {
            val idx = idToIdxMap(key)();
            str = str + "" + idx + "        [ " + score(idx, 0) + " ]\n";
        }
        return str;
    }
}