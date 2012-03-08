package org.scalegraph.communities;

import x10.matrix.Matrix;
import x10.matrix.DenseMatrix;
import x10.util.HashMap;
import org.scalegraph.graph.PlainGraph;

public class RandomWalk {
    private val t:Int = 10;
    public static def run(graph:PlainGraph) {
        val matrix:DenseMatrix = convertGraphMatrix(graph); 
    }
    
    private static def convertGraphMatrix(graph:PlainGraph):DenseMatrix {
        val matrix:DenseMatrix = new DenseMatrix(graph.getVertexCount() as Int, graph.getVertexCount() as Int);
	val map = new HashMap[Long, Int]();
	val vertexList = graph.getVertexList();
	val nVertex = graph.getVertexCount();
	
	for (i in vertexList) {
	    map.put(vertexList(i), i(0));
	}
	
	for (i in vertexList) {
	    val neibours = graph.getOutNeighbours(vertexList(i));
	    if (neibours.size != 0) {
		for (j in neibours) {
		    matrix(map(i(0))(), map(neibours(j))()) =
			1.0 / neibours.size;
		}
	    } else {
		for (var j:Int = 0; j < nVertex; j++) {
		    matrix(map(i(0))(), j) = 1.0 / nVertex;
		}
	    }
	}
	matrix.print();
	return matrix;
    }
}