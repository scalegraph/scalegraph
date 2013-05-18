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
public class VertexContext[V, E, M, A] {V haszero, E haszero, M haszero, A haszero } {
	val mWorker :WorkerPlaceGraph[V, E];
	val mCtx :ExecutionContext[M, A];
	val mEdgeProvider :EdgeProvider[E];

	// messages
	val mEOSMessages :MemoryChunk[MessageBuffer[M]];
	
	// aggregate values
	val mAggregateValue :GrowableMemory[A] = new GrowableMemory[A]();

	var mSrcid :Long;
	
	def this(worker :WorkerPlaceGraph[V, E], ctx :ExecutionContext[M, A], tid :Long) {
		val numPlaces = ctx.mTeam.size();
		
		mWorker = worker;
		mCtx = ctx;
		mEdgeProvider = new EdgeProvider[E](worker.mOutEdge, worker.mInEdge);
		mEOSMessages = mCtx.mEOSMessages.subpart(tid * numPlaces, numPlaces);
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
	public def setValue(value :V) { mWorker.mVertexValue(mSrcid) = value; }
	
	/**
	 * returns <vertex ids, values>
	 */
	public def outEdges() = mEdgeProvider.outEdges(mSrcid);
	
	/**
	 * get out edges for the current vertex
	 */
	public def outEdgesId() = mEdgeProvider.outEdgesId(mSrcid);

	/**
	 * get out edges for the current vertex
	 */
	public def outEdgesValue() = mEdgeProvider.outEdgesValue(mSrcid);
	
	/**
	 * get in edges for the current vertex
	 */
	public def inEdgesId() = mEdgeProvider.inEdgesId(mSrcid);
	
	/**
	 * get in edges for the current vertex
	 */
	public def inEdgesValue() = mEdgeProvider.inEdgesValue(mSrcid);
	
	/**
	 * replace the out edges for the current vertex with the given edges
	 */
	public def setOutEdges(id :MemoryChunk[Long], value :MemoryChunk[E]) {
		mEdgeProvider.setOutEdges(id, value);
	}
	
	/**
	 * remove all the out edges for the current vertex
	 */
	public def clearOutEdges() { mEdgeProvider.clearOutEdges(); }
	
	/**
	 * add out edge to the current vertex
	 */
	public def addOutEdge(id :Long, value :E) { mEdgeProvider.addOutEdge(id, value); }
	
	/**
	 * add out edges to the current vertex
	 */
	public def addOutEdges(id :MemoryChunk[Long], value :MemoryChunk[E]) {
		mEdgeProvider.addOutEdges(id, value);
	}

	/**
	 * get aggregated value on a previous superstep
	 */
	public def aggregatedValue() = mCtx.mAggregatedValue;

	/**
	 * aggregate the value
	 */
	public def aggreagate(value :A) { mAggregateValue.add(value); }

	/**
	 * send message using dst id of 
	 * vertex
	 */
	public def sendMessage(id :Long, mes :M) {
		val dstPlace = mWorker.mDtoV.c(id);
		val mesBuf = mEOSMessages(dstPlace);
		mesBuf.messages.add(mes);
		mesBuf.dstIds.add(id);
	}

	/**
	 * send messages using dst id of 
	 * vertex
	 */
	public def sendMessage(id :MemoryChunk[Long], mes :MemoryChunk[M]) {
		for(i in id.range()) {
			val dstPlace = mWorker.mDtoV.c(id(i));
			val mesBuf = mEOSMessages(dstPlace);
			mesBuf.messages.add(mes(i));
			mesBuf.dstIds.add(id(i));
		}
	}

	/**
	 * send messages to all neighbor vertices
	 * This method uses in edges to send messages.
	 * Before using this method, you have to update in edges
	 * by invoking updateInEdges method of XPregelGraph.
	 */
	public def sendMessageToAllNeighbors(mes :M) {
		// TODO: handle multiple messages
		if(mCtx.mVOSEnabled == null) {
			mCtx.allocateVOSBuffer();
		}
		mCtx.mVOSEnabled(mSrcid) = true;
		mCtx.mVOSMessages(mSrcid) = mes;
	}
	
	/**
	 * make the halted flag for the current vertex true
	 */
	public def voteToHalt() {
		mWorker.mVertexActive(mSrcid) = false;
	}
	
	/**
	 * make the halted flag for the current vertex false
	 */
	public def revive() {
		mWorker.mVertexActive(mSrcid) = true;
	}
	
	/**
	 * set the initial halted flag value for the current vertex on the next computation
	 */
	public def setVertexShouldBeActive(active :Boolean) {
		mWorker.mVertexShouldBeActive(mSrcid) = active;
	}
	
	/**
	 * get the halted flag for the current vertex
	 */
	public def isHalted() = mWorker.mVertexActive(mSrcid);
}


