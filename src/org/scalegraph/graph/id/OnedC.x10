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
 * ID Converter method collection for 1D column distributions.
 * 
 * V : Real Vertex ID
 * S : Source form ID
 * D : Destination form ID
 */
public final class OnedC {
	/** Vertex ID to Destination ID Converter */
	public static final struct VtoD {
		val lgc :Int;
		val cmask :Long;
		
		public def this(ids :IdStruct) {
			lgc = ids.lgc;
			cmask = ((1L << lgc) - 1L);
		}
		
		public operator this(id :Long) :Long = (id >> lgc);
		public def c(id :Long) :Int = (id & cmask) as Int;
	}

	/** Vertex ID to Source ID Converter */
	public static final struct VtoS {
		val lgc :Int;
		val lgl :Int;
		val cmask :Long;
		
		public def this(ids :IdStruct) {
			lgc = ids.lgc;
			lgl = ids.lgl;
			cmask = ((1L << lgc) - 1L);
		}
		
		public operator this(id :Long) :Long = ((id & cmask) << lgl) | (id >> lgc);
		public def c(id :Long) :Int = (id & cmask) as Int;
	}

	/** Destination ID to Vertex ID Converter */
	public static final struct DtoV {
		val c :Int;
		val lgc :Int;
		
		public def this(ids :IdStruct, c :Int) {
			this.c = c;
			lgc = ids.lgc;
		}
		
		public operator this(id :Long) :Long = (id << lgc) | c;
	}

	/** Destination ID to Source ID Converter */
	public static final struct DtoS {
		val cshifted :Long;
		
		public def this(ids :IdStruct, c :Int) {
			val lgl = ids.lgl;
			cshifted = (c as Long) << lgl;
		}
		
		public operator this(id :Long) :Long = id | cshifted;
	}

	/** Source ID to Vertex ID Converter */
	public static final struct StoV {
		val lgc :Int;
		val lgl :Int;
		val lmask :Long;
		
		public def this(ids :IdStruct) {
			lgc = ids.lgc;
			lgl = ids.lgl;
			lmask = (1L << lgl) - 1L;
		}
		
		public operator this(id :Long) :Long = ((id & lmask) << lgc) | (id >> lgl);
		public def c(id :Long) :Int = (id >> lgl) as Int;
	}

	/** Source ID to Destination ID Converter */
	public static final struct StoD {
		val lmask :Long;
		val lgl :Int;
		
		public def this(ids :IdStruct) {
			lmask = (1L << ids.lgl) - 1L;
			lgl = ids.lgl;
		}
		
		public operator this(id :Long) :Long = id & lmask;
		public def c(id :Long) :Int = (id >> lgl) as Int;
	}
}