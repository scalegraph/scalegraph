/* 
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package org.scalegraph.metrics;

import org.scalegraph.graph.Graph;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.DistScatterGather;
import org.scalegraph.util.Parallel;
import x10.util.Team;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.util.GrowableMemory;

/**
 * Calculate degree distribution. This class is intended for interal use only.
 */
public final class DegreeDistImpl {
	
    // No need to create instance
    private def this(){}
    
	public static def degreeDistribution[T](columnDistGraph: DistSparseMatrix[T]) {
	    val team = columnDistGraph.dist().allTeam();
		
		return new DistMemoryChunk[Long](team.placeGroup(), () => {
			val teamSize = team.size();
			val m = columnDistGraph();
			val ids = columnDistGraph.ids();
			val mOffsets = m.offsets;
			val vertexRange = 0..(ids.numberOfLocalVertexes()-1);
			val scatterGather = new DistScatterGather(team);
			Parallel.iter(vertexRange, (tid :Long, r :LongRange) => {
				val counts = scatterGather.getCounts(tid as Int);
				for(i in r) {
					val degree = m.offsets(i+1) - m.offsets(i);
					counts(degree % teamSize)++;
				}
			});
			scatterGather.sum();
			val requests = MemoryChunk.make[Long](scatterGather.sendCount());
			Parallel.iter(vertexRange, (tid :Long, r :LongRange) => {
				val offsets = scatterGather.getOffsets(tid as Int);
				for(i in r) {
					val degree = m.offsets(i+1) - m.offsets(i);
					requests(offsets(degree % teamSize)++) = degree;
				}
			});

			val recv = scatterGather.scatter(requests);
			val result = new GrowableMemory[Long]();
			result.setSize(columnDistGraph.ids().numberOfLocalVertexes());
			val result_ = result.raw();
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
			result.setSize(team.allreduce(team.role()(0), resultSize, Team.MAX));
			result.shrink(0);
			
			return result.raw();
		});
	}
}
