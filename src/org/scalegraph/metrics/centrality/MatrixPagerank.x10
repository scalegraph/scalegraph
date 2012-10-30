package org.scalegraph.metrics.centrality;

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

public class MatrixPagerank {
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
    private var offset:PlaceLocalHandle[Array[Int]];
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

    public def run() {
        {
	        val startTime = Timer.milliTime();
	        initialize();
	        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) /1000.0);
        }
        {
	        val startTime = Timer.milliTime();
	        val res = iteratePagerank();
	        Console.OUT.printf("time = %f\n", (Timer.milliTime() - startTime) /1000.0);
	        return new PagerankResult(res, vertexInfo, graph);
        }
    }

    private def updateVector(
        newVector:PlaceLocalHandle[Array[Double]],
        oldVector:PlaceLocalHandle[Array[Double]]) {
        val offset = offset()(here.id);
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
            newVector()(i) = alpha * score + (1 - alpha) / nVertex;
        }
    }

    private def syncVector(
        newVector:PlaceLocalHandle[Array[Double]],
        oldVector:PlaceLocalHandle[Array[Double]]) {
        finish for (p in Place.places()) async {
            val recvBuf = at (p) {
                new RemoteArray[Double](oldVector() as Array[Double](1){self!=null})};
            finish {
                Array.asyncCopy[Double](newVector(), 0, recvBuf, offset()(here.id), newVector().size);
            }
        }
    }

    private def iteratePagerank() {
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
                updateVector(newVector, oldVector);
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
        val localNorm = new Array[Double](Place.MAX_PLACES);

        val localTime = PlaceLocalHandle.make[Cell[Double]](
            Dist.makeUnique(),
            ()=>(new Cell[Double](0.0)));
        val outLocalTime = new Array[Double](Place.MAX_PLACES);
        val outOutStart = Timer.milliTime();
        finish for (p in Place.places()) async {
            val outStart = Timer.milliTime();
            localNorm(p.id) = at(p) {
                val start = Timer.milliTime();
                var lNorm:Double = 0.0;
                val off = offset()(here.id);
                for (i in (0..(newVector().size - 1))) {
                    lNorm += Math.abs(
                        newVector()(i) - oldVector()(i + off));
                }
                localTime().set((Timer.milliTime() - start) / 1000.0);
                lNorm
            };
            outLocalTime(p.id) = (Timer.milliTime() - outStart) / 1000.0;
        }
        Console.OUT.printf("out time = %f\n", (Timer.milliTime() - outOutStart) / 1000.0);
        val norm = localNorm.reduce((x:Double, y:Double)=>(x + y), 0.0);
        Console.OUT.printf("delta = %f\n", norm);
	    Console.OUT.printf("end = %f\n", (Timer.milliTime() - funStart) / 1000.0);
        for (p in Place.places()) at (p) {
            Console.OUT.printf("place %d time : %f\n", p.id, localTime()());
        }
        for (id in 0..(Place.MAX_PLACES - 1)) {
            Console.OUT.printf("place %d time : %f\n", id, outLocalTime(id));
        }

        return norm < delta;
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
        this.offset = PlaceLocalHandle.make[Array[Int]](
            Dist.makeUnique(),
            ()=>{
                val arr = new Array[Int](Place.MAX_PLACES + 1);
                Array.copy(offset, arr);
                arr
            });
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
                val idx = i + offset()(p.id);
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