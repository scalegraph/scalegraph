package org.scalegraph.graph;

import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.Map;
import x10.util.ListIterator;


/**
 * This class represents a graph with Attributes. I.e. Vertices and Edges of this graph may contain attributes.
 */
public class AttributedGraph implements Graph {
	
	protected var directedFlag:Boolean = false; //This flag determines whether the Graph is directed or not
	protected var edgeList:ArrayList[Edge];	//This is the list of Edges
	protected var attributeAndVerticesMap: HashMap[Int, ArrayList[Vertex]]; // Map between attribute hascode and its vertex
	protected var idAndVertexMap: HashMap[Long, Vertex]; // Map vertex id and vertex itself
	protected var srcVertexIdAndEdgesMap: HashMap[Long, ArrayList[Edge]]; // Map between src vertex and edges
	protected var dstVertexIdAndEdgesMap: HashMap[Long, ArrayList[Edge]]; // Map between to vertex and edges 
	protected var vertexAttributeSchema: AttributeSchema = null; // Attribute schema for vertex
	protected var edgeAttributeSchema: AttributeSchema = null; // Attribute schema for edge
	protected var sizeCategory: Short; // This variable determines the graph size - small, medium and large
	
	/**
	 * The default constructor just creates an empty undirected graph
	 */
	public def this() {
		edgeList = new ArrayList[Edge]();
		attributeAndVerticesMap = new HashMap[Int, ArrayList[Vertex]]();
		srcVertexIdAndEdgesMap = new HashMap[Long, ArrayList[Edge]]();
		dstVertexIdAndEdgesMap = new HashMap[Long, ArrayList[Edge]]();
		idAndVertexMap = new HashMap[Long, Vertex]();
	}
	
	/**
	 * This constructor creates undirected graph with given vertices.
	 * The vertex attribute schema will be generated from the first vertex in the list
	 */
	public def this(vertexList: ArrayList[Vertex]) {
		this();
		
		// Add each vertex
		vertices: Iterator[Vertex] = vertexList.iterator();
		var v: Vertex;
		
		while(vertices.hasNext()) {
			v = vertices.next();
			internalAddVertex(v);
		}
	}
	
	/**
	 * This constructor creates undirected graph with given vertices and edges
	 * The vertex attribute schema will be created from the first vertex in the list
	 * The edge attribute schema will generated from the first edge in the list
	 */
	public def this(vertexList: ArrayList[Vertex], edgeList: ArrayList[Edge]) {
		this();
		
		// Add each vertex
		vertices: Iterator[Vertex] = vertexList.iterator();
		var v: Vertex;
		
		while(vertices.hasNext()) {
			v = vertices.next();
			internalAddVertex(v);
		}
		
		// Add each edge
		edges: Iterator[Edge] = edgeList.iterator();
		var e: Edge;
		
		while(edges.hasNext()) {
			e = edges.next();
			internalAddEdge(e);
		}
	}
	
	/**
	 * This method set directness of the graph
	 * @param isDirected - boolean representing directness of the graph
	 */
	public def setDirected(isDirected:Boolean){
		this.directedFlag = isDirected;
	}
	
	/**
	 * Determine whether the graph is directed or undirected
	 * @return Return true if the graph is directed and false if the graph is undirected
	 */
	public isDirected() : Boolean{
		return this.directedFlag;
	}

	/**
	 * Adds a vertex to the graph
	 * @param v - Vertex to add
	 */
	public def addVertex(v:Object) {
		internalAddVertex(v);
	}
	
	/**
	 * Adds vertices to the graph
	 * @param vertices - array list of vertices to add
	 */
	public def addVertices(vertices: ArrayList[Vertex]) {
		len: int = vertices.size();
		for(i in 0..(len-1)) {
			internalAddVertex(vertices(i));
		}
	}
	
	/**
	 * Adds a vertex to the graph
	 * As the constructors need to add vertices during constrcuting the graph, 
	 * due to X10 restriction that any methods called within
	 * the constructor must be a private method,
	 * we seperate addvertex to public and private version
	 * @param v - Vertex to add
	 */
	private def internalAddVertex(v:Object) {
		
		var inputVertex: Vertex = v as Vertex;
		var addVertex: Vertex = getVertexReference(inputVertex);
		if(addVertex != null) {
			// Vertex is created, do nothing
			throw new UnsupportedOperationException("Vertex '" + addVertex.toString() + "' already exists in the graph");
		}
		
		// Validate vertex attributes in case the vertex has attribute(s)
		val attributes: Array[Attribute] = inputVertex.getAttributes();
		
		if(vertexAttributeSchema == null) {
			
			// Vertex schema is not defined, create empty schema from this node
			vertexAttributeSchema = new AttributeSchema();
			
			// If attribute is not null, create schema from it
			// If attribute is null (this case will never happen for vertex), empty schema will be used
			if(attributes != null) {
				for(i in attributes) {
					vertexAttributeSchema.add(attributes(i).getName(), attributes(i));
				}
			}
		} else {
			
			if(vertexAttributeSchema.validateAttribute(attributes) == false) {
				// Attribute does not follow schema
				throw new UnsupportedOperationException(
						"Vertex "  + inputVertex + " does not follow Attribute schema");
			}
			
		}
		
		// Index between Attributes and Vertex
		var hashCode: Int = inputVertex.getHashCode();
		var addedVertices: ArrayList[Vertex];
		
		if(attributeAndVerticesMap.containsKey(hashCode)) {
			// vertex list for hashcode exists
			addedVertices = attributeAndVerticesMap.get(hashCode).value;
		} else {
			// Vertex list for hashcode doesn' exist, create one
			addedVertices = new ArrayList[Vertex]();
			attributeAndVerticesMap.put(hashCode, addedVertices);
		}
		
		// Create new vertex from input and assign it a unique id
		var internalVertex: Vertex = inputVertex.clone();
		internalVertex.assignInternalId();

		// Add vertex to hashmap
		idAndVertexMap.put(internalVertex.getInternalId(), internalVertex);
		
		// Add vertex to Map between vertex hash code and vertex list
		addedVertices.add(internalVertex);
		
		// Create arraylist for this vertex entry in edge index map
		srcVertexIdAndEdgesMap.put(internalVertex.getInternalId(), new ArrayList[Edge]());
		dstVertexIdAndEdgesMap.put(internalVertex.getInternalId(), new ArrayList[Edge]());
		
	}
	
	/**
	 * Checks whether vertex which has the same attributes as given vertex
	 * is already in the graph
	 * @return vertex object which has the same attributes as given vertex, null if otherwise
	 */
	private def getVertexReference(inputVertex:Vertex): Vertex {

		var hashCode: Int = inputVertex.getHashCode();
		var addedVertices: ArrayList[Vertex];
		
		if(attributeAndVerticesMap.containsKey(hashCode)) {
			// vertex list for the hsahcode is exist
			addedVertices = attributeAndVerticesMap.get(hashCode).value;
		} else {
			// Vertex doesn't exist
			return null;
		}
		
		// Check whether given vertex exists or not
		for(v in addedVertices) {
			
			// Vertex is already created
			if(v.compareTo(inputVertex) == 0) {
				return v;
			}
		}
		
		// No vertex has the same attribute as given vertex
		return null;
	}
	
	/**
	 * Adds an edge to the graph
	 * @param o - Edge to add
	 */
	public def addEdge(o: Object) {
		internalAddEdge(o);
	}
	
	/**
	 * Adds edges to the graph
	 * @param edges array list of edges to add
	 */
	public def addEdges(edges: ArrayList[Edge]) {
		len: int = edges.size();
		for(i in 0..(len-1)) {
			internalAddEdge(edges(i));
		}
	}
	
	/**
	 * Adds an edge to the graph
	 * @param o - Edge to add
	 */
	private def internalAddEdge(o:Object) {
		var e:Edge = o as Edge;
		
		var from: Vertex; 
		var to: Vertex;
		var id: Long;

		// Get reference vertex which has the same attribute in graph 
		from = getVertexReference(e.getFrom());

		if(from == null) {
			// Vertex has not been added create one
			throw new UnsupportedOperationException("Vertex '" + e.getFrom() + "' does not exist");
		}
		
		// Get reference vertex which has the same attribute in graph
		to = getVertexReference(e.getTo());
		if(to == null) {
			// Vertex has not been added create one
			throw new UnsupportedOperationException("Vertex '" + e.getTo() + "' does not exist");
		}
		
		// Create new edge
		var intputEdgeAttributes: Array[Attribute] = e.getAttributes();
		var internalEdge: Edge;
		
		// Validate edge attributes in case the edge has attribute(s)
		if(edgeAttributeSchema == null) {
			
			// Vertex schema is not defined, create schema from this node
			edgeAttributeSchema = new AttributeSchema();
			
			// If intputEdgeAttributes is not null, create schema from it
			// If intputEdgeAttributes is null, empty schema will be used
			if(intputEdgeAttributes != null) {
				for(i in intputEdgeAttributes) {
					edgeAttributeSchema.add(intputEdgeAttributes(i).getName(), intputEdgeAttributes(i));
				}
			}
			
		} else {
			
			if(edgeAttributeSchema.validateAttribute(intputEdgeAttributes) == false) {
				// Attribute does not follow schema
				throw new UnsupportedOperationException(
						"Edge '"  + e + "' does not follow Attribute schema");
			}
		}
		
		
		if(intputEdgeAttributes == null) {
			// Input edge doesn't have attribute
			internalEdge = new Edge(from, to);
		} else {
			internalEdge = new Edge(from, to, intputEdgeAttributes);
		}
		
		// Assign edge an id
		internalEdge.assignInternalId();
		
		// Put new edge to list
		edgeList.add(internalEdge);
		
		// Indexing Edge for vertex and destination
		var arr: ArrayList[Edge];
		arr = srcVertexIdAndEdgesMap.get(from.getInternalId()).value;
		arr.add(internalEdge);
		
		arr = dstVertexIdAndEdgesMap.get(to.getInternalId()).value;
		arr.add(internalEdge);
	
	}
	
	
	/**
	 * Returns iterator of Map between id and vertex
	 * @return iterator of Map.Entry[Long, Vertex]
	 */
	public def getVertexIterator() : Iterator[Map.Entry[long, Vertex]] {
		return idAndVertexMap.entries().iterator();
	}
	
	/**
	 * Returns iterator of edge
	 * @return iterator[Edge]
	 */
	public def getEdgeIterator() : Iterator[Edge] {
		return edgeList.iterator();
	}
		
	public def union(Graph): Graph {
		//+Miyuru : Need to be implemented
		throw new UnsupportedOperationException("Not implemented.");
	}

	public def intersect(Graph): Graph {
		//+Miyuru : Need to be implemented
		throw new UnsupportedOperationException("Not implemented.");
	}

	public def substract(): Graph {
		//+Miyuru : Need to be implemented
		throw new UnsupportedOperationException("Not implemented.");
	}

	public def complement(): Graph {
		//+Miyuru : Need to be implemented
		throw new UnsupportedOperationException("Not implemented.");
	}

	public def composition(Graph): Graph {
		//+Miyuru : Need to be implemented
		throw new UnsupportedOperationException("Not implemented.");
	}

	public def compareTo(Graph): Int {
		//+Miyuru : Need to be implemented
		throw new UnsupportedOperationException("Not implemented.");
	}

	public def substract(var id:Graph):org.scalegraph.graph.Graph {
		//+Miyuru : Need to be implemented
		throw new UnsupportedOperationException("Not implemented.");
	}

	public def equals(var id:org.scalegraph.graph.Graph):x10.lang.Boolean {
    	//+Miyuru : Need to define the equality of Attributed Graphs
		throw new UnsupportedOperationException("Not implemented.");
	}
	
	/**
	 * This method sets attribute schema for vertices
	 * @param schema - schema for vertices
	 */
	public def setVertexAttributeSchema(schema: AttributeSchema) {
		if(vertexAttributeSchema != null) {
			// Schema has already set
			throw new UnsupportedOperationException("Schema has already set");
		}
		
		// Clone and set
		vertexAttributeSchema = schema.clone();
	}
	
	/**
	 * This method sets attribute schema for edges
	 * @param schema - schema for edges
	 */
	public def setEdgeVertexSchema(schema: AttributeSchema) {
		if(edgeAttributeSchema != null) {
			// Schema has already set
			throw new UnsupportedOperationException("Schema has already set");
		}
		
		// Clone and set
		edgeAttributeSchema = schema.clone();
	}
	
	/**
	 * This method returns neighbors of given vertex.
	 * In case of undirected grah, it returns every vertices which has connection to this vertex regardless of direction
	 * In case of directed graph, it returns out neighbors of this vertex
	 * @return array of neighbor vertices of given vertex
	 */
	public def getNeighbors(v: Vertex): Array[Vertex] {
		
		// Incase of directed graph, returned out neigbors only
		if(isDirected) {
			return getOutNeighbors(v);
		}
		
		// Incase of undirected graph return both in and out neigbors
		// Get internal vertex
		internalVertex: Vertex = getVertexReference(v);
		if(internalVertex == null) {
			throw new UnsupportedOperationException("The input vertex '" + v + "' does not exist in the graph");
		}
	
		var neighbors: ArrayList[Vertex] = new ArrayList[Vertex]();
		var adjecentEdges: ArrayList[Edge] = srcVertexIdAndEdgesMap.get(internalVertex.getInternalId()).value;
		var len: int =  adjecentEdges.size();
		
		for( i in 0..(len-1)) {
			neighbors.add(adjecentEdges(i).getTo());
		}
		
		// in case of undirected graph, 
		// add other node that has this node as destination
		adjecentEdges = dstVertexIdAndEdgesMap.get(internalVertex.getInternalId()).value;
		len =  adjecentEdges.size();
	
		for( i in 0..(len-1)) {
			val from: Vertex = adjecentEdges(i).getFrom();
			if(!neighbors.contains(from)) {
				neighbors.add(from);
			}
		}
		
		return neighbors.toArray();
	}
	
	/**
	 * This method returns every vertices which has this vertex as destination
	 * In case of undirected graph, UnsupportedOperationException is thrown
	 * @return array of vertices which has this vertex as destination
	 */
	public def getInNeighbors(v: Vertex): Array[Vertex] {
		
		// This method is not supposed to be called by undirected graph
		if(isDirected == false) {
			throw new UnsupportedOperationException("Can't be called by undirected graph");
		}
		
		internalVertex: Vertex = getVertexReference(v);
		if(internalVertex == null) {
			throw new UnsupportedOperationException("The input vertex '" + v + "' does not exist in the graph");
		}
		
		var neighbors: ArrayList[Vertex] = new ArrayList[Vertex]();
		var adjecentEdges: ArrayList[Edge];
		
		// Add nodes which have 
		adjecentEdges = dstVertexIdAndEdgesMap.get(internalVertex.getInternalId()).value;
		len: int =  adjecentEdges.size();
		
		for( i in 0..(len-1)) {
			val from: Vertex = adjecentEdges(i).getFrom();
			neighbors.add(from);
		}
		
		return neighbors.toArray();
	}
	
	
	/**
	 * This method returns every vertices which has this vertex as source
	 * In case of undirected graph, UnsupportedOperationException is thrown
	 */
	public def getOutNeighbors(v: Vertex): Array[Vertex] {
		
		// This method is not supposed to be called by undirected graph
		if(isDirected == false) {
			throw new UnsupportedOperationException("Can't be called by undirected graph");
		}
		
		// Check whether vertex exists in the graph
		internalVertex: Vertex = getVertexReference(v);
		if(internalVertex == null) {
			throw new UnsupportedOperationException("The input vertex '" + v + "' does not exist in the graph");
		}
		
		var neighbors: ArrayList[Vertex] = new ArrayList[Vertex]();
		var adjecentEdges: ArrayList[Edge] = srcVertexIdAndEdgesMap.get(internalVertex.getInternalId()).value;
		var len: int =  adjecentEdges.size();
		
		for( i in 0..(len-1)) {
			neighbors.add(adjecentEdges(i).getTo());
		}
		
		return neighbors.toArray();
	}
	
	/**
	 * This method returns a number of vertices in the graph
	 * @return a number of vertices
	 */
	public def getVertexCount() : Long {
		return idAndVertexMap.size() as Long;
	}
}