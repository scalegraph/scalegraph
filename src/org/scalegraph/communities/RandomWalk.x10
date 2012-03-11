package org.scalegraph.communities;

import x10.matrix.Matrix;
import x10.matrix.DenseMatrix;
import x10.util.HashMap;
import org.scalegraph.graph.PlainGraph;

public class RandomWalk {
    private var graph:PlainGraph;
    private var nVertex:Int;
    private var idToIdxMap:HashMap[Long, Int];
    private var U:DenseMatrix;
    // private var S:DenseMatrix;
    private var V:DenseMatrix;
    private var L:DenseMatrix;
    
    static private val c = 0.95;
    static private val t = 1;

    /**
       @param graph
     **/
    public def this(graph:PlainGraph) {
        this.graph = graph;
        this.nVertex = graph.getVertexCount() as Int;
        this.idToIdxMap = new HashMap[Long, Int]();
        U = new DenseMatrix(nVertex, t);
        // S = new DenseMatrix(t, t);
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
    **/
    private def lowRankAod(W:DenseMatrix) {
        for (i in idToIdxMap.keySet()) {
            val neighbours = graph.getOutNeighbours(i);
            val nodeIdx = idToIdxMap(i)();
            if (neighbours != null) {
                for (nbrs in neighbours) {
                    U(nodeIdx, 0) += W(nodeIdx, idToIdxMap(neighbours(nbrs))());
                }
            } else {
                U(nodeIdx, 0) = 1.0;
            }
        }
        U.print();

        // S = (trans(U) * U) ^ (-1)
        val S = new DenseMatrix(t, t);
        S.transMult(U, U);
        S(0, 0) = 1 / S(0, 0); // t == 1
        S.print();

        // V = trans(U) * W
        V.transMult(U, W);
        V.print();

        // L = (S^(-1) - c * V * U) ^ (-1)
        val vu = new DenseMatrix(1, 1);
        vu.mult(V, U);
        val Sinv = new DenseMatrix(1, 1);
        Sinv(0, 0) = 1 / S(0, 0); // t == 1
        L = Sinv - c * vu;
        L.print();
        L(0, 0) = 1 / L(0, 0);
        L.print();
    }

    /*
      private def normalize(matrix:DenseMatrix, graph:PlainGraph) {
      val D = DenseMatrix.make(matrix.m, matrix.n, 0.0);
      for (i in 0..(D.m - 1)) {
      val neighbours = graph.getOutNeighbours();
      if (neighbours != null && neighbours.size > 0) {
      D(i, i) = graph.getOutNeighbours().size;
      } else {
      D(i, i) = 1;
      }
      }
      }
    */
    
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
                                globalMatrix()(globalMap()(nodeId)(),
                                               globalMap()(neighbours(j))()) =
                                    1.0 / neighbours.size;
                            }
                        }
                    } else {
                        for (j in 0..(nVertex - 1)) {
                            at (globalMatrix) {
                                globalMatrix()(globalMap()(nodeId)(), j as Int)
                                    = 1.0 / nVertex;
                            }
                        }
                    }
                }
            }
        }
        globalMatrix().print();
        return globalMatrix();
    }

    public def query(id:Long) {
        val ei = new DenseMatrix(nVertex, 1);
        ei(idToIdxMap(id)(), 0) = 1.0;
        // result = (1 - c) * (ei + c * U * L * V * ei)
        var result:DenseMatrix = new DenseMatrix(nVertex, 1);
        val tmp1 = new DenseMatrix(t, 1);
        tmp1.mult(V, ei);
        tmp1.print();
        val tmp2 = new DenseMatrix(t, 1);
        tmp2.mult(L, tmp1);
        tmp2.print();
         
        result.mult(U, tmp2);
        result.print();
        
        result *= c;
        result += ei;
        result *= (1 - c);
        result.print();
        return result;
    }
}