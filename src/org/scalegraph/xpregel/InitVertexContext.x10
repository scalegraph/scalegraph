package org.scalegraph.xpregel;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.Bitmap;
import org.scalegraph.graph.id.OnedC;

/**
 * Provides XPregel framework service for init compute kernels. <br>
 * The vertex id is processed in the mangled format,
 * we call <i>dst id format</i>, for optimization. You can get
 * the real vertex id with realId() method.
 * 
 * V: Vertex value type
 * E: Edge value type
 */
public class InitVertexContext[V, E] {V haszero, E haszero } {
	val mWorker :WorkerPlaceGraph[V, E];
	val mEdgeProvider :EdgeProvider[E];

	val mVtoD :OnedC.VtoD;
	val mDtoV :OnedC.DtoV;
	val mStoD :OnedC.StoD;
	val mStoV :OnedC.StoV;

	var mSrcid :Long;
	
	def this(worker :WorkerPlaceGraph[V, E]) {
		mWorker = worker;
		mEdgeProvider = new EdgeProvider[E](worker.mOutEdge, worker.mInEdge);
		
		val ids = worker.mIds;
		val rank_c = worker.mTeam.base.role()(0);
		mVtoD = new OnedC.VtoD(ids);
		mDtoV = new OnedC.DtoV(ids);
		mStoD = new OnedC.StoD(ids, rank_c);
		mStoV = new OnedC.StoV(ids, rank_c);
	}
	
	/**
	 * get the number of current superstep
	 */
	public def superstep() = 0;

	/**
	 * get the vertex id
	 */
	public def id() = mStoD(mSrcid);
	
	/**
	 * get real vertex id
	 */
	public def realId() = mStoV(mSrcid);

	/**
	 * get the minimum vertex id of the region assigned to the current place
	 */
	public def placeBaseVertexId() = mStoD(0L);
	
	/**
	 * get real vertex id from dst id
	 */
	public def realId(id :Long) = mDtoV(id);
	
	/**
	 * get dst id from read vertex id
	 */
	public def dstId(realId :Long) = mVtoD(realId);
	
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
	 * set the initial halted flag value for the current vertex on the next computation
	 */
	public def setVertexShouldBeActive(active :Boolean) {
		mWorker.mVertexShouldBeActive(mSrcid) = active;
	}
}


