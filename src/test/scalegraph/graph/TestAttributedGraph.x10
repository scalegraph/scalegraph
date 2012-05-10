package test.scalegraph.graph;

import org.scalegraph.io.GMLReader;
import org.scalegraph.io.GMLEntry;

import org.scalegraph.graph.*;
import x10.util.*;

public class TestAttributedGraph {
	
	    public static def main(args: Array[String]) {
	    	Console.OUT.println("---------------------Start Attributed Graph Test--------------------");
	    	testGetVertexList();
	    }
	    
	    public static def testGetVertexList() {
	    	
	    	Console.OUT.println("---------------------Test GetVertexList--------------------");
	    	
	    	val graph = GMLReader.loadFromFile("/nfs/data1/scalegraph/GML/gml_reader_t1.gml");
	    	val vertexList = graph.getVertexList();
	    	graph.printAllTab();
	    	Console.OUT.println(vertexList);
	    }
	
}   