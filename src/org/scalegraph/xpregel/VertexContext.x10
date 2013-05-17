package org.scalegraph.xpregel;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.Bitmap;
import org.scalegraph.util.GrowableMemory;

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
public class VertexContext[V, E, M, A] {V haszero, E haszero} {
	val mWorker :WorkerPlaceGraph[V, E];
	val mCtx :ExecutionContext[M, A];

	val mDiffEdgesOffset :GrowableMemory[Tuple2[Long, Long]] = new GrowableMemory[Tuple2[Long, Long]]();
	val mDiffEdgesVertex :GrowableMemory[Long] = new GrowableMemory[Long]();
	val mDiffEdgesValue :GrowableMemory[E] = new GrowableMemory[E]();

	var mSrcid :Long;
	var mEdgeChanged :Boolean;
	
	def this(worker :WorkerPlaceGraph[V, E], ctx :ExecutionContext[M, A]) {
		mWorker = worker;
		mCtx = ctx;
	}
	
	/**
	 * get the number of current superstep
	 */
	public def superstep() = mCtx.mSuperstep;
	
	/**
	 * get read vertex id from dst id
	 */
	public def realId(id :Long) = mWorker.mDtoV(id);
	
	/**
	 * get dst id from read vertex id
	 */
	public def dstId(realId :Long) = mWorker.mVtoD(realId);
	
	/**
	 * get the number of vertices of the graph
	 */
	public def numberOfVertices() = mWorker.mIds.numberOfGlobalVertexes();
	
	/**
	 * get the value for the current vertex
	 */
	public def value() = mWorker.mVertexValue(mSrcid);
	
	/**
	 * set the value for the current vertex
	 */
	public def setValue(value :V) {
		mWorker.mVertexValue(mSrcid) = value;
	}
	
	public def outEdges() :Tuple2[MemoryChunk[Long], MemoryChunk[E]] {
		// TODO:
	}
	
	/**
	 * get out edges for the current vertex
	 */
	public def outEdgesId() {
		// TODO: edge modification
		val offset = mWorker.mOutEdgesOffset;
		val start = offset(mSrcid);
		val length = offset(mSrcid + 1) - start;
		return mWorker.mOutEdgesVertex.subpart(start, length);
	}

	/**
	 * get out edges for the current vertex
	 */
	public def outEdgesValue() {
		val offset = mWorker.mOutEdgesOffset;
		val start = offset(mSrcid);
		val length = offset(mSrcid + 1) - start;
		return mWorker.mOutEdgesValue.subpart(start, length);
	}
	
	/**
	 * get in edges for the current vertex
	 */
	public def inEdgesId() {
		val offset = mWorker.mInEdgesOffset();
		val start = offset(mSrcid);
		val length = offset(mSrcid + 1) - start;
		return mWorker.mInEdgesVertex().subpart(start, length);
	}
	
	/**
	 * get in edges for the current vertex
	 */
	public def inEdgesValue() {
		val offset = mWorker.mInEdgesOffset();
		val start = offset(mSrcid);
		val length = offset(mSrcid + 1) - start;
		return mWorker.mInEdgesValue.subpart(start, length);
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
