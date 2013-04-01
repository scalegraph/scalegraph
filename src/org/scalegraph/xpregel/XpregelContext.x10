package org.scalegraph.xpregel;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.graph.id.OnedC;
public class XpregelContext {
	
	val mIdStruct:IdStruct;
	val s2d : OnedC.StoD;
	val d2s : OnedC.DtoS;
	val s2v : OnedC.StoV;
	val d2v	: OnedC.DtoV;
	var mSuperStep:Long;
	
	
	public def this(idStruct:IdStruct) {
		mIdStruct = idStruct;
		s2d = new OnedC.StoD(idStruct,here.id);
		d2s = new OnedC.DtoS(idStruct);
		s2v = new OnedC.StoV(idStruct,here.id);
		d2v = new OnedC.DtoV(idStruct);
		mSuperStep = 0;
	}
	
	public def ids():IdStruct = mIdStruct;
	
	public def getWorkerPlaceFromDstId(dstId:Long) {
		val lgl = mIdStruct.lgl;
		val lgc = mIdStruct.lgc;
		return (dstId >> lgl) & ((1L << lgc) - 1);
	}
	
	/** convert dstId to srcId */
	public def getSrcIdFromDstId(dstId:Long) {
		return d2s(dstId);
	}
	
	/** convert srcId to dstId */
	public def getDstIdFromSrcId(srcId:Long) {
		return s2d(srcId);
	}
	
	/** convert srcId to actual vertex id */
	public def getVertexIdFromSrcId(srcId:Long) {
		return s2v(srcId);
	}
	
	/** convert dstId to actual vertex id */
	public def getVertexIdFromDstId(dstId:Long) {
		return d2v(dstId);
	}
	
	public def increaseSuperStep() {
		mSuperStep++;
	}
	
	public def resetSuperStep() {
		mSuperStep = 0L;
	}
	
	public def getSuperStep() = mSuperStep;
	
	public def getNumberOfVertices() = mIdStruct.numberOfGlobalVertexes();
	
	public def getNumWorkers() = (1<<mIdStruct.lgc);
}