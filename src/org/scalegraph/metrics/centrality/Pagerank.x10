package org.scalegraph.metrics.centrality;

import x10.array.Array;
import x10.util.HashSet;
import x10.util.HashMap;
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
    var R:Array[Double] = new Array[Double](nVertex);
    // initialize result vector
    for (i in R.region) {
      R(i) = 1.0 / nVertex;
    } 
    var _R:Array[Double] = new Array[Double](nVertex);

    val setRN:HashSet[Long] = new HashSet[Long]();
    val setRC:HashSet[Long] = new HashSet[Long]();
    Console.OUT.println("call initialize");
    initialize(setRN);
    Console.OUT.println("end initialize");
    
    val vertexList = graph.getVertexList();
    while (setRN.size() != 0) {
      for (p in Place.places()) {
        at (p) {
          val d = (vertexList.dist | p).region;
          for (i in d) {
            val node = at(p) {vertexList(i)};
            val nodeIdx = idToIdxMap(node)();
            if (setRC.contains(node)) {
              val score = at (globalR) {globalR()(nodeIdx)};
              at (global_R) {
                global_R()(nodeIdx) = score;
              }
            } else {
              val neighbours = graph.getInNeighbours(node);
              var score:Double = 0.0;
              for (j in neighbours) {
                val outDeg =
                  graph.getOutNeighbours(neighbours(j)).size;
                if (outDeg != 0) {
                  score += (at (globalR) {globalR()(idToIdxMap(neighbours(j))())}) / (outDeg as Double);
                } else {
                  score += (at (globalR) {globalR()(idToIdxMap(neighbours(j))())}) / (nVertex as Double);
                }
              }
              at (global_R) {
                global_R()(nodeIdx) = score * alpha + (1.0 - alpha) / nVertex;
              }
              if (Math.abs(_R(nodeIdx) - R(nodeIdx)) < delta) {
                setRN.remove(node);
                setRC.add(node);
              }
            }
          }
        }
      }
      val tmp:Array[Double] = _R;
      R = _R;
      _R = tmp;
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
    
    Console.OUT.println("A");
    for (p in Place.places()) {
      Console.OUT.printf("id = %d\n", p.id);
      val d = (vertexList.dist | p).region;
      
      at (p) {
        for (i in d) {
          val vertex = vertexList(i);
          Console.OUT.println("a");
          at (globalIdToIdxMap.home) {
            globalIdToIdxMap().put(vertex, globalCnt().cnt);
          }
          Console.OUT.println("b");
          at (globalIdxToIdMap.home) {
            globalIdxToIdMap().put(globalCnt().cnt, vertex);
          }
          Console.OUT.println("c");
          at(globalCnt.home) {
            globalCnt().cnt++;
          }
        }
      }
    }

    Console.OUT.println("B");
    val globalSetRN = new GlobalRef[HashSet[Long]](setRN);
    for (p in Place.places()) {
      Console.OUT.printf("id = %d\n", p.id);
      val d = vertexList.dist | p;
      at (p) {
        for (i in d) {
          val node = vertexList(i);
          at (globalSetRN.home) {
            globalSetRN().add(node);
          }
        }
      }
    }
  }
}
