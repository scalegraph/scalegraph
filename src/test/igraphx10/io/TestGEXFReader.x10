package test.scalegraph.io;

import org.scalegraph.io.GEXFReader;
import org.scalegraph.graph.AttributedGraph;

import test.scalegraph.graph.AttributedGraphMock;

public class TestGEXFReader {
	public static def main(args: Array[String]) {
		
		//var graphs: Array[AttributedGraph] = GEXFReader.loadFromFile("/nfs/home/charuwat/Desktop/temp");
		//var graphs: Array[AttributedGraph] = GEXFReader.loadFromFile("/nfs/home/charuwat/Desktop/graph convertion/output.gexf");
		//var graphs: Array[AttributedGraph] = GEXFReader.loadFromFile("/nfs/home/charuwat/Desktop/graph convertion/scale-12.gexf");
		//var graphs: Array[AttributedGraph] = GEXFReader.loadFromFile("/nfs/home/charuwat/Desktop/graph convertion/newdata.gexf");
		var graphs: Array[AttributedGraph] = GEXFReader.loadFromFile("/nfs/home/charuwat/Desktop/graph files/node_without_attribute.gexf");
		
		for(i in graphs) {
			AttributedGraphMock.printVertexList(graphs(i));
			AttributedGraphMock.printEdgeList(graphs(i));
		}
	}
}
