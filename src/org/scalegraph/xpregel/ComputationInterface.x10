package org.scalegraph.xpregel;
import org.scalegraph.xpregel.Vertex;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.Tuple2;

public interface ComputationInterface[M] {
	
	public def do_computation(vertex:Vertex,messages:MemoryChunk[M]):MemoryChunk[Tuple2[Long,M]];
}