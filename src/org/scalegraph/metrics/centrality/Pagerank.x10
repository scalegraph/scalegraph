package org.scalegraph.metrics.centrality;

import x10.array.Array;
import x10.util.HashSet;
import x10.util.HashMap;
import x10.util.Timer; 
import org.scalegraph.communities.LongToIntMap;
import org.scalegraph.graph.PlainGraph;

public class Pagerank {
  private val alpha:Double = 0.85;
  private val delta:Double = 0.0001;
  private val nVertex:Int;
  private val graph:PlainGraph;
  private val idToIdxMap:LongToIntMap;
  private val idxToIdMap:HashMap[Int, Long];
  
  public def this(graph:PlainGraph) {
    this.graph = graph;
    nVertex = graph.getVertexCount() as Int;
    this.idToIdxMap = new LongToIntMap();
    this.idxToIdMap = new HashMap[Int, Long]();
  }
  
  public def run() {
    val R:Array[Double] = new Array[Double](nVertex);
    // initialize result vector
    for (i in R.region) {
      R(i) = 1.0 / nVertex;
    } 
    val _R:Array[Double] = new Array[Double](nVertex);

    
    val setRN:HashSet[Long] = new HashSet[Long]();
    val setRC:HashSet[Long] = new HashSet[Long]();
    val globalSetRN = new GlobalRef[HashSet[Long]](setRN);
    val globalSetRC = new GlobalRef[HashSet[Long]](setRC);
    {
      Console.OUT.println("begin initialize");
      val start = Timer.milliTime();
      initialize(setRN);
      Console.OUT.println("end initialize");
      Console.OUT.printf("time = %f\n", (Timer.milliTime() - start) / 1000.0);
    }
    
    val vertexList = graph.getVertexList();
    var cnt:Int = 0;
    {
      Console.OUT.println("begin iterate");
      val start = Timer.milliTime();
      // main loop
      while (setRN.size() != 0) {
        val innerStart = Timer.milliTime();
        //Console.OUT.printf("size = %d\n", setRN.size());
        var gr:GlobalRef[Array[Double]];
        var g_r:GlobalRef[Array[Double]];
        if (cnt % 2 == 0) {
          gr = new GlobalRef[Array[Double]](R);
          g_r = new GlobalRef[Array[Double]](_R);
        } else {
          gr = new GlobalRef[Array[Double]](_R);
          g_r = new GlobalRef[Array[Double]](R);
        }
        cnt++;
        val globalCurrentR = gr;
        val globalNextR = g_r;
        for (p in Place.places()) {
          at (p) {
            val d = (vertexList.dist | p).region;
            for (i in d) {
              //            Console.OUT.println("A");
              val node = vertexList(i);
              if (node < 0) {continue;}
              val nodeIdx = idToIdxMap(node)();
              val contains = at (globalSetRC) {globalSetRC().contains(node)};
              if (contains) {
                //              Console.OUT.println("B");
                val score = at (globalCurrentR) {globalCurrentR()(nodeIdx)};
                at (globalNextR) {
                  globalNextR()(nodeIdx) = score;
                }
              } else {
                // Console.OUT.println("B'");
                // Console.OUT.println(node);
                val neighbours = graph.getInNeighbours(node);
                var score:Double = 0.0;
                if (neighbours != null) {
                  for (j in neighbours) {
                    //                  Console.OUT.println("C");
                    val neighbour = neighbours(j);
                    val neighbourIdx = idToIdxMap(neighbour)();
                    val outNeighbours =
                      graph.getOutNeighbours(neighbour);
                    if (outNeighbours != null && outNeighbours.size > 0) {
                      val outDeg = outNeighbours.size;
                      score +=
                      (at (globalCurrentR) {globalCurrentR()(neighbourIdx)}) /
                      (outDeg as Double);
                    } else {
                      score +=
                      (at (globalCurrentR) {globalCurrentR()(neighbourIdx)}) /
                      (nVertex as Double);
                    }
                  }
                }
                // Console.OUT.println("D");
                val _score = score;
                at (globalNextR) {
                  globalNextR()(nodeIdx) = _score * alpha + (1.0 - alpha) / nVertex;
                }
                val diff = Math.abs(_R(nodeIdx) - R(nodeIdx));
                // Console.OUT.printf("diff(%d) = %f\n", node, diff);
                if (diff < delta) {
                  at (globalSetRN) {
                    globalSetRN().remove(node);
                  }
                  at (globalSetRC) {
                    globalSetRC().add(node);
                  }
                }
              }
            }
          }
        }
        Console.OUT.printf("innerTime = %f\n", (Timer.milliTime() - innerStart) / 1000.0);
      }
      Console.OUT.printf("time = %f\n", (Timer.milliTime() - start) / 1000.0);
      Console.OUT.println("end iterate");
    }
    return new PagerankResult(R, idToIdxMap, idxToIdMap);
  }

  private def initialize(setRN:HashSet[Long]) {
    val vertexList = graph.getVertexList();
    class Counter {
      public var cnt:Int;
      public def this() {
        cnt = 0;
      }
    }

    val globalIdToIdxMap =
      new GlobalRef[LongToIntMap](idToIdxMap);
    val globalIdxToIdMap =
      new GlobalRef[HashMap[Int, Long]](idxToIdMap);
    val cnt = new Counter();
    val globalCnt = new GlobalRef[Counter](cnt);
    
    for (p in Place.places()) {
      val d = (vertexList.dist | p).region;
      
      at (p) {
        for (i in d) {
          val vertex = vertexList(i);
          if (vertex < 0) {continue;}
          at (globalIdToIdxMap.home) {
            globalIdToIdxMap().put(vertex, globalCnt().cnt);
          }
          at (globalIdxToIdMap.home) {
            globalIdxToIdMap().put(globalCnt().cnt, vertex);
          }
          at(globalCnt.home) {
            globalCnt().cnt++;
          }
        }
      }
    }

    val globalSetRN = new GlobalRef[HashSet[Long]](setRN);
    for (p in Place.places()) {
      val d = (vertexList.dist | p).region;
      at (p) {
        for (i in d) {
          val node = vertexList(i);
          if (node > 0) {
            at (globalSetRN.home) {
              globalSetRN().add(node);
            }
          }
        }
      }
    }
  }
  
}
