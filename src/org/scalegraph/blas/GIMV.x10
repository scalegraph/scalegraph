package org.scalegraph.blas;

import x10.compiler.Inline;
import x10.util.Team;
import x10.util.Ordered;

import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.util.Team2;
import org.scalegraph.util.Parallel;

public class GIMV {
	
	private static struct Buffer[U] {
		public dstv : MemoryChunk[U]; // destination vector (length: local size for each place)
		public refv : MemoryChunk[U]; // referece vector (length: local R size for each place)
		public tmpsv : MemoryChunk[U]; // temporary vector for sending (length: local C size for each place)
		public tmprv : MemoryChunk[U]; // temporary vector for receiving (length: local C size for each place)
	
		public def this() {
			this.dstv = new MemoryChunk[U](0);
			this.refv = new MemoryChunk[U](0);
			this.tmpsv = new MemoryChunk[U](0);
			this.tmprv = new MemoryChunk[U](0);
		}
		
		public def this(ids : IdStruct, twod :Boolean) {
			val localsize = 1L << ids.lgl;
			val localRsize = 1L << (ids.lgl + ids.lgr);
			val localCsize = 1L << (ids.lgl + ids.lgc);
			this.dstv = new MemoryChunk[U](localsize);
			this.refv = new MemoryChunk[U](localRsize);
			if(twod) {
				this.tmpsv = new MemoryChunk[U](localCsize);
				this.tmprv = new MemoryChunk[U](localCsize);
			}
			else {
				this.tmpsv = new MemoryChunk[U](0);
				this.tmprv = new MemoryChunk[U](0);
			}
		}
	}
	
	/** 
	 * T: weight, U: vector
	 */ 
	public static @Inline def main2DCSR[T, U](
			matrix : DistSparseMatrix[Long],
			weight : DistMemoryChunk[T],
			vector : DistMemoryChunk[U],
			map : (T, U)=>U,
			combine : (Long, MemoryChunk[U])=>U,
			assign : (Long, U, U)=>U,
			end : (U)=>Boolean)
			{ U <: Arithmetic[U], U <: Ordered[U], U haszero }
	{
		val allTeam = Team2(matrix.dist().allTeam());
		val buffers = PlaceLocalHandle.make[Cell[Buffer[U]]](allTeam.placeGroup(),
				() => new Cell(Buffer[U](matrix.ids(), true)));
		
		allTeam.placeGroup().broadcastFlat(() => {
			val dist = matrix.dist();
			val ids = matrix.ids();
			val R = dist.R();
			val C = dist.C();
			val localsize = 1L << ids.lgl;
			val localRsize = 1L << (ids.lgl + ids.lgr);
			val localCsize = 1L << (ids.lgl + ids.lgc);
			val rank = dist.allTeam().role()(0);
			val size = dist.allTeam().size();
			val b = buffers()();
			val m = matrix();
			val w = weight();
			val v = vector();
			val columnTeam = Team2(matrix.dist().columnTeam());
			val rowTeam = Team2(matrix.dist().rowTeam());
			val map_tmp_array = new Array[GrowableMemory[U]](Runtime.NTHREADS, (Int)=>new GrowableMemory[U](0));
			val convergence = new MemoryChunk[U](1);
			
			// superstep loop
			for(loop in 0..39) {
			//while(true) {
				
				if(here.id == 0) Console.OUT.println("superstep " + loop + " start");
				
				val start_time = System.currentTimeMillis();
				
				// expand
				columnTeam.allgather(v, b.refv);
				
				if(here.id == 0) Console.OUT.println("superstep " + loop + " processing map ...");
				
				Parallel.iter(0L..(localCsize-1), (tid :Long, range :LongRange) => {
					val tmp = map_tmp_array(tid as Int);
					
					val localMask = localsize - 1;
					val lgl = ids.lgl;
					val lgr = ids.lgr;
					val lgc = ids.lgc;
					val dist_r = dist.r();
					
					for(i in range) {
						val off = m.offsets(i);
						val next = m.offsets(i+1);
						val len = next - off;
						tmp.setSize(len);
						// map
						for(j in 0L..(len-1)) {
							tmp(j) = map(w(j+off), b.refv(m.vertexes(j+off)));
						}
						// convert local+C to roundrobin
						val rr = ((((i & localMask) << lgc) | (i >> lgl)) << lgr) | dist_r;
						// combine partial result
						b.tmpsv(i) = combine(rr, tmp.raw());
					}
				});
				
				if(here.id == 0) Console.OUT.println("superstep " + loop + " communicating ...");
				
				// fold
				rowTeam.alltoall(b.tmpsv, b.tmprv);
				
				Parallel.iter(0L..(localsize-1), (tid :Long, r :LongRange) => {
					val tmp = map_tmp_array(tid as Int);
					tmp.setSize(C);
					for(i in r) {
						for(j in 0L..(C-1L)) {
							tmp(j) = b.tmprv(i + j*localsize);
						}
						// combine final result
						b.dstv(i) = combine(i * size + rank, tmp.raw());
					}
				});

				if(here.id == 0) Console.OUT.println("superstep " + loop + " assign ...");

				// assign
				val tmpResult = map_tmp_array(0);
				tmpResult.setSize(Runtime.NTHREADS);
				Parallel.iter(0L..(localsize-1), (tid :Long, r :LongRange) => {
					var tmpSum :U = Zero.get[U]();
					for(i in r) {
						// old -> new
						val newVal = assign(i * size + rank, v(i), b.dstv(i));
						tmpSum += MathAppend.abs(v(i) - newVal);
						v(i) = newVal;
					}
					tmpResult(tid) = tmpSum;
				});
				
				if(here.id == 0) Console.OUT.println("superstep " + loop + " gathering results ...");
				
				// converge
				for(i in 1..(tmpResult.size()-1)) {
					tmpResult(0L) += tmpResult(i);
				}
				tmpResult.setSize(1);
				allTeam.allreduce(tmpResult.raw(), convergence, Team.ADD);

				if(here.id == 0) Console.OUT.println("superstep " + loop + " convergence: " + convergence(0));
				
				val end_time = System.currentTimeMillis();
				
				if(here.id == 0) Console.OUT.println("superstep " + loop + " finished TIME: " + (end_time - start_time) + " ms");

				// finish ?
				if(end(convergence(0))) {
					break;
				}
			}
			
			// release memory
			buffers()() = Buffer[U]();
		});
		
		Console.OUT.println("gimv finished");
	}
	
	/** 
	 * T: weight, U: vector
	 */ 
	public static @Inline def main1DCSR[T, U](
			matrix : DistSparseMatrix[Long],
			weight : DistMemoryChunk[T],
			vector : DistMemoryChunk[U],
			map : (T, U)=>U,
			combine : (Long, MemoryChunk[U])=>U,
			assign : (Long, U, U)=>U,
			end : (U)=>Boolean)
			{ U <: Arithmetic[U], U <: Ordered[U], U haszero }
	{
		val team = Team2(matrix.dist().allTeam());
		val buffers = PlaceLocalHandle.make[Cell[Buffer[U]]](team.placeGroup(),
				() => new Cell(Buffer[U](matrix.ids(), false)));
		
		team.placeGroup().broadcastFlat(() => {
			val dist = matrix.dist();
			val ids = matrix.ids();
			val localsize = 1L << ids.lgl;
			val rank = team.base.role()(0);
			val size = team.base.size();
			val b = buffers()();
			val m = matrix();
			val w = weight();
			val v = vector();
			val map_tmp = new GrowableMemory[U](0);
			val map_tmp_array = new Array[GrowableMemory[U]](Runtime.NTHREADS, (Int)=>new GrowableMemory[U](0));
			val convergence = new MemoryChunk[U](1);
			
			// superstep loop
			for(loop in 0..39) {
				//while(true) {
				
				if(here.id == 0) Console.OUT.println("superstep " + loop + " start");
				
				val start_time = System.currentTimeMillis();
				
				if(here.id == 0) Console.OUT.println("superstep " + loop + " processing map ...");
				
				team.allgather(v, b.refv);
				
				Parallel.iter(0L..(localsize-1), (tid :Long, range :LongRange) => {
					val tmp = map_tmp_array(tid as Int);
					for(i in range) {
						val off = m.offsets(i);
						val next = m.offsets(i+1);
						val len = next - off;
						if(len > 0) {
							tmp.setSize(len);
							// map
							for(j in 0L..(len-1)) {
								tmp(j) = map(w(j+off), b.refv(m.vertexes(j+off)));
							}
							// combine result
							b.dstv(i) = combine(i * size + rank, tmp.raw());
						}
					}
				});

				if(here.id == 0) Console.OUT.println("superstep " + loop + " assign ...");
				
				// assign
				val tmpResult = map_tmp_array(0);
				tmpResult.setSize(Runtime.NTHREADS);
				Parallel.iter(0L..(localsize-1), (tid :Long, r :LongRange) => {
					var tmpSum :U = Zero.get[U]();
					for(i in r) {
						// old -> new
						val newVal = assign(i * size + rank, v(i), b.dstv(i));
						tmpSum += MathAppend.abs(v(i) - newVal);
						v(i) = newVal;
					}
					tmpResult(tid) = tmpSum;
				});

				if(here.id == 0) Console.OUT.println("superstep " + loop + " gathering results ...");
				
				// converge
				for(i in 1..(tmpResult.size()-1)) {
					tmpResult(0L) += tmpResult(i);
				}
				tmpResult.setSize(1);
				team.allreduce(tmpResult.raw(), convergence, Team.ADD);
				
				if(here.id == 0) Console.OUT.println("superstep " + loop + " convergence: " + convergence(0));
				
				val end_time = System.currentTimeMillis();
				
				if(here.id == 0) Console.OUT.println("superstep " + loop + " finished TIME: " + (end_time - start_time) + " ms");

				// finish ?
				if(end(convergence(0))) {
					break;
				}
			}
			
			// release memory
			buffers()() = Buffer[U]();
		});
		
		Console.OUT.println("gimv finished");
	}
}
