package org.scalegraph.xpregel.comm;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.tuple.Tuple2;

public interface WorkerInterface[V,E] {
	
	public def getVertexId(index:Long):Long;
	public def getEdges(index:Long,outOrIn:Boolean,edges:GrowableMemory[Long]):void;
	public def getEdgesValue(index:Long,outOrIn:Boolean,edgesValue:GrowableMemory[E]):void;
	public def getEdgesNum(index:Long,outOrIn:Boolean):Long;
	public def getVertexValue(index:Long):V;
	public def setVertexValue(index:Long,value:V):void;
	public def voteToHalt(index:Long):void;
	public def isHalt(index:Long):Boolean;
	public def setActive(index:Long):void;
	public def setVertexShouldBeAlive(index:Long, value:Boolean);
	public def clearAllEdges(outOrIn:Boolean,vertexId:Long):void;
	public def addEdges(edges:MemoryChunk[Tuple2[Long,E]],outOrIn:Boolean, vertexId:Long):void;
}
