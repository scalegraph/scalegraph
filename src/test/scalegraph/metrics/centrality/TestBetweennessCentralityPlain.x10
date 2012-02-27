package test.scalegraph.metrics.centrality;

import org.scalegraph.metrics.centrality.BetweennessCentrality;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.io.ScatteredEdgeListReader;
import org.scalegraph.io.EdgeListReader;
import x10.util.*;
import x10.compiler.Native;


public class TestBetweennessCentralityPlain {
	
	public static def main(args: Array[String]) {

		if(args(0) == null) {
			throw new Exception("Please enter file name");
		}
		
		var graph:PlainGraph = null;
		
		val edgeListReader = new EdgeListReader();
		graph = edgeListReader.loadFromFile(args(0));
		
		// graph = edgeListReader.loadFromFile("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale12/scale-12-3628.dl");
		// graph = edgeListReader.loadFromFile("/nfs/home/charuwat/Desktop/small-header.dl");
		// graph = edgeListReader.loadFromFile("/nfs/home/charuwat/Desktop/small-header2.dl");
		// graph = edgeListReader.loadFromFile("/nfs/home/charuwat/Desktop/small-header3.dl");
		// graph = edgeListReader.loadFromFile("/nfs/home/charuwat/Desktop/small-header4.dl");
		// graph = edgeListReader.loadFromFile("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale-8.dl");

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
		
		val buildStart = System.currentTimeMillis();
		val vertexList = vertexListBuilder.result();
		val buildEnd = System.currentTimeMillis();
		
		val calStart = System.currentTimeMillis();
		val result = BetweennessCentrality.run(graph, vertexList, false);
		val calEnd = System.currentTimeMillis();
		
		for(i in result) {
			var k: Long = result(i).first;
			var v: Double = result(i).second;
			// Console.OUT.println(k + " " + v.toString());
			Console.OUT.printf("%ld %.12lf\n", k, v);
		}
		
		val vertexCountStart = System.currentTimeMillis();
		var vcount:Long = graph.getVertexCount();
		val vertexCountEnd = System.currentTimeMillis();
		
		Console.OUT.println("---------------------------------------------------------------------");
		Console.OUT.println("Total vertex count : " + vcount);
		Console.OUT.println("Time to BuildList (ms): " + (buildEnd - buildStart) );
		Console.OUT.println("Time to Cal (ms): " + (calEnd - calStart) );
		Console.OUT.println("Time to Count vertex (ms): " + (vertexCountEnd - vertexCountStart) );
		Console.OUT.println("---------------------------------------------------------------------");
		
	}

	
}