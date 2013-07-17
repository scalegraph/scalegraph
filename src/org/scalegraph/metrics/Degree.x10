package org.scalegraph.metrics;

import org.scalegraph.graph.Graph;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.util.DistScatterGather;
import org.scalegraph.util.Parallel;
import x10.util.Team;

public class Degree {
	
	private static def degreeDistribution(g :Graph, directed :Boolean, outerOrInner :Boolean) {
		val team = g.team();
		val distColumn = Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS);
		val columnDistGraph = g.createDistEdgeIndexMatrix(distColumn, directed, outerOrInner);
		val result = new DistGrowableMemory[Long](team.placeGroup());
		
		team.placeGroup().broadcastFlat(() => {
			val teamSize = team.size();
			val m = columnDistGraph();
			val mOffsets = m.offsets;
			val scatterGather = new DistScatterGather(team);
			Parallel.iter(m.vertexRange(), (tid :Long, r :LongRange) => {
				val counts = scatterGather.getCounts(tid as Int);
				for(i in r) {
					val degree = m.offsets(i+1) - m.offsets(i);
					counts(degree % teamSize)++;
				}
			});
			scatterGather.sum();
			val requests = new MemoryChunk[Long](scatterGather.sendCount());
			Parallel.iter(m.vertexRange(), (tid :Long, r :LongRange) => {
				val offsets = scatterGather.getOffsets(tid as Int);
				for(i in r) {
					val degree = m.offsets(i+1) - m.offsets(i);
					requests(offsets(degree % teamSize)++) = degree;
				}
			});
			
			// delete graph
			columnDistGraph.del();
			distColumn.del();
			
			val recv = scatterGather.scatter(requests);
			result().setSize(columnDistGraph.ids().numberOfLocalVertexes());
			val result_ = result().raw();
			Parallel.iter(recv.range(), (tid :Long, r :LongRange) => {
				val offsets = scatterGather.getOffsets(tid as Int);
				for(i in r) {
					result_.atomicAdd(recv(i) / teamSize, 1L);
				}
			});
			
			// shrink results
			var resultSize :Long = 0L;
			for (var i :Long = result_.size(); i >= 1; --i) {
				if(result_(i-1) > 0) {
					resultSize = i;
					break;
				}
			}
			result().setSize(team.allreduce(team.role()(0), resultSize, Team.MAX));
			result().shrink(0);
		});
		
		return result;
	}

	public static def getInDegree(g :Graph) = degreeDistribution(g, true, false);
	public static def getOutDegree(g :Graph) = degreeDistribution(g, true, true);
	public static def getInOutDegree(g :Graph) = degreeDistribution(g, false, false);
}
