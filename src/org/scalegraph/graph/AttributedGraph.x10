package org.scalegraph.graph;

import x10.util.*;
import x10.util.concurrent.*;

import org.scalegraph.util.Date;


public class AttributedGraph  implements Graph {
	
	protected var vertexTab: DistArray[Array[Any] {self.rank == 1}];
	protected var vertexAttrTab: DistArray[Array[Any] {self.rank == 1}];
	
	protected var vertexAttrNameIdMap: HashMap[String, Int];
	protected var vertexAttrIdNameMap: HashMap[Int, String];
	
	protected var edgeTab: DistArray[Array[Int] {self.rank == 1}];
	protected var edgeAttrTab: DistArray[Array[Any]{self.rank == 1}];

	protected var edgeAttrNameIdMap: HashMap[String, Int];
	protected var edgeAttrIdNameMap: HashMap[Int, String];

	protected var isDirected: Boolean = false;
	
	transient protected var vertexAttributeSchema: AttributeSchema = null; // Attribute schema for vertex
	transient protected var edgeAttributeSchema: AttributeSchema = null; // Attribute schema for edge
	
	protected var vertexCount: Long = 0;
	protected var edgeCount: Long = 0;
	
	protected var nextVertexIndex: Long = 0;
	protected var nextEdgeId: Long = 0;
	
	protected val sizeCategory: Short;
	
	//val rooms: Int = 107374182;// 483647;
	//val rooms: Int = 33554432; // 2^25
	//val rooms: Int = 262144; // 2^15
	//val rooms: Int = 32768; // 2^18
	val rooms: Int = 650;
	val R = 0..(rooms - 1);
	
	var dist: Dist;
	
	public static def make(sizeCategory: Short): AttributedGraph {
		val g = new AttributedGraph(sizeCategory);
		g.init();
		return g;
	}
	
	public static def make(sizeCategory: Short, vertexList: ArrayList[Vertex]): AttributedGraph {
		
		val g = new AttributedGraph(sizeCategory);
		g.init();
		g.addVertices(vertexList);
		return g;
	}
	
	public static def make(sizeCategory: Short, vertexList: ArrayList[Vertex], edgeList: Array[Edge]): AttributedGraph {

		val g = new AttributedGraph(sizeCategory);
		g.init();
		g.addVertices(vertexList);
		g.addEdge(edgeList);
		return g;
	}
	
	protected def this(sizeCategory: Short) {
		this.sizeCategory = sizeCategory;
	}
	
	protected def init() {
		
		dist = Dist.makeBlock(R, 0);
		
		// Console.OUT.println("Create Vertex table");
		initVertexTab();

		// Console.OUT.println("Create Edge table");
		initEdgeTab();
	}
	
	protected def initVertexTab() {
		vertexTab = DistArray.make[Array[Any]{self.rank == 1}](dist);
	}
	
	protected def initEdgeTab() {
		edgeTab = DistArray.make[Array[Int]{self.rank == 1}](dist);
	}
	
	protected def initVertexAttributeSchema() {
		
		vertexAttrTab = DistArray.make[Array[Any]{self.rank == 1}](dist);
		vertexAttrNameIdMap = new HashMap[String, Int]();
		vertexAttrIdNameMap = new HashMap[Int, String]();
		
		val it: Iterator[Map.Entry[String, String]] = vertexAttributeSchema.nameAndTypeMap.entries().iterator();
		var index: Int = 1; // Zeroth index keeps Array cell id
		while(it.hasNext()) {
			name: String = it.next().getKey();
			vertexAttrNameIdMap.put(name, index);
			vertexAttrIdNameMap.put(index, name);
			++index;
		}
	}
	
	protected def initEdgeAttributeSchema() {

		edgeAttrTab = DistArray.make[Array[Any]{self.rank == 1}](dist);
		edgeAttrNameIdMap = new HashMap[String, Int]();
		edgeAttrIdNameMap = new HashMap[Int, String]();
		
		val it: Iterator[Map.Entry[String, String]] = edgeAttributeSchema.nameAndTypeMap.entries().iterator();
		var index: Int = 1; // Zeroth index keeps Array cell id
		while(it.hasNext()) {
			name: String = it.next().getKey();
			edgeAttrNameIdMap.put(name, index);
			edgeAttrIdNameMap.put(index, name);
			++index;
		}
	}
	
	public def addVertex(v: Object) {
		val inputVertex = v as Vertex;
		
		if(vertexAttributeSchema == null) {
			createVertexAttributeSchemaFromAttributes(inputVertex.getAttributes());
		} else {
			val attributes: Array[Attribute] = inputVertex.getAttributes();
			if(vertexAttributeSchema.validateAttribute(attributes) == false) {
				// Attribute does not follow schema
				throw new UnsupportedOperationException(
						"Vertex "  + inputVertex + " does not follow Attribute schema");
			}
		}
		
		val AttributeColumns = vertexAttributeSchema.nameAndTypeMap.size();
		val attrRecord: Array[Any] = new Array[Any](0..AttributeColumns);
		val attributes: Array[Attribute] = inputVertex.getAttributes();
		
		var vertexId: Long = -1;
		for(i in attributes) {
			val a = attributes(i);
			val columnId = vertexAttrNameIdMap.get(a.getName()).value;
			attrRecord(columnId) = a.getValue();
			if(a.getName().equals("id")) {
				// Parse id attribute to vertex id, this should be harm the performance
				vertexId = Long.parseLong(a.getValue().toString());
			}
		}
		
		if(vertexId == -1L) {
			throw new UnsupportedOperationException(
					"'id' attribute was not defined for "  + inputVertex);
		}
		// attrRecord(0) = -1;
		
		// if(nextVertexIndex == 0L) {
		 	addVertexToTable(vertexId as Int, attrRecord);
		// } else {
		// 	val id: Long = getVertexIndex(attrRecord);
		// 	if(id == -1L) {
		// 		addVertexToTable(attrRecord);		
		// 	} else {
		// 		throw new UnsupportedOperationException("Vertex '" + v.toString() + "' already exists in the graph");
		// 	}
		// }
		 	
		// Increase vertex count
		 	++vertexCount;

		return 1;
	}
	
	public def addVertices(vertexList: ArrayList[Vertex]) {
		for(v in vertexList) {
			addVertex(v);
		}
	}
	
	protected def createVertexAttributeSchemaFromAttributes(attributes: Array[Attribute]) {
		
		this.vertexAttributeSchema = new AttributeSchema();
		
		if(attributes != null) {
			for(i in attributes) {
				vertexAttributeSchema.add(attributes(i).getName(), attributes(i));
			}
		}
		
		// Console.OUT.println("Create Vertex Attribute Schema");
		initVertexAttributeSchema();	
	}
	
	protected def getVertexIndex(comparedRecord: Array[Any]): Long {
		
		val R : Region = (0..(nextVertexIndex as Int - 1)) as Region(1);
		val tempAttrTable = vertexAttrTab.restriction(R);

		val localReduce = (inputData: Array[Any], eachCell: Array[Any]) => 
			{
				if(inputData(0) as Int >= 0)
					return inputData;
				
				if(eachCell(0) == null)
					return inputData;
				
				for(i in 1..(eachCell.size -1)) {
					if(eachCell(i).equals(inputData(i)) == false) {
						return inputData;
					}
				}
				
				 return eachCell;
			};

		val record: Array[Any] = tempAttrTable.reduce(localReduce, comparedRecord);
		return record(0) as Int;

	}
	
	protected def addVertexToTable(index: Int, attrRecord: Array[Any]) {
		
		val i = index;
		val p = dist(i);
		if(p == here) {
			
			if(vertexTab(i) != null) {
				throw new UnsupportedOperationException("Duplicated vertex for id: " + i);
			}
			
			vertexTab(i) = new Array[Any](0..2);
			vertexTab(i)(0) = i;
			vertexTab(i)(1) = new ArrayList[Int](); // array of in-edge id
			vertexTab(i)(2) = new ArrayList[Int](); // array of out-edge id
			
			vertexAttrTab(i) = attrRecord;
			vertexAttrTab(i)(0) = i;
		} else {
			at(p) {
				
				if(vertexTab(i) != null) {
					throw new UnsupportedOperationException("Duplicated vertex for id: " + i);
				}
				
				vertexTab(i) = new Array[Any](0..2);
				vertexTab(i)(0) = i;
				vertexTab(i)(1) = new ArrayList[Int](); // array of in-edge id
				vertexTab(i)(2) = new ArrayList[Int](); // array of out-edge id
				
				vertexAttrTab(i) = attrRecord;
				vertexAttrTab(i)(0) = i;
			}
		}
	}
	
	public def addEdge(srcVertexId: Int, dstVertexId: Int, attributes: Array[Attribute]) {
				
		var edgeIndex: Int = 0;
		atomic {
			edgeIndex = nextEdgeId as Int;
			++nextEdgeId;
		}
		
		if(edgeAttributeSchema == null) {
			createEdgeAttributeSchemaFromAttributes(attributes);
		} else {
			if(edgeAttributeSchema.validateAttribute(attributes) == false) {
				// Attribute does not follow schema
				throw new UnsupportedOperationException(
						"Edge (" + srcVertexId + "," + dstVertexId + ") " + attributes + " does not follow Attribute schema");
			}
		}
		
		val AttributeColumns = edgeAttributeSchema.nameAndTypeMap.size();
		val attrRecord: Array[Any] = new Array[Any](0..AttributeColumns);
		
		if(attributes != null) {
			for(i in attributes) {
				val a = attributes(i);
				val columnId = edgeAttrNameIdMap.get(a.getName()).value;
				attrRecord(columnId) = a.getValue();
			}
		}
		addEdgeToTable(edgeIndex as Int, srcVertexId, dstVertexId, attrRecord);
	}
	
	public def addEdges(edgeList: ArrayList[Edge]) {
		for(e in edgeList) {
			addEdge(e);
		}
	}
	
	protected def addEdgeToTable(index: Int, srcVertexId: Int, dstVertexId: Int, attrRecord: Array[Any]) {
		
		val p = dist(srcVertexId);
		val q = dist(dstVertexId);
		
		val isVertexNull = (d:  DistArray[Array[Any] {self.rank == 1}], index: Int) => d(index) == null;
		if(at(p)isVertexNull(vertexTab, srcVertexId)) {
			throw new UnsupportedOperationException("source vertex id: " + srcVertexId + " doesn't exist");
		}
		
		if(at(q)isVertexNull(vertexTab, dstVertexId)) {
			throw new UnsupportedOperationException("destination vertex id: " + dstVertexId + " doesn't exist");
		}
		
		val eadgePlace = dist(index);
		
		// Add edge record
		at(eadgePlace) {
			edgeTab(index) = new Array[Int](0..2);
			edgeTab(index)(0) = index;
			edgeTab(index)(1) = srcVertexId;
			edgeTab(index)(2) = dstVertexId;
			
			edgeAttrTab(index) = attrRecord;
			edgeAttrTab(index)(0) = index;
			
		}
		
		// Update out edge
		at(p) {
			var outEdges: ArrayList[Int] = vertexTab(srcVertexId)(2) as ArrayList[Int];
			if(outEdges == null) {
				outEdges = new ArrayList[Int]();
				vertexTab(srcVertexId)(2) = outEdges;
			}
			outEdges.add(index);
		}
		
		// Update in edge
		at(q) {
			var inEdges: ArrayList[Int] = vertexTab(dstVertexId)(1) as ArrayList[Int];
			if(inEdges == null) {
				inEdges = new ArrayList[Int]();
				vertexTab(dstVertexId)(1) = inEdges;
			}
			inEdges.add(index);
		}
		
	}
	
	protected def createEdgeAttributeSchemaFromAttributes(attributes: Array[Attribute]) {
		this.edgeAttributeSchema = new AttributeSchema();
		
		if(attributes != null) {
			for(i in attributes) {
				edgeAttributeSchema.add(attributes(i).getName(), attributes(i));
			}
		}
		
		// Console.OUT.println("Create Edge Attribute Schema");
		initEdgeAttributeSchema();
	}
	
	public def setDirected(isDirected: Boolean) {
		this.isDirected = isDirected;
	}
	
	public def isDirected():x10.lang.Boolean {
		return this.isDirected;
	}
	
	public def printVertex() {
		
		val R : Region = (0..(rooms as Int - 1)) as Region(1);
		val vTab = vertexTab.restriction(R); 
		
		val localReduce = (inputData: Array[Any]) => 
		{
			if(inputData == null)
				return inputData;
			
			Console.OUT.println(inputData(0).toString() + " in: " + inputData(1) + " out: " + inputData(2));
			return inputData;
		};
		vTab.map(vTab , localReduce);

	}
	
	public def getVertexCount(): Long {
		return vertexCount;
	}
	
	public def iterateOverVertices(handler: (Vertex) => void ) {
		
		var loop: Long = 0;
		for(i in R) {
			
			if(loop == vertexCount) {
				break;
			}
			
			val p = dist(i);
			
			var vertexId: Long = at (p) { 
					if(vertexTab(i) != null ) 
						return vertexTab(i)(0) as Int; 
					return -1;
			};
			
			if(vertexId == -1L)
				continue;
			
			var attributeRecord: Array[Any] = at (p) vertexAttrTab(i);			
			val a = attributeRecordToAttributes(attributeRecord, vertexAttrIdNameMap);
			
			val vertex = new Vertex(a);
			vertex.internalId = vertexId;
			
			handler(vertex);
			++loop;
		}
		
	}
	
	public def iterateOverVerticesLocally(handler: (Vertex) => void ) {
		
		var loop: Long = 0;
		
		val localDist = dist.restriction(here);
		
		for(i in localDist.region) {
			val vertexRecord = vertexTab(i);
			if(vertexRecord == null)
				continue;
			
			val vertexId = vertexRecord(0) as Int;
			var attributeRecord: Array[Any] = vertexAttrTab(i);			
			val attriubutes = attributeRecordToAttributes(attributeRecord, vertexAttrIdNameMap);
			
			val vertex = new Vertex(attriubutes);
			vertex.internalId = vertexId;
			handler(vertex);
		}
	}
	
	protected def attributeRecordToAttributes(attributeRecord: Array[Any], nameMap: HashMap[Int, String]): ArrayList[Attribute] {
		val attributeList = new ArrayList[Attribute]();
		
		if(attributeRecord != null) {
			
			var a: Attribute = null;
			
			for (i in 1..(attributeRecord.size - 1)) {
				val value = attributeRecord(i);
				val key = nameMap(i).value;
				
				// Determine type of attribute value
				if(value instanceof Int) {
					a = new IntAttribute(key, value as Int);
				} else if(value instanceof Long) {
					a = new LongAttribute(key, value as Long);
				} else if (value instanceof Float) {
					a = new FloatAttribute(key, value as Float);
				} else if (value instanceof Double) {
					a = new DoubleAttribute(key, value as Double);
				} else if (value instanceof Short) {
					a = new ShortAttribute(key, value as Short);
				} else if(value instanceof Byte) {
					a = new ByteAttribute(key, value as Byte);
				} else if(value instanceof Char) {
					a = new CharAttribute(key, value as Char);
				} else if(value instanceof String) {
					a = new StringAttribute(key, value as String);
				} else if(value instanceof Boolean) {
					a = new BooleanAttribute(key, value as Boolean);
				} else if(value instanceof Date) {
					a = new DateAttribute(key, value as Date);
				} else {
					throw new UnsupportedOperationException("Cant find proper attribute class for '"+ value.typeName()+"'");
				}
				attributeList.add(a);
			}
		}
		return attributeList;
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
			throw new UnsupportedOperationException("Have not been implemented yet");
			// return getOutNeighbors(v);
		}
		
		// Incase of undirected graph return both in and out neigbors
		// Get internal vertex
		if(v.internalId == -1L) {
			// External vertex, find internal vertex that matches input vertex
			throw new UnsupportedOperationException("Have not been implemented yet");
		}
		
		val index = v.internalId as Int;
		val srcPlace = dist(index);
		var neighbors: ArrayList[Vertex] = new ArrayList[Vertex]();
		val addedVertexId = new HashMap[Long, Any]();
		
		// Process in edge
		//*************************************
		// val inEdges: ArrayList[Int] = at (srcPlace) vertexTab(index)(1) as ArrayList[Int];
		val inEdges: ArrayList[Int] = vertexTab(index)(1) as ArrayList[Int];
		//*************************************
		for( i in 0..(inEdges.size()-1)) {
			// Get edge
			val edgeIndex = inEdges(i) as Int;
			val edgePlace = dist(edgeIndex);
			
			// Get to
			//*************************************
			// val neighborId = at(edgePlace)edgeTab(edgeIndex)(1) as Int;
			val neighborId = edgeTab(edgeIndex)(1) as Int;
			//*************************************
			val neighborPlace = dist(neighborId);
			
			 //*************************************
			// val attributeRecord = at(neighborPlace) vertexAttrTab(neighborId) as Array[Any];
			// val attributeRecord = vertexAttrTab(neighborId) as Array[Any];
			//*************************************
			// val attriubtes = attributeRecordToAttributes(attributeRecord, vertexAttrIdNameMap);
			// val vertex = new Vertex(attriubtes);
			val vertex = new Vertex();
			
			vertex.internalId = neighborId;
			neighbors.add(vertex);
			addedVertexId.put(vertex.getInternalId(), null);
		}
		
		// in case of undirected graph, 
		// add other node that has this node as destination
		// val outEdges: ArrayList[Int] = at (srcPlace) vertexTab(index)(2) as ArrayList[Int];
		val outEdges: ArrayList[Int] = vertexTab(index)(2) as ArrayList[Int];
		
		for( i in 0..(outEdges.size() - 1)) {
			val edgeIndex = outEdges(i) as Int;
			val edgePlace = dist(edgeIndex);
			
			// Get to
			// *************************************
			// val neighborId = at(edgePlace)edgeTab(edgeIndex)(2) as Int;
			val neighborId = edgeTab(edgeIndex)(2) as Int;
			// *************************************
			val neighborPlace = dist(neighborId);
			
			 // *************************************
			// val attributeRecord = at(neighborPlace) vertexAttrTab(neighborId) as Array[Any];
			// val attributeRecord = vertexAttrTab(neighborId) as Array[Any];
			// *************************************
			// val attriubtes = attributeRecordToAttributes(attributeRecord, vertexAttrIdNameMap);
			// val vertex = new Vertex(attriubtes);
			val vertex = new Vertex();
			
			vertex.internalId = neighborId;
			// neighbors.add(vertex);
			if(!addedVertexId.containsKey(neighborId)) {
				neighbors.add(vertex);
			}
		}
		// Console.OUT.println("Neighbor for src: " + v + " => " + neighbors);
		return neighbors.toArray();
	}
	
	/**
	 * This method returns every vertices which has this vertex as destination
	 * In case of undirected graph, UnsupportedOperationException is thrown
	 * @return array of vertices which has this vertex as destination
	 */
	// public def getInNeighbors(v: Vertex): Array[Vertex] {
	// 	
	// 	// This method is not supposed to be called by undirected graph
	// 	if(isDirected == false) {
	// 		throw new UnsupportedOperationException("Can't be called by undirected graph");
	// 	}
	// 	
	// 	internalVertex: Vertex = getVertexReference(v);
	// 	if(internalVertex == null) {
	// 		throw new UnsupportedOperationException("The input vertex '" + v + "' does not exist in the graph");
	// 	}
	// 	
	// 	var neighbors: ArrayList[Vertex] = new ArrayList[Vertex]();
	// 	var adjecentEdges: ArrayList[Edge];
	// 	
	// 	// Add nodes which have 
	// 	adjecentEdges = dstVertexIdAndEdgesMap.get(internalVertex.getInternalId()).value;
	// 	len: int =  adjecentEdges.size();
	// 	
	// 	for( i in 0..(len-1)) {
	// 		val from: Vertex = adjecentEdges(i).getFrom();
	// 		neighbors.add(from);
	// 	}
	// 	
	// 	return neighbors.toArray();
	// }
	// 
	// 
	// /**
	//  * This method returns every vertices which has this vertex as source
	//  * In case of undirected graph, UnsupportedOperationException is thrown
	//  */
	// public def getOutNeighbors(v: Vertex): Array[Vertex] {
	// 	
	// 	// This method is not supposed to be called by undirected graph
	// 	if(isDirected == false) {
	// 		throw new UnsupportedOperationException("Can't be called by undirected graph");
	// 	}
	// 	
	// 	// Check whether vertex exists in the graph
	// 	internalVertex: Vertex = getVertexReference(v);
	// 	if(internalVertex == null) {
	// 		throw new UnsupportedOperationException("The input vertex '" + v + "' does not exist in the graph");
	// 	}
	// 	
	// 	var neighbors: ArrayList[Vertex] = new ArrayList[Vertex]();
	// 	var adjecentEdges: ArrayList[Edge] = srcVertexIdAndEdgesMap.get(internalVertex.getInternalId()).value;
	// 	var len: int =  adjecentEdges.size();
	// 	
	// 	for( i in 0..(len-1)) {
	// 		neighbors.add(adjecentEdges(i).getTo());
	// 	}
	// 	
	// 	return neighbors.toArray();
	// }

	public def getVertexList(): Array[Vertex] {
		
		val vertexList = new Array[Vertex](vertexCount as Int);
		var loop: Long = 0;
		
		for(i in R) {
			
			if(loop == vertexCount) {
				break;
			}
			
			val p = dist(i);
			
			var vertexId: Long = at (p) { 
				if(vertexTab(i) != null ) 
					return vertexTab(i)(0) as Int; 
				return -1;
			};
			
			if(vertexId == -1L)
				continue;
			
			var attributeRecord: Array[Any] = at (p) vertexAttrTab(i);			
			val a = attributeRecordToAttributes(attributeRecord, vertexAttrIdNameMap);
			
			val vertex = new Vertex(a);
			vertex.internalId = vertexId;
			
			// Add vertex to result list
			vertexList(loop as Int) = vertex;
			
			++loop;
		}
		
		return vertexList;
	}
	
	public def addEdge(var o:Object):Int {
		
		val edge = o as Edge;
		

		var intputEdgeAttributes: Array[Attribute] = edge.getAttributes();
		
		if(edgeAttributeSchema == null) {
			createEdgeAttributeSchemaFromAttributes(intputEdgeAttributes);
		} else {
			if(edgeAttributeSchema.validateAttribute(intputEdgeAttributes) == false) {
				// Attribute does not follow schema
				throw new UnsupportedOperationException(
						"Edge " + edge + " does not follow Attribute schema");
			}
		}
		
		val from = edge.getFrom();
		val to = edge.getTo();
		

		// Get vertex record for from-vertex
		val FromAttribute = from.getAttributes();
		val fromAttributeRecord = new Array[Any](0..vertexAttrNameIdMap.size());
		for(i in FromAttribute) {
			val a = FromAttribute(i);
			val columnId = vertexAttrNameIdMap.get(a.getName()).value;
			fromAttributeRecord(columnId) = a.getValue();
		}
		
		val fromVertexIndex = getVertexIndex(fromAttributeRecord);
		if(fromVertexIndex == -1L) {
			// Vertex has not been added create one
			throw new UnsupportedOperationException("Vertex '" + from + "' does not exist");
		}
		
		// Get vertex record for to-vertex
		val toAttribute = to.getAttributes();
		val toAttributeRecord = new Array[Any](0..vertexAttrNameIdMap.size());
		for(i in toAttribute) {
			val a = toAttribute(i);
			val columnId = vertexAttrNameIdMap.get(a.getName()).value;
			toAttributeRecord(columnId) = a.getValue();
		}
		
		val toVertexIndex = getVertexIndex(toAttributeRecord);
		if(toVertexIndex == -1L) {
			// Vertex has not been added create one
			throw new UnsupportedOperationException("Vertex '" + from + "' does not exist");
		}
		
		val AttributeColumns = edgeAttributeSchema.nameAndTypeMap.size();
		val edgeAttrRecord: Array[Any] = new Array[Any](0..AttributeColumns);
		
		if(intputEdgeAttributes != null) {
			for(i in intputEdgeAttributes) {
				val a = intputEdgeAttributes(i);
				val columnId = edgeAttrNameIdMap.get(a.getName()).value;
				edgeAttrRecord(columnId) = a.getValue();
			}
		}
		var edgeIndex: Int;
		atomic {
			edgeIndex = nextEdgeId as Int;
			++nextEdgeId;
		}
		addEdgeToTable(edgeIndex, fromVertexIndex as Int, toVertexIndex as Int, edgeAttrRecord);
		return 1;
	}

	public def union(var id$18696:org.scalegraph.graph.Graph):org.scalegraph.graph.Graph {
		// TODO: auto-generated method stub
		throw new UnsupportedOperationException("Not implemented.");
	}
	
	public def composition(var id$18699:org.scalegraph.graph.Graph):org.scalegraph.graph.Graph {
		// TODO: auto-generated method stub
		throw new UnsupportedOperationException("Not implemented.");
	}
	
	public def compareTo(var id$18704:org.scalegraph.graph.Graph):x10.lang.Int {
		// TODO: auto-generated method stub
		throw new UnsupportedOperationException("Not implemented.");
	}
	
	public def equals(var id$18703:org.scalegraph.graph.Graph):x10.lang.Boolean {
		// TODO: auto-generated method stub
		throw new UnsupportedOperationException("Not implemented.");
	}
	
	public def substract(var id$18698:org.scalegraph.graph.Graph):org.scalegraph.graph.Graph {
		// TODO: auto-generated method stub
		throw new UnsupportedOperationException("Not implemented.");
	}
	
	public def intersect(var id$18697:org.scalegraph.graph.Graph):org.scalegraph.graph.Graph {
		// TODO: auto-generated method stub
		throw new UnsupportedOperationException("Not implemented.");
	}
	
	public def complement():org.scalegraph.graph.Graph {
		// TODO: auto-generated method stub
		throw new UnsupportedOperationException("Not implemented.");
	}

	public def printAllTab() {
		
		Console.OUT.println("Vertex Tab");
		for (i in R) {
			val p = dist(i);
			at(p) {
				if(vertexTab(i) != null)
					Console.OUT.println(vertexTab(i));
			}
		}
		
		Console.OUT.println("\nVertex Attribute Tab");
		for (i in R) {
			val p = dist(i);
			at(p) {
				if(vertexAttrTab(i) != null)
					Console.OUT.println(vertexAttrTab(i));
			}
		}
		
		Console.OUT.println("\nEdge Tab");
		for (i in R) {
			val p = dist(i);
			at(p) {
				if(edgeTab(i) != null)				
					Console.OUT.println(edgeTab(i));
			}
		}
		
		Console.OUT.println("\nEdge Attribute Tab");
		for (i in R) {
			val p = dist(i);
			at(p) {
				if(edgeAttrTab(i) != null)				
					Console.OUT.println(edgeAttrTab(i));
			}
		}
	}
}
