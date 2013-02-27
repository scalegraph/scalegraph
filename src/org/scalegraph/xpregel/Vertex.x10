package org.scalegraph.xpregel;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.GrowableMemory;

public class Vertex {
	
	var mVertexId:Long;
	var mOutEdges:GrowableMemory[Tuple2[Long,Double]];
	var mIsHalted:Boolean;
	var mInEdges:GrowableMemory[Tuple2[Long,Double]];
	
	public def this(id:Long) {
		mVertexId = id;
		mOutEdges = new GrowableMemory[Tuple2[Long,Double]]();
		mInEdges = new GrowableMemory[Tuple2[Long,Double]]();
	}
	
	public def preComputation() {
	}
	
	public def postComputation(){
	}
	
	public def voteToHalt() {
		mIsHalted = true;
	}
	
	public def setAlive() {
		mIsHalted = false;
	}
	
	public def addEdges(destId:Long,value:Double, outerOrIn:Boolean) {
		val tuple:Tuple2[Long,Double] = new Tuple2[Long,Double](destId,value);
		if (outerOrIn) {
			mOutEdges.add(tuple);
		}else {
			mInEdges.add(tuple);
		}
	}
	
	public def getEdgesNum(outerOrIn:Boolean) {
		if (outerOrIn) {
			return getOutEdgesNumber();
		}else {
			return getInEdgesNumber();
		}
	}
	
	public def getOutEdgesNumber() = mOutEdges.size();
	
	public def getInEdgesNumber() = mInEdges.size();
	
	public def isHalted() = mIsHalted;

}