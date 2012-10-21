package org.scalegraph.metrics.centrality;

public struct Element {
	public val first:Int;
	public val second:Double;
	public def this(first:Int, second:Double) {
		this.first = first;
		this.second = second;
	}
}