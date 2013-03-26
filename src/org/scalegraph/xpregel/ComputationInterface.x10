package org.scalegraph.xpregel;
import org.scalegraph.xpregel.Vertex;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.GrowableMemory;

public interface ComputationInterface[V,E,M,A] {
	public def do_computation(vertex:Vertex[V,E],messages:MemoryChunk[Tuple2[Long,M]],_appContext:XContext[M,A]):void;
}