/* 
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package org.scalegraph.graph.id;

/**
 * ID Converter method collection for 2D distributions.
 */
public class Twod {
	/** Vertex ID to Source ID Converter */
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

	/** Vertex ID to Destination ID Converter */
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

	/** Source ID to Vertex ID Converter */
	public static struct StoV {
		val cshifted :Long;
		val lgl :Int;
		val lgsize :Int;
		val lmask :Long;
		
		public def this(ids :IdStruct, c :Int) {
			val lgc = ids.lgc;
			val lgr = ids.lgr;
			lgl = ids.lgl;

			cshifted = (c as Long) << lgr;
			lgsize = lgr + lgc;
			lmask = ((1L << lgl) - 1L);
		}
		
		public operator this(id :Long) :Long = ((id & lmask) << lgsize) | cshifted | (id >> lgl);
	}

	/** Source ID to Destination ID Converter */
	public static struct StoD {
		val cshiftedto :Long;
		val lmask :Long;
		
		public def this(ids :IdStruct, c :Int) {
			val lgc = ids.lgc;
			val lgr = ids.lgr;
			val lgl = ids.lgl;

			cshiftedto = (c as Long) << lgl;
			lmask = ((1L << lgl) - 1L);
		}
		
		public operator this(id :Long) :Long = (id & lmask) | cshiftedto;
	}

	/** Destination ID to Vertex ID Converter */
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

	/** Destination ID to Source ID Converter */
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