package org.scalegraph.id;

public struct IdStruct {
	public val lgc: Int;
	public val lgr: Int;
	public val lgl: Int;
	public val outerOrInner :Boolean;
	public val maxLocalId: Long;
	
	public def this(lgc: Int, lgr: Int, lgl: Int, outerOrInner :Boolean, maxLocalId: Long) {
		this.lgc = lgc;
		this.lgr = lgr;
		this.lgl = lgl;
		this.outerOrInner = outerOrInner;
		this.maxLocalId = maxLocalId;
	}
	
	public def numberOfGlobalVertexes() = 1L << (lgc + lgr + lgl);
	public def numberOfLocalVertexes() = 1L << lgl;
	public def numberOfLocalRVertexes() = 1L << (lgr + lgl);
	public def numberOfLocalCVertexes() = 1L << (lgc + lgl);
	
	public def maskLocalID() = (numberOfLocalVertexes() - 1);
	
	public def localRbits() = lgr + lgl;
	public def localCbits() = lgc + lgl;
	
}
