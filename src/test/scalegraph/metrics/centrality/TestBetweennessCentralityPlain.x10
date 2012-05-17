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
	
	public static def main(args: Array[String](1)): void {
		
		val params = new OptionsParser(args, null,
				[Option("i", "", "Input file/folder"),
				 Option("o", "", "Output file"),
				 Option("c", "", "Percent Cache"),
				 Option("r", "", "Print result")]);

		val inputPath = params("-i", "");
		val outputPath = params("-o", "");
		val shouldPrintResult = params("-r");

		if(inputPath == null || inputPath.equals("")) {
			Console.OUT.println("Please enter file name");
			return;
		}
		
		// Info
		Console.OUT.println("***************************");
		Console.OUT.println("Input: " + inputPath);
		if(!outputPath.equals("")) {
			Console.OUT.println("Output: " + outputPath);
		} else {
			Console.OUT.println("Output: STD_OUT only ");
		}
		Console.OUT.println("***************************");
		

		var graph:PlainGraph = null;
			
		// Determine input path
		val inputFile  = new File(inputPath);
		val startLoadFile = System.currentTimeMillis();		
		if(inputFile.isDirectory()) {
			
			Console.OUT.println("Load with ScatteredEdgeListReader");
			val reader = new ScatteredEdgeListReader();
			graph = reader.loadFromDir(inputPath);
			
		} else {
			Console.OUT.println("Load with EdgeListReader");
			val edgeListReader = new EdgeListReader();
			graph = edgeListReader.loadFromFile(inputPath);
			
		}
		val endLoadFile = System.currentTimeMillis();
		val loadingElapse = (endLoadFile - startLoadFile) / 1000;
		Console.OUT.println("Loading Elapse Time(s): " + loadingElapse);
		
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
		
		
		// Print Running result
		if(!outputPath.equals("")) {
			val writer = new FileWriter(new File(outputPath));
			val printer = new Printer(writer);
			showResult(printer,
					inputPath,
					outputPath,
					result,
					vcount,
					buildStart,
					buildEnd,
					calStart,
					calEnd,
					vertexCountStart,
					vertexCountEnd,
					true /* Always print result to file */);
			printer.close();
		} else {
			showResult(Console.OUT,
					inputPath,
					"STD_OUT",
					         result,
					         vcount,
					         buildStart,
					         buildEnd,
					         calStart,
					         calEnd,
					         vertexCountStart,
					         vertexCountEnd,
					         shouldPrintResult
			);
		}
		
		Console.OUT.println("------End of Testing---------");
	}
	
	protected static def showResult (
			p: Printer,
			inputFile: String,
			outputFile: String,
			result: Array[Pair[Long, Double]],
			vcount: Long,
			buildStart: Long,
			buildEnd: Long,
			calStart: Long,
			calEnd: Long,
			vertexCountStart: Long,
			vertexCountEnd: Long,
			shouldPrintResult: Boolean
			){
		
			if(shouldPrintResult){
				for(i in result) {
					var k: Long = result(i).first;
					var v: Double = result(i).second;
					
					if(v == 0D)
						continue;
					
					p.println("" + k + " = " + v);
				}
			}
		
		p.println("---------------------------------------------------------------------");
		p.println("Input file : " + inputFile);
		p.println("Output file : " + outputFile);
		p.println("Total vertex count : " + vcount);
		p.println("Time to BuildList (ms): " + (buildEnd - buildStart) );
		p.println("Time to Cal (ms): " + (calEnd - calStart) );
		p.println("Time to Count vertex (ms): " + (vertexCountEnd - vertexCountStart) );
		p.println("---------------------------------------------------------------------");
		p.flush();
	}

	
}