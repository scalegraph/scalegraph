package org.scalegraph.communities;

import x10.matrix.Matrix;
import x10.matrix.DenseMatrix;
import x10.util.HashMap;
import x10.util.Pair;
import x10.util.ArrayList;
import x10.matrix.dist.DistDenseMatrix;
import x10.matrix.block.Grid;
import x10.lang.Math;
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
    private var U:DistDenseMatrix;
    private var V:DistDenseMatrix;
    private var L:DistDenseMatrix;
    private var Q1inv:DistDenseMatrix;
    private var nCluster:Int;
    
    static private val c = 0.85;
    static private val t = 80;
    static private val k = 50;
    
    private class DecomposeResult {
        public val W1:DistDenseMatrix;
        public val W2:DistDenseMatrix;
        public val result:ArrayList[Pair[Int, Int]];
        public val idToIdxMap:HashMap[Long, Int];
        public val idxToIdMap:HashMap[Int, Long];
        public def this(W1:DistDenseMatrix, W2:DistDenseMatrix,
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


    public def testInverseW1(Q1inv:DistDenseMatrix, W1:DistDenseMatrix) {
        val gridI = Grid.make(nVertex, nVertex);
        val I = DistDenseMatrix.make(gridI);
        for (var i:Int = 0; i < nVertex; i++) {
            I(i, i) = 1.0;
        }
        val Q1 = I - c * W1;
        val grid_I = Grid.make(nVertex, nVertex);
        val _I = DistDenseMatrix.make(grid_I);
        _I.mult(Q1, Q1inv, false);
        val d = norm(I, _I);
        //_I.print();
        if (d > 0.001) {
            throw new Error();
        }
    }
    
    private def testLowRankAod(U:DistDenseMatrix, Sinv:DistDenseMatrix,
                               V:DistDenseMatrix, W2:DistDenseMatrix) {
        val SinvOnePlace = convertDistToOnePlace(Sinv);
        val SOnePlace = LAPACK.inverseDenseMatrix(SinvOnePlace);
        val S = convertOnePlaceToDist(SOnePlace);
        val gridSV = Grid.make(nCluster, nVertex);
        val SV = DistDenseMatrix.make(gridSV);
        SV.mult(S, V, false);
        val gridUSV = Grid.make(nVertex, nVertex);
        val USV = DistDenseMatrix.make(gridUSV);
        USV.mult(U, SV, false);
        //W2.print();
        //USV.print();
        Console.OUT.printf("norm = %f\n", norm(W2, USV));
    }

    private def convertDistToOnePlace(matrix:DistDenseMatrix) {
        val matrixOnePlace = DenseMatrix.make(matrix.M, matrix.N);
        for (var i:Int = 0; i < matrix.M; i++) {
            for (var j:Int = 0; j < matrix.N; j++) {
                matrixOnePlace(i, j) = matrix(i, j);
            }
        }
        return matrixOnePlace;
    }

    private def convertOnePlaceToDist(matrix:DenseMatrix) {
        val grid  = Grid.make(matrix.M, matrix.N);
        val matrixDist = DistDenseMatrix.make(grid);
        for (var i:Int = 0; i < matrix.M; i++) {
            for (var j:Int = 0; j < matrix.N; j++) {
                matrixDist(i, j) = matrix(i, j);
            }
        }
        return matrixDist;
    }

    private def norm(A:Matrix, B:Matrix) {
        var sum:Double = 0.0;
        val M = Math.min(A.M, B.M);
        val N = Math.min(A.N, B.N);
        for (var i:Int = 0; i < M; i++) {
            for (var j:Int = 0; j < N; j++) {
                val d = A(i, j) - B(i, j);
                sum += Math.abs(d);
            }
        }
        return sum;
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
        //testDecompose(Ws);
        //testInverseW1(Q1inv, Ws.W1);
        Console.OUT.println("low rank aod");
        val W2Aod:Array[DistDenseMatrix] = lowRankAod(W2);
        val U = W2Aod(0);
        val Sinv = W2Aod(1);
        val V = W2Aod(2);
        Console.OUT.println("calculate L");
        val L = calculateL(U, Sinv, V, Q1inv);
        //testLowRankAod(U, Sinv, V, W2);
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
    private def inverseW1(W1:DistDenseMatrix,
                          clusterRange:ArrayList[Pair[Int, Int]]) {
        val gridI = Grid.make(W1.M, W1.N);
        val I = DistDenseMatrix.make(gridI);
        for (var i:Int = 0; i < I.M; i++) {
            I(i, i) = 1;
        }
        val Q1 = I - c * W1;
        val gridQ1inv = Grid.make(Q1.M, Q1.N);
        val Q1inv = DistDenseMatrix.make(gridQ1inv);
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

    private def copySubset(src:Matrix, srcRowOffset:Int, srcColOffset:Int,
                           dst:Matrix, dstRowOffset:Int, dstColOffset:Int,
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
        val grid1 = Grid.make(nVertex, nVertex);
        val grid2 = Grid.make(nVertex, nVertex);
        val W1 = GlobalRef[DistDenseMatrix](DistDenseMatrix.make(grid1));
        val W2 = GlobalRef[DistDenseMatrix](DistDenseMatrix.make(grid2));
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
    private def lowRankAod(W2:DistDenseMatrix) {
        // calculate U
        val clusteringResult = clusteringMatrix(W2);
        U = clusteringResult.first;
        nCluster = clusteringResult.second;

        // S^(-1) = (trans(U) * U)
        val gridSinv = Grid.make(nCluster, nCluster);
        val Sinv = DistDenseMatrix.make(gridSinv);
        val UTrans = transMatrix(U);
        Sinv.mult(UTrans, U, false);

        // V = trans(U) * W
        val gridV = Grid.make(nCluster, nVertex);
        val V = DistDenseMatrix.make(gridV);
        V.mult(UTrans, W2, false);

        val result:Array[DistDenseMatrix] = new Array[DistDenseMatrix](3);
        result(0) = U;
        result(1) = Sinv;
        result(2) = V;
        return result;
    }

    private def transMatrix(matrix:DistDenseMatrix) {
        val grid = Grid.make(matrix.N, matrix.M);
        val transMatrix = DistDenseMatrix.make(grid);

        for (var i:Int = 0; i < matrix.M; i++) {
            for (var j:Int = 0; j < matrix.N; j++) {
                transMatrix(j, i) = matrix(i, j);
            }   
        }
        return transMatrix;
    }
    
    private def calculateL(U:DistDenseMatrix, Sinv:DistDenseMatrix,
                           V:DistDenseMatrix, Q1inv:DistDenseMatrix) {
        val gridQ1invU = Grid.make(nVertex, nCluster);
        val Q1invU = DistDenseMatrix.make(gridQ1invU);
        Q1invU.mult(Q1inv, U, false);
        val gridVQ1invU = Grid.make(nCluster, nCluster);
        val VQ1invU = DistDenseMatrix.make(gridVQ1invU);
        VQ1invU.mult(V, Q1invU, false);
        val Linv = Sinv - c * VQ1invU;

        /*
          val LinvOnePlace = new DenseMatrix(nCluster, nCluster);
          for (var i:Int = 0; i < nCluster; i++) {
          for (var j:Int = 0; j < nCluster; j++) {
          LinvOnePlace(i, j) = Linv(i, j);
          }
          }
        */
        val LinvOnePlace = convertDistToOnePlace(Linv);
        
        val LOnePlace = LAPACK.inverseDenseMatrix(LinvOnePlace);

        /*
          val gridL = Grid.make(nCluster, nCluster);
          val L = DistDenseMatrix.make(gridL);
          for (var i:Int = 0; i < nCluster; i++) {
          for (var j:Int = 0; j < nCluster; j++) {
          L(i, j) = LOnePlace(i, j);
          }
          }
        */
        val L = convertOnePlaceToDist(LOnePlace);
        return L;
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
    private def clusteringMatrix(matrix:DistDenseMatrix) {
        val graph = convertMatrixToGraph(matrix);
        val clustering = new DistSpectralClustering(graph);
        val result = clustering.run(t);
        Console.OUT.println(result);

        val clusters = result.getAllClusters();
        val clusterToIdx = new HashMap[Int, Int]();
        val sumArray = new ArrayList[DenseMatrix]();
        for (cluster in clusters) {
            val inClusterNode = result.getVertices(cluster);
            if (inClusterNode.size != 0) {
                val sum = DenseMatrix.make(nVertex, 1);
                for (node in inClusterNode) {
                    for (var i:Int = 0; i < nVertex; i++) {
                        sum(i, 0) += matrix(i, (inClusterNode(node) - 1) as Int);
                    }
                }
                if (sum.norm() > 0.000001) {
                    sumArray.add(sum);
                }
            }
        }

        val nCluster = sumArray.size();
        val gridU = Grid.make(nVertex, nCluster);
        val U:DistDenseMatrix = DistDenseMatrix.make(gridU);
        for (var i:Int = 0; i < nCluster; i++) {
            for (var j:Int = 0; j < nVertex; j++) {
                U(j, i) = sumArray(i)(j, 0);
            }
        }
        
        // U.print();
        return new Pair[DistDenseMatrix, Int](U, nCluster);
    }
    
    private def convertMatrixToGraph(matrix:DistDenseMatrix) {
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
        Console.OUT.println("calculate ei");
        val nRowBlock = Q1inv.grid.numRowBlocks;
        val gridei = Grid.makeMaxRow(nVertex, 1,
                                     nRowBlock, nRowBlock);
        val ei = DistDenseMatrix.make(gridei);
        ei(idToIdxMap(id)(), 0) = 1.0;
        // result = (1 - c) * (Q1^(-1) * ei + c * Q1^(-1) * U * L * V * Q1^(-1) * ei)
        
        Console.OUT.println("calculate Q1invE1");
        val gridQ1invE1 = Grid.makeMaxRow(nVertex, 1,
                                          nRowBlock, nRowBlock);
        val Q1invE1 = DistDenseMatrix.make(gridQ1invE1);
        Q1invE1.mult(Q1inv, ei, false);
        
        Console.OUT.println("calculate VQ1invE1");
        val gridVQ1invE1 = Grid.makeMaxRow(nCluster, 1,
                                           nRowBlock, nRowBlock);
        val VQ1invE1 = DistDenseMatrix.make(gridVQ1invE1);
        VQ1invE1.mult(V, Q1invE1, false);
        
        Console.OUT.println("creating gridLVQ1invE1");
        val gridLVQ1invE1 = Grid.makeMaxRow(nCluster, 1,
                                            nRowBlock, nRowBlock);
        Console.OUT.println("creating LVQ1invE1");
        val LVQ1invE1 = DistDenseMatrix.make(gridLVQ1invE1);
        Console.OUT.println("calculate LVQ1invE1");
        LVQ1invE1.mult(L, VQ1invE1, false);
        
        Console.OUT.println("creating gridULVQ1invE1");
        val gridULVQ1invE1 = Grid.makeMaxRow(nVertex, 1,
                                             nRowBlock, nRowBlock);
        Console.OUT.println("creating ULVQ1invE1");
        val ULVQ1invE1 = DistDenseMatrix.make(gridULVQ1invE1);
        Console.OUT.println("calculate ULVQ1invE1");
        ULVQ1invE1.mult(U, LVQ1invE1, false);
        
        Console.OUT.println("calculate Q1invULVQ1invE1");
        val gridQ1invULVQ1invE1 = Grid.makeMaxRow(nVertex, 1, nRowBlock,
                                                  nRowBlock);
        val Q1invULVQ1invE1 = DistDenseMatrix.make(gridQ1invULVQ1invE1);
        Q1invULVQ1invE1.mult(Q1inv, ULVQ1invE1, false);
        
        Console.OUT.println("calculate result");
        val result = (1 - c) * (Q1invE1 + c * Q1invULVQ1invE1);
        return new RandomWalkResult(idToIdxMap, result);
    }

    public def queryOnePlace(id:Long) {
        val _Q1inv = convertDistToOnePlace(Q1inv);
        val _U = convertDistToOnePlace(U);
        val _L = convertDistToOnePlace(L);
        val _V = convertDistToOnePlace(V);

        val ei = new DenseMatrix(nVertex, 1);
        ei(idToIdxMap(id)(), 0) = 1.0;
        // result = (1 - c) * (Q1^(-1) * ei + c * Q1^(-1) * U * L * V * Q1^(-1) * ei)
        val Q1invE1 = new DenseMatrix(nVertex, 1);
        Q1invE1.mult(_Q1inv, ei);
        val VQ1invE1 = new DenseMatrix(nCluster, 1);
        VQ1invE1.mult(_V, Q1invE1);
        val LVQ1invE1 = new DenseMatrix(nCluster, 1);
        LVQ1invE1.mult(_L, VQ1invE1);
        val ULVQ1invE1 = new DenseMatrix(nVertex, 1);
        ULVQ1invE1.mult(_U, LVQ1invE1);
        val Q1invULVQ1invE1 = new DenseMatrix(nVertex, 1);
        Q1invULVQ1invE1.mult(_Q1inv, ULVQ1invE1);

        val result = (1 - c) * (Q1invE1 + c * Q1invULVQ1invE1);
        val grid = Grid.makeMaxRow(nVertex, 1, Place.MAX_PLACES, Place.MAX_PLACES);
        val _result = DistDenseMatrix.make(grid);
        for (var i:Int = 0; i < nVertex; i++) {
            _result(i, 0) = result(i, 0);
        }
        return new RandomWalkResult(idToIdxMap, _result);
    }
}