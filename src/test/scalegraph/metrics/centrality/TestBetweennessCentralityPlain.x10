package test.scalegraph.metrics.centrality;

import org.scalegraph.metrics.centrality.BetweennessCentrality;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.io.ScatteredEdgeListReader;
import org.scalegraph.io.EdgeListReader;
import x10.util.*;
import x10.compiler.Native;


public class TestBetweennessCentralityPlain {
	
	public static def main(args: Array[String]) {

		var graph:PlainGraph = null;
		// var reader:ScatteredEdgeListReader = new ScatteredEdgeListReader();
		
		// graph = reader.loadFromDir("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale12-scattered");
		
		val edgeListReader = new EdgeListReader();
		graph = edgeListReader.loadFromFile("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale12/scale-12-3628.dl");
		// graph = edgeListReader.loadFromFile("/nfs/home/charuwat/Desktop/small-header.dl");
		// graph = edgeListReader.loadFromFile("/nfs/home/charuwat/Desktop/small-header2.dl");
		// graph = edgeListReader.loadFromFile("/nfs/home/charuwat/Desktop/small-header3.dl");
		// graph = edgeListReader.loadFromFile("/nfs/home/charuwat/Desktop/small-header4.dl");
		
		val distVertexList:DistArray[Long] = graph.getVertexList();
		val vertexListBuilder: ArrayBuilder[Long] = new ArrayBuilder[Long]();
		
		// Build an array of vertex to estimate
		finish {
			for(p:Place in Place.places()){
				async {
					val dat = at(p) {distVertexList.getLocalPortion()};
					atomic {
						for (i in dat) {
							val temp = dat(i);
							if(temp >= 0L) {
								vertexListBuilder.add(temp);
							}
						}
					}
				}
			}
		}
		
		finish {
			for(p:Place in Place.places()){
				async {
					val dat = at(p) {distVertexList.getLocalPortion()};

						for (i in dat) {
							val temp = dat(i);
							if(temp >= 0L) {
								val n = graph.getNeighbours(temp);
								// Console.OUT.println("Neigh --> " + n);
							}
						
					}
				}
			}
		}
		val vertexList = vertexListBuilder.result();
		val start = System.currentTimeMillis();
		val result = BetweennessCentrality.run(graph, vertexList, false);
		val end = System.currentTimeMillis();
		
		for(i in result) {
			var k: Long = result(i).first;
			var v: Double = result(i).second;
			// Console.OUT.println(k + " " + v.toString());
			Console.OUT.printf("%ld %.12lf\n", k, v);
		}
		
		var vcount:Long = graph.getVertexCount();
		Console.OUT.println("Total vertex count : " + vcount);
		
		Console.OUT.println("Time for cal (ms): " + (end - start) );
		Console.OUT.println("---------------------------------------------------------------------");
		
	}

	
}