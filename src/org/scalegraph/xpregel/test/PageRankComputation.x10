package org.scalegraph.xpregel.test;
import org.scalegraph.xpregel.ComputationInterface;
import org.scalegraph.xpregel.Vertex;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.xpregel.XContext;

public class PageRankComputation implements ComputationInterface[Double,Double,Double,Double]{
	
	public def do_computation(var vertex:Vertex[Double,Double], var messages:MemoryChunk[Tuple2[Long, Double]],_appContext:XContext[Double,Double]):void {
		val c = 0.15;
		
		val _context = vertex.getContext();
		var sum : Double = 0.0;
		val superstep = _context.getSuperStep();
		
		if (superstep > 30) {
			vertex.voteToHalt();
		}
		
		for(index in messages.range()) {
			sum += messages(index).get2();
		}
		val value = c / _context.getNumberOfVertices() + (1-c) * sum;
		vertex.setValue(value);
		val message = value / vertex.getEdgesNum(true);
		val edges = new GrowableMemory[Long]();
		vertex.getEdgesId(true,edges);
		for(index in edges.range()) {
			val id = edges(index);
			_appContext.putMessage(id,message);
		}
		
	}
}