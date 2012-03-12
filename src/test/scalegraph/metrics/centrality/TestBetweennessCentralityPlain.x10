package test.scalegraph.metrics.centrality;

import org.scalegraph.metrics.centrality.BetweennessCentrality;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.io.ScatteredEdgeListReader;
import org.scalegraph.io.EdgeListReader;
import x10.util.*;
import x10.compiler.Native;
import x10.io.FileWriter;
import x10.io.File;
import x10.io.Printer;


public class TestBetweennessCentralityPlain {
	
	public static def main(args: Array[String]) {

		if(args == null || args.size < 1) {
			Console.OUT.println("Please enter file name");
			return;
		}
		
		val inputPath = args(0);
		var outfile: String = "";
		if(args.size >= 2) {
			outfile = args(1);
		}
		
		// Info
		Console.OUT.println("***************************");
		Console.OUT.println("Input: " + inputPath);
		if(!outfile.equals("")) {
			Console.OUT.println("Output: " + outfile);
		} else {
			Console.OUT.println("Output: STD_OUT only ");
		}
		Console.OUT.println("***************************");
		

		var graph:PlainGraph = null;
			
		// Determine input path
		val inputFile  = new File(inputPath);
				
		if(inputFile.isDirectory()) {
			
			Console.OUT.println("Load with ScatteredEdgeListReader");
			val reader = new ScatteredEdgeListReader();
			graph = reader.loadFromDir(inputPath);
			
		} else {
			Console.OUT.println("Load with EdgeListReader");
			val edgeListReader = new EdgeListReader();
			graph = edgeListReader.loadFromFile(inputPath);
			
		}
		
		val distVertexList:DistArray[Long] = graph.getVertexList();
		val vertexListBuilder: ArrayBuilder[Long] = new ArrayBuilder[Long]();
		
		// Console.OUT.println("Create vertex list...........");
		// Console.IN.readChar();
		
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
			
		// Set graph as directed graph
		graph.setDirected(true);
		
		val buildStart = System.currentTimeMillis();
		val vertexList = vertexListBuilder.result();
		val buildEnd = System.currentTimeMillis();
		
		val calStart = System.currentTimeMillis();
		val result = BetweennessCentrality.run(graph, vertexList, false);
		val calEnd = System.currentTimeMillis();
		
		val vertexCountStart = System.currentTimeMillis();
		val vcount:Long = graph.getVertexCount();
		val vertexCountEnd = System.currentTimeMillis();
		
		
		
		showResult(Console.OUT, 
				result,
				vcount,
				buildStart,
				buildEnd,
				calStart,
				calEnd,
				vertexCountStart,
				vertexCountEnd
		);
		
		// Print Running result
		if(!outfile.equals("")) {
			val writer = new FileWriter(new File(args(1)));
			val printer = new Printer(writer);
			showResult(printer,
					result,
					vcount,
					buildStart,
					buildEnd,
					calStart,
					calEnd,
					vertexCountStart,
					vertexCountEnd);
			printer.close();
		}
		
	}
	
	protected static def showResult (p: Printer, 
			result: Array[Pair[Long, Double]],
			vcount: Long,
			buildStart: Long,
			buildEnd: Long,
			calStart: Long,
			calEnd: Long,
			vertexCountStart: Long,
			vertexCountEnd: Long
			){
		
		for(i in result) {
			var k: Long = result(i).first;
			var v: Double = result(i).second;
			// p.printf("%ld %.15lf\n", k, v);
			p.println("" + k + " = " + v);
		}
		
		p.println("---------------------------------------------------------------------");
		p.println("Total vertex count : " + vcount);
		p.println("Time to BuildList (ms): " + (buildEnd - buildStart) );
		p.println("Time to Cal (ms): " + (calEnd - calStart) );
		p.println("Time to Count vertex (ms): " + (vertexCountEnd - vertexCountStart) );
		p.println("---------------------------------------------------------------------");
		p.flush();
	}

	
}