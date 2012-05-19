package org.scalegraph.communities;

import x10.matrix.Matrix;
import x10.matrix.DenseMatrix;
import x10.matrix.dist.DistDenseMatrix;
import x10.matrix.block.Grid;
import x10.util.HashMap;
import x10.util.Pair;
import x10.util.ArrayList;
import x10.util.Timer;
import x10.lang.Math;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.graph.GraphSizeCategory;
import org.scalegraph.clustering.SpectralClustering;
import org.scalegraph.clustering.DistSpectralClustering;
import org.scalegraph.clustering.ClusteringResult;

public class RandomWalk {
    private class LongToIntMap {
        private val map:DistArray[ArrayList[Int]];
        public def this(n:Int) {
            
        }
    }
    
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
        val W1 = result.W1;
        val W2 = result.W2;
        val idToIdxMap = result.idToIdxMap;
        val idxToIdMap = result.idxToIdMap;
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


    public def testInverseW1(Q1inv:DistDenseMatrix, W1:DenseMatrix) {
        val gridQ1 = Grid.makeMaxRow(nVertex, nVertex, Place.MAX_PLACES, Place.MAX_PLACES);
        val Q1 = DistDenseMatrix.make(gridQ1);
        for (var i:Int = 0; i < W1.M; i++) {
            for (var j:Int = 0; j < W1.N; j++) {
                if (i == j) {
                    Q1(i, j) = 1.0 - c * W1(i, j);
                } else {
                    Q1(i, j) = - c * W1(i, j);
                }
            }
        }
        val gridI = Grid.makeMaxRow(nVertex, nVertex, Place.MAX_PLACES, Place.MAX_PLACES);
        val I = DistDenseMatrix.make(gridI);
        for (var i:Int = 0; i < I.M; i++) {
            I(i, i) = 1.0;
        }
        val grid_I = Grid.makeMaxRow(nVertex, nVertex, Place.MAX_PLACES, Place.MAX_PLACES);
        val _I = DistDenseMatrix.make(grid_I);
        _I.mult(Q1, Q1inv, false);
        val d = oldnorm(I, _I);
        //_I.print();
        Console.OUT.printf("norm = %f\n", d);
        if (d > 0.001) {
            throw new Error();
        }
    }
    
    private def testLowRankAod(U:DistDenseMatrix, Sinv:DistDenseMatrix,
                               V:DistDenseMatrix, W2:DistDenseMatrix) {
        val SinvOnePlace = convertDistToOnePlace(Sinv);
        val SOnePlace = LAPACK.inverseDenseMatrix(SinvOnePlace);
        val S = convertOnePlaceToDist(SOnePlace);
        val gridSV = Grid.makeMaxRow(nCluster, nVertex, Place.MAX_PLACES, Place.MAX_PLACES);
        val SV = DistDenseMatrix.make(gridSV);
        SV.mult(S, V, false);
        val gridUSV = Grid.makeMaxRow(nVertex, nVertex, Place.MAX_PLACES, Place.MAX_PLACES);
        val USV = DistDenseMatrix.make(gridUSV);
        USV.mult(U, SV, false);
        //W2.print();
        //USV.print();
        Console.OUT.printf("norm = %f\n", norm(W2, USV));
    }

    private def convertDistToOnePlace(matrix:DistDenseMatrix) {
        Console.OUT.println("Start convertDistToOnePlace");
        val startTime = Timer.milliTime();
        val matrixOnePlace = DenseMatrix.make(matrix.M, matrix.N);
        copySubset(matrix, 0, 0, matrixOnePlace, 0, 0, matrix.M, matrix.N);
        Console.OUT.println("End convertDistToOnePlace");
        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
        return matrixOnePlace;
    }

    private def convertOnePlaceToDist(matrix:DenseMatrix) {
        Console.OUT.println("Start convertOnePlaceToDist");
        val startTime = Timer.milliTime();
        val grid  = Grid.makeMaxRow(matrix.M, matrix.N, Place.MAX_PLACES, Place.MAX_PLACES);
        val matrixDist = DistDenseMatrix.make(grid);
        copySubset(matrix, 0, 0, matrixDist, 0, 0, matrix.M, matrix.N);
        Console.OUT.println("End convertOnePlaceToDist");
        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
        return matrixDist;
    }
    
    private def oldnorm(A:Matrix, B:Matrix) {
        Console.OUT.println("Start convertOnePlaceToDist");
        val startTime = Timer.milliTime();
        var sum:Double = 0.0;
        val M = Math.min(A.M, B.M);
        val N = Math.min(A.N, B.N);
        for (var i:Int = 0; i < M; i++) {
            for (var j:Int = 0; j < N; j++) {
                val d = A(i, j) - B(i, j);
                sum += d * d;
            }
        }
        Console.OUT.println("End convertOnePlaceToDist");
        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
        return sum;
    }

    
    private def norm(A:Matrix, B:Matrix) {
        Console.OUT.println("Start convertOnePlaceToDist");
        val startTime = Timer.milliTime();
        var sum:Double = 0.0;
        val M = Math.min(A.M, B.M);
        val N = Math.min(A.N, B.N);
        for (var i:Int = 0; i < M; i++) {
            for (var j:Int = 0; j < N; j++) {
                val d = A(i, j) - B(i, j);
                sum += Math.abs(d);
            }
        }
        Console.OUT.println("End convertOnePlaceToDist");
        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
        return sum;
    }
    
    /**
       calculate pre-computation stage
    **/
    public def run() {
        Console.OUT.println("Start pre-compute stage");
        val startTime = Timer.milliTime();
        val Ws:DecomposeResult = decomposeGraph(graph);
        // testDecompose(Ws);
        val _W1 = new DenseMatrix(Ws.W1.M, Ws.W1.N);
        copySubset(Ws.W1, 0, 0, _W1, 0, 0, Ws.W1.M, Ws.W1.N);
        // testCopySubset(Ws.W1, 0, 0, _W1, 0, 0, Ws.W1.M, Ws.W1.N);
        val Q1inv = inverseW1(Ws.W1, Ws.result);
        val W2 = Ws.W2;
        this.idToIdxMap = Ws.idToIdxMap;
        this.idxToIdMap = Ws.idxToIdMap;

        // testInverseW1(Q1inv, _W1);
        val W2Aod:Array[DistDenseMatrix] = lowRankAod(W2);
        val U = W2Aod(0);
        val Sinv = W2Aod(1);
        val V = W2Aod(2);
        val L = calculateL(U, Sinv, V, Q1inv);
        //testLowRankAod(U, Sinv, V, W2);
        this.U = U;
        this.V = V;
        this.L = L;
        this.Q1inv = Q1inv;
        val time = (Timer.milliTime() - startTime) / 1000.0;
        Console.OUT.printf("time = %f\n", time);
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
        Console.OUT.println("Start inverseW1");
        val startTime = Timer.milliTime();
        for (range in clusterRange) {
            if (range.first != range.second) {
                val size = range.second - range.first;
                val q1 = new DenseMatrix(size, size);
                copySubset(W1, range.first, range.first,
                           q1, 0, 0, size, size);
                /*
                testCopySubset(W1, range.first, range.first,
                               q1, 0, 0, size, size);
                */
                for (var i:Int = 0; i < q1.M; i++) {
                    for (var j:Int = 0; j < q1.N; j++) {
                        if (i == j) {
                            q1(i, j) = 1.0 - c * q1(i, j);
                        } else {
                            q1(i, j) = - c * q1(i, j);
                        }
                    }
                }
                val q1inv = LAPACK.inverseDenseMatrix(q1);
                // q1inv.print();
                copySubset(q1inv, 0, 0,
                           W1, range.first, range.first, size, size);
                /*
                testCopySubset(q1inv, 0, 0,
                               W1, range.first, range.first, size, size);
                */
            }
        }
        Console.OUT.println("End inverseW1");
        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
        return W1;
    }

    private def testCopySubset(src:Matrix, srcRowOffset:Int, srcColOffset:Int,
                           dst:Matrix, dstRowOffset:Int, dstColOffset:Int,
                           rowCnt:Int, colCnt:Int) {
        for (var i:Int = 0; i < rowCnt; i++) {
            for (var j:Int = 0; j < colCnt; j++) {
                val d = Math.abs(dst(dstRowOffset + i, dstColOffset + j) -
                                 src(srcRowOffset + i, srcColOffset + j));
                Console.OUT.printf("d = %f\n", d);
                if (d > 0.000001) {
                    throw new Error();
                }
            }
        }
    }

    
    private def copySubset(src:Matrix, srcRowOffset:Int, srcColOffset:Int,
                           dst:Matrix, dstRowOffset:Int, dstColOffset:Int,
                           rowCnt:Int, colCnt:Int) {
        Console.OUT.println("Start copySubset");
        val startTime = Timer.milliTime();
        for (var i:Int = 0; i < rowCnt; i++) {
            for (var j:Int = 0; j < colCnt; j++) {
                dst(dstRowOffset + i, dstColOffset + j) =
                    src(srcRowOffset + i, srcColOffset + j);
            }
        }
        Console.OUT.println("End copySubset");
        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
    }

    
    private def copySubset(src:DistDenseMatrix, srcRowOffset:Int, srcColOffset:Int,
                           dst:DenseMatrix, dstRowOffset:Int, dstColOffset:Int,
                           rowCnt:Int, colCnt:Int) {
        val grid = src.grid;
        val upLeftInfo = grid.find(srcRowOffset, srcColOffset);
        val upLeftRowId = upLeftInfo(0);
        val upLeftColId = upLeftInfo(1);
        val downRightInfo = grid.find(srcRowOffset + rowCnt - 1, srcColOffset + colCnt - 1);
        val downRightRowId = downRightInfo(0);
        val downRightColId = downRightInfo(1);
        var srcRowIdx:Int = srcRowOffset;
        var srcColIdx:Int = srcColOffset;
        var dstRowIdx:Int = dstRowOffset;
        var dstColIdx:Int = dstColOffset;
        var rowCpSize:Int = 0;
        var colCpSize:Int = 0;
        for (var rowId:Int = upLeftRowId; rowId <= downRightRowId; rowId++) {
            for (var colId:Int = upLeftColId; colId <= downRightColId; colId++) {
                val info = grid.find(srcRowIdx, srcColIdx);
                val subRowBlockId = info(0);
                val subColBlockId = info(1);
                val subRowIdx = info(2);
                val subColIdx = info(3);
                val subMatrix = src.getBlock(rowId, colId).getMatrix();
                val subRowCnt = Math.min(grid.rowBs(rowId) - subRowIdx,
                                         rowCnt - rowCpSize);
                val subColCnt = Math.min(grid.colBs(colId) - subColIdx,
                                         colCnt - colCpSize);
                copySubset(subMatrix, subRowIdx, subColIdx,
                           dst, dstRowIdx, dstColIdx,
                           subRowCnt, subColCnt);
                if (colId < downRightColId) {
                    srcColIdx += subColCnt;
                    dstColIdx += subColCnt;
                    colCpSize += subColCnt;
                } else {
                    srcColIdx = srcColOffset;
                    dstColIdx = dstColOffset;
                    colCpSize = 0;
                    srcRowIdx += subRowCnt;
                    dstRowIdx += subRowCnt;
                    rowCpSize += subRowCnt;
                }
            }
        }
    }

    
    private def copySubset(src:DenseMatrix, srcRowOffset:Int, srcColOffset:Int,
                           dst:DistDenseMatrix, dstRowOffset:Int, dstColOffset:Int,
                           rowCnt:Int, colCnt:Int) {
        val grid = dst.grid;
        val upLeftInfo = grid.find(dstRowOffset, dstColOffset);
        val upLeftRowId = upLeftInfo(0);
        val upLeftColId = upLeftInfo(1);
        val downRightInfo = grid.find(dstRowOffset + rowCnt - 1, dstColOffset + colCnt - 1);
        val downRightRowId = downRightInfo(0);
        val downRightColId = downRightInfo(1);
        var srcRowIdx:Int = srcRowOffset;
        var srcColIdx:Int = srcColOffset;
        var dstRowIdx:Int = dstRowOffset;
        var dstColIdx:Int = dstColOffset;
        var rowCpSize:Int = 0;
        var colCpSize:Int = 0;
        for (var rowId:Int = upLeftRowId; rowId <= downRightRowId; rowId++) {
            for (var colId:Int = upLeftColId; colId <= downRightColId; colId++) {
                val info = grid.find(dstRowIdx, dstColIdx);
                val subRowBlockId = info(0);
                val subColBlockId = info(1);
                //                val subId = grid.getBlockId(rowId, colId);
                val subId = grid.getBlockId(subRowBlockId, subColBlockId);
                val subRowIdx = info(2);
                val subColIdx = info(3);
                val subMatrix = dst.getBlock(subRowBlockId, subColBlockId).getMatrix();
                val subRowCnt = Math.min(grid.rowBs(rowId) - subRowIdx,
                                         rowCnt - rowCpSize);
                val subColCnt = Math.min(grid.colBs(colId) - subColIdx,
                                         colCnt - colCpSize);
                copySubset(src, srcRowIdx, srcColIdx, 
                           subMatrix, subRowIdx, subColIdx,
                           subRowCnt, subColCnt);
                dst.setBlock(subId, subMatrix);
                if (colId < downRightColId) {
                    srcColIdx += subColCnt;
                    dstColIdx += subColCnt;
                    colCpSize += subColCnt;
                } else {
                    srcColIdx = srcColOffset;
                    dstColIdx = dstColOffset;
                    colCpSize = 0;
                    srcRowIdx += subRowCnt;
                    dstRowIdx += subRowCnt;
                    rowCpSize += subRowCnt;
                }
            }
        }
    }

    private def decomposeGraph(graph:PlainGraph) {
        Console.OUT.println("Start decomposeGraph");
        val startTime = Timer.milliTime();
        val clustering = new DistSpectralClustering(graph, k);
        val result = clustering.run();
        Console.OUT.println(result);

        var cnt:Int = 0;
        val idToIdxMap = new HashMap[Long, Int]();
        val idxToIdMap = new HashMap[Int, Long]();
        val grid1 = Grid.makeMaxRow(nVertex, nVertex, Place.MAX_PLACES, Place.MAX_PLACES);
        val grid2 = Grid.makeMaxRow(nVertex, nVertex, Place.MAX_PLACES, Place.MAX_PLACES);
        val W1 = DistDenseMatrix.make(grid1);
        val W2 = DistDenseMatrix.make(grid2);
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
        var leftColIdx:Int = 0;
        var upRowIdx:Int = 0;
        val grid = W1.grid;
        for (var rowId:Int = 0; rowId < grid.numRowBlocks; rowId++) {
            for (var colId:Int = 0; colId < grid.numColBlocks; colId++) {
                val rowSize = grid.rowBs(rowId);
                val colSize = grid.colBs(colId);
                val block1 = W1.getBlock(rowId, colId);
                val subMatrix1 = block1.getMatrix();
                val block2 = W2.getBlock(rowId, colId);
                val subMatrix2 = block2.getMatrix();
                val w1Id = grid.getBlockId(rowId, colId);
                val w2Id = grid.getBlockId(rowId, colId);
                for (var colIdx:Int = 0; colIdx < colSize; colIdx++) {
                    val wColIdx = colIdx + leftColIdx;
                    val nodeId = idxToIdMap(wColIdx)();
                    val neighbours = graph.getOutNeighbours(nodeId);
                    if (neighbours != null && neighbours.size != 0) {
                        val prob = 1.0 / neighbours.size;
                        for (i in neighbours) {
                            val neighbourId = neighbours(i);
                            val neighbourIdx = idToIdxMap(neighbourId)();
                            if (!(upRowIdx <= neighbourIdx &&
                                  neighbourIdx < upRowIdx + rowSize)) {
                                continue;
                            }
                            if (result.getCluster(nodeId) ==
                                result.getCluster(neighbourId)) {
                                subMatrix1(neighbourIdx - upRowIdx, colIdx) = prob;
                            } else {
                                subMatrix2(neighbourIdx - upRowIdx, colIdx) = prob;
                            }
                        }
                    } else {
                        val prob = 1.0 / nVertex;
                        for (var wRowIdx:Int = upRowIdx; wRowIdx < upRowIdx + rowSize;
                             wRowIdx++) {
                            val rowIdx = wRowIdx - upRowIdx;
                            val neighbourId = idxToIdMap(wRowIdx)();
                            if (result.getCluster(nodeId) ==
                                result.getCluster(neighbourId)) {
                                subMatrix1(rowIdx, colIdx) = prob;
                            } else {
                                subMatrix2(rowIdx, colIdx) = prob;
                            }
                        }
                    }
                }
                W1.setBlock(w1Id, subMatrix1);
                W2.setBlock(w2Id, subMatrix2);
                if (colId < grid.numColBlocks - 1) {
                    leftColIdx += colSize;
                } else {
                    leftColIdx = 0;
                    upRowIdx += rowSize;
                }
            }
        }
        
        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
        Console.OUT.println("end decomposeGraph");
        return new DecomposeResult(W1, W2, clusterRange,
                                   idToIdxMap, idxToIdMap);
    }
    
    /**
       @param W2 the normalized weighted matrix
       @return result of Array which has U, S, V(W2 = U * S * V)
    **/
    private def lowRankAod(W2:DistDenseMatrix) {
        Console.OUT.println("Start LowRankAod");
        val startTime = Timer.milliTime();
        // calculate U
        val clusteringResult = clusteringMatrix(W2);
        U = clusteringResult.first;
        nCluster = clusteringResult.second;

        // S^(-1) = (trans(U) * U)
        val gridSinv = Grid.makeMaxRow(nCluster, nCluster, Place.MAX_PLACES, Place.MAX_PLACES);
        val Sinv = DistDenseMatrix.make(gridSinv);
        val UTrans = transMatrix(U);
        Sinv.mult(UTrans, U, false);

        // V = trans(U) * W
        val gridV = Grid.makeMaxRow(nCluster, nVertex, Place.MAX_PLACES, Place.MAX_PLACES);
        val V = DistDenseMatrix.make(gridV);
        V.mult(UTrans, W2, false);

        val result:Array[DistDenseMatrix] = new Array[DistDenseMatrix](3);
        result(0) = U;
        result(1) = Sinv;
        result(2) = V;
        Console.OUT.println("End LowRankAod");
        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
        return result;
    }

    public def transMatrix(matrix:DistDenseMatrix) {
        Console.OUT.println("Start transMatrix");
        val startTime = Timer.milliTime();
        val grid = Grid.makeMaxRow(matrix.N, matrix.M, Place.MAX_PLACES, Place.MAX_PLACES);
        val result = DistDenseMatrix.make(grid);
        val gridE = Grid.makeMaxRow(matrix.N, matrix.N, Place.MAX_PLACES, Place.MAX_PLACES);
        val E = DistDenseMatrix.make(gridE);
        for (var i:Int = 0; i < E.N; i++) {
            E(i, i) = 1.0;
        }
        result.multTrans(E, matrix, false);
        Console.OUT.println("End transMatrix");
        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
        return result;
    }

    private def calculateL(U:DistDenseMatrix, Sinv:DistDenseMatrix,
                           V:DistDenseMatrix, Q1inv:DistDenseMatrix) {
        Console.OUT.println("Start calculateL");
        val startTime = Timer.milliTime();
        val gridQ1invU = Grid.makeMaxRow(nVertex, nCluster, Place.MAX_PLACES, Place.MAX_PLACES);
        val Q1invU = DistDenseMatrix.make(gridQ1invU);
        Q1invU.mult(Q1inv, U, false);
        val gridVQ1invU = Grid.makeMaxRow(nCluster, nCluster, Place.MAX_PLACES, Place.MAX_PLACES);
        val VQ1invU = DistDenseMatrix.make(gridVQ1invU);
        VQ1invU.mult(V, Q1invU, false);
        val Linv = Sinv - c * VQ1invU;

        val LinvOnePlace = convertDistToOnePlace(Linv);
        
        val LOnePlace = LAPACK.inverseDenseMatrix(LinvOnePlace);

        val L = convertOnePlaceToDist(LOnePlace);
        Console.OUT.println("End calculateL");
        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
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
        
        finish for (p in Place.places()) async {
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

    private def norm(matrix:DistDenseMatrix) {
        var leftColIdx:Int = 0;
        var upRowIdx:Int = 0;
        val grid = matrix.grid;
        var sum:Double = 0.0;
        for (var rowBlockId:Int = 0; rowBlockId < grid.numRowBlocks; rowBlockId++) {
            for (var colBlockId:Int = 0; colBlockId < grid.numColBlocks; colBlockId++) {
                val subMatrix = matrix.getBlock(rowBlockId, colBlockId).getMatrix();
                val rowSize = grid.rowBs(rowBlockId);
                val colSize = grid.colBs(colBlockId);
                for (var i:Int = 0; i < rowSize; i++) {
                    for (var j:Int = 0; j < colSize; j++) {
                        sum += subMatrix(i, j) * subMatrix(i, j);
                    }
                }
                if (colBlockId < grid.numColBlocks - 1) {
                    leftColIdx += colSize;
                } else {
                    leftColIdx = 0;
                    upRowIdx += rowSize;
                }
            }
        }
        return sum;
    }
    
    /**
       @param matrix
       @return U
    **/
    private def clusteringMatrix(matrix:DistDenseMatrix) {
        Console.OUT.println("Start clusteringMatrix");
        val startTime = Timer.milliTime();
        val graph = convertMatrixToGraph(matrix);
        Console.OUT.println("start dist spectral clustering");
        val distStartTime = Timer.milliTime();
        val clustering = new DistSpectralClustering(graph, t);
        val result = clustering.run();
        Console.OUT.printf("end dist spectral clustering, time = %f\n",
                           (Timer.milliTime() - startTime) / 1000.0);
        Console.OUT.println(result);

        val clusters = result.getAllClusters();
        val clusterToIdx = new HashMap[Int, Int]();
        val sumArray = new ArrayList[DistDenseMatrix]();
        Console.OUT.println("Start make sumArray");
        {
            val grid = matrix.grid;
            for (cluster in clusters) {
                val inClusterNode = result.getVertices(cluster);
                if (inClusterNode.size != 0) {
                    val gridSum = Grid.makeMaxRow(nVertex, 1, grid.numRowBlocks, grid.numRowBlocks);
                    val sum = DistDenseMatrix.make(gridSum);
                    val gridA = Grid.makeMaxRow(nVertex, 1, grid.numRowBlocks, grid.numRowBlocks);
                    val A = DistDenseMatrix.make(gridA);
                    for (node in inClusterNode) {
                        A((inClusterNode(node) - 1) as Int, 0) = 1.0;
                    }
                    sum.mult(matrix, A, false);
                    /*
                    for (var i:Int = 0; i < nVertex; i++) {
                        var s:Double = 0.0;
                        for (node in inClusterNode) {
                            s += matrix(i, (inClusterNode(node) - 1) as Int);
                        }
                        if (Math.abs(sum(i, 0) - s) > 0.0000001) {
                            Console.OUT.printf("d = %f\n", Math.abs(sum(i, 0) - s));
                            throw new Error(
                            "failed check abs(sum(" + i + "), 0) - s) > 0.0000001");
                        }
                    }
                    */
                    if (norm(sum) > 0.00001) {
                        sumArray.add(sum);
                    }
                }
            }
        }

        Console.OUT.println("Start make U");
        val nCluster = sumArray.size();
        val gridU = Grid.makeMaxRow(nVertex, nCluster, Place.MAX_PLACES, Place.MAX_PLACES);
        val U:DistDenseMatrix = DistDenseMatrix.make(gridU);
        val grid = U.grid;
        var upRowIdx:Int = 0;
        var leftColIdx:Int = 0;
        
        for (var rowId:Int = 0; rowId < grid.numRowBlocks; rowId++) {
            for (var colId:Int = 0; colId < grid.numColBlocks; colId++) {
                val subMatrix = U.getBlock(rowId, colId).getMatrix();
                val rowSize = grid.rowBs(rowId);
                val colSize = grid.colBs(colId);
                val subId = grid.getBlockId(rowId, colId);
                for (var i:Int = 0; i < rowSize; i++) {
                    for (var j:Int = 0; j < colSize; j++) {
                        val rowIdx = i + upRowIdx;
                        val colIdx = j + leftColIdx;
                        subMatrix(i, j) = sumArray(colIdx)(rowIdx, 0);
                    }
                }
                U.setBlock(subId, subMatrix);
                if (colId < grid.numColBlocks - 1) {
                    leftColIdx += colSize;
                } else {
                    leftColIdx = 0;
                    upRowIdx += rowSize;
                }
            }
        }
        Console.OUT.println("End clusteringMatrix");
        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
        return new Pair[DistDenseMatrix, Int](U, nCluster);
    }
    
    private def convertMatrixToGraph(matrix:DistDenseMatrix) {
        Console.OUT.println("Start convertMatrixToGraph");
        val startTime = Timer.milliTime();
        val graph:PlainGraph = new PlainGraph(GraphSizeCategory.MEDIUM);
        Console.OUT.println("convert matrix to graph");
        // matrix.print();
        for (var i:Int = 1; i <= matrix.N; i++) {
            graph.addVertex(i.toString());
        }

        val grid = matrix.grid;
        var leftColIdx:Int = 0;
        var upRowIdx:Int = 0;
        for (var rowId:Int = 0; rowId < grid.numRowBlocks; rowId++) {
            for (var colId:Int = 0; colId < grid.numColBlocks; colId++) {
                val rowSize = grid.rowBs(rowId);
                val colSize = grid.colBs(colId);
                val subId = grid.getBlockId(rowId, colId);
                val subMatrix = matrix.getBlock(rowId, colId).getMatrix();
                for (var i:Int = 0; i < subMatrix.M; i++) {
                    for (var j:Int = 0; j < subMatrix.N; j++) {
                        if (subMatrix(i, j) > 0) {
                            val rowIdx = i + upRowIdx;
                            val colIdx = j + leftColIdx;
                            val edge = (rowIdx + 1).toString() + " " +
                                (colIdx + 1).toString();
                            graph.addEdge(edge);
                        }
                    }
                }
                if (colId < grid.numColBlocks - 1) {
                    leftColIdx += colSize;
                } else {
                    leftColIdx = 0;
                    upRowIdx += rowSize;
                }
            }
        }
        Console.OUT.println("End convertMatrixToGraph");
        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
        return graph;
    }
    
    /**
       @param node id which you want to calculate RWR score
       @return DenseMatrix RWR score
    **/
    public def query(id:Long) {
        Console.OUT.println("Start query");
        val startTime = Timer.milliTime();
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
        val time = (Timer.milliTime() - startTime) / 1000.0;
        Console.OUT.println("End query");
        Console.OUT.printf("time = %f\n", time);
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