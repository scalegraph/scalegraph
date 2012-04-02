package test.scalegraph.communities;

import org.scalegraph.graph.PlainGraph;
import org.scalegraph.graph.GraphSizeCategory;
import org.scalegraph.io.ScatteredEdgeListReader;
import org.scalegraph.communities.RandomWalk;
import org.scalegraph.communities.LAPACK;
import org.scalegraph.io.EdgeListReader;
import x10.matrix.DenseMatrix;
import x10.util.HashMap;
import x10.util.Pair;

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

    private static def graphSetUpTsubame():PlainGraph {
        val reader:EdgeListReader = new EdgeListReader();
        return reader.
            //loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-8.dl");
        	  loadFromFile("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale-8.dl");
    }
    
    public static def main(Array[String]) {
        Console.OUT.println("Start Random Walk with Restart Test");
        val graph = graphSetUpTsubame();
        //val graph = graphSetUp();

        val result:DistArray[Long] = graph.getVertexList();
        
        val rwr:RandomWalk = new RandomWalk(graph);
        Console.OUT.println("----------Start Pre-compute stage----------");
        rwr.run();
        Console.OUT.println("----------Start Query Stage----------");
        val rwrResult = rwr.query(4);
        Console.OUT.println(rwrResult);
        Console.OUT.println("----------Start OnTheFly method----------");
        val iterateResult = iterateRandomWalk(graph, 4);
        val idToIdxMap = iterateResult.first;
        val matrix = iterateResult.second;
        Console.OUT.println("----------Start PreComputational method----------");
        preComputationRandomWalk(graph, 4);

        for (key in idToIdxMap.keySet()) {
            Console.OUT.printf("%d: %f - %f = %f\n", key,
                               rwrResult.getScore(key),
                               matrix(idToIdxMap(key)()), 
                               Math.abs(rwrResult.getScore(key) -
                                        matrix(idToIdxMap(key)())));
        }

        Console.OUT.println("----------End Test----------");
    }

    private static def preComputationRandomWalk(graph:PlainGraph, id:Int) {
        val nVertex:Int = graph.getVertexCount() as Int;
        val result:Pair[DenseMatrix, HashMap[Long, Int]] =
            convertGraphToMatrix(graph);
        val matrix:DenseMatrix = result.first;
        val idToIdxMap:HashMap[Long, Int] = result.second;
        val idx = idToIdxMap(id)();
        var ei:DenseMatrix = new DenseMatrix(nVertex, 1);
        val c = 0.85;
        ei(idx, 0) = 1.0;
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
        val result:Pair[DenseMatrix, HashMap[Long, Int]] =
            convertGraphToMatrix(graph);
        val matrix:DenseMatrix = result.first;
        val idToIdxMap:HashMap[Long, Int] = result.second;
        val idx = idToIdxMap(id)();
        val ei:DenseMatrix = new DenseMatrix(nVertex, 1);
        val c = 0.85;
        ei(idx, 0) = 1.0;
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
        return Pair[HashMap[Long, Int], DenseMatrix](idToIdxMap, vector);
    }

    private static def end(v:DenseMatrix, u:DenseMatrix) {
        return (v - u).norm() < 0.0000001;
    }
    
    private static def convertGraphToMatrix(graph:PlainGraph) {
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
                        val nodeId = vertexList(i);
                        if (nodeId == -1l) {
                            continue;
                        }
                        at (globalMap) {
                            globalMap().put(nodeId, globalCnt().cnt);
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
                    if (nodeId == -1l) {
                        continue;
                    }
                    val neighbours = graph.getOutNeighbours(nodeId);
                    if (neighbours != null && neighbours.size != 0) {
                        for (j in neighbours) {
                            at (globalMatrix) {
                                globalMatrix()(idToIdxMap(neighbours(j))(),
                                               idToIdxMap(nodeId)()) =
                                    1.0 / neighbours.size;
                            }
                        }
                    } else {
                        for (j in 0..(nVertex - 1)) {
                            at (globalMatrix) {
                                globalMatrix()(j as Int, idToIdxMap(nodeId)())
                                    = 1.0 / nVertex;
                            }
                        }
                    }
                }
            }
        }
        return new Pair[DenseMatrix, HashMap[Long, Int]]
            (globalMatrix(), idToIdxMap);
    }
}
