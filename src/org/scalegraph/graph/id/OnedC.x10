package org.scalegraph.graph.id;

/**
 * ID Converter method collection for 1D column distributions.
 */
public class OnedC {
	/** Vertex ID to Source ID Converter */
	public static struct VtoS {
		val lgc :Int;
		
		public def this(ids :IdStruct) {
			lgc = ids.lgc;
		}
		
		public operator this(id :Long) :Long = (id >> lgc);
	}

	/** Vertex ID to Destination ID Converter */
	public static struct VtoD {
		val lgc :Int;
		val lgl :Int;
		val cmask :Long;
		
		public def this(ids :IdStruct) {
			lgc = ids.lgc;
			lgl = ids.lgl;
			cmask = ((1L << lgc) - 1L);
		}
		
		public operator this(id :Long) :Long = ((id & cmask) << lgl) | (id >> lgc);
	}

	/** Source ID to Vertex ID Converter */
	public static struct StoV {
		val c :Int;
		val lgc :Int;
		
		public def this(ids :IdStruct, c :Int) {
			this.c = c;
			lgc = ids.lgc;
		}
		
		public operator this(id :Long) :Long = (id << lgc) | c;
	}

	/** Source ID to Destination ID Converter */
	public static struct StoD {
		val cshifted :Long;
		
		public def this(ids :IdStruct, c :Int) {
			val lgl = ids.lgl;
			cshifted = c << lgl;
		}
		
		public operator this(id :Long) :Long = id | cshifted;
	}

	/** Destination ID to Vertex ID Converter */
	public static struct DtoV {
		val lgc :Int;
		val lgl :Int;
		val lmask :Long;
		
		public def this(ids :IdStruct) {
			lgc = ids.lgc;
			lgl = ids.lgl;
			lmask = (1L << lgl) - 1L;
		}
		
		public operator this(id :Long) :Long = ((id & lmask) << lgc) | (id >> lgl);
	}

	/** Destination ID to Source ID Converter */
	public static struct DtoS {
		val lmask :Long;
		
		public def this(ids :IdStruct) {
			val lgl = ids.lgl;
			lmask = (1L << lgl) - 1L;
		}
		
		public operator this(id :Long) :Long = id & lmask;
	}
}