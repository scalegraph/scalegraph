package org.scalegraph.id;

public struct IdStruct {
	public val lgc: Int;
	public val lgr: Int;
	public val lgl: Int;
	public val maxLocalId: Long;
	
	public def this(lgc: Int, lgr: Int, lgl: Int, maxLocalId: Long) {
		this.lgc = lgc;
		this.lgr = lgr;
		this.lgl = lgl;
		this.maxLocalId = maxLocalId;
	}
}
