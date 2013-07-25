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

import x10.compiler.Native;
import x10.compiler.Inline;
import x10.compiler.Ifdef;
import x10.compiler.Ifndef;

import x10.util.IndexedMemoryChunk;

import x10.util.Team;
import org.scalegraph.util.MemoryPointer;
import org.scalegraph.util.MemoryChunk;

// TODO: range check

/** Team2 provides the collectives for MemoryChunk. Currently Team2 only support lowest level collectives.
 */
public struct Team2 {
	
	public val base :Team;
	
	public def this(baseTeam : Team) {
		base = baseTeam;
	}

	public @Inline def role() = base.role()(0);
	public @Inline def size() = base.size();
	public @Inline def places() = base.places();
	public @Inline def placeGroup() = base.placeGroup();
	
	/* native methods */
	
	private static def nativeScatter[T] (id:Int, role:Int, root:Int, src:MemoryChunk[T], dst:MemoryChunk[T], count :Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_scatter(id, role, root, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1); // for MPI transport
	}

	private static def nativeScatterv[T] (id:Int, role:Int, root:Int, src:MemoryChunk[T], src_offs:MemoryChunk[Int], src_counts:MemoryChunk[Int], dst:MemoryChunk[T], dst_count:Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_scatterv(id, role, root, src->pointer(), src_offs, src_counts->pointer(), dst->pointer(), dst_count, sizeof(TPMGL(T)), x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1); // for MPI transport
	}

	private static def nativeGather[T] (id:Int, role:Int, root:Int, src:MemoryChunk[T], dst:MemoryChunk[T], count:Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_gather(id, role, root, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1); // for MPI transport
	}

	private static def nativeGatherv[T] (id:Int, role:Int, root:Int, src:MemoryChunk[T], src_count:Int, dst:MemoryChunk[T], dst_offs:MemoryChunk[Int], dst_counts:MemoryChunk[Int]) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_gatherv(id, role, root, src->pointer(), src_count, dst->pointer(), dst_offs->pointer(), dst_counts->pointer(), sizeof(TPMGL(T)), x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1); // for MPI transport
	}

	private static def nativeBcast[T] (id:Int, role:Int, root:Int, src:MemoryChunk[T], dst:MemoryChunk[T], count:Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_bcast(id, role, root, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1); // for MPI transport
	}

	private static def nativeAllgather[T](id:Int, role:Int, src:MemoryChunk[T], dst:MemoryChunk[T], count:Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_allgather(id, role, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1); // for MPI transport
	}

	private static def nativeAllgatherv[T] (id:Int, role:Int, src:MemoryChunk[T], src_count:Int, dst:MemoryChunk[T], dst_offs:MemoryChunk[Int], dst_counts:MemoryChunk[Int]) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_allgatherv(id, role, src->pointer(), src_count, dst->pointer(), dst_offs->pointer(), dst_counts->pointer(), sizeof(TPMGL(T)), x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1); // for MPI transport
	}

	private static def nativeAlltoall[T](id:Int, role:Int, src:MemoryChunk[T], dst:MemoryChunk[T], count:Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_alltoall(id, role, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1); // for MPI transport
	}

	private static def nativeAlltoallv[T] (id:Int, role:Int, src:MemoryChunk[T], src_offs:MemoryChunk[Int], src_counts:MemoryChunk[Int], dst:MemoryChunk[T], dst_offs:MemoryChunk[Int], dst_counts:MemoryChunk[Int]) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_alltoallv(id, role, src->pointer(), src_offs->pointer(), src_counts->pointer(), dst->pointer(), dst_offs->pointer(), dst_counts->pointer(), sizeof(TPMGL(T)), x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1); // for MPI transport
	}

	private static def nativeAllreduce[T](id:Int, role:Int, src:MemoryChunk[T], dst:MemoryChunk[T], count:Int, op:Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_allreduce(id, role, src->pointer(), dst->pointer(), (x10rt_red_op_type)op, x10rt_get_red_type<TPMGL(T)>(), count, x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1); // for MPI transport
	}
	
	/* basic API methods */
	
	@Ifndef("__CPP__")
	private def wrapPointer[T](p :MemoryChunkData[T]) = new Array[T](p.raw);

	@Ifndef("__CPP__")
	private def inflateOffsets(mc :MemoryChunk[Int], offset :Int) {
		val res = mc.toArray();
		for([i] in res) res(i) += offset;
		return res;
	}

	@Ifndef("__CPP__")
	private def wrapOffsets(mc :MemoryChunk[Int], offset :Int) {
		if(offset > 0)
			return inflateOffsets(mc, offset);
		else if(mc.raw().offset > 0)
			return mc.toArray();
		else
			return wrapPointer(mc.raw());
	}

	@Ifndef("__CPP__")
	private def wrapCounts(mc :MemoryChunk[Int]) {
		if(mc.raw().offset > 0)
			return mc.toArray();
		else
			return wrapPointer(mc.raw());
	}
	
	/** This is equivalent to MPI_scatter
	 * @param root The rank of the place that 
	 */
	public def scatter[T] (root:Int, src:MemoryChunk[T], dst:MemoryChunk[T]) : void {
		val role = base.role()(0);
		if(role == root && src.size() != dst.size() * base.size())
			throw new IllegalArgumentException("src.size() != dst.size()");
		
		@Ifdef("__CPP__") {
			finish nativeScatter[T](base.id(), role, root, src, dst, dst.size() as Int);
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.scatter(role, root, wrapPointer(srcp), srcp.offset as Int, wrapPointer(dstp), dstp.offset as Int, dst.size() as Int);
		}
	 }

	/** This is equivalent to MPI_scatterv
	 */
	public def scatterv[T] (root:Int, src:MemoryChunk[T], src_offs:MemoryChunk[Int], src_counts:MemoryChunk[Int], dst:MemoryChunk[T]) : void {
		val role = base.role()(0);
		
		@Ifdef("__CPP__") {
			finish nativeScatterv[T](base.id(), role, root, src, src_offs, src_counts, dst, dst.size() as Int);
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.scatterv(role, root, wrapPointer(srcp), wrapOffsets(src_offs, srcp.offset as Int), wrapCounts(src_counts), wrapPointer(dstp), dstp.offset as Int, dst.size() as Int);
		}
	 }

	/** This is equivalent to MPI_gather
	 */
	public def gather[T] (root:Int, src:MemoryChunk[T], dst:MemoryChunk[T]) : void {
		val role = base.role()(0);
		if(role == root && src.size() * base.size() != dst.size())
			throw new IllegalArgumentException("src.size() != dst.size()");
		
		@Ifdef("__CPP__") {
			finish nativeGather[T](base.id(), role, root, src, dst, src.size() as Int);
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.gather(role, root, wrapPointer(srcp), srcp.offset as Int, wrapPointer(dstp), dstp.offset as Int, src.size() as Int);
		}
	 }

	public def gatherv[T] (root:Int, src:MemoryChunk[T], dst:MemoryChunk[T], dst_offs:MemoryChunk[Int], dst_counts:MemoryChunk[Int]) : void {
		val role = base.role()(0);
		
		@Ifdef("__CPP__") {
			finish nativeGatherv[T](base.id(), role, root, src, src.size() as Int, dst, dst_offs, dst_counts);
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.gatherv(role, root, wrapPointer(srcp), srcp.offset as Int, src.size() as Int, wrapPointer(dstp), wrapOffsets(dst_offs, dstp.offset as Int), wrapCounts(dst_counts));
		}
	 }

	public def bcast[T] (root:Int, src:MemoryChunk[T], dst:MemoryChunk[T]) : void {
		val role = base.role()(0);
		if(role == root && src.size() != dst.size())
			throw new IllegalArgumentException("src.size() != dst.size()");
		
		@Ifdef("__CPP__") {
			finish nativeBcast[T](base.id(), role, root, src, dst, dst.size() as Int);
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.bcast(role, root, wrapPointer(srcp), srcp.offset as Int, wrapPointer(dstp), dstp.offset as Int, dst.size() as Int);
		}
	 }

	public def allgather[T](src:MemoryChunk[T], dst:MemoryChunk[T]) : void {
		val role = base.role()(0);
		if(src.size() * base.size() != dst.size())
			throw new IllegalArgumentException("src.size() != dst.size()");
		
		@Ifdef("__CPP__") {
			finish nativeAllgather[T](base.id(), role, src, dst, src.size() as Int);
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.allgather(role, wrapPointer(srcp), srcp.offset as Int, wrapPointer(dstp), dstp.offset as Int, src.size() as Int);
		}
	 }

	public def allgatherv[T] (src:MemoryChunk[T], dst:MemoryChunk[T], dst_offs:MemoryChunk[Int], dst_counts:MemoryChunk[Int]) : void {
		val role = base.role()(0);
		
		@Ifdef("__CPP__") {
			finish nativeAllgatherv[T](base.id(), role, src, src.size() as Int, dst, dst_offs, dst_counts);
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.allgatherv(role, wrapPointer(srcp), srcp.offset as Int, src.size() as Int, wrapPointer(dstp), wrapOffsets(dst_offs, dstp.offset as Int), wrapCounts(dst_counts));
		}
	 }

	public def alltoall[T](src:MemoryChunk[T], dst:MemoryChunk[T]) : void {
		val role = base.role()(0);
		if(src.size() != dst.size())
			throw new IllegalArgumentException("src.size() != dst.size()");
		
		@Ifdef("__CPP__") {
			finish nativeAlltoall[T](base.id(), role, src, dst, (src.size() / base.size()) as Int);
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.alltoall(role, wrapPointer(srcp), srcp.offset as Int, wrapPointer(dstp), dstp.offset as Int, (src.size() / base.size()) as Int);
		}
	 }

	public def alltoallv[T] (src:MemoryChunk[T], src_offs:MemoryChunk[Int], src_counts:MemoryChunk[Int], dst:MemoryChunk[T], dst_offs:MemoryChunk[Int], dst_counts:MemoryChunk[Int]) : void {
		val role = base.role()(0);
		
		@Ifdef("__CPP__") {
			finish nativeAlltoallv[T](base.id(), role, src, src_offs, src_counts, dst, dst_offs, dst_counts);
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.alltoallv(role, wrapPointer(srcp), wrapOffsets(src_offs, srcp.offset as Int), wrapCounts(src_counts),
					wrapPointer(dstp), wrapOffsets(dst_offs, dstp.offset as Int), wrapCounts(dst_counts));
		}
	 }

	public def allreduce[T](src:MemoryChunk[T], dst:MemoryChunk[T], op:Int) : void {
		val role = base.role()(0);
		if(src.size() != dst.size())
			throw new IllegalArgumentException("src.size() != dst.size()");
		
		@Ifdef("__CPP__") {
			finish nativeAllreduce[T](base.id(), role, src, dst, src.size() as Int, op);
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.allreduce(role, wrapPointer(srcp), srcp.offset as Int, wrapPointer(dstp), dstp.offset as Int, src.size() as Int, op);
		}
	 }
	
	/** (Not implemented) 
	 */
	public def reduce[T](src:MemoryChunk[T], dst:MemoryChunk[T], op:Int) : void {
		// TODO:
	}
	
	/* utility methods */
	
	public static def countOffsets[T](counts :MemoryChunk[T], offsets :MemoryChunk[T], initialValue :T) {T <: Arithmetic[T]} {
		if(counts.size() + 1 != offsets.size())
			throw new IllegalArgumentException();
		
		offsets(0) = initialValue;
		for(i in counts.range()){
			offsets(i + 1) = offsets(i) + counts(i);
		}
	}
}
