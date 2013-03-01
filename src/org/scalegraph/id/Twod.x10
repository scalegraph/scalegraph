package org.scalegraph.id;

public class Twod {
	public static struct VtoS {
		val lgl :Int;
		val lgsize :Int;
		val rmask :Long;
		
		public def this(ids :IdStruct) {
			val lgc = ids.lgc;
			val lgr = ids.lgr;
			lgl = ids.lgl;

			lgsize = lgr + lgc;
			rmask = ((1L << lgr) - 1L);
		}
		
		public operator this(id :Long) :Long = ((id & rmask) << lgl) | (id >> lgsize);
	}

	public static struct VtoD {
		val lgr :Int;
		val lgl :Int;
		val lgsize :Int;
		val cmask :Long;
		
		public def this(ids :IdStruct) {
			val lgc = ids.lgc;
			lgr = ids.lgr;
			lgl = ids.lgl;

			lgsize = lgr + lgc;
			val rmask = ((1L << lgr) - 1L);
			cmask = ((1L << lgsize) - 1L) - rmask;
		}
		
		public operator this(id :Long) :Long = (((id & cmask) >> lgr) << lgl) | (id >> lgsize);
	}

	public static struct StoV {
		val cshifted :Long;
		val lgl :Int;
		val lgsize :Int;
		val lmask :Long;
		
		public def this(ids :IdStruct, c :Int) {
			val lgc = ids.lgc;
			val lgr = ids.lgr;
			lgl = ids.lgl;

			cshifted = c << lgr;
			lgsize = lgr + lgc;
			lmask = ((1L << lgl) - 1L);
		}
		
		public operator this(id :Long) :Long = ((id & lmask) << lgsize) | cshifted | (id >> lgl);
	}

	public static struct StoD {
		val cshiftedto :Long;
		val lmask :Long;
		
		public def this(ids :IdStruct, c :Int) {
			val lgc = ids.lgc;
			val lgr = ids.lgr;
			val lgl = ids.lgl;

			cshiftedto = c << lgl;
			lmask = ((1L << lgl) - 1L);
		}
		
		public operator this(id :Long) :Long = (id & lmask) | cshiftedto;
	}

	public static struct DtoV {
		val r :Int;
		val lgr :Int;
		val lgl :Int;
		val lgsize :Int;
		val lmask :Long;
		
		public def this(ids :IdStruct, r :Int) {
			this.r = r;
			val lgc = ids.lgc;
			lgr = ids.lgr;
			lgl = ids.lgl;

			lgsize = lgr + lgc;
			lmask = ((1L << lgl) - 1L);
		}
		
		public operator this(id :Long) :Long = ((id & lmask) << lgsize) | ((id >> lgl) << lgr) | (r as Long);
	}

	public static struct DtoS {
		val rshifted :Long;
		val lmask :Long;
		
		public def this(ids :IdStruct, r :Int) {
			val lgc = ids.lgc;
			val lgr = ids.lgr;
			val lgl = ids.lgl;

			rshifted = (r as Long) << lgl;
			lmask = ((1L << lgl) - 1L);
		}
		
		public operator this(id :Long) :Long = (id & lmask) | rshifted;
	}
}