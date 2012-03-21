package test.scalegraph.communities;

import org.scalegraph.graph.PlainGraph;
import org.scalegraph.graph.GraphSizeCategory;
import org.scalegraph.io.ScatteredEdgeListReader;
import org.scalegraph.communities.RandomWalk;
import org.scalegraph.communities.LAPACK;
import x10.matrix.DenseMatrix;
import x10.util.HashMap;

public class TestRandomWalk {
    private static def graphSetUp():PlainGraph {
        val graph = new PlainGraph(GraphSizeCategory.SMALL);
        graph.addEdge("1 2");        graph.addEdge("2 1");
        graph.addEdge("1 3");        graph.addEdge("3 1");
        graph.addEdge("1 4");        graph.addEdge("4 1");
        graph.addEdge("2 3");        graph.addEdge("3 2");
        graph.addEdge("2 8");        graph.addEdge("8 2");
        graph.addEdge("3 4");        graph.addEdge("4 3");
        graph.addEdge("4 5");        graph.addEdge("5 4");
        graph.addEdge("5 6");        graph.addEdge("6 5");
        graph.addEdge("5 7");        graph.addEdge("7 5");
        graph.addEdge("6 7");        graph.addEdge("7 6");
        graph.addEdge("8 9");        graph.addEdge("9 8");
        graph.addEdge("8 11");        graph.addEdge("11 8");
        graph.addEdge("9 10");        graph.addEdge("10 9");
        graph.addEdge("10 11");        graph.addEdge("11 10");
        graph.addEdge("10 12");        graph.addEdge("12 10");
        graph.addEdge("11 12");        graph.addEdge("12 11");
        return graph;
    }

    private static graphSetUpTsubame():PlainGraph {
        val reader:ScatteredEdgeListReader = new ScatteredEdgeListReader();
        val graph =
            reader.
            loadFromDir("/data0/t2gsuzumuralab/miyuru/data/scale12-scattered");
        return graph;
    }
    
    public static def main(Array[String]) {
        Console.OUT.println("Start Random Walk with Restart Test");
        val graph = graphSetUpTsubame();

        val result:DistArray[Long] = graph.getVertexList();
        
        val rwr:RandomWalk = new RandomWalk(graph);
        Console.OUT.println("----------Start Pre-compute stage----------");
        rwr.run();
        Console.OUT.println("----------Start Query Stage----------");
        Console.OUT.println(rwr.query(4));
        Console.OUT.println("----------Start OnTheFly method----------");
        iterateRandomWalk(graph, 3);
        Console.OUT.println("----------Start PreComputational method----------");
        preComputationRandomWalk(graph, 3);
        Console.OUT.println("----------End Test----------");
    }

    private static def preComputationRandomWalk(graph:PlainGraph, id:Int) {
        val nVertex:Int = graph.getVertexCount() as Int;
        val matrix:DenseMatrix = convertGraphToMatrix(graph);
        var ei:DenseMatrix = new DenseMatrix(nVertex, 1);
        val c = 0.85;
        ei(id, 0) = 1.0;
        var Q:DenseMatrix = new DenseMatrix(nVertex, nVertex);
        for (var i:Int = 0; i < nVertex; i++) {
            Q(i, i) = 1;
        }
        Q -= c * matrix;
        val Qinv = LAPACK.inverseDenseMatrix(Q);
        var ri:DenseMatrix = new DenseMatrix(nVertex, 1);
        ri.mult(Qinv, ei);
        ri *= (1 - c);
        ri.print();
    }
    private static def iterateRandomWalk(graph:PlainGraph, id:Int) {        
        val nVertex:Int = graph.getVertexCount() as Int;
        val matrix:DenseMatrix = convertGraphToMatrix(graph);
        val ei:DenseMatrix = new DenseMatrix(nVertex, 1);
        val c = 0.85;
        ei(id, 0) = 1.0;
        var vector:DenseMatrix = new DenseMatrix(nVertex, 1);
        vector(id, 0) = 1.0;
        while (true) {
            var newVector:DenseMatrix = new DenseMatrix(nVertex, 1);
            newVector.mult(matrix, vector);
            newVector *= c;
            newVector += (1 - c) * ei;
            if (end(newVector, vector)) {
                break;
            }
            vector = newVector;
        }
        vector.print();
    }

    private static def end(v:DenseMatrix, u:DenseMatrix) {
        return (v - u).norm() < 0.0001;
    }
    
    private static def convertGraphToMatrix(graph:PlainGraph):DenseMatrix {
        val nVertex = graph.getVertexCount();
        val globalMatrix =
            GlobalRef[DenseMatrix](new DenseMatrix(nVertex as Int, nVertex as Int));
        
        val idToIdxMap = new HashMap[Long, Int]();
        val globalMap = GlobalRef[HashMap[Long, Int]](idToIdxMap);
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
        
        for (p in Place.places()) {
            at (p) {
                val r = (vertexList.dist | p).region;
                for (i in r) {
                    val nodeId = vertexList(i);
                    val neighbours = graph.getOutNeighbours(nodeId);
                    if (neighbours != null && neighbours.size != 0) {
                        for (j in neighbours) {
                            at (globalMatrix) {
                                globalMatrix()(globalMap()(neighbours(j))(),
                                               globalMap()(nodeId)()) =
                                    1.0 / neighbours.size;
                            }
                        }
                    } else {
                        for (j in 0..(nVertex - 1)) {
                            at (globalMatrix) {
                                globalMatrix()(j as Int, globalMap()(nodeId)())
                                    = 1.0 / nVertex;
                            }
                        }
                    }
                }
            }
        }
        return globalMatrix();
    }
}
