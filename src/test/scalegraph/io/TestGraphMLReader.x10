package test.scalegraph.io;

import org.scalegraph.graph.AttributedGraph;
import org.scalegraph.io.GraphMLReader;
import test.scalegraph.graph.AttributedGraphMock;

public class TestGraphMLReader {
	
	
    public static def main(args: Array[String]) {
    	
    	var graphs: Array[AttributedGraph] = GraphMLReader.loadFromFile("/nfs/home/charuwat/Desktop/graph files/basic.graphml");
    	//var graphs: Array[AttributedGraph] = GEXFReader.loadFromFile("/nfs/home/charuwat/Desktop/graph convertion/output.gexf");
    	//var graphs: Array[AttributedGraph] = GEXFReader.loadFromFile("/nfs/home/charuwat/Desktop/graph convertion/scale-12.gexf");
    	//var graphs: Array[AttributedGraph] = GEXFReader.loadFromFile("/nfs/home/charuwat/Desktop/graph convertion/newdata.gexf");
    	
    	// for(i in graphs) {
    	// 	AttributedGraphMock.printVertexList(graphs(i));
    	// 	AttributedGraphMock.printEdgeList(graphs(i));
    	// }
    }
}