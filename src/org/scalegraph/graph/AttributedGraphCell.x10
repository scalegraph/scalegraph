package org.scalegraph.graph;

import x10.util.*;

protected struct AttributedGraphCell {
	
	val vertex: Vertex;
	val outNeigbors: Array[Edge];
	val inNeighbors: Array[Edge];
	
	public def this(v: Vertex, outNeigbors: Array[Edge], inNeighbors: Array[Edge]) {
		this.vertex = v;
		this.outNeigbors = outNeigbors;
		this.inNeighbors = inNeighbors;
	}
}