package org.scalegraph.xpregel;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.xpregel.comm.WorkerInterface;
public class Vertex[V,E] {
	
	var mVertexId	:	Long;
	var mContext 	:	XpregelContext;
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
	
	public def addEdges(edges:MemoryChunk[Tuple2[Long,E]],outOrIn:Boolean) {
		mWorkerInterface.addEdges(edges,outOrIn,mVertexId);
	}
	
	public def updateContext(context:XpregelContext) {
		mContext = context;
	}
	
	public def getContext() = mContext;
	
	public def getValue():V = mWorkerInterface.getVertexValue(mVertexId);
	
	public def setValue(value:V) {
		mWorkerInterface.setVertexValue(mVertexId,value);
	}
	
	public def isHalted() = mWorkerInterface.isHalt(mVertexId);
	
	public def getVertexAttribute[T](name:String):T {
		return mWorkerInterface.getAttribute[T](name,mVertexId,true);
	}
	
	public def getEdgeAttribute[T](name:String):T {
		return mWorkerInterface.getAttribute[T](name,mVertexId,false);
	}

}