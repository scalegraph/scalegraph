package org.scalegraph.communities;

import x10.matrix.Matrix;
import x10.matrix.DenseMatrix;
import x10.util.HashMap;
import x10.util.Pair;
import x10.util.ArrayList;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.graph.GraphSizeCategory;
import org.scalegraph.clustering.SpectralClustering;
import org.scalegraph.clustering.DistSpectralClustering;
import org.scalegraph.clustering.ClusteringResult;

public class RandomWalk {
    private var graph:PlainGraph;
    private var nVertex:Int;
    private var idToIdxMap:HashMap[Long, Int];
    private var idxToIdMap:HashMap[Int, Long];
    private var U:DenseMatrix;
    private var V:DenseMatrix;
    private var L:DenseMatrix;
    private var Q1inv:DenseMatrix;
    
    static private val c = 0.85;
    static private val t = 50;
    static private val k = 50;

    private class DecomposeResult {
        public val W1:DenseMatrix;
        public val W2:DenseMatrix;
        public val result:ArrayList[Pair[Int, Int]];
        public val idToIdxMap:HashMap[Long, Int];
        public val idxToIdMap:HashMap[Int, Long];
        public def this(W1:DenseMatrix, W2:DenseMatrix,
                        result:ArrayList[Pair[Int, Int]],
                        idToIdxMap:HashMap[Long, Int],
                        idxToIdMap:HashMap[Int, Long]) {
            this.W1 = W1;
            this.W2 = W2;
            this.result = result;
            this.idToIdxMap = idToIdxMap;
            this.idxToIdMap = idxToIdMap;
        }
    }
    
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
        Q1inv = new DenseMatrix(nVertex, nVertex);
    }

    private def testDecompose(result:DecomposeResult) {
        val vertexList = graph.getVertexList();
        for (p in Place.places()) {
            at (p) {
                val region = (vertexList.dist | p).region;
                for (i in region) {
                    val id = vertexList(i);
                    if (id == -1l) {
                        continue;
                    }
                    val neighbours = graph.getOutNeighbours(id);
                    val idx = idToIdxMap(id)();
                    if (neighbours != null) {
                        for (neighbour in neighbours) {
                            val nIdx = idToIdxMap(neighbours(neighbour))();
                            if (!(result.W1(nIdx, idx) > 0 ||
                                  result.W2(nIdx, idx) > 0)) {
                                throw new Error();
                            }
                        }
                    }
                }
            }
        }
    }

    public def testInverseW1(Q1inv:DenseMatrix, W1:DenseMatrix) {
        val I = new DenseMatrix(nVertex, nVertex);
        for (var i:Int = 0; i < nVertex; i++) {
            I(i, i) = 1.0;
        }
        val Q1 = I - c * W1;
        val _I = new DenseMatrix(nVertex, nVertex);
        _I.mult(Q1, Q1inv);
        //_I.print();
        if ((_I - I).norm() > 0.001) {
            throw new Error();
        }
    }

    private def testLowRankAod(U:DenseMatrix, Sinv:DenseMatrix, V:DenseMatrix,
                               W2:DenseMatrix) {
        val S = LAPACK.inverseDenseMatrix(Sinv);
        val SV = new DenseMatrix(t, nVertex);
        SV.mult(S, V);
        val USV = new DenseMatrix(nVertex, nVertex);
        USV.mult(U, SV);
        //W2.print();
        //USV.print();
        Console.OUT.printf("norm = %f\n", (W2-USV).norm());
    }
    
    /**
       calculate pre-computation stage
     **/
    public def run() {
        Console.OUT.println("Decompose graph");
        val Ws:DecomposeResult = decomposeGraph(graph);
        Console.OUT.println("inverse W1");
        val Q1inv = inverseW1(Ws.W1, Ws.result);
        val W2 = Ws.W2;
        this.idToIdxMap = Ws.idToIdxMap;
        this.idxToIdMap = Ws.idxToIdMap;
        testDecompose(Ws);
        testInverseW1(Q1inv, Ws.W1);
        Console.OUT.println("low rank aod");
        val W2Aod:Array[DenseMatrix] = lowRankAod(W2);
        val U = W2Aod(0);
        val Sinv = W2Aod(1);
        val V = W2Aod(2);
        Console.OUT.println("calculate L");
        val L = calculateL(U, Sinv, V, Q1inv);
        testLowRankAod(U, Sinv, V, W2);
        this.U = U;
        this.V = V;
        this.L = L;
        this.Q1inv = Q1inv;
        Console.OUT.println("end");
    }

    /**
       to calculate Q1 inverse
       @param W1 Q1 = I - c * W1
       @param clusterRange clustering range
       @return Q1 inverse
     **/
    private def inverseW1(W1:DenseMatrix, clusterRange:ArrayList[Pair[Int, Int]]) {
        val I = new DenseMatrix(W1.M, W1.N);
        for (var i:Int = 0; i < I.M; i++) {
                I(i, i) = 1;
        }
        val Q1 = I - c * W1;
        val Q1inv = new DenseMatrix(Q1.M, Q1.N);
        finish for (range in clusterRange) async {
                if (range.first != range.second) {
                    val size = range.second - range.first;
                    val q1 = new DenseMatrix(size, size);
                    copySubset(Q1, range.first, range.first,
                               q1, 0, 0, size, size);
                    val q1inv = LAPACK.inverseDenseMatrix(q1);
                    // q1inv.print();
                    copySubset(q1inv, 0, 0,
                               Q1inv, range.first, range.first, size, size);
                }
        }
        return Q1inv;
    }

    private def copySubset(src:DenseMatrix, srcRowOffset:Int, srcColOffset:Int,
                           dst:DenseMatrix, dstRowOffset:Int, dstColOffset:Int,
                           rowCnt:Int, colCnt:Int) {
        for (var i:Int = 0; i < rowCnt; i++) {
            for (var j:Int = 0; j < colCnt; j++) {
                dst(dstRowOffset + i, dstColOffset + j) =
                    src(srcRowOffset + i, srcColOffset + j);
            }
        }
    }
    
    private def decomposeGraph(graph:PlainGraph) {
        val clustering = new DistSpectralClustering(graph);
        val result = clustering.run(k);
        Console.OUT.println(result);

        var cnt:Int = 0;
        val idToIdxMap = new HashMap[Long, Int]();
        val idxToIdMap = new HashMap[Int, Long]();
        val W1 = GlobalRef[DenseMatrix](new DenseMatrix(nVertex, nVertex));
        val W2 = GlobalRef[DenseMatrix](new DenseMatrix(nVertex, nVertex));
        val clusters = result.getAllClusters();

        Console.OUT.println("create cluster range");
        val clusterRange:ArrayList[Pair[Int, Int]] =
            new ArrayList[Pair[Int, Int]]();
        for (key in clusters) {
            val vertices = result.getVertices(key);
            val tmp = cnt;
            for (j in vertices) {
                val vertex = vertices(j);
                idToIdxMap.put(vertex, cnt);
                idxToIdMap.put(cnt, vertex);
                cnt++;
            }
            clusterRange.add(new Pair[Int, Int](tmp, cnt));
        }
        
        Console.OUT.println("create matrix");    
        val vertexList = graph.getVertexList();
        for (p in Place.places()) {
            at (p) {
                val r = vertexList.dist.get(p);
                for (i in r) {
                    val nodeId = vertexList(i);
                    if (nodeId == -1l) {
                        continue;
                    }
                    val neighbours:Array[Long] = graph.getOutNeighbours(nodeId);
                    val nodeIdx = idToIdxMap(nodeId)();
                    if (neighbours != null && neighbours.size != 0) {
                        for (j in neighbours) {
                            val neighbour = neighbours(j);
                            val neighbourIdx = idToIdxMap(neighbour)();
                            val prob = 1.0 / neighbours.size;
                            if (result.getCluster(nodeId) ==
                                result.getCluster(neighbour)) {
                                at (W1) {
                                    W1()(neighbourIdx, nodeIdx) = prob;
                                }
                            } else {
                                at (W2) {
                                    W2()(neighbourIdx, nodeIdx) = prob;
                                }
                            }
                        }
                    } else {
                        for (j in 0..(nVertex - 1)) {
                            val prob = 1.0 / nVertex;
                            val neighbour = idxToIdMap(j)();
                            if (result.getCluster(nodeId) ==
                                result.getCluster(neighbour)) {
                                at (W1) {
                                    W1()(j, nodeIdx) = prob;
                                }
                            } else {
                                at (W2) {
                                    W2()(j, nodeIdx) = prob;
                                }
                            }
                        }
                    }
                }
            }
        }

        return new DecomposeResult(W1(), W2(), clusterRange,
                                   idToIdxMap, idxToIdMap);
    }
    
    /**
       @param W2 the normalized weighted matrix
       @return result of Array which has U, S, V(W2 = U * S * V)
    **/
    private def lowRankAod(W2:DenseMatrix) {
        // calculate U
        U = clusteringMatrix(W2);

        // S^(-1) = (trans(U) * U)
        val Sinv = new DenseMatrix(t, t);
        Sinv.transMult(U, U);

        // V = trans(U) * W
        V.transMult(U, W2);

        val result:Array[DenseMatrix] = new Array[DenseMatrix](3);
        result(0) = U;
        result(1) = Sinv;
        result(2) = V;
        return result;
    }

    private def calculateL(U:DenseMatrix, Sinv:DenseMatrix,
                           V:DenseMatrix, Q1inv:DenseMatrix) {
        val Q1invU = new DenseMatrix(nVertex, t);
        Q1invU.mult(Q1inv, U);
        val VQ1invU = new DenseMatrix(t, t);
        VQ1invU.mult(V, Q1invU);
        val Linv = Sinv - c * VQ1invU;
        return LAPACK.inverseDenseMatrix(Linv);
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
        val clustering = new DistSpectralClustering(graph);
        val result = clustering.run(t);
        Console.OUT.println(result);
        val U:DenseMatrix = new DenseMatrix(nVertex, t);
        for (var i:Int = 0; i < nVertex; i++) {
            val col = result.getCluster((i + 1) as Long);
            for (var j:Int = 0; j < nVertex; j++) {
                U(j, col) += matrix(j, i);
            }
        }
        // U.print();
        return U;
    }
    
    private def convertMatrixToGraph(matrix:DenseMatrix) {
        val graph:PlainGraph = new PlainGraph(GraphSizeCategory.MEDIUM);
        Console.OUT.println("convert matrix to graph");
        // matrix.print();
        for (var i:Int = 1; i <= matrix.N; i++) {
            graph.addVertex(i.toString());
        }
        for (var i:Int = 0; i < matrix.M; i++) {
            for (var j:Int = 0; j < matrix.N; j++) {
                if (matrix(i, j) > 0) {
                    val edge = (j + 1).toString() + " " + (i + 1);
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
        // result = (1 - c) * (Q1^(-1) * ei + c * Q1^(-1) * U * L * V * Q1^(-1) * ei)
        val Q1invE1 = new DenseMatrix(nVertex, 1);
        Q1invE1.mult(Q1inv, ei);
        val VQ1invE1 = new DenseMatrix(t, 1);
        VQ1invE1.mult(V, Q1invE1);
        val LVQ1invE1 = new DenseMatrix(t, 1);
        LVQ1invE1.mult(L, VQ1invE1);
        val ULVQ1invE1 = new DenseMatrix(nVertex, 1);
        ULVQ1invE1.mult(U, LVQ1invE1);
        val Q1invULVQ1invE1 = new DenseMatrix(nVertex, 1);
        Q1invULVQ1invE1.mult(Q1inv, ULVQ1invE1);

        val result = (1 - c) * (Q1invE1 + c * Q1invULVQ1invE1);
        return new RandomWalkResult(idToIdxMap, result);
    }
}