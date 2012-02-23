package test.scalegraph.metrics.centrality;

import org.scalegraph.metrics.centrality.BetweennessCentrality;
import org.scalegraph.io.GMLReader;
import org.scalegraph.graph.AttributedGraph;
import org.scalegraph.graph.Vertex;
import x10.util.Pair;

public class TestBetweennessCentralityAttribute {
	
	public static def main(args: Array[String]) {
		
		Console.OUT.println("---------------------Start Betweennes Centrality--------------------");
		
		if(args.size == 0) {
			throw new UnsupportedOperationException("Please enter file name");
		}
		
		var graph: AttributedGraph;
		graph = GMLReader.loadFromFile(args(0));
		val result = BetweennessCentrality.run(graph, false);
		printBcResult(result);
		
		Console.OUT.println("---------------------------------------------------------------------");
	}
	
	
	public static def printBcResult(pairs: Array[Pair[Vertex, Double]]) {
		
		for(p in pairs) {
			
			Console.OUT.println(pairs(p).first.getAttribute("id") + " Score: " + pairs(p).second);
			
		}
		
	}
}