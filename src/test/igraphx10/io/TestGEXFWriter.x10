package test.scalegraph.io;

import org.scalegraph.io.GEXFWriter;
import org.scalegraph.io.GEXFReader;
import org.scalegraph.graph.AttributedGraph;
import test.scalegraph.graph.AttributedGraphMock;

public class TestGEXFWriter {
	
	public static def main(args: Array[String]) {
		
		var graphs: Array[AttributedGraph] = GEXFReader.loadFromFile("/nfs/home/charuwat/Desktop/temp");
		GEXFWriter.writeToFile("/nfs/home/charuwat/Desktop/output.gexf", graphs);
		
		for(i in graphs) {
			AttributedGraphMock.printVertexList(graphs(i));
			AttributedGraphMock.printEdgeList(graphs(i));
		}
		
		Console.OUT.println("Done");
	}
}