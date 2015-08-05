/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
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
import x10.compiler.NonEscaping;

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
public final class VertexContext[V, E, M, A] { /*V haszero, E haszero,*/ M haszero, A haszero } implements Iterable[M] {
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
	/*
	def this() {
		mWorker = null;
		mCtx = null;
		mEdgeProvider = null;
		mUCCMessages = MemoryChunk.make[MessageBuffer[M]]();
		mOut = MemoryChunk.make[GrowableMemory[Int]]();
	}*/
	

	//	var mDiffInDst :GrowableMemory[Long];
//	var mDiffInSrcWithAR :GrowableMemory[Long];
	
	//////////////////////////////////////////////////////////
	
	public static class EdgeIterator[E] implements Iterator[Long] {
		var ids :MemoryChunk[Long];
		var values :MemoryChunk[E];
		var parent :EdgeProvider[E];
		
		var cur :Long;

		static def make[E](ids :MemoryChunk[Long], values :MemoryChunk[E], parent :EdgeProvider[E]) {
			return new EdgeIterator[E](ids, values, parent);
		}
		
		def this() {

		}

		def this(ids :MemoryChunk[Long], values :MemoryChunk[E], parent :EdgeProvider[E]) {
			reconstruct(ids,values,parent);
		}

		def init(ids :MemoryChunk[Long], values :MemoryChunk[E], parent :EdgeProvider[E]) {
			reconstruct(ids,values,parent);
		}

		@NonEscaping
		final def reconstruct(ids :MemoryChunk[Long], values :MemoryChunk[E], parent :EdgeProvider[E]) {
			this.ids = ids;
			this.values = values;
			this.parent = parent;
			this.cur = 0L;
		}
		
		public def release() {
			this.parent = null;
			this.cur = 0L;
		}
		
		public def hasNext() :Boolean = (cur < ids.size());
		public def next() :Long = ids(cur++);
		
		public def curId() :Long = ids(cur);
		public def curValue() :E = values(cur);
		
		public def remove() {
			parent.removeOutEdge(curId());
		}
		
		public def modifyValue(newValue :E) {
			parent.modifyOutEdge(curId(), newValue);
		}
	}

	private val iterPool : GrowableMemory[EdgeIterator[E]];
	private var numUsedIters :Long;

	val messageIterator = new MessageIterator[M, E]();
	
	private static struct OutEdges[V, E, M, A] { /*V haszero, E haszero,*/ M haszero, A haszero } implements Iterable[Long] {
		
		val vc :VertexContext[V, E, M, A];
		
		def this(vc :VertexContext[V, E, M, A]) {
			this.vc = vc;
		}

		public def iterator() = vc.getOutEdgesIterator();
	}
	
	private static struct InEdges[V, E, M, A] { /*V haszero, E haszero,*/ M haszero, A haszero } implements Iterable[Long] {
		
		val vc :VertexContext[V, E, M, A];
		
		def this(vc :VertexContext[V, E, M, A]) {
			this.vc = vc;
		}

		public def iterator() = vc.getInEdgesIterator();
	}
	
	//////////////////////////////////////////////////////////
	
	def this(
			worker :WorkerPlaceGraph[V, E],
			ctx :MessageCommunicator[M],
			tid :Long,
			reqOff :MemoryChunk[Long],
			req :GrowableMemory[Tuple2[Long,E]],
			startSrcid :Long) {
		mWorker = worker;
		mCtx = ctx;
	//	mDiffInDst = worker.mWDiffInDst(tid);
	//	mDiffInSrcWithAR = worker.mWDiffInSrcWithAR(tid);
		mEdgeProvider = new EdgeProvider[E](
				worker.mOutEdge,
				worker.mInEdge,
				reqOff,
				req,
				startSrcid);
		mUCCMessages = mCtx.messageBuffer(tid);
		mOut = worker.outBuffer(tid);
		
		iterPool = new GrowableMemory[EdgeIterator[E]]();
		numUsedIters = 0L;
		// numConstructedIters = 0L;
	}
	
	def releaseAllIterators() {
		// for (i in iterPool.range()) {
		// 	iterPool(i).release();	// no need?
		// }
		numUsedIters = 0L;
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
	 * returns received messages
	 */
	public def iterator() = messageIterator;
	
// 	/**
// 	 * returns <vertex dst ids, values>
// 	 */
// 	public def outEdges() = mEdgeProvider.outEdges(mSrcid);
// 	
// 	/**
// 	 * get out edges for the current vertex
// 	 */
// 	public def outEdgesId() = mEdgeProvider.outEdgesId(mSrcid);
// 
// 	/**
// 	 * get out edges for the current vertex
// 	 */
// 	public def outEdgesValue() = mEdgeProvider.outEdgesValue(mSrcid);
	
	private def getIteratorBase(ids :MemoryChunk[Long], values :MemoryChunk[E]) {
		val idx = numUsedIters;
		numUsedIters++;
		
		if (iterPool.size() <= idx) {
			iterPool.setSize(idx + 1);
			iterPool(idx).init(ids, values, mEdgeProvider);// = new EdgeIterator(ids, values, mEdgeProvider);
			return iterPool(idx);
		} else {
			iterPool(idx).reconstruct(ids, values, mEdgeProvider);
			return iterPool(idx);
		}
	}
	
	public def getOutEdgesIterator() {
		val outEdges = mEdgeProvider.outEdges(mSrcid);
		return getIteratorBase(outEdges.get1(), outEdges.get2());
	}

	public def outEdges() :Iterable[Long] = new OutEdges(this);
	
	public def numberOfOutEdges() = mEdgeProvider.outEdges(mSrcid).get1().size();
	
	// /**
	//  * get in edges for the current vertex
	//  */
	// public def inEdgesId() = mEdgeProvider.inEdgesId(mSrcid);
	// 
	// /**
	//  * get in edges for the current vertex
	//  */
	// public def inEdgesValue() = mEdgeProvider.inEdgesValue(mSrcid);
	
	public def getInEdgesIterator() {
		return getIteratorBase(mEdgeProvider.inEdgesId(mSrcid), mEdgeProvider.inEdgesValue(mSrcid));
	}

	public def inEdges() :Iterable[Long] = new InEdges(this);
	
	public def numberOfInEdges() = mEdgeProvider.inEdgesId(mSrcid).size();
	
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
	
	// /**
	//  * remove out edges for the current vertex
	//  */
	// public def removeOutEdge(id :Long) {
	// 	mEdgeProvider.removeOutEdge(id);
	// }
	
	// /**
	//  * remove out edges for the current vertex
	//  */
	// public def removeOutEdges(id :MemoryChunk[Long]) {
	// 	mEdgeProvider.removeOutEdges(id);
	// }
	
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
	public def output[T](value :T) { output(0n, value); }
	
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
}
