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

import x10.compiler.Inline;
import x10.util.IndexedMemoryChunk;
import x10.util.ArrayList;
import x10.util.Pair;
import x10.util.Timer;

import org.scalegraph.Config;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.Algorithm;
import org.scalegraph.util.GrowableMemory;

/** Thread Parallel Library.
 * Design policy: A provided closure that accepts thread id (tid) 
 * as a parameter is called for every thread even if no task is assigned to the thread.
 */
public final class Parallel {
	static val debug = false;
	// prevent from instantiation
	private def this() {}
	private static @Inline def debugln (str:String) : void {
		if (debug) {
			Console.OUT.println("" + Timer.milliTime() + ":Hash: " + here + "(" + Runtime.workerId() + ")" + str);
			Console.OUT.flush();
		}
	}

    public static def sort[V](rangeScale :Int, key :MemoryChunk[Long], v :MemoryChunk[V], key_tmp :MemoryChunk[Long], v_tmp :MemoryChunk[V]) {
    	val numThreads = Runtime.NTHREADS;
    	val logChunks = Math.min(7, rangeScale);
    	val numChunks = 1 << logChunks;
    	val numShift = rangeScale - logChunks;
    	val sg = new ScatterGather(numChunks);
    	
    	assert (key.size() == v.size());
    	assert (key.size() == key_tmp.size());
    	assert (key.size() == v_tmp.size());
    	
    	Parallel.iter(0..(key.size()-1), (tid :Long, r :LongRange) => {
    		val counts = sg.counts(tid as Int);
    		for(i in r) {
    			counts(key(i) >> numShift /*as Int*/)++;
    		}
    	});
    	
    	sg.sum();
    	
    	Parallel.iter(0..(key.size()-1), (tid :Long, r :LongRange) => {
    		val offsets = sg.offsets(tid as Int);
    		for(i in r) {
    			val dstIndex = offsets(key(i) >> numShift as Int)++;
    			key_tmp(dstIndex) = key(i);
    			v_tmp(dstIndex) = v(i);
    		}
    	});
    	
    	sg.check(key.size() as Int);
    	
    	
    	val taskCounter = MemoryChunk.make[Int](1);
    	taskCounter(0)=0;
    	
    	val offsets = sg.offsets();
    	val counts = sg.counts();
    	finish for(tid in 0..(numThreads-1)) async {
    		var taskNum :Int = 0;
    		while(true){
    			taskNum = taskCounter.atomicAdd(0,1);
    			if(taskNum>=numChunks){ break;}
    			val off = offsets(taskNum);
    			val len = counts(taskNum);
    			Algorithm.sort(numShift, Math.min(7, numShift), sg.counts(tid), sg.offsets(tid),
    					key_tmp.subpart(off, len), v_tmp.subpart(off, len),
    					key.subpart(off, len), v.subpart(off, len) );
    		}
    	}
    }    


    
    public static def sort_old[V](rangeScale :Int, src_i :MemoryChunk[Long], src_v :MemoryChunk[V], dst_i :MemoryChunk[Long], dst_v :MemoryChunk[V]) {
    	val numThreads = Runtime.NTHREADS as Long;
    	val logChunks = MathAppend.ceilLog2(numThreads * 4L);
    	val numChunks = 1L << logChunks;
    	val numShift = rangeScale - logChunks;
    	val sg = new ScatterGather(numChunks);
    	
    	assert (src_i.size() == src_v.size());
    	assert (src_i.size() == dst_i.size());
    	assert (src_i.size() == dst_v.size());
    	
    	Parallel.iter(0..(src_i.size()-1), (tid :Long, r :LongRange) => {
    		val counts = sg.counts(tid as Int);
    		for(i in r) {
    			counts(src_i(i) >> numShift as Int)++;
    		}
    	});
    	
    	sg.sum();
    	
    	Parallel.iter(0..(src_i.size()-1), (tid :Long, r :LongRange) => {
    		val offsets = sg.offsets(tid as Int);
    		for(i in r) {
    			val dstIndex = offsets(src_i(i) >> numShift as Int)++;
    			dst_i(dstIndex) = src_i(i);
    			dst_v(dstIndex) = src_v(i);
    		}
    	});
    	
    	sg.check(src_i.size() as Int);
    	
    	finish for(i in 0..(numChunks-1)) async {
    		val off = sg.offsets()(i);
    		val len = sg.counts()(i);
    		Algorithm.sort(dst_i.subpart(off, len), dst_v.subpart(off, len));
    	}
    }
    
    
    public static def sort[V1, V2](rangeScale :Int,
    		key:MemoryChunk[Long], v1 :MemoryChunk[V1], v2 :MemoryChunk[V2],
    		key_tmp :MemoryChunk[Long], v1_tmp :MemoryChunk[V1], v2_tmp :MemoryChunk[V2])
    {
    	val numThreads = Runtime.NTHREADS;
    	val logChunks = Math.min(7, rangeScale);
    	val numChunks = 1 << logChunks;
    	val numShift = rangeScale - logChunks;
    	//Config.get().stopWatch().lap("sort [thread local add ver] numChunks=" + numChunks + ", numShift=" + numShift);
    	val sg = new ScatterGather(numChunks);
    	
    	assert (key.size() == v1.size());
    	assert (key.size() == v2.size());
    	assert (key.size() == key_tmp.size());
    	assert (key.size() == v1_tmp.size());
    	assert (key.size() == v2_tmp.size());
    	
    	//Config.get().stopWatch().lap("sort: initialize");
    	
    	Parallel.iter(0..(key.size()-1), (tid :Long, r :LongRange) => {
    		val counts = sg.counts(tid as Int);
    		for(i in r) {
    			counts(key(i) >> numShift)++;
    		}
    	});
    	
    	//Config.get().stopWatch().lap("sort: count");
    	
    	sg.sum();
    	
    	//Config.get().stopWatch().lap("sort: calc offset");
    	
    	Parallel.iter(0..(key.size()-1), (tid :Long, r :LongRange) => {
    		val offsets = sg.offsets(tid as Int);
    		for(i in r) {
    			val dstIndex = offsets(key(i) >> numShift)++;
    			key_tmp(dstIndex) = key(i);
    			v1_tmp(dstIndex) = v1(i);
    			v2_tmp(dstIndex) = v2(i);
    		}
    	});
    	
    	//Config.get().stopWatch().lap("sort: copy");
    	
    	sg.check(key.size() as Int);
    	
    	//Config.get().stopWatch().lap("sort: check offset");
    	
    	val taskCounter = MemoryChunk.make[Int](1);
    	taskCounter(0)=0;

    	val offsets = sg.offsets();
    	val counts = sg.counts();
    	finish for(tid in 0..(numThreads-1)) async {
    		var taskNum :Int;
    		while(true){
    			taskNum = taskCounter.atomicAdd(0,1);
    			if(taskNum >= numChunks){ break;}
    			val off = offsets(taskNum);
    			val len = counts(taskNum);
    			Algorithm.sort(numShift, Math.min(7, numShift), sg.counts(tid), sg.offsets(tid),
    					key_tmp.subpart(off, len), v1_tmp.subpart(off, len), v2_tmp.subpart(off, len),
    					key.subpart(off, len), v1.subpart(off, len), v2.subpart(off, len));
    		}
    	}
    	//Config.get().stopWatch().lap("sort end");
     }
    
    
    
    public static def sort_old[V1, V2](rangeScale :Int,
    		src_i :MemoryChunk[Long], src_v1 :MemoryChunk[V1], src_v2 :MemoryChunk[V2],
    		dst_i :MemoryChunk[Long], dst_v1 :MemoryChunk[V1], dst_v2 :MemoryChunk[V2])
    {
    	val numThreads = Runtime.NTHREADS;
    	val logChunks = MathAppend.ceilLog2(numThreads * 4);
    	val numChunks = 1 << logChunks;
    	val numShift = rangeScale - logChunks;
    	val sg = new ScatterGather(numChunks);
    	
    	assert (src_i.size() == src_v1.size());
    	assert (src_i.size() == src_v2.size());
    	assert (src_i.size() == dst_i.size());
    	assert (src_i.size() == dst_v1.size());
    	assert (src_i.size() == dst_v2.size());
    	
    	Parallel.iter(0..(src_i.size()-1), (tid :Long, r :LongRange) => {
    		val counts = sg.counts(tid as Int);
    		for(i in r) {
    			counts(src_i(i) >> numShift)++;
    		}
    	});
    	
    	sg.sum();
    	
    	Parallel.iter(0..(src_i.size()-1), (tid :Long, r :LongRange) => {
    		val offsets = sg.offsets(tid as Int);
    		for(i in r) {
    			val dstIndex = offsets(src_i(i) >> numShift)++;
    			dst_i(dstIndex) = src_i(i);
    			dst_v1(dstIndex) = src_v1(i);
    			dst_v2(dstIndex) = src_v2(i);
    		}
    	});
    	
    	sg.check(src_i.size() as Int);
    	
    	finish for(i in 0..(numChunks-1)) async {
    		val off = sg.offsets()(i);
    		val len = sg.counts()(i);
    		Algorithm.sort(dst_i.subpart(off, len), dst_v1.subpart(off, len), dst_v2.subpart(off, len));
    	}
    }

	/**
     * Searches the given indices  for the least indices that makes the given function true.using the binary search
     * algorithm.  The function must be monotonic (e.g. if an index makes the function true, all the following indices do).
     * If there exist one or more indices, return the index of the least one of them in the array.
     * Otherwise, return -1.
     * @param a the array to be searched
     * @param func the comparison function to use
      */
	public static @Inline def binarySearch(range :IntRange, func: (Int)=>Boolean) {
		val min = range.min;
		val max = range.max;
		val middle = min + (max - min) / 2;
		if (min > max)
			return -1;
		else if (func(min))
			return min;
		else if (func(middle))
			return binarySearch((min + 1)..middle, func);
		else
			return binarySearch((middle + 1)..max, func);
	}

	public static @Inline def binarySearch(range :LongRange, func: (Long)=>Boolean) {
		val min = range.min;
		val max = range.max;
		val middle = min + (max - min) / 2;
		if (min > max)
			return -1;
		else if (func(min))
			return min;
		else if (func(middle))
			return binarySearch((min + 1)..middle, func);
		else
			return binarySearch((middle + 1)..max, func);
	}

	/**
     * Searches the given indices  for the least indices that makes the given function true.
     * If there exist one or more indices, return the least index of them.
     * Otherwise, return -1.
     * @param a the array to be searched
     * @param func the comparison function to use
      */
	public static @Inline def search(range :IntRange, func: (Int)=>Boolean) =
		reduce(range, (i:Int, r:Int)=>Math.min(func(i) ? i : Int.MAX_VALUE, r), (x:Int, y:Int)=>x.compareTo(y));


	// must be optimized
	public static @Inline def appendMap[T](range :IntRange, func :(Int)=>Array[T](1)) {
		val acc = new ArrayList[T]();
		for (i in range) {
			val arr = func(i);
			if (arr.size > 0) {
				Parallel.iter(arr.region.min(0)..arr.region.max(0), (j:Int)=>{
					acc.add(arr(j));
				});
			}
		}
		return acc.toArray();
	}

	public static @Inline def partition[T](array :MemoryChunk[T], func :(T)=>Int, kinds :Int) = partition(array, (Long, x:T)=>func(x), kinds);

	/**
     * Divides the given array into its classification.
     * Let <code>r</code> be the result of this method, For each <code>n</code>-th element <code>x</code> in the given array,
     * let <code>y</code> be a integer such that <code>y = func(n, x)</code>,
     * <code>r(y)<code> contains <code>x</code>.<br>
     *
     * The range of <code>func</code> must be in [0, <code>kinds</code>-1]
     *
     * @param array the array to be paritioned
     * @param func the function to classify
     * @param kinds the size of the classification
      */
	public static @Inline def partition[T](array :MemoryChunk[T], func :(Long,T)=>Int, kinds :Int) : MemoryChunk[MemoryChunk[T]] {
		debugln("partition: " + ", size: " + array.size() +  " kinds:" + kinds);
		val acc = MemoryChunk.make[MemoryChunk[GrowableMemory[T]]](Runtime.MAX_THREADS,
				(Long)=>MemoryChunk.make[GrowableMemory[T]](kinds,
						(Long)=>new GrowableMemory[T]()));
		debugln("before acc");
		Parallel.iter(array.range(), (Long, range :LongRange)=> {
			val wid = Runtime.workerId();
			for (i in range) {
				val x = array(i);
				acc(wid)(func(i,x)).add(x);
			}
		});
		debugln("acc: " + acc);
		val resultSizes = MemoryChunk.make[Long](kinds, 0, true);
		val resultOffsets = MemoryChunk.make[MemoryChunk[Long]](kinds, (Long) => MemoryChunk.make[Long](Runtime.MAX_THREADS + 1));
		debugln("before scan");
		for (k in 0..(kinds-1)) {
			val arr = MemoryChunk.make[Long](Runtime.MAX_THREADS, (i:Long)=>acc(i)(k).size());
			debugln("k: " + k + " arr: " + arr);
			resultOffsets(k)(0) = 0L;
			resultSizes(k) = Parallel.scan(acc.range(), resultOffsets(k), 0L, (i:Long, a:Long)=> acc(i)(k).size() + a, (x:Long, y:Long)=>x+y);
			val truescan = MemoryChunk.make[Long](Runtime.MAX_THREADS + 1);
			Parallel.scan(acc.range(), truescan, 0L, (i:Long, a:Long)=> arr(i) + a, (x:Long, y:Long)=>x+y);
			debugln("k: " + k +  "truescan: " + truescan);
			debugln("k: " + k +  "resultOffsets: " + resultOffsets(k));
			resultOffsets(k) = truescan;
		}
		debugln("after scan");
		for (k in 0..(kinds-1)) {
				debugln("k: " + k +  ", resultOffsets: " + resultOffsets(k));
		}
		val result = MemoryChunk.make[MemoryChunk[T]](kinds, (i:Long)=>MemoryChunk.make[T](resultSizes(i)));
		debugln("before copy");
		debugln("sizes" + resultSizes);
		debugln("sizes" + MemoryChunk.make[Long](kinds, (i:Long)=>resultOffsets(i)(Runtime.MAX_THREADS - 1)));
		finish for (k in 0..(kinds-1)) {
			Parallel.iter(0..(Runtime.MAX_THREADS-1), (wid:Int)=>{
				val size = acc(wid)(k).size();
				if (size > 0) {
					debugln("k: " + k + ", wid: " + wid);
					debugln("k: " + k + ", wid: " + wid + ", offsets: " + resultOffsets(k)(wid) + ", size: " + acc(wid)(k).size());
					MemoryChunk.copy(acc(wid)(k).raw(), 0L, result(k), resultOffsets(k)(wid), acc(wid)(k).size());
				}
			});
		}
		debugln("after copy");
		return result;
	}

	public static @Inline def map[T](region :Region{self.rank==1}, func :(Int)=>T) = map(new IntRange(region.min(0), region.max(0)), func);

	public static @Inline def map[T](range :IntRange, func :(Int)=>T) {
		val size = range.max - range.min + 1;
		val store = IndexedMemoryChunk.allocateUninitialized[T](size);
		val acc = new Array[T](Region.make(range.min, range.max), store);
		iter(range, (i:Int)=> {
			acc(i) = func(i);
		});
		return acc;
	}

	public static @Inline def iter(range :IntRange, func :(Int)=>void) {
		val size = range.max - range.min + 1;
		val nthreads = Runtime.NTHREADS;
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1);
		finish for(i in 0..(nthreads-1)) {
			val i_start = Math.min(range.max+1, range.min + i*chunk_size);
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async for(ii in i_range) func(ii);
		}
	}

	public static @Inline def iter(range :LongRange, func :(Long)=>void) {
		val size = range.max - range.min + 1;
		val nthreads = Runtime.NTHREADS;
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1L);
		finish for(i in 0..(nthreads-1)) {
			val i_start = Math.min(range.max+1, range.min + i*chunk_size);
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async for(ii in i_range) func(ii);
		}
	}

	public static @Inline def iter(range :IntRange, func :(Int, IntRange)=>void) {
		val size = range.max - range.min + 1;
		val nthreads = Runtime.NTHREADS;
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1);
		finish for(i in 0..(nthreads-1)) {
			val idx = i;
			val i_start = Math.min(range.max+1, range.min + i*chunk_size);
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async func(idx, i_range);
		}
	}

	public static @Inline def iter(range :LongRange, func :(Long, LongRange)=>void) {
		val size = range.max - range.min + 1;
		val nthreads = Runtime.NTHREADS;
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1L);
		finish for(i in 0..(nthreads-1)) {
			val idx = i;
			val i_start = Math.min(range.max+1, range.min + i*chunk_size);
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async func(idx, i_range);
		}
	}

	public static @Inline def reduce[U](range :IntRange, func :(Int,U)=>U, op :(U,U)=>U) {U haszero} :U {
		val size = range.max - range.min + 1;
		val nthreads = Runtime.NTHREADS;
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1);
		val intermid = new Array[U](nthreads);
		finish for(i in 0..(nthreads-1)) {
			val idx = i;
			val i_start = Math.min(range.max+1, range.min + i*chunk_size);
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async {
				var r :U = Zero.get[U]();
				for(ii in i_range) r = func(ii, r);
				intermid(idx) = r;
			}
		}
		var r :U = Zero.get[U]();
		for(i in 0..(nthreads-1)) r = op(r,intermid(i));
		return r;
	}

	public static @Inline def reduce[U](range :LongRange, func :(Long,U)=>U, op :(U,U)=>U) {U haszero} :U {
		val size = range.max - range.min + 1;
		val nthreads = Runtime.NTHREADS;
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1L);
		val intermid = MemoryChunk.make[U](nthreads);
		finish for(i in 0..(nthreads-1)) {
			val idx = i;
			val i_start = Math.min(range.max+1, range.min + i*chunk_size);
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async {
				var r :U = Zero.get[U]();
				for(ii in i_range) r = func(ii, r);
				intermid(idx) = r;
			}
		}
		var r :U = Zero.get[U]();
		for(i in 0..(nthreads-1)) r = op(r,intermid(i));
		return r;
	}

	public static def reduce[U](range :LongRange, func :(Long,LongRange)=>U, op :(U,U)=>U) {U haszero} :U {
		val size = range.max - range.min + 1;
		val nthreads = Runtime.NTHREADS;
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1L);
		val intermid = MemoryChunk.make[U](nthreads);
		finish for(i in 0..(nthreads-1)) {
			val idx = i;
			val i_start = Math.min(range.max+1, range.min + i*chunk_size);
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async {
				intermid(idx) = func(i, i_range);
			}
		}
		var r :U = Zero.get[U]();
		for(i in 0..(nthreads-1)) r = op(r,intermid(i));
		return r;
	}

	public static @Inline def scan[U](range :IntRange, dst :Array[U](1), init :U, func :(Int,U)=>U, op :(U,U)=>U) {U haszero} :U {
		val size = range.max - range.min + 1;
		if(size == 0) return Zero.get[U]();
		val nthreads = Runtime.NTHREADS;
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1);
		dst(range.min) = init;
		// TODO: optimize with software pipelining
		if(nthreads >= 2){
			finish {
				for(i in 0..(nthreads-1)) {
					val i_start = range.min + i*chunk_size;
					val i_end = i_start + chunk_size;
					if(i_end <= range.max + 1) {
						async {
							var r :U = Zero.get[U]();
							for(ii in i_start..(i_end-1)) r = func(ii, r);
							dst(i_end) = r;
						}
					}
				}
			}
			for(i in 0..(nthreads-1)) {
				val i_start = range.min + i*chunk_size;
				val i_end = i_start + chunk_size;
				if(i_end <= range.max + 1) {
					dst(i_end) = op(dst(i_end), dst(i_start));
				}
			}
			finish {
				for(i in 0..(nthreads-1)) {
					val i_start = range.min + i*chunk_size;
					val i_end = Math.min(range.max+1, i_start + chunk_size);
					async {
						for(ii in i_start..(i_end-2)) dst(ii+1) = func(ii, dst(ii));
					}
				}
			}
		}
		else {
			for(i in range) dst(i+1) = func(i, dst(i));
		}
		return dst(range.max);
	}

	public static @Inline def scan[U](range :LongRange, dst :MemoryChunk[U], init :U, func :(Long,U)=>U, op :(U,U)=>U) {U haszero} :U {
		val size = range.max - range.min + 1;
		if(size == 0L) return Zero.get[U]();
		val nthreads = Runtime.NTHREADS;
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1L);
		dst(range.min) = init;
		// TODO: optimize with software pipelining
		if(nthreads >= 2){
			finish {
				for(i in 0..(nthreads-1)) {
					val i_start = range.min + i*chunk_size;
					val i_end = i_start + chunk_size;
					if(i_end <= range.max + 1) {
						async {
							var r :U = Zero.get[U]();
							for(ii in i_start..(i_end-1)) r = func(ii, r);
							dst(i_end) = r;
						}
					}
				}
			}
			for(i in 0..(nthreads-1)) {
				val i_start = range.min + i*chunk_size;
				val i_end = i_start + chunk_size;
				if(i_end <= range.max + 1) {
					dst(i_end) = op(dst(i_end), dst(i_start));
				}
			}
			finish {
				for(i in 0..(nthreads-1)) {
					val i_start = range.min + i*chunk_size;
					val i_end = Math.min(range.max+1, i_start + chunk_size);
					async {
						for(ii in i_start..(i_end-1)) dst(ii+1) = func(ii, dst(ii));
					}
				}
			}
		}
		else {
			for(i in range) dst(i+1) = func(i, dst(i));
		}
		return dst(range.max);
	}

	public static @Inline def prefixSum[U](range :IntRange, arr :Array[U](1)) {U haszero, U <: Arithmetic[U]}
		= scan(range, arr, Zero.get[U](), (i :Int, v :U) => v + arr(i), (v1 :U, v2 :U) => v1 + v2);
		
	public static def makeOffset(sortedIndex :MemoryChunk[Long], offset :MemoryChunk[Long]) {
		val length = sortedIndex.size();
		if(length == 0L) {
			for(o in offset.range()) offset(o) = 0;
		}
		else {
			for(o in 0..sortedIndex(0)) offset(o) = 0;
			for(o in (sortedIndex(length-1)+1)..(offset.size()-1)) offset(o) = length;
			
			Parallel.iter(1..(length-1), (tid :Long, r :LongRange) => {
				var prev :Long = sortedIndex(r.min - 1);
				for(i in r) {
					val cur = sortedIndex(i);
					if(prev != cur) {
						for(o in (prev+1)..cur) offset(o) = i;
						prev = cur;
					}
				}
			});
		}
	}

}
