package org.scalegraph.xpregel;

import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.MemoryChunk;

/**
 * Provides access to the vertex and its edges of the XPregelGraph.
 */
public final struct Vertex[V, E] {
	val mWorker :WorkerPlaceGraph[V, E];
	val mSrcid :Long;
	
	def this(worker :WorkerPlaceGraph[V, E], id :Long) {
		mWorker = worker;
		mSrcid = id;
	}
	
	public def srcId() = mSrcid;

	/**
	 * get the vertex id
	 */
	public def id() = mWorker.mStoD(mSrcid);
	
	/**
	 * get real vertex id
	 */
	public def realId() = mWorker.mStoV(mSrcid);
	
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
	public def outEdges() {
		val edge = mWorker.mOutEdge;
		val offset = edge.offsets(mSrcid);
		val length = edge.offsets(mSrcid + 1) - offset;
		return new Tuple2[MemoryChunk[Long], MemoryChunk[E]](
				edge.vertexes.subpart(offset, length),
				edge.value.subpart(offset, length));
	}
	
	/**
	 * get out edges for the current vertex
	 */
	public def outEdgesId() {
		val edge = mWorker.mOutEdge;
		val offset = edge.offsets(mSrcid);
		val length = edge.offsets(mSrcid + 1) - offset;
		return edge.vertexes.subpart(offset, length);
	}

	/**
	 * get out edges for the current vertex
	 */
	public def outEdgesValue() {
		val edge = mWorker.mOutEdge;
		val offset = edge.offsets(mSrcid);
		val length = edge.offsets(mSrcid + 1) - offset;
		return edge.value.subpart(offset, length);
	}
}
