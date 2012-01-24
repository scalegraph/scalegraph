package test.scalegraph.graph;

import org.scalegraph.graph.*;
import org.scalegraph.io.*;

public class TestDistAttributedGraph {
	public static def main(args: Array[String]) {

		var graph: AttributedGraph;
		
		Console.OUT.println("-------------TestDistAttributedGraph-----------");
		graph = GMLReader.loadFromFile("/nfs/data1/scalegraph/GML/scale-16.gml");
		
		d: DistAttributedGraph= DistAttributedGraph.make(graph);
		
		Console.OUT.println("Passed all testcases");
		
		
	}
}