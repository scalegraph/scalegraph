package org.scalegraph.graph.id;

/**
 * Provides the information of the ID conversion and the number of vertixes for DistSparseMatrix.
 */
public struct IdStruct {
	/** MathAppend.ceilLog2(R)
	 */
	public val lgr: Int;
	/** MathAppend.ceilLog2(C)
	 */
	public val lgc: Int;
	/** MathAppend.ceilLog2(numberOfLocalVertexes)
	 */
	public val lgl: Int;
	/** true -&gt outer edge, false -&gt inner edge
	 */
	public val outerOrInner :Boolean;
	/** The (maximum) number of local vertices. This value is uniform on all places.
	 */
	public val numberOfLocalVertexes: Long;
	/** The  number of global vertices. This value is uniform on all places.
	 * The original ID of any vertexes in the graph is less than this value.
	 */
	public val numberOfGlobalVertexes : Long;
	
	public def this(lgr: Int, lgc: Int, lgl: Int, outerOrInner :Boolean, numberOfLocalVertexes: Long,  numberOfGlobalVertexes: Long) {
		this.lgr = lgr;
		this.lgc = lgc;
		this.lgl = lgl;
		this.outerOrInner = outerOrInner;
		this.numberOfLocalVertexes = numberOfLocalVertexes;
		this.numberOfGlobalVertexes = numberOfGlobalVertexes;
	}

	/** Returns <i>numberOfLocalVertexes</i>.
	 */
	public def numberOfLocalVertexes() = numberOfLocalVertexes;
	/** Returns <i>numberOfGlobalVertexes</i>.
	 */
	public def numberOfGlobalVertexes() = numberOfGlobalVertexes;

	/** Returns <i>1L << (lgc + lgr + lgl)</i>.
	 */
	public def numberOfGlobalVertexes2N() = 1L << (lgc + lgr + lgl);
	/** Returns <i>1L << lgl</i>.
	 */
	public def numberOfLocalVertexes2N() = 1L << lgl;
	/** Returns <i>1L << (lgr + lgl)</i>.
	 */
	public def numberOfLocalRVertexes2N() = 1L << (lgr + lgl);
	/** Returns <i>1L << (lgc + lgl)</i>.
	 */
	public def numberOfLocalCVertexes2N() = 1L << (lgc + lgl);

	/** Returns <i>numberOfLocalVertexes2N() - 1</i>.
	 */
	public def localIDMask() = (numberOfLocalVertexes2N() - 1);
	/** Returns <i>numberOfLocalRVertexes2N() - 1</i>.
	 */
	public def localRIDMask() = (numberOfLocalRVertexes2N() - 1);
	/** Returns <i>numberOfLocalCVertexes2N() - 1</i>.
	 */
	public def localCIDMask() = (numberOfLocalCVertexes2N() - 1);

	/** Returns <i>lgr + lgl</i>.
	 */
	public def localRbits() = lgr + lgl;
	/** Returns <i>lgc + lgl</i>.
	 */
	public def localCbits() = lgc + lgl;
	
}
