package org.scalegraph.xpregel;
import org.scalegraph.graph.id.IdStruct;

public class XpregelContext {
	
	val mIdStruct:IdStruct;
	var mSuperStep:Long;
	
	
	public def this(idStruct:IdStruct) {
		mIdStruct = idStruct;
		mSuperStep = 0;
	}
	
	public def ids():IdStruct = mIdStruct;
	
	public def getWorkerPlaceFromDstId(dstId:Long) {
		val lgl = mIdStruct.lgl;
		val lgc = mIdStruct.lgc;
		return (dstId >> lgl) & ((1L << lgc) - 1);
	}
	
	public def getSrcIdFromDstId(dstId:Long) {
		val lgl = mIdStruct.lgl;
		return (dstId & ((1<<lgl)-1));
	}
	
	public def increaseSuperStep() {
		mSuperStep++;
	}
	
	public def getSuperStep() = mSuperStep;
	
	public def getNumberOfVertices() = mIdStruct.numberOfGlobalVertexes();
	
	public def getNumWorkers() = (1<<mIdStruct.lgc);
}