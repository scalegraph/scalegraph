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
import x10.xrx.Runtime;
import org.scalegraph.Config;
import x10.compiler.Native;
import x10.compiler.Inline;
import x10.compiler.Ifdef;
import x10.compiler.Ifndef;

import x10.util.Team;
import org.scalegraph.util.MemoryPointer;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.Tuple2;

// TODO: range check

/** Team2 provides the collectives for MemoryChunk. Currently Team2 only support lowest level collectives.
 */
public final struct Team2 {
	
	public val base :Team;
	
	public def this(baseTeam : Team) {
		base = baseTeam;
	}

	public @Inline def role() = base.role()(0);
	public @Inline def size() = base.size();
	public @Inline def places() = base.places();
	public @Inline def placeGroup() = base.placeGroup();
	
	public def barrier () : void {
		base.barrier();//role());
	}
	
	/* native methods */
	
	private static def nativeScatter[T] (id:Int, role:Int, root:Int, src:MemoryChunk[T], dst:MemoryChunk[T], count :Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_scatter(id, role, root, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1n); // for MPI transport
	}

	private static def nativeScatterv[T] (id:Int, role:Int, root:Int, src:MemoryChunk[T], src_offs:MemoryChunk[Int], src_counts:MemoryChunk[Int], dst:MemoryChunk[T], dst_count:Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_scatterv(id, role, root, src->pointer(), src_offs->pointer(), src_counts->pointer(), dst->pointer(), dst_count, sizeof(TPMGL(T)), x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1n); // for MPI transport
	}

	private static def nativeGather[T] (id:Int, role:Int, root:Int, src:MemoryChunk[T], dst:MemoryChunk[T], count:Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_gather(id, role, root, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1n); // for MPI transport
	}

	private static def nativeGatherv[T] (id:Int, role:Int, root:Int, src:MemoryChunk[T], src_count:Int, dst:MemoryChunk[T], dst_offs:MemoryChunk[Int], dst_counts:MemoryChunk[Int]) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_gatherv(id, role, root, src->pointer(), src_count, dst->pointer(), dst_offs->pointer(), dst_counts->pointer(), sizeof(TPMGL(T)), x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1n); // for MPI transport
	}
	
	private static def nativeReduce[T](id:Int, role:Int, root:Int, src:MemoryChunk[T], dst:MemoryChunk[T], count:Int, op:Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_reduce(id, role, root, src->pointer(), dst->pointer(), (x10rt_red_op_type)op, x10rt_get_red_type<TPMGL(T)>(), count, x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1n); // for MPI transport
	}

	private static def nativeBcast[T] (id:Int, role:Int, root:Int, src:MemoryChunk[T], dst:MemoryChunk[T], count:Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_bcast(id, role, root, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1n); // for MPI transport
	}

	private static def nativeAllgather[T](id:Int, role:Int, src:MemoryChunk[T], dst:MemoryChunk[T], count:Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_allgather(id, role, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1n); // for MPI transport
	}

	private static def nativeAllgatherv[T] (id:Int, role:Int, src:MemoryChunk[T], src_count:Int, dst:MemoryChunk[T], dst_offs:MemoryChunk[Int], dst_counts:MemoryChunk[Int]) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_allgatherv(id, role, src->pointer(), src_count, dst->pointer(), dst_offs->pointer(), dst_counts->pointer(), sizeof(TPMGL(T)), x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1n); // for MPI transport
	}

	private static def nativeAlltoall[T](id:Int, role:Int, src:MemoryChunk[T], dst:MemoryChunk[T], count:Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_alltoall(id, role, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1n); // for MPI transport
	}

	private static def nativeAlltoallv[T] (id:Int, role:Int, src:MemoryChunk[T], src_offs:MemoryChunk[Int], src_counts:MemoryChunk[Int], dst:MemoryChunk[T], dst_offs:MemoryChunk[Int], dst_counts:MemoryChunk[Int]) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_alltoallv(id, role, src->pointer(), src_offs->pointer(), src_counts->pointer(), dst->pointer(), dst_offs->pointer(), dst_counts->pointer(), ::org::scalegraph::util::MCData_Impl<TPMGL(T)>::returnSize() /*sizeof(TPMGL(T))*/, x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1n); // for MPI transport
	}

	private static def nativeAllreduce[T](id:Int, role:Int, src:MemoryChunk[T], dst:MemoryChunk[T], count:Int, op:Int) : void {
		Runtime.increaseParallelism(); // for MPI transport
		@Native("c++", "x10rt_allreduce(id, role, src->pointer(), dst->pointer(), (x10rt_red_op_type)op, x10rt_get_red_type<TPMGL(T)>(), count, x10aux::coll_handler, x10aux::coll_enter());") {}
		Runtime.decreaseParallelism(1n); // for MPI transport
	}
	
	/* basic API methods */
	
	@Ifndef("__CPP__")
	private def wrapPointer[T](p :MemoryChunkData[T]) = new Rail[T](p.raw);

	@Ifndef("__CPP__")
	private def inflateOffsets(mc :MemoryChunk[Int], offset :Int) {
		val res = mc.toRail();
		for(i in res.range()) res(i) += offset;
		return res;
	}

	@Ifndef("__CPP__")
	private def wrapOffsets(mc :MemoryChunk[Int], offset :Int) {
		if(offset > 0)
			return inflateOffsets(mc, offset);
		else if(mc.raw().offset > 0)
			return mc.toRail();
		else
			return wrapPointer(mc.raw());
	}

	@Ifndef("__CPP__")
	private def wrapCounts(mc :MemoryChunk[Int]) {
		if(mc.raw().offset > 0)
			return mc.toRail();
		else
			return wrapPointer(mc.raw());
	}
	
	private static def nullChunk[T]() = MemoryChunk[T]();
	
	/** This is equivalent to MPI_scatter
	 * @param root The rank of the place that 
	 */
	public def scatter[T] (root:Int, src:MemoryChunk[T], dst:MemoryChunk[T]) : void {
		val role = base.role()(0);
		if(role == root && src.size() != dst.size() * base.size())
			throw new IllegalArgumentException("src.size() != dst.size()");
		
		@Ifdef("__CPP__") {
			if (Serialization.needToSerialize[T]()) {
				if (role == root) {
					val places = size();
                    val count = dst.size() as Int;
					val src_offs = MemoryChunk.make[Int](places, (i :Long) => (i * count) as Int);
					val src_counts = MemoryChunk.make[Int](places, (i :Long) => count);
					val ser_offs = MemoryChunk.make[Int](places);
					val ser_counts = MemoryChunk.make[Int](places);
					val ser_src = Serialization.serialize(src, src_offs, src_counts, ser_offs, ser_counts);
					val deser_counts = MemoryChunk.make[Int](1);
					finish nativeScatter[Int](base.id(), role, root, ser_counts, deser_counts, 1n);
					val deser_dst = MemoryChunk.make[Byte](deser_counts(0));
					finish nativeScatterv[Byte](base.id(), role, root, ser_src, ser_offs, ser_counts, deser_dst, deser_counts(0));
					Serialization.deserialize(dst, 0n, count, deser_dst, 0n, deser_counts(0));
					src_offs.del();
					src_counts.del();
					ser_offs.del();
					ser_counts.del();
					ser_src.del();
					deser_counts.del();
					deser_dst.del();
				}
				else {
					val deser_counts = MemoryChunk.make[Int](1);
					finish nativeScatter[Int](base.id(), role, root, nullChunk[Int](), deser_counts, 1n);
					val deser_dst = MemoryChunk.make[Byte](deser_counts(0));
					finish nativeScatterv[Byte](base.id(), role, root, nullChunk[Byte](), nullChunk[Int](), nullChunk[Int](), deser_dst, deser_counts(0));
					Serialization.deserialize(dst, 0n, dst.size() as Int, deser_dst, 0n, deser_counts(0));
					deser_counts.del();
					deser_dst.del();
				}
			}
			else {
				finish nativeScatter[T](base.id(), role, root, src, dst, dst.size() as Int);
			}
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.scatter(root, wrapPointer(srcp), srcp.offset, wrapPointer(dstp), dstp.offset, dst.size());
		}
	 }

	/** This is equivalent to MPI_scatterv
	 */
	public def scatterv[T] (root:Int, src:MemoryChunk[T], src_offs:MemoryChunk[Int], src_counts:MemoryChunk[Int], dst:MemoryChunk[T]) : void {
		val role = base.role()(0);
		
		@Ifdef("__CPP__") {
			if (Serialization.needToSerialize[T]()) {
				if (role == root) {
					val places = size();
					val ser_offs = MemoryChunk.make[Int](places);
					val ser_counts = MemoryChunk.make[Int](places);
					val ser_src = Serialization.serialize(src, src_offs, src_counts, ser_offs, ser_counts);
					val deser_counts = MemoryChunk.make[Int](1);
					finish nativeScatter[Int](base.id(), role, root, ser_counts, deser_counts, 1n);
					val deser_dst = MemoryChunk.make[Byte](deser_counts(0));
					finish nativeScatterv[Byte](base.id(), role, root, ser_src, ser_offs, ser_counts, deser_dst, deser_counts(0));
					Serialization.deserialize(dst, 0n, dst.size() as Int, deser_dst, 0n, deser_counts(0));
					ser_offs.del();
					ser_counts.del();
					ser_src.del();
					deser_counts.del();
					deser_dst.del();
				}
				else {
					val deser_counts = MemoryChunk.make[Int](1);
					finish nativeScatter[Int](base.id(), role, root, nullChunk[Int](), deser_counts, 1n);
					val deser_dst = MemoryChunk.make[Byte](deser_counts(0));
					finish nativeScatterv[Byte](base.id(), role, root, nullChunk[Byte](), nullChunk[Int](), nullChunk[Int](), deser_dst, deser_counts(0));
					Serialization.deserialize(dst, 0n, dst.size() as Int, deser_dst, 0n, deser_counts(0));
					deser_counts.del();
					deser_dst.del();
				}
			}
			else {
				finish nativeScatterv[T](base.id(), role, root, src, src_offs, src_counts, dst, dst.size() as Int);
			}
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.scatterv(role, root, wrapPointer(srcp), wrapOffsets(src_offs, srcp.offset as Int), wrapCounts(src_counts), wrapPointer(dstp), dstp.offset as Int, dst.size() as Int);
		}
	 }
	
	/** This is equivalent to MPI_scatterv
	 */
	public def scatterv[T] (root:Int, src:MemoryChunk[T], src_counts:MemoryChunk[Int]) : MemoryChunk[T] {
		val role = base.role()(0);
		val dst_size = MemoryChunk.make[Int](1);
		val src_offs = root == role ? MemoryChunk.make[Int](src_counts.size() + 1) : MemoryChunk.getNull[Int]();
		if(root == role){
			countOffsets(src_counts, src_offs, 0n);
		}
		scatter(root, src_counts, dst_size);
		val dst = MemoryChunk.make[T](dst_size(0));
		scatterv(root, src, src_offs, src_counts, dst);
		return dst;
	}

	/** This is equivalent to MPI_gather
	 */
	public def gather[T] (root:Int, src:MemoryChunk[T], dst:MemoryChunk[T]) : void {
		val role = base.role()(0);
		if(role == root && src.size() * base.size() != dst.size())
			throw new IllegalArgumentException("src.size() != dst.size()");
		
		@Ifdef("__CPP__") {
            if (Serialization.needToSerialize[T]()) {
                if (role == root) {
                    val places = size();
                    val count = src.size() as Int;
                    val ser_src = Serialization.serialize(src, 0n, count);
                    val ser_counts = MemoryChunk.make[Int](1, (i:Long)=>ser_src.size() as Int);
                    val deser_counts = MemoryChunk.make[Int](places);
			    	finish nativeGather[Int](base.id(), role, root, ser_counts, deser_counts, 1n);
                    val deser_offs = MemoryChunk.make[Int](places+1);
                    deser_offs(0) = 0n;
                    for (i in 0..(places-1)) deser_offs(i+1) = deser_counts(i) + deser_offs(i);
                    val deser_dst = MemoryChunk.make[Byte](deser_offs(places));
                    finish nativeGatherv[Byte](base.id(), role, root, ser_src, ser_counts(0), deser_dst, deser_offs, deser_counts);
                    val dst_counts = MemoryChunk.make[Int](places, (i:Long)=>count);
                    val dst_offs = MemoryChunk.make[Int](places, (i :Long) => (i * count) as Int);
                    Serialization.deserialize(dst, dst_offs, dst_counts, deser_dst, deser_offs, deser_counts);
                    ser_src.del();
                    ser_counts.del();
                    deser_counts.del();
                    deser_offs.del();
                    deser_dst.del();
                    dst_counts.del();
                    dst_offs.del();
                }
                else {
                    val count = src.size() as Int;
                    val ser_src = Serialization.serialize(src, 0n, count);
                    val ser_counts = MemoryChunk.make[Int](1, (i:Long)=>ser_src.size() as Int);
	    			finish nativeGather[Int](base.id(), role, root, ser_counts, nullChunk[Int](), 1n);
                    finish nativeGatherv[Byte](base.id(), role, root, ser_src, ser_counts(0), nullChunk[Byte](), nullChunk[Int](), nullChunk[Int]());
                    ser_src.del();
                    ser_counts.del();
                }
            }
            else {
			    finish nativeGather[T](base.id(), role, root, src, dst, src.size() as Int);
		    }
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
            if (Serialization.needToSerialize[T]()) {
                if (role == root) {
                    val places = size();
                    val ser_src = Serialization.serialize(src, 0n, src.size() as Int);
                    val ser_counts = MemoryChunk.make[Int](1, (i:Long)=>ser_src.size() as Int);
                    val deser_counts = MemoryChunk.make[Int](places);
			    	finish nativeGather[Int](base.id(), role, root, ser_counts, deser_counts, 1n);
                    val deser_offs = MemoryChunk.make[Int](places+1);
                    deser_offs(0) = 0n;
                    for (i in 0..(places-1)) deser_offs(i+1) = deser_counts(i) + deser_offs(i);
                    val deser_dst = MemoryChunk.make[Byte](deser_offs(places));
                    finish nativeGatherv[Byte](base.id(), role, root, ser_src, ser_counts(0), deser_dst, deser_offs, deser_counts);
                    Serialization.deserialize(dst, dst_offs, dst_counts, deser_dst, deser_offs, deser_counts);
                    ser_src.del();
                    ser_counts.del();
                    deser_counts.del();
                    deser_offs.del();
                    deser_dst.del();
                }
                else {
                    val ser_src = Serialization.serialize(src, 0n, src.size() as Int);
                    val ser_counts = MemoryChunk.make[Int](1, (i:Long)=>ser_src.size() as Int);
	    			finish nativeGather[Int](base.id(), role, root, ser_counts, nullChunk[Int](), 1n);
                    finish nativeGatherv[Byte](base.id(), role, root, ser_src, ser_counts(0), nullChunk[Byte](), nullChunk[Int](), nullChunk[Int]());
                    ser_src.del();
                    ser_counts.del();
                }
            }
            else {
				finish nativeGatherv[T](base.id(), role, root, src, src.size() as Int, dst, dst_offs, dst_counts);

		    }
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.gatherv(role, root, wrapPointer(srcp), srcp.offset as Int, src.size() as Int, wrapPointer(dstp), wrapOffsets(dst_offs, dstp.offset as Int), wrapCounts(dst_counts));
		}
	 }
	
	public def gatherv[T] (root:Int, src:MemoryChunk[T]) : Tuple2[MemoryChunk[T],MemoryChunk[Int]] {
		val role = base.role()(0);
		val src_size = MemoryChunk.make[Int](1);
		src_size(0) = src.size() as Int;
		
		if(root == role){
			val dst_counts = MemoryChunk.make[Int](size());
			gather(root, src_size, dst_counts);
			var dst_size :Int = 0n;
			for(i in dst_counts.range()){
				dst_size += dst_counts(i);
			}
			val dst = MemoryChunk.make[T](dst_size+5);
			val dst_offs = MemoryChunk.make[Int](dst_counts.size() + 1);
			countOffsets(dst_counts, dst_offs, 0n);
			gatherv(root, src, dst, dst_offs, dst_counts);
			return new Tuple2[MemoryChunk[T],MemoryChunk[Int]](dst, dst_counts);
			
		}
		val nullInt = MemoryChunk.getNull[Int]();
		val nullT = MemoryChunk.getNull[T]();
		gather(root, src_size, nullInt);
		gatherv(root, src, nullT, nullInt, nullInt);
		return new Tuple2[MemoryChunk[T],MemoryChunk[Int]](nullT ,nullInt);		
	}

	public def bcast[T] (root:Int, src:MemoryChunk[T], dst:MemoryChunk[T]) : void {
		val role = base.role()(0);
		if(role == root && src.size() != dst.size())
			throw new IllegalArgumentException("src.size() != dst.size()");
		
		@Ifdef("__CPP__") {
            if (Serialization.needToSerialize[T]()) {
                if (role == root) {
                    val places = size();
                    val count = dst.size() as Int;
                    val ser_src = Serialization.serialize(src, 0n, count);
                    val ser_counts = MemoryChunk.make[Int](1, (i:Long)=>ser_src.size() as Int);
                    val deser_counts = MemoryChunk.make[Int](1);
                    finish nativeBcast[Int](base.id(), role, root, ser_counts, deser_counts, 1n);
                    val deser_dst = MemoryChunk.make[Byte](deser_counts(0));
                    finish nativeBcast[Byte](base.id(), role, root, ser_src, deser_dst, deser_counts(0));
                    Serialization.deserialize(dst, 0n, count, deser_dst, 0n, deser_counts(0));
                    ser_src.del();
                    ser_counts.del();
                    deser_counts.del();
                    deser_dst.del();
                }
                else {
                    val count = dst.size() as Int;
                    val deser_counts = MemoryChunk.make[Int](1);
                    finish nativeBcast[Int](base.id(), role, root, nullChunk[Int](), deser_counts, 1n);
                    val deser_dst = MemoryChunk.make[Byte](deser_counts(0));
                    finish nativeBcast[Byte](base.id(), role, root, nullChunk[Byte](), deser_dst, deser_counts(0));
                    Serialization.deserialize(dst, 0n, count, deser_dst, 0n, deser_counts(0));
                    deser_counts.del();
                    deser_dst.del();
                }
            }
            else {
			    finish nativeBcast[T](base.id(), role, root, src, dst, dst.size() as Int);
            }
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.bcast(root, wrapPointer(srcp), srcp.offset, wrapPointer(dstp), dstp.offset, dst.size());
		}
	 }

	public def allgather[T](src:MemoryChunk[T], dst:MemoryChunk[T]) : void {
		val role = base.role()(0);
		if(src.size() * base.size() != dst.size())
			throw new IllegalArgumentException("src.size() != dst.size()");
		
		@Ifdef("__CPP__") {
            if (Serialization.needToSerialize[T]()) {
                val places = size();
                val count = src.size() as Int;
                val ser_src = Serialization.serialize(src, 0n, count);
                val ser_counts = MemoryChunk.make[Int](1, (i:Long)=>ser_src.size() as Int);
                val deser_counts = MemoryChunk.make[Int](places);
                finish nativeAllgather[Int](base.id(), role, ser_counts, deser_counts, 1n);
                val deser_offs = MemoryChunk.make[Int](places + 1);
                deser_offs(0) = 0n;
                for (i in 0..(places-1)) deser_offs(i+1) = deser_counts(i) + deser_offs(i);
                val deser_dst = MemoryChunk.make[Byte](deser_offs(places));
                finish nativeAllgatherv[Byte](base.id(), role, ser_src, ser_counts(0), deser_dst, deser_offs, deser_counts);
                val dst_offs = MemoryChunk.make[Int](places, (i :Long) => (i * count) as Int);
                val dst_counts = MemoryChunk.make[Int](places, (i:Long)=>count);
                Serialization.deserialize(dst, dst_offs, dst_counts, deser_dst, deser_offs, deser_counts);
                ser_src.del();
                ser_counts.del();
                deser_counts.del();
                deser_offs.del();
                deser_dst.del();
                dst_offs.del();
                dst_counts.del();
            }
            else {
                finish nativeAllgather[T](base.id(), role, src, dst, src.size() as Int);
            }
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
            if (Serialization.needToSerialize[T]()) {
                val places = size();
                val src_count = src.size() as Int;
                val ser_src = Serialization.serialize(src, 0n, src_count);
                val ser_counts = MemoryChunk.make[Int](1, (i:Long)=>ser_src.size() as Int);
                val deser_counts = MemoryChunk.make[Int](places);
                finish nativeAllgather[Int](base.id(), role, ser_counts, deser_counts, 1n);
                val deser_offs = MemoryChunk.make[Int](places + 1);
                deser_offs(0) = 0n;
                for (i in 0..(places-1)) deser_offs(i+1) = deser_counts(i) + deser_offs(i);
                val deser_dst = MemoryChunk.make[Byte](deser_offs(places));
                finish nativeAllgatherv[Byte](base.id(), role, ser_src, ser_counts(0), deser_dst, deser_offs, deser_counts);
                Serialization.deserialize(dst, dst_offs, dst_counts, deser_dst, deser_offs, deser_counts);
                ser_src.del();
                ser_counts.del();
                deser_counts.del();
                deser_offs.del();
                deser_dst.del();
            }
            else {
			    finish nativeAllgatherv[T](base.id(), role, src, src.size() as Int, dst, dst_offs, dst_counts);
            }
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.allgatherv(role, wrapPointer(srcp), srcp.offset as Int, src.size() as Int, wrapPointer(dstp), wrapOffsets(dst_offs, dstp.offset as Int), wrapCounts(dst_counts));
		}
	 }
	
	public def allgatherv[T] (src:MemoryChunk[T]) : Tuple2[MemoryChunk[T],MemoryChunk[Int]]  {
		val role = base.role()(0);
		val src_size = MemoryChunk.make[Int](1);
		val dst_counts = MemoryChunk.make[Int](size());
		src_size(0) = src.size() as Int;
		allgather(src_size, dst_counts);
		var dst_size :Int = 0n;
		for(i in dst_counts.range()){
			dst_size += dst_counts(i);
		}
		val dst = MemoryChunk.make[T](dst_size);
		val dst_offs = MemoryChunk.make[Int](dst_counts.size() + 1);
		countOffsets(dst_counts, dst_offs, 0n);
		allgatherv(src, dst, dst_offs, dst_counts);
		return new Tuple2[MemoryChunk[T],MemoryChunk[Int]](dst, dst_counts);
	}

	public def alltoall[T](src:MemoryChunk[T], dst:MemoryChunk[T]) : void {
		val role = base.role()(0);
		if(src.size() != dst.size())
			throw new IllegalArgumentException("src.size() != dst.size()");
		
		@Ifdef("__CPP__") {
			if (Serialization.needToSerialize[T]()) {
				val places = size();
                val count = (src.size() / places) as Int;
				val src_counts = MemoryChunk.make[Int](places, (i:Long)=>count);
				val src_offs = MemoryChunk.make[Int](places, (i :Long) => (i * count) as Int);
				val ser_offs = MemoryChunk.make[Int](places);
				val ser_counts = MemoryChunk.make[Int](places);
				val ser_src = Serialization.serialize(src, src_offs, src_counts, ser_offs, ser_counts);
				val deser_counts = MemoryChunk.make[Int](places);
				finish nativeAlltoall[Int](base.id(), role, ser_counts, deser_counts, 1n);
				val deser_offs = MemoryChunk.make[Int](places + 1);
				deser_offs(0) = 0n;
				for (i in 0..(places-1)) deser_offs(i+1) = deser_counts(i) + deser_offs(i);
				val deser_dst = MemoryChunk.make[Byte](deser_offs(places));
				finish nativeAlltoallv[Byte](base.id(), role, ser_src, ser_offs, ser_counts, deser_dst, deser_offs, deser_counts);
				val dst_counts = MemoryChunk.make[Int](places, (i:Long)=>count);
				val dst_offs = MemoryChunk.make[Int](places + 1);
				dst_offs(0) = 0n;
				for (i in 0..(places-1)) dst_offs(i+1) = dst_counts(i) + dst_offs(i);
				Serialization.deserialize(dst, dst_offs, dst_counts, deser_dst, deser_offs, deser_counts);
                src_counts.del();
                src_offs.del();
                ser_counts.del();
                ser_offs.del();
                ser_src.del();
                deser_counts.del();
                deser_offs.del();
                deser_dst.del();
                dst_counts.del();
                dst_offs.del();
			}
			else {
				finish nativeAlltoall(base.id(), role, src, dst, (src.size() / base.size()) as Int);
			}
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			//base.alltoallwrapPointer(srcp, srcp.offset, wrapPointer(dstp), dstp.offset, (src.size() / base.size()));
			//base.alltoallwrapPointer(src.toRail(), srcp.offset, wrapPointer(dstp), dstp.offset, (src.size() / base.size()));
			Console.OUT.println("alltoallwrapPointer does not exist");
			assert(false);
		}
	 }

	public def alltoallv[T] (src:MemoryChunk[T], src_offs:MemoryChunk[Int], src_counts:MemoryChunk[Int], dst:MemoryChunk[T], dst_offs:MemoryChunk[Int], dst_counts:MemoryChunk[Int]) : void {
		val role = base.role()(0);
		
		@Ifdef("__CPP__") {
			if (Serialization.needToSerialize[T]()) {
				val sw = Config.get().stopWatch();
				val places = size();
				val ser_offs = MemoryChunk.make[Int](places);
				val ser_counts = MemoryChunk.make[Int](places);
				val ser_src = Serialization.serialize(src, src_offs, src_counts, ser_offs, ser_counts);
				val deser_counts = MemoryChunk.make[Int](places);
				finish nativeAlltoall[Int](base.id(), role, ser_counts, deser_counts, 1n);
				val deser_offs = MemoryChunk.make[Int](places + 1);
				countOffsets(deser_counts, deser_offs, 0n);
				val deser_dst = MemoryChunk.make[Byte](deser_offs(places));
				finish nativeAlltoallv[Byte](base.id(), role, ser_src, ser_offs, ser_counts, deser_dst, deser_offs, deser_counts);
				Serialization.deserialize(dst, dst_offs, dst_counts, deser_dst, deser_offs, deser_counts);
                ser_counts.del();
                ser_offs.del();
                ser_src.del();
                deser_counts.del();
                deser_offs.del();
                deser_dst.del();

			}
			else {
				finish nativeAlltoallv(base.id(), role, src, src_offs, src_counts, dst, dst_offs, dst_counts);
			}
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.alltoallv(role, wrapPointer(srcp), wrapOffsets(src_offs, srcp.offset as Int), wrapCounts(src_counts),
					wrapPointer(dstp), wrapOffsets(dst_offs, dstp.offset as Int), wrapCounts(dst_counts));
		}
	 }
	
	public def alltoallv[T] (src:MemoryChunk[T], src_counts:MemoryChunk[Int]) : Tuple2[MemoryChunk[T],MemoryChunk[Int]] {
		val role = base.role()(0);
		val src_offs = MemoryChunk.make[Int](src_counts.size() + 1);
		countOffsets(src_counts, src_offs, 0n);
		val dst_counts = MemoryChunk.make[Int](size());
		alltoall(src_counts, dst_counts);
		var dst_size :Int = 0n;
		for(i in dst_counts.range()){
			dst_size += dst_counts(i);
		}
		val dst = MemoryChunk.make[T](dst_size);
		val dst_offs = MemoryChunk.make[Int](dst_counts.size() + 1);
		countOffsets(dst_counts, dst_offs, 0n);
		alltoallv(src, src_offs, src_counts, dst, dst_offs, dst_counts);
		return new Tuple2[MemoryChunk[T],MemoryChunk[Int]](dst, dst_counts);
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
			base.allreduce(wrapPointer(srcp), srcp.offset, wrapPointer(dstp), dstp.offset, src.size(), op);
		}
	 }
	
	public def allreduce[T](src:T, op:Int) : T {
		val src_ = MemoryChunk.make[T](1);
		val dst = MemoryChunk.make[T](1);
		src_(0) = src;
		allreduce(src_, dst, op);
		return dst(0);
	}
	
	public def reduce[T](root:Int, src:MemoryChunk[T], dst:MemoryChunk[T], op:Int) : void {
		val role = base.role()(0);
		if(role == root && src.size() != dst.size())
			throw new IllegalArgumentException("src.size() != dst.size()");
		
		@Ifdef("__CPP__") {
			finish nativeReduce[T](base.id(), role, root, src, dst, src.size() as Int, op);
		}
		@Ifndef("__CPP__") {
			val srcp = src.raw();
			val dstp = dst.raw();
			base.reduce(root, wrapPointer(srcp), srcp.offset, wrapPointer(dstp), dstp.offset, src.size(), op);
		}
	}
	
	public def reduce[T](root:Int, src:T, op:Int) : T {
		val src_ = MemoryChunk.make[T](1);
		val dst = MemoryChunk.make[T](1);
		src_(0) = src;
		reduce(root, src_, dst, op);
		return dst(0);
	}
	
	/* statistics */
	
	public def printMemoryConsumption() {
		
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
	
	public static def getCounts[T](offsets :MemoryChunk[T]) {T <: Arithmetic[T]} :MemoryChunk[T] {
		if(offsets.size() == 0L)
			throw new IllegalArgumentException();
		val counts = MemoryChunk.make[T](offsets.size()-1);
		for(i in offsets.range()){
			counts(i) = offsets(i + 1) - offsets(i);
		}
		return counts;
	}
	
}
