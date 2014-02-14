/* 
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package org.scalegraph.xpregel;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.Bitmap;

import x10.compiler.Inline;

/**
 * Provides XPregel framework service for compute kernels. <br>
 * This object is available only in the compute kernel.
 * All public methods are thread-safe. <br>
 * The vertex id is processed in the mangled format,
 * we call <i>dst id format</i>, for optimization. You can get
 * the real vertex id with realId() method.
 * 
 * V: Vertex value type
 * E: Edge value type
 * M: Message value type
 * A: Aggreator value type
 */
public final class VertexContext[V, E, M, A] { /*V haszero, E haszero,*/ M haszero, A haszero } {
	val mWorker :WorkerPlaceGraph[V, E];
	val mCtx :MessageCommunicator[M];
	val mEdgeProvider :EdgeProvider[E];

	// messages
	val mUCCMessages :MemoryChunk[MessageBuffer[M]];
	
	// aggregate values
	var mAggregatedValue :A;
	val mAggregateValue :GrowableMemory[A] = new GrowableMemory[A]();
	
	var mSrcid :Long;
	
	// Output
	val mOut :MemoryChunk[GrowableMemory[Int]];
	
	// statictics
	var mNumActiveVertexes :Long = 0L;
	var mBCSInputCount :Long = 0L;
	
//	var mDiffInDst :GrowableMemory[Long];
//	var mDiffInSrcWithAR :GrowableMemory[Long];
	
	def this(
			worker :WorkerPlaceGraph[V, E],
			ctx :MessageCommunicator[M],
			tid :Long,
			startSrcid :Long) {
		mWorker = worker;
		mCtx = ctx;
	//	mDiffInDst = worker.mWDiffInDst(tid);
	//	mDiffInSrcWithAR = worker.mWDiffInSrcWithAR(tid);
		mEdgeProvider = new EdgeProvider[E](
				worker.mOutEdge,
				worker.mInEdge,
				worker.mEdgeModifyReqOffsets(tid),
				worker.mEdgeModifyReqsWithAR(tid),
				startSrcid);
		mUCCMessages = mCtx.messageBuffer(tid);
		mOut = worker.outBuffer(tid);
	}
	
	/**
	 * get the number of current superstep
	 */
	public def superstep() = mCtx.mSuperstep;

	/**
	 * get the vertex id
	 */
	public def id() = mWorker.mStoD(mSrcid);
	
	/**
	 * get real vertex id
	 */
	public def realId() = mWorker.mStoV(mSrcid);

	/**
	 * get the minimum vertex id of the region assigned to the current place
	 */
	public def placeBaseVertexId() = mWorker.mStoD(0L);
	
	/**
	 * get real vertex id from dst id
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
	 * returns <vertex dst ids, values>
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
		//TODO: comment
	//	mWorker.mNeedsAllUpdateInEdge=true;	//modify later
		mEdgeProvider.setOutEdges(mSrcid, id, value);
	}
	
	/**
	 * remove all the out edges for the current vertex
	 */
	public def clearOutEdges() {
		mEdgeProvider.clearOutEdges(mSrcid);
	}
	
	/**
	 * remove out edges for the current vertex
	 */
	public def removeOutEdge(id :Long) {
		mEdgeProvider.removeOutEdge(id);
	}
	
	/**
	 * remove out edges for the current vertex
	 */
	public def removeOutEdges(id :MemoryChunk[Long]) {
		mEdgeProvider.removeOutEdges(id);
	}
	
	/**
	 * add out edge to the current vertex
	 */
	public def addOutEdge(id :Long, value :E) {
		mEdgeProvider.addOutEdge(id, value);
	}
	
	/**
	 * add out edges to the current vertex
	 */
	public def addOutEdges(id :MemoryChunk[Long], value :MemoryChunk[E]) {
		mEdgeProvider.addOutEdges(id, value);
	}
	
	/**
	 * get aggregated value on a previous superstep
	 */
	public def aggregatedValue() = mAggregatedValue;

	/**
	 * aggregate the value
	 */
	public def aggregate(value :A) { mAggregateValue.add(value); }

	/**
	 * send message using dst id of 
	 * vertex
	 */
	public def sendMessage(id :Long, mes :M) {
		val dstPlace = mCtx.mDtoV.r(id);
		val srcId = mCtx.mDtoS(id);
		val mesBuf = mUCCMessages(dstPlace);
		mesBuf.messages.add(mes);
		mesBuf.dstIds.add(srcId);
	}

	/**
	 * send messages using dst id of 
	 * vertex
	 */
	public def sendMessage(id :MemoryChunk[Long], mes :MemoryChunk[M]) {
		for(i in id.range()) {
			val dstPlace = mCtx.mDtoV.r(id(i));
			val srcId = mCtx.mDtoS(id(i));
			val mesBuf = mUCCMessages(dstPlace);
			mesBuf.messages.add(mes(i));
			mesBuf.dstIds.add(srcId);
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
		++mBCSInputCount;
		mCtx.mBCCHasMessage.set(mSrcid);
		mCtx.mBCCMessages(mSrcid) = mes;
	}
	
	/**
	 * make the halted flag for the current vertex true
	 */
	public def voteToHalt() {
		mWorker.mVertexActive.unset(mSrcid);
	}
	
	/**
	 * make the halted flag for the current vertex false
	 */
	public def revive() {
		mWorker.mVertexActive.set(mSrcid);
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
	
	/**
	 * This is equivalent to the call output(0, value).
	 */
	public def output[T](value :T) { output(0, value); }
	
	/**
	 * Output the value with the specified slot.
	 * @param index The slot which the value will be sent to.
	 * @param value The output value.
	 */
	public def output[T](index :Int, value :T) {
		// TODO: ensure the value type is same
		assert (index < WorkerPlaceGraph.MAX_OUTPUT_NUMBER);
		val outbuf = WorkerPlaceGraph.castTo[T](mOut(index));
		outbuf.add(value);
	}
	
	private @Inline def judgeFewInEdgeModify(v:Long) :Boolean{
		return true;
		//return mWorker.getDiffInDstSize() + v < (mWorker.mOutEdge.vertexes.size()>>4);
	}
	
	//TODO: add modify edge value ???????
	//(addOutEdge shitokeba optimizeReqEdges ga modify toshite kaisyaku shite kureru)
}


