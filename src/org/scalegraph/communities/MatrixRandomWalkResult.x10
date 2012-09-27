package org.scalegraph.communities;

import org.scalegraph.util.VertexInfo;
import org.scalegraph.graph.PlainGraph;
import x10.util.ArrayList;
import x10.matrix.DenseMatrix;
import x10.matrix.dist.DistDenseMatrix;

public class MatrixRandomWalkResult {
    private val vertexInfo:VertexInfo;
    private val score:Array[Double];
    private val graph:PlainGraph;
    
    public def this(vertexInfo:VertexInfo, score:Array[Double], graph:PlainGraph) {
        this.score = score;
        this.vertexInfo = vertexInfo;
        this.graph = graph;
    }
    
    public def getScore(id:Long) {
        val idx = vertexInfo.getIDX(id)();
        return score(idx);
    }

    public def toString() {
        val vertexList = graph.getVertexList();
        var str:String = "";

        for (p in Place.places()) {
            val r = (vertexList.dist | p).region;
            str += at (p) {
                var s:String = "";
                for (i in r) {
                    val v = vertexList(i);
                    if (v != -1l) {
                        val idx = vertexInfo.getIDX(v)();
                        s += v + "       [ " + score(idx) + " ]\n";
                    }
                }
                s
            };
        }
        return str;
    }
}