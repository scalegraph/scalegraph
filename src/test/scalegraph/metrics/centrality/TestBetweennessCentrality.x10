package test.scalegraph.metrics.centrality;

import org.scalegraph.metrics.centrality.BetweennessCentrality;
import org.scalegraph.io.GMLReader;
import org.scalegraph.graph.AttributedGraph;
import org.scalegraph.graph.Vertex;
import test.scalegraph.graph.AttributedGraphMock;
import x10.util.Pair;

public class TestBetweennessCentrality {
	
	public static def main(args: Array[String]) {
		
		Console.OUT.println("---------------------Start Betweennes Centrality--------------------");
		
		var graph: AttributedGraph;
		graph = GMLReader.loadFromFile("/nfs/home/charuwat/graph data/bc.gml");
		val result = BetweennessCentrality.run(graph, true);
		printBcResult(result);
		
		Console.OUT.println("---------------------------------------------------------------------");
		// AttributedGraphMock.printVertexList(graphs(0));
		// Console.OUT.println("---------------------------------------------------------------------");
		// AttributedGraphMock.printEdgeList(graphs(0));
		// Console.OUT.println("---------------------------------------------------------------------");
		// AttributedGraphMock.printNeighbors(graphs(0));
	}
	
	
	public static def printBcResult(pairs: Array[Pair[Vertex, Double]]) {
		
		for(p in pairs) {
			
			Console.OUT.println(pairs(p).first.getAttribute("id") + " Score: " + pairs(p).second);
			
		}
		
	}
}