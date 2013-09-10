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

package org.scalegraph.util.random;

import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit ;
import x10.io.CustomSerialization;

import org.scalegraph.util.MemoryChunk;

@NativeCPPInclude("splittable_mrg.h")
@NativeCPPCompilationUnit ("splittable_mrg.cc")

// The files splittable_mrg.cc includes.
// List up these files to get available in C++ compilation phase.
@NativeCPPInclude("mod_arith.h")
@NativeCPPInclude("mod_arith_64bit.h")
@NativeCPPInclude("mrg_transitions.hpp")

@NativeRep("c++", "mrg_state", "mrg_state", null)
final struct splittable_mrg {
	@Native("c++", "(#this).z1")
	public val z1 :Int;
	@Native("c++", "(#this).z2")
	public val z2 :Int;
	@Native("c++", "(#this).z3")
	public val z3 :Int;
	@Native("c++", "(#this).z4")
	public val z4 :Int;
	@Native("c++", "(#this).z5")
	public val z5 :Int;

	@Native("c++", "memcpy(&(#this), &(#src), sizeof(#this));")
	public native def init(src :splittable_mrg) :void;

	@Native("c++", "(#this).z1=#t1;(#this).z2=#t2;(#this).z3=#t3;(#this).z4=#t4;(#this).z5=#t5;")
	public native def init(t1:Int,t2:Int,t3:Int,t4:Int,t5:Int) :void;

	public def this(arr :MemoryChunk[Int]) {
		z1 = arr(0);
		z2 = arr(1);
		z3 = arr(2);
		z4 = arr(3);
		z5 = arr(4);
	}
}

/**
 * <p>Multiple recursive generator from L'Ecuyer, P., Blouin, F., and
 * Couture, R. 1993. A search for good multiple recursive random number
 * generators. ACM Trans. Model. Comput. Simul. 3, 2 (Apr. 1993), 87-98.
 * DOI= http://doi.acm.org/10.1145/169702.169698 -- particular generator
 * used is from table 3, entry for m = 2^31 - 1, k = 5 (same generator
 * is used in GNU Scientific Library).</p>
 * 
 * <p>nextInt() returns random integer values in [0, 2^31-1)<br>
 * nextLong() returns random integer values in [0, 2^62-2)</p>
 * 
 * <p>See notes at top of splittable_mrg.cc for information on the base
 * implementation.</p>
 */
public class Random implements CustomSerialization {
	transient var state :splittable_mrg;
	
	public def this(seed1 :Long, seed2 :Long) {
		@Native("c++", "make_mrg_seed(seed1, seed2, &FMGL(state));") { }
	}
	
	private def this(orig :splittable_mrg) {
		state.init(orig);
	}
	
	public def this(data :x10.io.SerialData) {
		val arr = data.data as MemoryChunk[Int];
		state.init(arr(0),arr(1),arr(2),arr(3),arr(4));
	}

	public def serialize():x10.io.SerialData {
		val arr = new MemoryChunk[Int](5);
		arr(0) = state.z1;
		arr(1) = state.z2;
		arr(2) = state.z3;
		arr(3) = state.z4;
		arr(4) = state.z5;
		return new x10.io.SerialData(arr, null);
	}

	@Native("c++", "mrg_get_uint_orig(&(#this)->FMGL(state));")
	private native def random() :Int;

	public def clone() = new Random(state);

	@Native("c++", "mrg_skip(&(#this)->FMGL(state), 0, 0, #n);")
	public native def skip(n :x10.lang.Long):void;

	/** Returns an integer value in [0, 2^31-1) */
	public def nextInt(): Int = random();
	
	/** Return a integer in [0, 2^62-2) */
	public def nextLong(): long = ((random() as Long) * 0x7FFFFFFEL) + random();

	public def nextBytes(buf: MemoryChunk[Byte]): void {
		val size = buf.size();
		for(var i :Long = 0; ; i += 3) {
			var x :Int = random();
			if(i+2 < size) {
				buf(i+0) = ((x >>  0) & 0xff) as Byte;
				buf(i+1) = ((x >>  8) & 0xff) as Byte;
				buf(i+2) = ((x >> 16) & 0xff) as Byte;
			}
			else {
				if(i+0 < size) buf(i+0) = ((x >>  0) & 0xff) as Byte;
				if(i+1 < size) buf(i+1) = ((x >>  8) & 0xff) as Byte;
				return ;
			}
		}
	}
	
	/** Returns a real value in [0, 1) */
	@Native("c++", "mrg_get_double_orig(&(#this)->FMGL(state));")
	public native def nextDouble(): double;

	/** Returns a real value in [0, 1) */
	@Native("c++", "mrg_get_float_orig(&(#this)->FMGL(state));")
	public native def nextFloat():Float;

	/** Return a 32-bit random integer in the range 0 to maxPlus1-1
	 * when maxPlus1 > 0. Return 0 if maxPlus1 <= 0 instead of throwing 
	 * an IllegalArgumentException, to simplify user code.
	 */
	public def nextInt(maxPlus1: int): int {
		var n: int = maxPlus1;
		if (n <= 0) throw new IllegalArgumentException();
		if ((n & -n) == n) {
			// If a power of 2, just mask nextInt
			return nextInt() & (n-1);
		}
		return nextInt() % maxPlus1;
	}

	public def nextLong(maxPlus1: long): long {
		var n: long = maxPlus1;
		if (n <= 0) throw new IllegalArgumentException();
		if ((n & -n) == n) {
			// If a power of 2, just mask nextInt
			return nextLong() & (n-1);
		}
		return nextInt() % maxPlus1;
	}

	/** Return a random boolean. */
	public def nextBoolean(): boolean = (nextInt()&1) == 0;
}
