package test.scalegraph.io;

import x10.util.ArrayList;

import org.scalegraph.io.GMLReader;
import org.scalegraph.io.GMLEntry;
import org.scalegraph.graph.AttributedGraph;



public class TestGMLReader {
	
	public static def main(args: Array[String]) {
		
		var graph: AttributedGraph;
		
		// Test node, edge with string attribute and integer attribute
		Console.OUT.println("-------------gml_reader_t1.gml-----------");
		graph = GMLReader.loadFromFile("/nfs/data1/scalegraph/GML/gml_reader_t1.gml");
		graph.printAllTab();
		
		// String, integer and real number attribute
		Console.OUT.println("-------------gml_reader_t2.gml-----------");
		graph = GMLReader.loadFromFile("/nfs/data1/scalegraph/GML/gml_reader_t2.gml");
		
		val p = new printer(0);
		// p.printGraph(graph);
		graph.printAllTab();
	}
	
	// Inner class inherites from AttributedGraph
	public static class printer extends AttributedGraph {
		
		protected def this(sizeCategory: Short) {
			
			// Call parent class's constructor
			super(sizeCategory);
		}
		
		protected def printGraph(g: AttributedGraph) {
			
			Console.OUT.println("Vertex list");
			
			val vertexTab = g.vertexTab;
			var visitCount: Int = 0;
			
			for(i in vertexTab) {
				
				val vertexId = vertexTab(i)(0);
				if(vertexId == -1L)
					continue;
				
				Console.OUT.printf("[%ld]", vertexId);
			}
		}
	
	}
	
}

