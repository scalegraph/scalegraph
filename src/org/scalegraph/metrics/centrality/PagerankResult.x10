package org.scalegraph.metrics.centrality;

import org.scalegraph.util.VertexInfo;
import org.scalegraph.graph.PlainGraph;
import x10.matrix.dist.DistDenseMatrix;
import x10.matrix.block.Grid;
import x10.util.HashMap;

public class PagerankResult {
    private val vector:DistDenseMatrix;
    private val vertexInfo:VertexInfo;
    private val graph:PlainGraph;

    public def this(vector:DistDenseMatrix, vertexInfo:VertexInfo, graph:PlainGraph) {
        this.vector = vector;
        this.vertexInfo = vertexInfo;
        this.graph = graph;
    }

    public def getScore(key:Long) {
        val idx = vertexInfo.getIDX(key)();
        return vector(idx, 0);
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
                        s += v + "       [ " + vector(idx, 0) + " ]\n";
                    }
                }
                s
            };
        }
        return str;
    }
}
