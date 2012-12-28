package org.scalegraph.gimv;

import org.scalegraph.graph.DistSparseMatrix;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.concurrent.Team2;
import org.scalegraph.id.IdStruct;
import org.scalegraph.util.GrowableMemory;

public class Processor {
	
	private static class Buffer[U] {
		public dstv : MemoryChunk[U]; // destination vector
		public refv : MemoryChunk[U]; // referece vector
		public tmpv : MemoryChunk[U]; // temporary vector
		
		public def this(ids : IdStruct) {
			val localsize = 1L << ids.lgl;
			val localRsize = 1L << (ids.lgl + ids.lgr);
			val localCsize = 1L << (ids.lgl + ids.lgc);
			this.dstv = new MemoryChunk[U](localsize);
			this.refv = new MemoryChunk[U](localRsize);
			this.tmpv = new MemoryChunk[U](localCsize);
		}
	}
	
	/** 
	 * T: weight, U: vector
	 */ 
	public static def main[T, U](
			matrix : DistSparseMatrix,
			weight : DistMemoryChunk[T],
			iv : DistMemoryChunk[U],
			map : (T, U)=>U,
			combine : (Long, MemoryChunk[U])=>U,
			assign : (Long, U, U)=>U)
	{
		val allTeam = matrix.dist().allTeam();
		val buffers = PlaceLocalHandle.make[Buffer[U]](allTeam.placeGroup(), () => new Buffer[U](matrix.ids()));
		
		allTeam.placeGroup().broadcastFlat(() => {
			val b = buffers();
			val m = matrix();
			val w = weight
			val columnTeam = Team2(matrix.dist().columnTeam());
			val rowTeam = Team2(matrix.dist().rowTeam());
			val map_tmp = new GrowableMemory[U](0);
			
			while(true) {
				// expand
				columnTeam.allgather(iv(), b.refv);
				
				// map
				for(i in b.tmpv.range()) {
					val off = m.offsets(i);
					val next = m.offsets(i+1);
					val len = next - off;
					map_tmp.setSize(len);
					for(j in map_tmp.range()) {
						map_tmp(j) = map(
					}
				}
				
				// combine
				
				// fold
				
				// assign
				
				// finish ?
			}
		});
	}
}