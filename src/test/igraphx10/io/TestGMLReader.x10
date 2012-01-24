package test.scalegraph.io;

import x10.util.ArrayList;

import org.scalegraph.io.GMLReader;
import org.scalegraph.io.GMLEntry;
import org.scalegraph.graph.AttributedGraph;
import test.scalegraph.graph.AttributedGraphMock;


public class TestGMLReader {
	
	public static def main(args: Array[String]) {
		var graph: AttributedGraph;
		
		// Test node, edge with string attribute and integer attribute
		Console.OUT.println("-------------gml_reader_t1.gml-----------");
		graph = GMLReader.loadFromFile("/nfs/data1/scalegraph/GML/gml_reader_t1.gml");
		AttributedGraphMock.printVertexList(graph);
		AttributedGraphMock.printEdgeList(graph);
		
		// String, integer and real number attribute
		Console.OUT.println("-------------gml_reader_t2.gml-----------");
		graph = GMLReader.loadFromFile("/nfs/data1/scalegraph/GML/gml_reader_t2.gml");
		AttributedGraphMock.printVertexList(graph);
		AttributedGraphMock.printEdgeList(graph);
	}
	
	protected static def printGMLEntryList(list: ArrayList[GMLEntry], level: Int) {
		
		var i: Int = 0;
		for(;i < level; i++) {
			Console.OUT.print("    ");
		}
		
		for(n in list) {
			Console.OUT.print("*KEY*" + n.getKey());
			if(n.isList()) {
				Console.OUT.println("*VALUE* (list)");
				printGMLEntryList(n.getList(), level + 1);
			} else {
				Console.OUT.println("*VALUE* : " + n.getValue());
			}
		}
		
	}
	
    public def this() {
       
    }
    
}