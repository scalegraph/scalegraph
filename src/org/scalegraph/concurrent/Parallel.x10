package org.scalegraph.concurrent;

import x10.compiler.Inline;
import x10.util.IndexedMemoryChunk;
import x10.util.ArrayList;
import x10.util.Timer;
import org.scalegraph.util.LongIndexedMemoryChunk;
import org.scalegraph.util.MathAppend;

public class Parallel {
	
	static val debug = false;
	private static @Inline def debugln (str:String) : void {
		if (debug) {
			Console.OUT.println("" + Timer.milliTime() + ":Hash: " + here + "(" + Runtime.workerId() + ")" + str);
			Console.OUT.flush();
		}
	}
	
    public static def sort[T](a:LongIndexedMemoryChunk[T], cmp:(T,T)=>Int) {
        qsort[T](a, MathAppend.ceilLog2(Runtime.NTHREADS as Long), 0, (a.size()-1), cmp);
    }

    public static def sort[T](a:LongIndexedMemoryChunk[T]){T<:Comparable[T]} {
        sort[T](a, (x:T,y:T) => x.compareTo(y));
    }

    static def merge[T](a:LongIndexedMemoryChunk[T], b:LongIndexedMemoryChunk[T], cmp:(T,T)=>Int) {
    	val arr = new LongIndexedMemoryChunk[T](a.size() + b.size());
    	val aSize = a.size();
    	val bSize = b.size();
    	var x: T = a(0);
    	var y: T = b(0);
    	var i: Long = 0;
    	var j: Long = 0;
    	var k: Long = 0;
    	
    	while (true) {
    		if (cmp(x, y) <= 0) {
    			arr(k) = x;
    			++i; ++k;
    			if (i >= aSize) break;
    			x = a(i);
    		} else {
    			arr(k) = y;
    			++j; ++k;
    			if (j >= bSize) break;
    			y = b(j);
    		}
    	}
    }
    
    static def qsort[T](a:LongIndexedMemoryChunk[T], proc: Int, lo:Long, hi:Long, cmp:(T,T)=>Int) {
        if (hi <= lo) return;
        var l:Long = lo - 1;
        var h:Long = hi;
        while (true) {
            while (cmp(a(++l), a(hi))<0);
            while (cmp(a(hi), a(--h))<0 && h>lo);
            if (l >= h) break;
            exch(a, l, h);
        }
        exch[T](a, l, hi);
        val ll = l;
        if (proc > 0) {
        	async qsort[T](a, proc - 1, lo, ll-1, cmp);
        	async qsort[T](a, proc - 1, ll+1, hi, cmp);
        } else {
        	async qsort[T](a, proc - 1, lo, ll-1, cmp);
        	async qsort[T](a, proc - 1, ll+1, hi, cmp);
        }
    }

    private static def exch[T](a:LongIndexedMemoryChunk[T], i:Long, j:Long):void {
        val temp = a(i);
        a(i) = a(j);
        a(j) = temp;
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
	
	public static @Inline def partition[T](array :Array[T](1), func :(T)=>Int, kinds :Int) = partition(array, (Int, x:T)=>func(x), kinds);
	
	public static @Inline def partition[T](array :Array[T](1), func :(Int,T)=>Int, kinds :Int) : Array[Array[T](1)](1) {
		debugln("partition: " + ", size: " + array.size +  " kinds:" + kinds);
		val acc = new Array[Array[ArrayList[T]](1)](Runtime.MAX_THREADS, 
				(Int)=>new Array[ArrayList[T]](kinds,
						(Int)=>new ArrayList[T]()));
		debugln("before acc");
		Parallel.iter(new IntRange(array.region.min(0), array.region.max(0)), (Int, range:IntRange)=> {
			val wid = Runtime.workerId();
			for (i in range) {
				val x = array(i);
				acc(wid)(func(i,x)).add(x);
			}
		});
		debugln("acc: " + acc);
		val resultSizes = new Array[Int](kinds, 0);
		val resultOffsets = new Array[Array[Int](1)](kinds, new Array[Int](Runtime.MAX_THREADS + 1));
		debugln("before scan");
		for (k in 0..(kinds-1)) {
			val arr = new Array[Int](Runtime.MAX_THREADS, (i:Int)=>acc(i)(k).size());
			debugln("k: " + k + " arr: " + arr);
			resultOffsets(k)(0) = 0;
			resultSizes(k) = Parallel.scan(1..(Runtime.MAX_THREADS), resultOffsets(k), 0, (i:Int, a:Int)=> acc(i - 1)(k).size() + a, (x:Int, y:Int)=>x+y);
			val truescan = new Array[Int](Runtime.MAX_THREADS + 1);
			Parallel.scan(1..(Runtime.MAX_THREADS), truescan, 0, (i:Int, a:Int)=> arr(i - 1) + a, (x:Int, y:Int)=>x+y);
			debugln("k: " + k +  "truescan: " + truescan);
			debugln("k: " + k +  "resultOffsets: " + resultOffsets(k));
			resultOffsets(k) = truescan;
		}
		debugln("after scan");
		for (k in 0..(kinds-1)) {
				debugln("k: " + k +  ", resultOffsets: " + resultOffsets(k));
		}
		val result = new Array[Array[T](1)](kinds, (i:Int)=>new Array[T](IndexedMemoryChunk.allocateUninitialized[T](resultSizes(i))));
		debugln("before copy");
		debugln("sizes" + resultSizes);
		debugln("sizes" + new Array[Int](kinds, (i:Int)=>resultOffsets(i)(Runtime.MAX_THREADS - 1)));
		finish for (k in 0..(kinds-1)) {
			Parallel.iter(0..(Runtime.MAX_THREADS-1), (wid:Int)=>{
				val size = acc(wid)(k).size();
				if (size > 0) {
					debugln("k: " + k + ", wid: " + wid);
					debugln("k: " + k + ", wid: " + wid + ", offsets: " + resultOffsets(k)(wid) + ", size: " + acc(wid)(k).size());
					Array.copy(acc(wid)(k).toArray(), 0, result(k), resultOffsets(k)(wid), acc(wid)(k).size());
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
		val nthreads = Math.min(Runtime.NTHREADS, size);
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1);
		finish for(i in 0..(nthreads-1)) {
			val i_start = range.min + i*chunk_size;
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async for(ii in i_range) func(ii);
		}
	}
	
	public static @Inline def iter(range :IntRange, func :(Int, IntRange)=>void) {
		val size = range.max - range.min + 1;
		val nthreads = Math.min(Runtime.NTHREADS, size);
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1);
		finish for(i in 0..(nthreads-1)) {
			val idx = i;
			val i_start = range.min + i*chunk_size;
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async func(idx, i_range);
		}
	}
	
	public static @Inline def reduce[U](range :IntRange, func :(Int,U)=>U, op :(U,U)=>U) {U haszero} :U {
		val size = range.max - range.min + 1;
		val nthreads = Math.min(Runtime.NTHREADS, size);
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1);
		val intermid = new Array[U](nthreads);
		finish for(i in 0..(nthreads-1)) {
			val idx = i;
			val i_start = range.min + i*chunk_size;
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
	
	public static @Inline def scan[U](range :IntRange, dst :Array[U](1), init :U, func :(Int,U)=>U, op :(U,U)=>U) {U haszero} :U {
		val size = range.max - range.min + 1;
		val nthreads = Math.min(Runtime.NTHREADS, size);
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1);
		dst(range.min - 1) = init;
		if(nthreads >= 2){
			finish {
				for(i in 0..(nthreads-1)) {
					val i_start = range.min + i*chunk_size;
					val i_end = i_start + chunk_size - 1;
					if(i_end <= range.max) {
						async {
							var r :U = Zero.get[U]();
							for(ii in i_start..i_end) r = func(ii, r);
							dst(i_end) = r;
						}
					}
				}
			}
			for(i in 0..(nthreads-1)) {
				val i_prev = range.min + i*chunk_size - 1;
				val i_cur = i_prev + chunk_size;
				if(i_cur <= range.max) {
					dst(i_cur) = op(dst(i_cur), dst(i_prev));
				}
			}
			finish {
				for(i in 0..(nthreads-1)) {
					val i_start = range.min + i*chunk_size;
					val i_end = Math.min(range.max + 1, i_start+chunk_size-1);
					async {
						for(ii in i_start..(i_end-1)) dst(ii) = func(ii, dst(ii-1));
					}
				}
			}
		}
		else {
			for(i in range) dst(i) = func(i, dst(i-1));
		}
		return dst(range.max);
	}
	
	public static @Inline def prefixSum[U](range :IntRange, arr :Array[U](1)) {U haszero, U <: Arithmetic[U]}
		= scan(range, arr, Zero.get[U](), (i :Int, v :U) => v + arr(i), (v1 :U, v2 :U) => v1 + v2);
	
}

