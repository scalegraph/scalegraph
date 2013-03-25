package org.scalegraph.xpregel;
import org.scalegraph.graph.id.IdStruct;

public struct VertexIdStruct {
	val mDstId:Long;
	
	public def this (dstId:Long) {
		mDstId = dstId;
	}
	
	public def getRealId(idStruc:IdStruct):Long {
		return (((mDstId & ((1L<<idStruc.lgl)-1)) | (mDstId >> idStruc.lgl)) << idStruc.lgr) | 1L;
	}
	
	public def getDstId() = mDstId;
}
