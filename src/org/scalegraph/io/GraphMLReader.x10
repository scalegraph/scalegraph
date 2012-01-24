package org.scalegraph.io;

import org.scalegraph.graph.AttributedGraph;
import org.scalegraph.graph.Attribute;
import org.scalegraph.graph.Vertex;
import org.scalegraph.graph.Edge;
import org.scalegraph.io.SAXParser;
import org.scalegraph.io.SAXHandler;
import x10.util.HashMap;

import x10.array.Array;
import x10.util.ArrayList;

import x10.compiler.Native;

public class GraphMLReader implements SAXHandler {
	
	
	// Kepp graphs during parsing process
	private var graphsList: ArrayList[AttributedGraph] = null;
	
	// Current processing graph object
	private var currentGraph: AttributedGraph = null;
	
	
	public static def loadFromFile(fileName: String) : Array[AttributedGraph]{
		
		var worker: GraphMLReader = new GraphMLReader();
		
		//FIXME: Before parsing should validate input XML first
		SAXParser.parse(fileName,worker);
		return worker.getGraphs();
	}
	
	
	/**
	 * Return return graphs from parsing process
	 * @return array of attributed graphs
	 */
	protected def getGraphs(): Array[AttributedGraph] {
		return graphsList.toArray();
	}
	
	
	/**
	 * Handle start element event from SAX parser and forward the event to corresponding method
	 * @parame name - name of xml tag being found
	 * @param attributeCount - number of attributes of the tag
	 * @param attributeKey - array of attribute key
	 * @param attributeValue - array of attribute value
	 * @param attributeType - arry of attribute type
	 */
	public def startElement(name: String, attributeCount: Int, attributeKey: Array[String], 
			attributeValue: Array[String], attributeType: Array[String]) {
		
		if(name.equals("graphml")) {
			
			this.startGraphMl();
			
		} else if(name.equals("graph")) {
			
			this.startGraph(attributeCount, attributeKey, attributeValue, attributeType);
			
		} else {
			
			//DEBUG: Unhandle tag
			Console.OUT.println("\t\t\t\t\t\t\t\tUnhandle start tag >>" + name);
		}

	}
	
	
	/**
	 * Handle end element event from SAX parser and forward the event to corresponding method
	 * @parame name - name of xml tag being found
	 * @param attributeCount - number of attributes of the tag
	 * @param attributeKey - array of attribute key
	 * @param attributeValue - array of attribute value
	 * @param attributeType - arry of attribute type
	 */
	public def endElement(name: String): void {
		
		if(name.equals("graphml")) {
		
			this.endGraphMl();
		
		} else if(name.equals("graph")) {
			
			this.endGraph();
			
		} else {
			
			//DEBUG: Unhandle tag
			Console.OUT.println("\t\t\t\t\t\t\t\tUnhandle end tag >>" + name);

		}
	}

	
	/**
	 * Handle fatal error event
	 * @param message - fatal error message from Xerces library
	 */
	public def fatalError(message: String): void {
		Console.OUT.println(message);
	}
	
	
	/**
	 * Handle error event
	 * @param message - error message from Xerces library
	 */
	public def error(message: String): void {
		Console.OUT.println(message);
	}
	
	
	/**
	 * Handle warning event
	 * @param message - warning message from Xerces library
	 */
	public def warning(message: String): void {
		Console.OUT.println(message);
	}
	
	
	/**
	 * Handle event that close tag of "graphml" is found
	 */
	protected def startGraphMl() {
		
		Console.OUT.println("Start graphml");
		graphsList = new ArrayList[AttributedGraph]();
		
	}
	
	
	/**
	 * Handle event that close tag of "graphml" is found
	 */
	protected def endGraphMl() {
		Console.OUT.println("End graphml");
	}
	
	
	/**
	 * Handle event that open tag of "graph" is found
	 */
	protected def startGraph(attributeCount: Int, attributeKey: Array[String], 
			attributeValue: Array[String], attributeType: Array[String]) {
		
		Console.OUT.println("Start graph");
		currentGraph = new AttributedGraph();
		
		//Disable auto vertex ID, use vertexID from file
		currentGraph.setAutoVertexId(false);
		
		var isDirectedGraph: Boolean = false;
		
		// Find default edge type
		for( i in 0..(attributeCount - 1)) {
			if(attributeKey(i).equals("edgedefault")) {
				if(attributeValue(i).equals("undirected")) {
					
					isDirectedGraph = false;
					
				} else if(attributeValue(i).equals("directed")) {
					
					isDirectedGraph = true;
					
				} else {
					// invalid attribute value for 'edgedefult'
					throw new Exception("Invalid attribute value for 'edgedefault'");
				}
			}
		}
		currentGraph.setDirected(isDirectedGraph);
		
	}
	
	
	/**
	 * Handle event that close tag of "graph" is found
	 */
	protected def endGraph() {
		
		Console.OUT.println("End graph");
		
		// Add graph to return list
		graphsList.add(currentGraph);
		currentGraph = null;
	}
}