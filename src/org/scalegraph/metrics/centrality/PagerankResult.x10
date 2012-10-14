package org.scalegraph.metrics.centrality;

import org.scalegraph.util.VertexInfo;
import org.scalegraph.graph.PlainGraph;
import x10.util.HashMap;
import x10.util.StringBuilder;

public class PagerankResult {
    private val vector:Array[Double];
    private val vertexInfo:VertexInfo;
    private val graph:PlainGraph;

    public def this(vector:Array[Double], vertexInfo:VertexInfo, graph:PlainGraph) {
        this.vector = vector;
        this.vertexInfo = vertexInfo;
        this.graph = graph;
    }

    public def getScore(key:Long) {
        val idx = vertexInfo.getIDX(key)();
        return vector(idx);
    }
    
    public def toString() {
        val vertexList = graph.getVertexList();
        val strb = new StringBuilder();

        for (p in Place.places()) {
            val r = (vertexList.dist | p).region;
            strb.add(at (p) {
                val s = new StringBuilder();
                for (i in r) {
                    val v = vertexList(i);
                    if (v != -1l) {
                        val idx = vertexInfo.getIDX(v)();
                        s.add(v + "       [ " + vector(idx) + " ]\n");
                    }
                }
                s.result()
            });
        }
        return strb.result();
    }
}
