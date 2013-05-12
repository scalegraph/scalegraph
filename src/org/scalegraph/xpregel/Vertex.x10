package org.scalegraph.xpregel;

import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.xpregel.comm.WorkerInterface;
import org.scalegraph.xpregel.EdgesBuffer;

public class Vertex[V,E] {
	
	var mVertexId	:	Long;
	var mContext 	:	XpregelContext;
	var outEdgeBuffer	:	EdgesBuffer[E];
	var inEdgeBuffer	:	EdgesBuffer[E];
	var mWorkerInterface : WorkerInterface[V,E];
	
	public def this(id:Long) {
		mVertexId = id;
	}
	
	public def setWorkerInterface(worker:WorkerInterface[V,E]) {
		mWorkerInterface = worker;
	}
	
	public def getVertexId():Long = mVertexId;
	
	public def setVertexId(vertexId:Long) {
		mVertexId = vertexId;
	}
	
	public def preComputation() {
	}
	
	public def postComputation(){
	}
	
	public def updateContext(context:XpregelContext) {
		mContext = context;
	}
	
	public def getContext() = mContext;
	
	/*********************************** 
	 *  vertex api 
	 * add edges api
	 ***********************************/
	public def setEdgesBuffer(edgebuffer : EdgesBuffer[E], outOrIn : Boolean) {
		if (outOrIn) {
			outEdgeBuffer = edgebuffer;
		}else {
			inEdgeBuffer = edgebuffer;
		}
	}
	
	public def addEdges(edges : MemoryChunk[Tuple2[Long,E]], outOrIn : Boolean) {
		if (outOrIn) {
			
		}else {
			throw new IllegalOperationException("adding InEdges is not available now. Using XPregel.updateInEdges() instead.");
		}
	}
	
	public def addEdges(edges : GrowableMemory[Tuple2[Long,E]], outOrIn : Boolean) {
		if (outOrIn) {
			outEdgeBuffer.addEdges(mVertexId,edges);
		}else {
			throw new IllegalOperationException("adding InEdges is not available now. Using XPregel.updateInEdges() instead.");
		}
	}
	public def addEdges(edgesId : GrowableMemory[Long], edgesValue : GrowableMemory[E], outOrIn : Boolean) {
		if (outOrIn) {
			outEdgeBuffer.addEdges(mVertexId,edgesId, edgesValue);
		}else {
			throw new IllegalOperationException("adding InEdges is not available now. Using XPregel.updateInEdges() instead.");
		}
	}
	/*********************************** 
	 * end 
	 * **********************************/
	
	
	/***********************************
	 * vertex api
	 * workerinterface binding method
	 ************************************/
	public def voteToHalt() {
		mWorkerInterface.voteToHalt(mVertexId);
	}
	
	public def setAlive() {
		mWorkerInterface.setActive(mVertexId);
	}
	
	public def getEdgesNum(outerOrIn:Boolean) {
		return mWorkerInterface.getEdgesNum(mVertexId,outerOrIn);
	}
	
	public def getEdgesId(outerOrIn:Boolean,edges:GrowableMemory[Long]) {
		 mWorkerInterface.getEdges(mVertexId,outerOrIn,edges);
	}
	
	public def getEdgesValue(outerOrIn:Boolean,edgesValue:GrowableMemory[E]) {
		mWorkerInterface.getEdgesValue(mVertexId,outerOrIn,edgesValue);
	}
	
	public def clearAllEdges(outOrIn:Boolean) {
		mWorkerInterface.clearAllEdges(outOrIn,mVertexId);
	}
	
	public def getValue():V = mWorkerInterface.getVertexValue(mVertexId);
	
	public def setValue(value:V) {
		mWorkerInterface.setVertexValue(mVertexId,value);
	}
	
	public def setVertexShouldBeAlive(value:Boolean) {
		mWorkerInterface.setVertexShouldBeAlive(mVertexId,value);
	}
	
	public def isHalted() = mWorkerInterface.isHalt(mVertexId);
	/**
	 * end
	 */

}