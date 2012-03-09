package org.scalegraph.communities;

import x10.matrix.Matrix;
import x10.matrix.DenseMatrix;
import x10.util.HashMap;
import org.scalegraph.graph.PlainGraph;

public class RandomWalk {
    private val t:Int = 10;
    public static def run(graph:PlainGraph) {
        val matrix:DenseMatrix = convertGraphToMatrix(graph);
        // normalize(matrix);
    }
    
    private static def convertGraphToMatrix(graph:PlainGraph):DenseMatrix {
        Console.OUT.println("get vertex count");
        val nVertex = graph.getVertexCount();
        Console.OUT.println("make matrix");
        val globalMatrix =
            GlobalRef[DenseMatrix](new DenseMatrix(nVertex as Int, nVertex as Int));
        Console.OUT.println("end make matrix");

        val globalMap = GlobalRef[HashMap[Long, Int]](new HashMap[Long, Int]());
        val vertexList = graph.getVertexList();
        {
            class Cnt {
                public var cnt:Int = 0;
            }
            val globalCnt = GlobalRef[Cnt](new Cnt());
            for (p in Place.places()) {
                val r = (vertexList.dist | p).region;
                at (p) {
                    for (i in r) {
                        Console.OUT.println(i);
                        at (globalMap) {
                            globalMap().put(vertexList(i), globalCnt().cnt);
                            at (globalCnt) {
                                globalCnt().cnt += 1;
                            }
                        }
                    }
                }
            }
        }
        
        for (i in globalMap().keySet()) {
            Console.OUT.printf("%d -> %d\n", i, globalMap()(i)());
        }
        
        Console.OUT.println(globalMap());
        for (p in Place.places()) {
            at (p) {
                val r = (vertexList.dist | p).region;
                for (i in r) {
                    Console.OUT.println(vertexList(i));
                    val neibours = graph.getOutNeighbours(vertexList(i));
                    if (neibours != null && neibours.size != 0) {
                        for (j in neibours) {
                            Console.OUT.println("\t" + neibours(j));
                            at (globalMatrix) {
                                globalMatrix()(globalMap()(vertexList(i))(), globalMap()(neibours(j))()) =
                                    1.0 / neibours.size;
                            }
                        }
                    } else {
                        for (j in 0..(nVertex - 1)) {
                            at (globalMatrix) {
                                globalMatrix()(globalMap()(vertexList(i))(), j as Int) = 1.0 / nVertex;
                            }
                        }
                    }
                }
            }
        }
        globalMatrix().print();
        return globalMatrix();
    }
}