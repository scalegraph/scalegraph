package org.scalegraph.communities;

import x10.array.Array;
import x10.util.ArrayBuilder;
import x10.util.HashSet;
import x10.util.HashMap;
import x10.util.Timer;
import x10.util.ArrayList;
import x10.util.concurrent.AtomicDouble;
import x10.array.DistArray;
import x10.util.Pair;
import org.scalegraph.communities.LongToIntMap;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.communities.LongToIntMap;
import org.scalegraph.util.VertexInfo;
import org.scalegraph.metrics.centrality.CreateMatrix;
import org.scalegraph.metrics.centrality.Element;

public class MatrixRandomWalk {
    private val alpha:Double = 0.85;
    private val delta:Double = 0.0001;
    private val nIteration:Int = 50;
    private val nVertex:Int;
    private val vertexList:DistArray[Long];
    private val graph:PlainGraph;
    private val vertexInfo:VertexInfo;
    private val nNodePerPlace:Int;
    private val rem:Int;
    private var binLink:PlaceLocalHandle[Array[ArrayList[Element]]];
    private var offset:Array[Int];
    private var danglingList:PlaceLocalHandle[Array[Int]];

    public def this(graph:PlainGraph) {
	    val funStart = Timer.milliTime();
        this.graph = graph;
        this.nVertex = graph.getVertexCount() as Int;
	    this.vertexList = graph.getVertexList();
        {
            val start = Timer.milliTime();
            this.vertexInfo = VertexInfo.make(graph);
            Console.OUT.printf("vertex info = %f\n", (Timer.milliTime() - start) / 1000.0);
        }
        this.nNodePerPlace = nVertex / Place.MAX_PLACES;
        this.rem = nVertex % Place.MAX_PLACES;
	    Console.OUT.printf("this = %f\n", (Timer.milliTime() - funStart) / 1000.0);
    }

    public def query(id:Long) {
        val idx = vertexInfo.getIDX(id)();
        val res = iteratePagerank(idx);

        return new MatrixRandomWalkResult(vertexInfo, res, graph);
    }

    public def run() {
        val startTime = Timer.milliTime();
        initialize();
        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) /1000.0);
    }

    private def updateVector(
        newVector:PlaceLocalHandle[Array[Double]],
        oldVector:PlaceLocalHandle[Array[Double]], targetIdx:Int) {
        val offset = offset(here.id);
        var danglingScore:Double = 0.0;
        for (i in 0..(danglingList().size -1)) {
            val nodeIdx = danglingList()(i);
            danglingScore += oldVector()(nodeIdx) / nVertex;
        }

        for (i in 0..(binLink().size - 1)) {
            var score:Double = danglingScore;
            for (j in 0..(binLink()(i).size() - 1)) {
                val elm = binLink()(i)(j);
                score += oldVector()(elm.first) * elm.second;
            }
            newVector()(i) = alpha * score;
            if (i + offset == targetIdx) {
                newVector()(i) = newVector()(i) + (1 - alpha);
            }
        }
    }

    private def syncVector(
        newVector:PlaceLocalHandle[Array[Double]],
        oldVector:PlaceLocalHandle[Array[Double]]) {
        finish for (p in Place.places()) async {
            val recvBuf = at (p) {
                new RemoteArray[Double](oldVector() as Array[Double](1){self!=null})};
            finish {
                Array.asyncCopy[Double](newVector(), 0, recvBuf, offset(here.id), newVector().size);
            }
        }
    }

    private def iteratePagerank(idx:Int) {
	    val funStart = Timer.milliTime();

        val oldVector = PlaceLocalHandle.make[Array[Double]](
            Dist.makeUnique(),
            ()=>(new Array[Double](nVertex, 1 / nVertex)));

        val newVector = PlaceLocalHandle.make[Array[Double]](
            Dist.makeUnique(),
            ()=>{
                if (here.id < rem) {
                    return new Array[Double](nNodePerPlace + 1);
                } else {
                    return new Array[Double](nNodePerPlace);
                }});

        for (1..nIteration) {
	        val startTime = Timer.milliTime();
            finish for (p in Place.places()) async at (p) {
                updateVector(newVector, oldVector, idx);
            }
            val isEnd = end(newVector, oldVector);

            finish for (p in Place.places()) async at (p) {
                syncVector(newVector, oldVector);
            }
            if (isEnd) {break;}
	        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) / 1000.0);
        }
	    Console.OUT.printf("iteratePagerank = %f\n", (Timer.milliTime() - funStart) / 1000.0);
        return oldVector();
    }

    private def end(
        newVector:PlaceLocalHandle[Array[Double]],
        oldVector:PlaceLocalHandle[Array[Double]]) {

	    val funStart = Timer.milliTime();
        val norm = new AtomicDouble();
        finish for (p in Place.places()) async {
            val localNorm = at(p) {
                var localNorm:Double = 0.0;
                for (i in (0..(newVector().size - 1))) {
                    localNorm += Math.abs(
                        newVector()(i) - oldVector()(i + offset(here.id)));
                }
                localNorm
            };
            norm.getAndAdd(localNorm);
        }
        Console.OUT.printf("delta = %f\n", norm.get());
	    Console.OUT.printf("end = %f\n", (Timer.milliTime() - funStart) / 1000.0);
        return norm.get() < delta;
    }


    private def print(o:Any) {
        Console.OUT.println(o);
        Console.OUT.flush();
    }

    private def getOffset() {
        val r = nVertex % Place.MAX_PLACES;
        val offset = new Array[Int](Place.MAX_PLACES + 1);
        for (i in 1..(Place.MAX_PLACES)) {
            offset(i) = offset(i - 1);
            if (i - 1 < r) {
                offset(i) = offset(i) + nVertex / Place.MAX_PLACES + 1;
            } else {
                offset(i) = offset(i) + nVertex / Place.MAX_PLACES;
            }
        }
        this.offset = offset;
    }

    private def getPlace(x:Int) {
        if (x < (nNodePerPlace + 1) * rem) {
            return x / (nNodePerPlace + 1);
        }
        return (x - (nNodePerPlace + 1) * rem) / nNodePerPlace + rem;
    }

    private def getIdx(x:Int) {
        if (x < (nNodePerPlace + 1) * rem) {
            return x % (nNodePerPlace + 1);
        }
        return (x - (nNodePerPlace + 1) * rem) % nNodePerPlace;
    }

    private def testBinLink() {
        for (p in Place.places()) at (p) {
            for (i in 0..(binLink().size - 1)) {
                val idx = i + offset(p.id);
                val nodeId = vertexInfo.getID(idx)();
                val inNeighbours = graph.getInNeighbours(nodeId);
                if (inNeighbours == null) {
                    assert(binLink()(i).size() == 0);
                } else {
                    assert(binLink()(i).size() == inNeighbours.size);
                    for (j in 0..(binLink()(i).size() - 1)) {
                        val inIdx = binLink()(i)(j).first;
                        val inNeighbourId = vertexInfo.getID(inIdx)();
                        var flag:Boolean = false;
                        for (k in 0..(inNeighbours.size - 1)) {
                            flag |= (inNeighbours(k) == inNeighbourId);
                        }
                        assert(flag);
                    }
                }
            }
        }
    }

    private def initialize() {
	    val funStart = Timer.milliTime();
        getOffset();
        val matrix = new CreateMatrix(graph);
        
        matrix.createMatrix();
        this.binLink = matrix.binLink;
        this.danglingList = matrix.danglingList;
        //testBinLink();
	    Console.OUT.printf("initialize = %f\n", (Timer.milliTime() - funStart) / 1000.0);
    }
}
