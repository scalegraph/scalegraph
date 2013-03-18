package org.scalegraph.metrics;

import org.scalegraph.graph.Graph;
import org.scalegraph.concurrent.Dist2D;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.concurrent.DistScatterGather;
import org.scalegraph.concurrent.Parallel;
import x10.util.Team;

public class Degree {
	
	private static def degreeDistribution(g :Graph, directed :Boolean, outerOrInner :Boolean) {
		val team = g.team();
		val distColumn = Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS);
		val columnDistGraph = g.constructDistSparseMatrix(distColumn, directed, outerOrInner);
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
			val result_ = result().data();
			Parallel.iter(recv.range(), (tid :Long, r :LongRange) => {
				val offsets = scatterGather.getOffsets(tid as Int);
				for(i in r) {
					result_.atomicAdd(recv(i) / teamSize, 1L);
				}
			});
			
			// shrink results
			var resultSize :Long = 0L;
			for(i in result_.size()..1) {
				if(result_(i-1) > 0) {
					resultSize = i;
					break;
				}
			}
			result().setSize(team.allreduce(team.role(), resultSize, Team.MAX));
			result().shrink(0);
		});
		
		return result;
	}

	public static def getInDegree(g :Graph) = degreeDistribution(g, true, false);
	public static def getOutDegree(g :Graph) = degreeDistribution(g, true, true);
	public static def getInOutDegree(g :Graph) = degreeDistribution(g, false, false);
}
