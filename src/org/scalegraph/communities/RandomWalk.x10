package org.scalegraph.communities;

import x10.matrix.Matrix;
import x10.matrix.DenseMatrix;
import x10.util.HashMap;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.graph.GraphSizeCategory;
import org.scalegraph.clustering.SpectralClustering;

public class RandomWalk {
    private var graph:PlainGraph;
    private var nVertex:Int;
    private var idToIdxMap:HashMap[Long, Int];
    private var U:DenseMatrix;
    private var V:DenseMatrix;
    private var L:DenseMatrix;
    
    static private val c = 0.85;
    static private val t = 3;

    /**
       @param graph
     **/
    public def this(graph:PlainGraph) {
        this.graph = graph;
        this.nVertex = graph.getVertexCount() as Int;
        this.idToIdxMap = new HashMap[Long, Int]();
        U = new DenseMatrix(nVertex, t);
        V = new DenseMatrix(t, nVertex);
        L = new DenseMatrix(t, t);
    }

    /**
       calculate pre-computation stage
     **/
    public def run() {
        val W:DenseMatrix = convertGraphToMatrix(graph);
        lowRankAod(W);
    }

    /**
       @param W the normalized weighted matrix
       @return none
    **/
    private def lowRankAod(W:DenseMatrix) {
        // calculate U
        U = clusteringMatrix(W);

        // S^(-1) = (trans(U) * U)
        val Sinv = new DenseMatrix(t, t);
        Sinv.transMult(U, U);

        // V = trans(U) * W
        V.transMult(U, W);

        // L = (S^(-1) - c * V * U) ^ (-1)
        val vu = new DenseMatrix(t, t);
        vu.mult(V, U);
        val Ltmp = Sinv - c * vu;
        L = LAPACK.inverseDenseMatrix(Ltmp);
    }

    /**
       @param PlainGraph
       @return adjacency matrix which correspond to graph
     **/
    private def convertGraphToMatrix(graph:PlainGraph):DenseMatrix {
        val globalMatrix =
            GlobalRef[DenseMatrix](new DenseMatrix(nVertex as Int, nVertex as Int));
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

    /**
       @param matrix
       @return U
     **/
    private def clusteringMatrix(matrix:DenseMatrix) {
        val graph = convertMatrixToGraph(matrix);
        val clustering = new SpectralClustering(graph);
        val result = clustering.run(t);
        Console.OUT.println(result);
        val U:DenseMatrix = new DenseMatrix(nVertex, t);
        for (var i:Int = 0; i < nVertex; i++) {
            val col = result.getCluster((i + 1) as Long);
            for (var j:Int = 0; j < nVertex; j++) {
                U(j, col) += matrix(j, i);
            }
        }
        U.print();
        return U;
    }
    
    private def convertMatrixToGraph(matrix:DenseMatrix) {
        val graph:PlainGraph = new PlainGraph(GraphSizeCategory.SMALL);
        Console.OUT.println("convert matrix to graph");
        matrix.print();
        for (var i:Int = 0; i < matrix.M; i++) {
            for (var j:Int = 0; j < matrix.N; j++) {
                if (matrix(i, j) > 0) {
                    val edge = (j + 1).toString() + " " + (i + 1);
                    Console.OUT.println(edge);
                    graph.addEdge(edge);
                }
            }
        }
        return graph;
    }
    
    /**
       @param node id which you want to calculate RWR score
       @return DenseMatrix RWR score
     **/
    public def query(id:Long) {
        val ei = new DenseMatrix(nVertex, 1);
        ei(idToIdxMap(id)(), 0) = 1.0;
        // result = (1 - c) * (ei + c * U * L * V * ei)
        var result:DenseMatrix = new DenseMatrix(nVertex, 1);
        val tmp1 = new DenseMatrix(t, 1);
        tmp1.mult(V, ei);
        val tmp2 = new DenseMatrix(t, 1);
        tmp2.mult(L, tmp1);
         
        result.mult(U, tmp2);
        
        result *= c;
        result += ei;
        result *= (1 - c);
        return new RandomWalkResult(idToIdxMap, result);
    }
}