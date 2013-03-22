package org.scalegraph.xpregel.comm;
import org.scalegraph.xpregel.ComputationInterface;
import org.scalegraph.xpregel.Vertex;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.xpregel.VertexIdStruct;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.xpregel.Vertex;
import org.scalegraph.xpregel.XContext;

public class SendInEdgeCommunication[V,E] implements ComputationInterface[Long,Double]{
		
	public def do_computation(vertex:Vertex[V,E],messages:MemoryChunk[Tuple2[Long,Long]],_appContext:XContext[Long,Double]):void {
    // TODO: auto-generated method stub
		val _context = vertex.getContext();
		val edges = new GrowableMemory[Long]();
		vertex.getEdgesId(true,edges);
		if (messages.size() == 0L) { // send its srcID to neighbors
			if (edges.size() > 0) {
				for (index in edges.range()) {
					_appContext.putMessage(edges(index),vertex.getVertexId());
				}
			}
		}else {		// refresh it's InEdges
			val inEdges = new MemoryChunk[Tuple2[Long,Double]](messages.size());
			for (index in messages.range()) {
				val tuple = new Tuple2[Long,Double](messages(index).get2(),1.0);
				inEdges(index) = tuple;
			}
			vertex.clearAllEdges(false);
			vertex.addEdges[Double](inEdges,false);
		}
	}


}