package org.scalegraph.io;

public class GraphHeader {
	public var numVertexes :Long;
	public var numEdges :Long;
	public var numVertexAttributes :Int;
	public var numEdgeAttributes :Int;
	
	public def this(numVertexes :Long, numEdges :Long,
			numVertexAttributes :Int, numEdgeAttributes :Int)
	{
		this.numVertexes = numVertexes;
		this.numEdges = numEdges;
		this.numVertexAttributes = numVertexAttributes;
		this.numEdgeAttributes = numEdgeAttributes;
	}
}
