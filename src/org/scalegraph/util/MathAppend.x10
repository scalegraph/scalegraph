/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package org.scalegraph.util;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.util.Ordered;
import x10.compiler.Inline;

// TODO: rename to Math2

/**
 * TODO : fix min[T](vec)
 * 
 * if you use min in aggregate , 
 * when length of vec = 0 , program may stop.
 * 
 */

@NativeCPPInclude("MathAppend_Natives.h")
public final class MathAppend {
	
	public static def abs[T](a :T) {T <: Arithmetic[T], T <: Ordered[T], T haszero} = a > Zero.get[T]() ? a : -a;

	public static def min[T](vec : MemoryChunk[T]) {T <: Ordered[T]} {
		var result :T = vec(0);
		for(i in 1..(vec.size()-1)) {
			if(result > vec(i)) result = vec(i);
		}
		return result;
	}

	public static @Inline def min[T](a :T, b :T) {T <: Ordered[T]} = a < b ? a : b;
	public static @Inline def max[T](a :T, b :T) {T <: Ordered[T]} = a > b ? a : b;
	
	public static def sum[T](vec : MemoryChunk[T]) {T <: Arithmetic[T], T haszero} {
		var res : T = Zero.get[T]();
		for(i in vec.range())
			res += vec(i);
		return res;
	}
	
	public static def norm(vec : MemoryChunk[Double]) {
		var res : Double = 0.0;
		for(i in vec.range())
			res += vec(i) * vec(i);
		return Math.sqrt(res);
	}
	
	public static def norm(vec : MemoryChunk[Float]) {
		var res : Float = 0.0f;
		for(i in vec.range())
			res += vec(i) * vec(i);
		return Math.sqrt(res);
	}

    public static def floorLog2(var p:Long):Int {
        var pow2: long = 1L;
        var i: Int = -1;
        while (pow2 <= p) {
            pow2 <<= 1;
            ++i;
        }
        return i;
    }

    @Native("c++", "63 - __builtin_clzl(((#p) << 1) - 1)")
    public static def ceilLog2(var p:Long):Int {
        var pow2: long = 1L;
        if (p == 0L) return -1;
        var i: Int = 0;
        while (pow2 < p) {
            pow2 <<= 1;
            ++i;
        }
        return i;
    }

   public static def nextPowerOf2(val p: long): long {
        if (p==0L) return 0;
        var pow2: long = 1L;
        while (pow2 < p)
            pow2 <<= 1;
        return pow2;
    }

    public static def powerOf2(p:long) :Boolean {
       return (p & -p) == p;
    }
    
    @Native("c++", "63 - __builtin_clzl(#p)")
    public static def log2(var p:Long):Long {
        assert powerOf2(p);
        var i:Int = 0;
        while (p > 1) { p = p/2; i++; }
        return i;
    }
    // returns 2^(max(0,i))
    public static def pow2(i:Int) {
        return 1L << i;
    }
    
    @Native("c++", "__builtin_popcountl(#v)")
    public static native def popcount[T](v :T) :Int {T <: Arithmetic[T]};

    @Native("c++", "org::scalegraph::util::bitreverse(#v)")
    public static native def bitreverse(v :ULong) :ULong;

    @Native("c++", "org::scalegraph::util::bitreverse(#scale, #v)")
    public static native def bitreverse(scale :Int, v :Long) :Long;

    @Native("c++", "org::scalegraph::util::scramble(#scale, #v, #v0, #v1)")
    public static native def scramble(scale :Int, v :Long, v0 :Long, v1 :Long) :Long;
}
