package org.scalegraph.io;

import x10.compiler.Ifdef;
import x10.compiler.Inline;

import x10.util.Team;

import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.*;


public class Common {
	
	public static @Inline def align(addr : Int, length : Int) : Int = (addr + (length - 1)) & ~(length - 1);
	
	public static @Inline def align(addr : Long, length : Int) : Long = (addr + (length as Long - 1L)) & ~(length as Long - 1L);
	
	public static def split[T](mc : MemoryChunk[T]) : Tuple2[MemoryChunk[T], MemoryChunk[T]] {
		assert(mc.size() % 2L == 0L);
		val halfSize = mc.size() / 2L;
		val result = new MemoryChunk[T](mc.size());
		for(var i:Long = 0L; i < mc.size(); i++) {
			val index = (i / 2L) + (i % 2L) * (halfSize);
			result(index) = mc(i);
		}
		return Tuple2[MemoryChunk[T], MemoryChunk[T]](result.subpart(0L, halfSize), result.subpart(halfSize, halfSize));
	}
	
	public static def split[T](team : Team, dmc : DistMemoryChunk[T]) : Tuple2[DistMemoryChunk[T], DistMemoryChunk[T]] {
		val plh = PlaceLocalHandle.make[Cell[Tuple2[MemoryChunk[T], MemoryChunk[T]]]](team.placeGroup(), () => new Cell(split[T](dmc())));
		val dmc1 = new DistMemoryChunk[T](team.placeGroup(), () => plh()().get1());
		val dmc2 = new DistMemoryChunk[T](team.placeGroup(), () => plh()().get2());
		return Tuple2[DistMemoryChunk[T], DistMemoryChunk[T]](dmc1, dmc2);
	}
	
	public static def merge[T](mc1 : MemoryChunk[T], mc2 : MemoryChunk[T]) : MemoryChunk[T] {
		assert(mc1.size() == mc2.size());
		val mc = new MemoryChunk[T](mc1.size() + mc2.size());
		for(var i:Long = 0L; i < mc1.size(); i++) {
			mc(i * 2L) = mc1(i);
		}
		for(var i:Long = 0L; i < mc2.size(); i++) {
			mc(i * 2L + 1L) = mc2(i);
		}
		return mc;
	}
	
	public static def merge[T](team : Team, dmc1 : DistMemoryChunk[T], dmc2 : DistMemoryChunk[T]) : DistMemoryChunk[T] {
		return new DistMemoryChunk[T](team.placeGroup(), () => merge[T](dmc1(), dmc2()));
	}
	
	
	public static @Inline def debugprint(str : String) {
		@Ifdef("DEBUG") {
			Console.OUT.println(str);
		}
	}
}