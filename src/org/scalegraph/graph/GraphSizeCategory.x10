package org.scalegraph.graph;

/**
 * Represents the scale of the graph.
 */
public class GraphSizeCategory {
	
	public static SMALL: Short = 20;	//This graph has roughly 1M vertices (i.e. 2^20 to be exact).
	                                    //The SMALL Graph will have maximum 2^20 Vertices. If there are n machines, each machine will hold (2^20)/n number of vertices.
	public static MEDIUM: Short = 25;	//This graph has roughly (1 Billion * Place.MAX_PLACES) vertices (i.e. 2^30 * Place.MAX_PlACES to be exact).
	public static LARGE: Short = -1;	//This graph has more than (2^30 * Place.MAX_PLACES) Vertices
	
}