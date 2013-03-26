package org.scalegraph.xpregel.comm;
import org.scalegraph.xpregel.ComputationInterface;
import org.scalegraph.xpregel.Vertex;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.xpregel.VertexIdStruct;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.xpregel.Vertex;
import org.scalegraph.xpregel.XContext;

public class SendInEdgeCommunication[V,E] implements ComputationInterface[V,E,Tuple2[Long,E],Double]{
		
	public def do_computation(vertex:Vertex[V,E],messages:MemoryChunk[Tuple2[Long,Tuple2[Long,E]]],_appContext:XContext[Tuple2[Long,E],Double]):void {
    // TODO: auto-generated method stub
		val _context = vertex.getContext();
		val edges = new GrowableMemory[Long]();
		val edgesValue = new GrowableMemory[E]();
		vertex.getEdgesId(true,edges);
		vertex.getEdgesValue(true,edgesValue);
		if (_context.getSuperStep() == 0L) { // send its srcID to neighbors
			if (edges.size() > 0) {
				for (index in edges.range()) {
					val tuple = new Tuple2[Long,E](vertex.getVertexId(),edgesValue(index));
					_appContext.putMessage(edges(index),tuple);
				}
			}
		}
		edges.del();
		edgesValue.del();
	}


}