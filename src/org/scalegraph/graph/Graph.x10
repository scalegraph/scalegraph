package org.scalegraph.graph;

import x10.util.ArrayList; 
import x10.util.HashMap;

/**
 * This interface defines the fundamental properties of a Graph in scalegraph.
 */
public interface Graph extends Comparable[Graph] {
	
	/**
	 * Creates a new Graph object by merging two Graphs. The resulting Graph has Vertices from both the Graph objects.
	 * Also the resulting Graph contains Edges from both the Graphs.
	 * 
	 * Note : Unlike in the original igraph implementation, the input Graph's Vertice IDs will not be relabeled. Instead each and
	 * every Vertex of this Graph will be compared with the vertices on the input Graph to check whether they are equal. If there
	 * is a matching, then that Vertex will be taken in to the result set.
	 * 
	 * @param The Graph that need to be operated on
	 * @return A new Graph Object having the result of getting the union of this Graph with the Graph supplied as a parameter
	 */
	public def union(Graph): Graph;

	/**
	 * Creates a new Graph object by taking the intersection of this Graph with another. Intersection of the two Graphs are
	 * determined by considering their vertex sets. The result will contain Vertices that are common to both the Graphs. 
	 * If the two vertex sets do not have common items, then null will be returned
	 * as the result. After the vertices have been selected, the edges that consists of both from and to vertices in the result
	 * Graph will be added to the result Graph as Edges.
	 * 
	 * Note : Unlike in the original igraph implementation, the input Graph's Vertice IDs will not be relabeled. Instead each and
	 * every Vertex of this Graph will be compared with the vertices on the input Graph to check whether they are equal. If there
	 * is a matching, then that Vertex will be taken in to the result set.
	 * 
	 * @param The Graph that needs to be intersected with this Graph
	 * @return A new Graph that contains all the common vertices for both the Graphs.
	 */
	public def intersect(Graph): Graph;

	/**
	 * Creates a new Graph by taking the difference between a Graph with this Graph object considering their Vertices. 
	 * The difference is taken by subtracting intersection of the two graphs and subtracting that from this Graph. 
	 * If this Graph has a set of Vertices A and that Graph has B then the difference will be A- (A.B). If there is 
	 * no common items for both the Graphs then the substraction will result in a Graph which is equal to this Graph.
	 * After the set of Vertices are selected, the Edges in this Graph whoes from, to Vertices
	 * are present in the resultant Graph are copied to the result Graph.
	 * 
	 * @param The Graph that need to be substracted from this Graph
	 * @return A new Graph that Contains only the Vertices (and their corresponding Edges) from this Graph that are 
	 * not common to this Graph and the input Graph
	 */
	public def substract(Graph): Graph;

	/**
	 * Creates a new Graph which complements this Graph. The complementer Graph will include all Edges possible yet which are not
	 * present in the original graph.
	 * 
	 * @return A new Graph object
	 */
	public def complement(): Graph;

	/**
	 * Creates a new Graph having the same number of Vertices as the bigger Graph comparing this Graph with the input Graph. 
	 * Similar to igraph, the resulting Graph contains an (i,j) edge if and only if there is a k vertex such that the first Graph
	 * contains an (i,k) edge and the second Graph a (k,j) edge
	 * 
	 * @return A new Graph object with the composition result
	 */
	public def composition(Graph): Graph;

	/**
	 * This method is used to set the Graph as directed or undirected. The Graph object's directedness will be a matter of how treating the Graph.
	 * E.g. A Graph might contain traces of directedness while it is marked as undirected. Even in such cases the Graph will be considered as an undirected
	 * and the directed Edges will be treated as undirected.
	 * 
	 * @param the flag which sets the directivity of the Graph. If True the Graph will be changed to a Directed Graph.
	 */
	public def setDirected(Boolean): void;

	/**
	 * This method is used to know whether the Graph is directed or not
	 * 
	 * @return If True the Graph is directed.
	 */
	public def isDirected(): Boolean;

	/**
	 * This method is used to add an Edge to this Graph. The method allows for adding any Edge without considering its availability in this Graph.
	 * 
	 * @param the Edge that needs to be added
	 */
	public def addEdge(Object): void;

	/**
	 * The method adds a New Vertex to the Graph. The Vertex will be checked against the currently available set of Vetrices in the Graph for equivalency.
	 * If an equal Vertex exists this will not be Added.
	 * 
	 * An IllegalArgumentException will be thrown if the Vertex already Exists in the Graph.
	 * 
	 * @param the Vertex that needs to be added to the Graph
	 */
	public def addVertex(Object): Int;
	
	/**
	 * The method defines how this Graph is Equal to another Graph.
	 * 
	 * @param the Graph that need to be compared with this Graph.
	 */
	public def equals(Graph):Boolean;

	/**
	 * The method compares this Graph with another Graph. If this Graph is equal to that Graph both the graphs should be equal interms of Vertices and Edges.
	 *
	 * @return 1 - If this Graph has more Vertices than that Graph; -1 if that Graph has more Vertices compared to this Graph; 0 if both the Graphs have same number
	 * of Vertices and the Vertices are equal and the corresponding Edges are equal.
	 */
	public def compareTo(Graph): Int;
		
}