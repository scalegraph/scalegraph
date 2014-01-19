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

package org.scalegraph.util;
import x10.compiler.Inline;
import x10.util.Team;
import x10.lang.Runtime;
import x10.util.ArrayList;
import x10.util.Timer;
import x10.util.concurrent.AtomicInteger;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.*;

/** Fine grained communication library.
 * Usage : .... (Now printing)
 */
public final class Remote {
	private static def debugprint(tag :String) {
		Console.OUT.println("Place: " + here.id + ": Remote: " + tag);
	}

	private static def splitChunks(range :LongRange) :Array[Long](1){self.size==2} {
		val size = range.max - range.min + 1;
		if(size == 0L) return [0L, size];
		val nthreads = Math.min(Runtime.NTHREADS as Long, size);
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1L);
		return [nthreads, chunk_size];
	}

	/** Gets values of the remote array and store to the local array. All place of the team must call this method.
	 * @param team The team for the communication.
	 * @param src This array is treated as a remote array.
	 * @param dst The local array to store the values get from the remote array.
	 * @param range
	 * @param f This closure is invoked for each integer of the range.
	 */
	public static @Inline def get[T](team :Team, src :MemoryChunk[T], dst :MemoryChunk[T],
		range :LongRange, f: (index:Long, get:(Long, Int, Long)=>void)=>void)
	{
		val teamSize = team.size();
		val scatterGather = new DistScatterGather(team);
		val [nthreads, chunk_size] = splitChunks(range);
		finish for(i in 0..(nthreads-1)) {
			val i_start = range.min + i*chunk_size;
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async {
				val counts = scatterGather.getCounts(i as Int);
                val get = (local_ind:Long, remote_role:Int, remote_ind:Long) => {
					counts(remote_role)++;
			    };
				for(i2 in i_range) f(i2, get);
			}
		}
		scatterGather.sum();
		val numRequests = scatterGather.sendCount();
		val requests = MemoryChunk.make[Long](numRequests);
		val reqIdx = MemoryChunk.make[Long](numRequests);
		finish for(i in 0..(nthreads-1)) {
			val i_start = range.min + i*chunk_size;
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async {
				val offsets = scatterGather.getOffsets(i as Int);
                val get = (local_ind:Long, remote_role:Int, remote_ind:Long) => {
					val off = offsets(remote_role)++;
					requests(off) = remote_ind;
					reqIdx(off) = local_ind;
				};
				for(i2 in i_range) f(i2, get);
			}
		}
		val recvRequests = scatterGather.scatter(requests);
		val recvCount = scatterGather.recvCount();
		val reply = MemoryChunk.make[T](recvCount);
		Parallel.iter(recvRequests.range(), (tid :Long, r :LongRange) => {
			for(i in r)
				reply(i) = src(recvRequests(i));
		});
		val recvData = scatterGather.gather(reply);
		Parallel.iter(requests.range(), (tid :Long, r :LongRange) => {
			for(i in r)
				dst(reqIdx(i)) = recvData(i);
		});
	}

	public static @Inline def get[T](team :Team, array :MemoryChunk[T],
		range :LongRange, f: (index:Long, get:(Long, Int, Long)=>void)=>void)
	{
		val src = MemoryChunk.make[T](array.size());
		MemoryChunk.copy(array, 0L, src, 0L, array.size());
		get(team, src, array, range, f);
	}

	public static @Inline def get[T](team :Team, getter: (i :Long) => T, setter: (i :Long, v :T) =>void,
		range :LongRange, f: (index:Long, get:(Long, Int, Long)=>void)=>void)
	{
		val teamSize = team.size();
		val scatterGather = new DistScatterGather(team);
		val [nthreads, chunk_size] = splitChunks(range);
		finish for(i in 0..(nthreads-1)) {
			val i_start = range.min + i*chunk_size;
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async {
				val counts = scatterGather.getCounts(i as Int);
                val get = (local_ind:Long, remote_role:Int, remote_ind:Long) => {
					counts(remote_role)++;
				};
				for(i2 in i_range) f(i2, get);
			}
		}
		scatterGather.sum();
		val numRequests = scatterGather.sendCount();
		val requests = MemoryChunk.make[Long](numRequests);
		val reqIdx = MemoryChunk.make[Long](numRequests);
		finish for(i in 0..(nthreads-1)) {
			val i_start = range.min + i*chunk_size;
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async {
				val offsets = scatterGather.getOffsets(i as Int);
                val get = (local_ind:Long, remote_role:Int, remote_ind:Long) => {
					val off = offsets(remote_role)++;
					requests(off) = remote_ind;
					reqIdx(off) = local_ind;
				};
				for(i2 in i_range) f(i2, get);
			}
		}
		val recvRequests = scatterGather.scatter(requests);
		val recvCount = scatterGather.recvCount();
		val reply = MemoryChunk.make[T](recvCount);
		Parallel.iter(recvRequests.range(), (tid :Long, r :LongRange) => {
			for(i in r)
				reply(i) = getter(recvRequests(i));
		});
		val recvData = scatterGather.gather(reply);
		Parallel.iter(requests.range(), (tid :Long, r :LongRange) => {
			for(i in r)
				setter(reqIdx(i), recvData(i));
		});
	}

	/** Puts values to the remote array. All place of the team must call this method.
	 * @param team The team for the communication.
	 * @param array This array to store the values.
	 * @param range
	 * @param f This closure is invoked for each integer of the range.
	 */
	public static @Inline def put[T](team :Team, array :MemoryChunk[T],
		range :LongRange, f: (index : Long, put:(Int, Long,  T)=>void)=>void)
	{
		val teamSize = team.size();
		val scatterGather = new DistScatterGather(team);
		val [nthreads, chunk_size] = splitChunks(range);
		finish for(i in 0..(nthreads-1)) {
			val i_start = range.min + i*chunk_size;
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async {
				val counts = scatterGather.getCounts(i as Int);
                val put = (dst_role:Int, dst_ind:Long, value: T) => {
					counts(dst_role)++;
				};
				for(i2 in i_range) f(i2, put);
			}
		}
		scatterGather.sum();
		val numRequests = scatterGather.sendCount();
		val reqVal = MemoryChunk.make[T](numRequests);
		val reqIdx = MemoryChunk.make[Long](numRequests);
		finish for(i in 0..(nthreads-1)) {
			val i_start = range.min + i*chunk_size;
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async {
				val offsets = scatterGather.getOffsets(i as Int);
                val put = (dst_role:Int, dst_ind:Long, value: T) => {
					val off = offsets(dst_role)++;
					reqVal(off) = value;
					reqIdx(off) = dst_ind;
				};
				for(i2 in i_range) f(i2, put);
			}
		}
		val recvVal = scatterGather.scatter(reqVal);
		val recvIdx = scatterGather.scatter(reqIdx);
		val recvCount = scatterGather.recvCount();
		Parallel.iter(recvVal.range(), (tid :Long, r :LongRange) => {
			for(i in r)
				array(recvIdx(i)) = recvVal(i);
		});
	}

	public static @Inline def put[T](team :Team, setter: (i :Long, v :T) =>void,
		range :LongRange, f: (index:Long, put:(Int, Long,  T)=>void)=>void)
	{
		val teamSize = team.size();
		val scatterGather = new DistScatterGather(team);
		val [nthreads, chunk_size] = splitChunks(range);
		finish for(i in 0..(nthreads-1)) {
			val i_start = range.min + i*chunk_size;
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async {
				val counts = scatterGather.getCounts(i as Int);
                val put = (dst_role:Int, dst_ind:Long, value: T) => {
					counts(dst_role)++;
				};
				for(i2 in i_range) f(i2, put);
			}
		}
		scatterGather.sum();
		val numRequests = scatterGather.sendCount();
		val reqVal = MemoryChunk.make[T](numRequests);
		val reqIdx = MemoryChunk.make[Long](numRequests);
		finish for(i in 0..(nthreads-1)) {
			val i_start = range.min + i*chunk_size;
			val i_range = i_start..Math.min(range.max, i_start+chunk_size-1);
			async {
				val offsets = scatterGather.getOffsets(i as Int);
                val put = (dst_role:Int, dst_ind:Long, value: T) => {
					val off = offsets(dst_role)++;
					reqVal(off) = value;
					reqIdx(off) = dst_ind;
					
				};
				for(i2 in i_range) f(i2, put);
			}
		}
		val recvVal = scatterGather.scatter(reqVal);
		val recvIdx = scatterGather.scatter(reqIdx);
		val recvCount = scatterGather.recvCount();
		Parallel.iter(recvVal.range(), (tid :Long, r :LongRange) => {
			for(i in r)
				setter(recvIdx(i), recvVal(i));
		});
	}
}
