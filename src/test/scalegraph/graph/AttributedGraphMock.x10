package test.scalegraph.graph;

import org.scalegraph.graph.*;
import x10.util.* ;

public class AttributedGraphMock extends org.scalegraph.graph.AttributedGraph {
	
	
	public def printVertexList() {
		
		// Get vertex iterator from Id and vertex map
		vertexEntryInterator: Iterator[Map.Entry[Long, Vertex]] = this.idAndVertexMap.entries().iterator();
	
		// Iterate over entry
		while(vertexEntryInterator.hasNext()) {
			e: Map.Entry[Long, Vertex] = vertexEntryInterator.next();
			v: Vertex = e.getValue();
			attributes: Array[Attribute] = v.getAttributes();
		
			Console.OUT.print("V. id: " + e.getKey()+ " => ");
			
			// Print each attributes
			len: Int = attributes.size;
			for(var i:Int = 0; i< len ; i++) {
				Console.OUT.print(attributes(i) + ", " );
			}
			
			Console.OUT.println();
		}
	}
	
	public static def printVertexList(g: AttributedGraph) {
		
		// Get vertex iterator from Id and vertex map
		vertexEntryInterator: Iterator[Map.Entry[Long, Vertex]] = g.idAndVertexMap.entries().iterator();
	
		// Iterate over entry
		while(vertexEntryInterator.hasNext()) {
			e: Map.Entry[Long, Vertex] = vertexEntryInterator.next();
			v: Vertex = e.getValue();
			attributes: Array[Attribute] = v.getAttributes();
	
			Console.OUT.print("V. id: " + v.getInternalId()+ " => ");
	
			// Print each attributes
			len: Int = attributes.size;
			for(var i:Int = 0; i< len ; i++) {
				Console.OUT.print(attributes(i) + ", " );
			}
	
			Console.OUT.println();
		}
	}
	
	public def printSourceVertexList() {
		// Get vertex iterator from Id and vertex map
		vertexEntryInterator: Iterator[Map.Entry[Long, ArrayList[Edge]]] 
			= this.srcVertexIdAndEdgesMap.entries().iterator();
	
		// Iterate over entry
		while(vertexEntryInterator.hasNext()) {
			e: Map.Entry[Long, ArrayList[Edge]] = vertexEntryInterator.next();
			edges: ArrayList[Edge] = e.getValue();
			
			Console.OUT.print("V id: " + e.getKey()+ " => ");
			
			// Print each attributes
			len: Int = edges.size();
			for(var i:Int = 0; i< len ; i++) {
				Console.OUT.print("(" +edges(i).toString() + ") ");
			}	
	
		Console.OUT.println();
		}
	}
	
	public def printDestinationVertexList() {
		// Get vertex iterator from Id and vertex map
		vertexEntryInterator: Iterator[Map.Entry[Long, ArrayList[Edge]]] 
			= this.dstVertexIdAndEdgesMap.entries().iterator();
	
		// Iterate over entry
		while(vertexEntryInterator.hasNext()) {
			e: Map.Entry[Long, ArrayList[Edge]] = vertexEntryInterator.next();
			edges: ArrayList[Edge] = e.getValue();
	
			Console.OUT.print("V id: " + e.getKey()+ " => ");
	
			// Print each attributes
			len: Int = edges.size();
			for(var i:Int = 0; i< len ; i++) {
				Console.OUT.print("(" +edges(i).toString() + ") ");
			}	
	
			Console.OUT.println();
		}
	}
	
	
	public static def printSourceVertexList(g: AttributedGraph) {
		// Get vertex iterator from Id and vertex map
		vertexEntryInterator: Iterator[Map.Entry[Long, ArrayList[Edge]]] 
	= g.srcVertexIdAndEdgesMap.entries().iterator();
	
	// Iterate over entry
	while(vertexEntryInterator.hasNext()) {
		e: Map.Entry[Long, ArrayList[Edge]] = vertexEntryInterator.next();
	edges: ArrayList[Edge] = e.getValue();
	
	Console.OUT.print("V id: " + e.getKey()+ " => ");
	
	// Print each edge
	len: Int = edges.size();
	for(var i:Int = 0; i< len ; i++) {
		Console.OUT.print("(" +edges(i).toString() + ") ");
	}	
	
	Console.OUT.println();
	}
	}
	
	
	public static def printEdgeList(g: AttributedGraph) {
		
		// Get vertex iterator from Id and vertex map
		edgeInterator: Iterator[Edge] = g.edgeList.iterator();
	
		// Iterate over entry
		while(edgeInterator.hasNext()) {
			e: Edge = edgeInterator.next();
			attributes: Array[Attribute] = e.getAttributes();
	
			Console.OUT.print("E: (" + e.getFrom() + " , " + e.getTo() + ") --> " );
			if(attributes != null) {
				// Print each attributes
				len: Int = attributes.size;
				for(var i:Int = 0; i< len ; i++) {
					Console.OUT.print(attributes(i) + ", ");
				}
			}
			Console.OUT.println();
		}
		
	}
	
	public static def printGetNeighbors(inputGraph: Graph) {
		
		var g: AttributedGraph = inputGraph as AttributedGraph;
		
		vertexEntryInterator: Iterator[Map.Entry[Long, Vertex]] = g.idAndVertexMap.entries().iterator();
		
		// Iterate over entry
		while(vertexEntryInterator.hasNext()) {
			e: Map.Entry[Long, Vertex] = vertexEntryInterator.next();
			v: Vertex = e.getValue();
			attributes: Array[Attribute] = v.getAttributes();
		
			Console.OUT.println(v);
			neighbors: Array[Vertex] = g.getNeighbors(v);
		
			if(neighbors != null) {
				for(i in neighbors) {
					Console.OUT.println("\t\t-->" + neighbors(i));
				}
			}
			Console.OUT.println();
		}
	}
	
	public static def printGetInNeighbors(inputGraph: Graph) {
		
		var g: AttributedGraph = inputGraph as AttributedGraph;
		
		vertexEntryInterator: Iterator[Map.Entry[Long, Vertex]] = g.idAndVertexMap.entries().iterator();
		
		// Iterate over entry
		while(vertexEntryInterator.hasNext()) {
			e: Map.Entry[Long, Vertex] = vertexEntryInterator.next();
		v: Vertex = e.getValue();
		attributes: Array[Attribute] = v.getAttributes();
		
		Console.OUT.println(v);
		neighbors: Array[Vertex] = g.getInNeighbors(v);
		
		if(neighbors != null) {
			for(i in neighbors) {
				Console.OUT.println("\t\t-->" + neighbors(i));
			}
		}
		Console.OUT.println();
		}
	}
	
	public static def printGetOutNeighbors(inputGraph: Graph) {
		
		var g: AttributedGraph = inputGraph as AttributedGraph;
		
		vertexEntryInterator: Iterator[Map.Entry[Long, Vertex]] = g.idAndVertexMap.entries().iterator();
		
		// Iterate over entry
		while(vertexEntryInterator.hasNext()) {
			e: Map.Entry[Long, Vertex] = vertexEntryInterator.next();
		v: Vertex = e.getValue();
		attributes: Array[Attribute] = v.getAttributes();
		
		Console.OUT.println(v);
		neighbors: Array[Vertex] = g.getOutNeighbors(v);
		
		if(neighbors != null) {
			for(i in neighbors) {
				Console.OUT.println("\t\t-->" + neighbors(i));
			}
		}
		Console.OUT.println();
		}
	}
	
}
