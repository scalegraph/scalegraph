package org.scalegraph.io;

import org.scalegraph.graph.AttributedGraph;
import org.scalegraph.graph.Attribute;
import org.scalegraph.graph.Vertex;
import org.scalegraph.graph.Edge;
import org.scalegraph.io.sax.SAXParser;
import org.scalegraph.io.sax.SAXHandler;
import x10.util.HashMap;

import x10.array.Array;
import x10.util.ArrayList;

/**
 * Create graph from GEXF format file
 * This class is not thread-safe
 */
public class GEXFReader implements SAXHandler {
	
	// Kepp graphs during parsing process
	private var graphList: ArrayList[AttributedGraph] = null;
	
	// Map between attribute key id and attribute key name
	private var attributeKeyMap: HashMap[String, String] = new HashMap[String, String]();
	
	// Current processing graph object
	private var currentGraph: AttributedGraph = null;
	
	// id of current processing vertex
	private var currentVertexId: Long;
	
	// attribute list of current processing vertex
	private var currentVertexAttributeList: ArrayList[Attribute];
	
	/**
	 * Build attributed graph from GEXF file
	 * @param fileName - input GML file
	 * @return array of attributed graph
	 */
	public static def loadFromFile(fileName: String) : Array[AttributedGraph]{
		
		var worker: GEXFReader = new GEXFReader();
		
		//FIXME: Before parsing should validate input XML first
		SAXParser.parse(fileName,worker);
		return worker.getGraphs();
	}
	
	
	/**
	 * Return return graphs from parsing process
	 * @return array of attributed graphs
	 */
	protected def getGraphs(): Array[AttributedGraph] {
		return graphList.toArray();
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
		
		if(name.equals("gexf")) {
			
			this.startGexf();
			
		} else if(name.equals("graph")) {
			
			this.startGraph(attributeCount, attributeKey, attributeValue, attributeType);
			
		} else if (name.equals("node")) {
			
			this.startNode(attributeCount, attributeKey, attributeValue, attributeType);
			
		} else if(name.equals("edge")) {
			
			this.startEdge(attributeCount, attributeKey, attributeValue, attributeType);
		
		} else if(name.equals("attribute")) {
			
			this.startAttribute(attributeCount, attributeKey, attributeValue, attributeType);
		
		} else if(name.equals("attvalue")) {
			
			this.startAttvalue(attributeCount, attributeKey, attributeValue, attributeType);
			
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
		
		if(name.equals("gexf")) {
			
			this.endGexf();
			
		} else if(name.equals("graph")) {
		
			this.endGraph();
			
		} else if(name.equals("node")) {
			
			this.endNode();
			
		} else if(name.equals("edge")) {
			
			this.endEdge();
			
		} else if(name.equals("attribute")){
			
			this.endAttribute();
			
		} else if(name.equals("attvalue")){
			
			this.endAttvalue();
			
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
	 * Handle event that open tag of "gexf" is found
	 */
	protected def startGexf() {
		
		Console.OUT.println("Start gexf");
		graphList = new ArrayList[AttributedGraph]();
		
	}
	
	
	/**
	 * Handle event that close tag of "gexf" is found
	 */
	protected def endGexf() {
		// Do nothing
	}
	
	
	/**
	 * Handle event that open tag of "graph" is found
	 */
	protected def startGraph(attributeCount: Int, attributeKey: Array[String], 
			attributeValue: Array[String], attributeType: Array[String]) {
		
		Console.OUT.println("Start graph");
		currentGraph = new AttributedGraph();
		
		// Clear attribute key map
		attributeKeyMap.clear();
		
		//Disable auto vertex ID, use vertexID from file
		currentGraph.setAutoVertexId(false);
		
	}
	
	
	/**
	 * Handle event that close tag of "graph" is found
	 */
	protected def endGraph() {
		
		// Add graph to return list
		graphList.add(currentGraph);
		currentGraph = null;
	}
	
	
	/**
	 * Handle event that open tag of "node" is found
	 */
	protected def startNode(attributeCount: Int, attributeKey: Array[String], 
			attributeValue: Array[String], attributeType: Array[String]) {
		
		this.currentVertexAttributeList = new ArrayList[Attribute]();
		
		// Get id ad create attribute list
		for(var i: Int = 0; i < attributeCount; i++) {
			
			if(attributeKey(i).equals("id")) {
				
				this.currentVertexId = Long.parse(attributeValue(i));
								
			} else {
				
				this.currentVertexAttributeList.add(new Attribute(attributeKey(i), attributeValue(i)));
				
			}
		}
	}
	
	
	/**
	 * Handle event that close tag of "node" is found
	 */
	protected def endNode() {
		
		/*if(this.currentVertexAttributeList.size() == 0) {
			throw new Exception("Node needs to have at least one attribute");
		}*/
		
		// Create vertex
		var v: Vertex = new Vertex(this.currentVertexId, this.currentVertexAttributeList);
		currentGraph.addVertex(v);
		
		// In case id is not set, the graph class will throw the exception
		// So We don't need to check id here
	}
	
	
	/**
	 * Handle event that open tag of "attribute" is found
	 */
	protected def startAttribute(attributeCount: Int, attributeKey: Array[String], 
			attributeValue: Array[String], attributeType: Array[String]) {
		
		var keyId: String = null;
		var title: String = null;
		
		// Get attribute id and title
		for(var i: int = 0; i < attributeCount; i++) {
					
			if(attributeKey(i).equals("id")) {
				
				keyId = attributeValue(i);
				
			} else if(attributeKey(i).equals("title")) {
				
				title = attributeValue(i);
				
			} else {
				// ignore other attribute
			}
		}
		
		if(keyId == null || title == null) {
			throw new Exception("Attribute id or title were not defined");
		}
		attributeKeyMap.put(keyId, title);
		
	}
	
	
	/**
	 * Handle event that close tag of "attribute" is found
	 */
	protected def endAttribute() {
		
	}
	
	
	/**
	 * Handle event that open tag of "attvalue" is found
	 */
	protected def startAttvalue(attributeCount: Int, attributeKey: Array[String], 
			attributeValue: Array[String], attributeType: Array[String]) {
		
		var keyId: String = null;
		var value: String = null;
		
		// Get atribute key id and attribute value
		for(var i: Int = 0; i < attributeCount; i++) {
			
			if(attributeKey(i).equals("for")) {
				keyId= attributeValue(i);
			} else if(attributeKey(i).equals("value")) {
				value = attributeValue(i);
			} else {
				// ignore other attribute
			}
		}
		
		if(keyId == null || value == null) {
			throw new Exception("Key id or value were not defined");
		}
		
		keyTitle: String = attributeKeyMap.get(keyId).value;
		
		// Add attribute to list
		currentVertexAttributeList.add(new Attribute(keyTitle, value));
		
	}
	
	
	/**
	 * Handle event that close tag of "attvalue" is found
	 */
	protected def endAttvalue() {
		
	}
	
	
	/**
	 * Handle event that open tag of "edge" is found
	 */
	protected def startEdge(attributeCount: Int, attributeKey: Array[String], 
			attributeValue: Array[String], attributeType: Array[String]) {
		
		var edge: Edge = null;
		var attributeList: ArrayList[Attribute] = new ArrayList[Attribute]();
		var attribute: Attribute;
		var from: Long = -1L; // unset flag
		var to:Long = -1L; // unset flag
		var id: Long = -1L;
		
		// Get id ad create attribute list
		for(var i: Int = 0; i < attributeCount; i++) {
			
			if(attributeKey(i).equals("id")) {
				
				id = Long.parse(attributeValue(i));
				
			} else if(attributeKey(i).equals("source")) {
				
				from = Long.parse(attributeValue(i));
				
			} else if(attributeKey(i).equals("target")) {
				
				to = Long.parse(attributeValue(i));
				
			} else {
				
				attributeList.add(new Attribute(attributeKey(i), attributeValue(i)));
				
			}
		}
		
		if(id == -1L || from == -1L || to == -1L) {
			throw new Exception("Edge id, source, or target were not defined");
		}
		
		currentGraph.addEdge(id, from, to, attributeList.toArray());
	}
	
	
	/**
	 * Handle event that close tag of "edge" is found
	 */
	protected def endEdge() {
		// Do nothing
	}
	
}