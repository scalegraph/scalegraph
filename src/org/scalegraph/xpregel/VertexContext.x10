package org.scalegraph.xpregel;

import org.scalegraph.util.MemoryChunk;

/**
 * Provides XPregel framwork services for computation kernels
 * The default vertex id format is dst id.
 * When you want to get real vertex id, use readId method.
 * 
 * V: Vertex value type
 * E: Edge value type
 * M: Message value type
 * A: Aggreator value type
 */
public class VertexContext[V, E, M, A] {
	
	/**
	 * get the number of current superstep
	 */
	public def superstep() {
		// TODO:
	}
	
	/**
	 * get read vertex id from dst id
	 */
	public def realId(id :Long) {
		// TODO:
	}
	
	/**
	 * get dst id from read vertex id
	 */
	public def dstId(realId :Long) {
		// TODO:
	}
	
	/**
	 * get the number of vertices of the graph
	 */
	public def numberOfVertices() {
		// TODO:
	}
	
	/**
	 * get the value for the current vertex
	 */
	public def value() {
		// TODO:
	}
	
	/**
	 * set the value for the current vertex
	 */
	public def setValue(value :V) {
		// TODO:
	}
	
	/**
	 * get out edges for the current vertex
	 */
	public def outEdges() {
		// TODO:
	}
	
	/**
	 * get in edges for the current vertex
	 */
	public def inEdges() {
		// TODO:
	}
	
	/**
	 * replace the out edges for the current vertex with the given edges
	 */
	public def setOutEdges(edges :MemoryChunk[E]) {
		// TODO:
	}
	
	/**
	 * remove all the out edges for the current vertex
	 */
	public def clearOutEdges() {
		// TODO:
	}
	
	/**
	 * add out edge to the current vertex
	 */
	public def addOutEdge(id :Long, value :E) {
		// TODO:
	}
	
	/**
	 * add out edges to the current vertex
	 */
	public def addOutEdges(id :MemoryChunk[Long], value :MemoryChunk[E]) {
		// TODO:
	}

	/**
	 * get aggregated value on a previous superstep
	 */
	public def aggregatedValue() {
		// TODO:
	}

	/**
	 * aggregate the value
	 */
	public def aggreagate(value :A) {
		// TODO:
	}

	/**
	 * send message using dst id of 
	 * vertex
	 */
	public def sendMessage(id :Long, mes :M) {
		// TODO:
	}

	/**
	 * send messages using dst id of 
	 * vertex
	 */
	public def sendMessage(id :MemoryChunk[Long], mes :MemoryChunk[M]) {
		// TODO:
	}

	/**
	 * send messages to all neighbor vertices
	 * This method uses in edges to send messages.
	 * Before using this method, you have to update in edges
	 * by invoking updateInEdges method of XPregelGraph.
	 */
	public def sendMessageToAllNeighbors(mes :M) {
		// TODO:
	}
	
	/**
	 * make the halted flag for the current vertex true
	 */
	public def voteToHalt() {
		// TODO;
	}
	
	/**
	 * make the halted flag for the current vertex false
	 */
	public def revive() {
		// TODO:
	}
	
	/**
	 * set the initial halted flag value for the current vertex on the next computation
	 */
	public def setVertexShouldBeActive(active :Boolean) {
		// TODO:
	}
	
	/**
	 * get the halted flag for the current vertex
	 */
	public def isHalted() {
		// TODO:
	}
}
