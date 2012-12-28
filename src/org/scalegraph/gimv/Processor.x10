package org.scalegraph.gimv;

import org.scalegraph.graph.DistSparseMatrix;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.concurrent.Team2;
import org.scalegraph.id.IdStruct;
import org.scalegraph.util.GrowableMemory;

public class Processor {
	
	private static class Buffer[U] {
		public dstv : MemoryChunk[U]; // destination vector (length: local size for each place)
		public refv : MemoryChunk[U]; // referece vector (length: local R size for each place)
		public tmpsv : MemoryChunk[U]; // temporary vector for sending (length: local C size for each place)
		public tmprv : MemoryChunk[U]; // temporary vector for receiving (length: local C size for each place)
		
		public def this(ids : IdStruct) {
			val localsize = 1L << ids.lgl;
			val localRsize = 1L << (ids.lgl + ids.lgr);
			val localCsize = 1L << (ids.lgl + ids.lgc);
			this.dstv = new MemoryChunk[U](localsize);
			this.refv = new MemoryChunk[U](localRsize);
			this.tmpsv = new MemoryChunk[U](localCsize);
			this.tmprv = new MemoryChunk[U](localCsize);
		}
	}
	
	/** 
	 * T: weight, U: vector
	 */ 
	public static def main[T, U](
			matrix : DistSparseMatrix,
			weight : DistMemoryChunk[T],
			vector : DistMemoryChunk[U],
			map : (T, U)=>U,
			combine : (Long, MemoryChunk[U])=>U,
			assign : (Long, U, U)=>U,
			converge : (MemoryChunk[U], MemoryChunk[U])=>U,
			end : (U)=>Boolean)
	{
		val allTeam = Team2(matrix.dist().allTeam());
		val buffers = PlaceLocalHandle.make[Buffer[U]](allTeam.placeGroup(), () => new Buffer[U](matrix.ids()));
		
		allTeam.placeGroup().broadcastFlat(() => {
			val dist = matrix.dist();
			val ids = matrix.ids();
			val R = dist.R();
			val C = dist.C();
			val localsize = 1L << ids.lgl;
			val localRsize = 1L << (ids.lgl + ids.lgr);
			val localCsize = 1L << (ids.lgl + ids.lgc);
			val rank = dist.allTeam().getRole(here);
			val size = dist.allTeam().size();
			val b = buffers();
			val m = matrix();
			val w = weight();
			val v = vector();
			val columnTeam = Team2(matrix.dist().columnTeam());
			val rowTeam = Team2(matrix.dist().rowTeam());
			val map_tmp = new GrowableMemory[U](0);
			val convergence = new MemoryChunk[U](1);
			
			for(loop in 0..9) {
			//while(true) {
				// expand
				columnTeam.allgather(v, b.refv);
				
				for(i in 0L..(localCsize-1)) {
					val off = m.offsets(i);
					val next = m.offsets(i+1);
					val len = next - off;
					map_tmp.setSize(len);
					// map
					for(j in 0L..(len-1)) {
						map_tmp(j) = map(w(j+off), b.refv(m.vertexes(j+off)));
					}
					// convert local+C to roundrobin
					
					// combine partial result
					b.tmpsv(i) = combine(i, map_tmp.data());
				}
				
				// fold
				rowTeam.alltoall(b.tmpsv, b.tmprv);
				
				map_tmp.setSize(C);
				for(i in 0L..(localsize-1)) {
					for(j in 0L..(C-1)) {
						map_tmp(j) = b.tmprv(i + j*C);
					}
					// combine final result
					b.dstv(i) = combine(i * size + rank, map_tmp.data());
				}
				
				// converge
				map_tmp.setSize(1);
				map_tmp(0) = converge(v, b.dstv);
				allTeam.allgather(map_tmp.data(), convergence);
				
				// finish ?
				if(end(convergence(0))) {
					break;
				}
				
				// assign
				for(i in 0L..(localsize-1)) {
					// old -> new
					v(i) = assign(i * size + rank, v(i), b.dstv(i));
				}
			}
		});
	}
}