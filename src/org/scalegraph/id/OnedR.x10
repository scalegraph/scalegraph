package org.scalegraph.id;

/**
 * ID Converter method collection for 1D row distributions.
 */
public class OnedR {
	/** Vertex ID to Source ID Converter */
	public static struct VtoS {
		val lgr :Int;
		val lgl :Int;
		val rmask :Long;
		
		public def this(ids :IdStruct) {
			lgr = ids.lgr;
			lgl = ids.lgl;
			rmask = ((1L << lgr) - 1L);
		}
		
		public operator this(id :Long) :Long = ((id & rmask) << lgl) | (id >> lgr);
	}

	/** Vertex ID to Destination ID Converter */
	public static struct VtoD {
		val lgr :Int;
		
		public def this(ids :IdStruct) {
			lgr = ids.lgr;
		}
		
		public operator this(id :Long) :Long = (id >> lgr);
	}

	/** Source ID to Vertex ID Converter */
	public static struct StoV {
		val lgr :Int;
		val lgl :Int;
		val lmask :Long;
		
		public def this(ids :IdStruct) {
			lgr = ids.lgr;
			lgl = ids.lgl;
			lmask = (1L << lgl) - 1L;
		}
		
		public operator this(id :Long) :Long = ((id & lmask) << lgr) | (id >> lgl);
	}

	/** Source ID to Destination ID Converter */
	public static struct StoD {
		val lmask :Long;
		
		public def this(ids :IdStruct) {
			val lgl = ids.lgl;
			lmask = (1L << lgl) - 1L;
		}
		
		public operator this(id :Long) :Long = id & lmask;
	}

	/** Destination ID to Vertex ID Converter */
	public static struct DtoV {
		val r :Int;
		val lgr :Int;
		
		public def this(ids :IdStruct, r :Int) {
			this.r = r;
			lgr = ids.lgr;
		}
		
		public operator this(id :Long) :Long = (id << lgr) | r;
	}

	/** Destination ID to Source ID Converter */
	public static struct DtoS {
		val rshifted :Long;
		
		public def this(ids :IdStruct, r :Int) {
			val lgl = ids.lgl;
			rshifted = r << lgl;
		}
		
		public operator this(id :Long) :Long = id | rshifted;
	}
}