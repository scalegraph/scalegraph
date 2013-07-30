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

package org.scalegraph.graph;

import x10.util.Team;
import org.scalegraph.util.random.Random;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.Parallel;

/**
 * Provides various graph generators.
 */
public final class GraphGenerator {

	/** Generates a 2D-grid graph of Rows rows and Cols columns. */
	public static def genGrid(rows :Long, columns :Long, team :Team)
	: DistMemoryChunk[Long]
	{
		throw new UnsupportedOperationException();
	}

	/** Generates a graph with star topology. Node id 0 is in the center and then links to all other nodes.  */
	public static def genStar(scale :Int, team :Team)
	: DistMemoryChunk[Long]
	{
		throw new UnsupportedOperationException();
	}

	/** Generates a circle graph where every node creates out-links to NodeOutDeg forward nodes.  */
	public static def genCircle(scale :Int, nodeOutDeg :Int, team :Team)
	: DistMemoryChunk[Long]
	{
		throw new UnsupportedOperationException();
	}

	/** Generates a complete graph on Nodes nodes. Graph has no self-loops.  */
	public static def genFull(fanout :Int, levels :Int, childPointsToParent :Boolean, team :Team)
	: DistMemoryChunk[Long]
	{
		throw new UnsupportedOperationException();
	}

	/** Generates a tree graph of Levels levels with every parent having Fanout children.  */
	public static def genTree(scale :Int, team :Team)
	: DistMemoryChunk[Long]
	{
		throw new UnsupportedOperationException();
	}
	
	/** Generates an Erdos-Renyi random graph. */
	public static def genRandomGraph(scale :Int, edgefactor :Int, rnd :Random, team :Team)
	: DistMemoryChunk[Long]
	{
		val numVertices = 1L << scale;
		val numEdges = edgefactor * numVertices;
		val numLocalEdges = numEdges / team.size();
		
		val edgeMemory = new DistMemoryChunk[Long](team.placeGroup(),
				() => new MemoryChunk[Long](numLocalEdges*2));
		
		team.placeGroup().broadcastFlat(() => {
			val role = team.role()(0);
			val offset = role * numLocalEdges;
			Parallel.iter(0..(numLocalEdges - 1), (tid :Long, r :LongRange) => {
				val rnd_ = rnd.clone();
				// 4 random values per single edge (nextLong() uses 2 generated random values)
				rnd_.skip((offset + r.min)*4);
				val edgeMem_ = edgeMemory();
				val vertexMask = numVertices - 1;
				for(i in r) {
					edgeMem_(i*2+0) = rnd_.nextLong() & vertexMask;
					edgeMem_(i*2+1) = rnd_.nextLong() & vertexMask;
				}
			});
		});
		
		rnd.skip(numEdges * 4);
		
		return edgeMemory;
	}
	
	public static def genRandomEdgeValue(scale :Int, edgefactor :Int, rnd :Random, team :Team)
	: DistMemoryChunk[Double]
	{
		val numVertices = 1L << scale;
		val numEdges = edgefactor * numVertices;
		val numLocalEdges = numEdges / team.size();
		
		val edgeMemory = new DistMemoryChunk[Double](team.placeGroup(),
				() => new MemoryChunk[Double](numLocalEdges));
		
		team.placeGroup().broadcastFlat(() => {
			val role = team.role()(0);
			val offset = role * numLocalEdges;
			Parallel.iter(0..(numLocalEdges - 1), (tid :Long, r :LongRange) => {
				val rnd_ = rnd.clone();
				// 2 random values per single edge (nextDouble() uses 2 generated random values)
				rnd_.skip((offset + r.min)*2);
				val edgeMem_ = edgeMemory();
				val vertexMask = numVertices - 1;
				for(i in r) {
					edgeMem_(i) = rnd_.nextDouble();
				}
			});
		});
		
		rnd.skip(numEdges * 2);
		
		return edgeMemory;
	}
	
	/** Generates a R-MAT graph using recursive descent into a 2x2 matrix [A,B; C, 1-(A+B+C)]. */
	public static def genRMAT(scale :Int, edgefactor :Int,
			A :Double, B :Double, C :Double, rnd :Random, team :Team)
	: DistMemoryChunk[Long]
	{
		if(A+B+C >= 1.0f) throw new IllegalArgumentException("A+B+C >= 1.0: Invalid probabilities");
		
		val numVertices = 1L << scale;
		val numEdges = edgefactor * numVertices;
		val numLocalEdges = numEdges / team.size();
		
		val edgeMemory = new DistMemoryChunk[Long](team.placeGroup(),
				() => new MemoryChunk[Long](numLocalEdges*2));

		val sumA = new MemoryChunk[Double](scale);
		val sumAB = new MemoryChunk[Double](scale);
		val sumABC = new MemoryChunk[Double](scale);
		for(i in 0..(scale-1)) {
			val a = A * (rnd.nextFloat() + 0.5f);
			val b = B * (rnd.nextFloat() + 0.5f);
			val c = C * (rnd.nextFloat() + 0.5f);
			val d = (1.0f - (A+B+C)) * (rnd.nextFloat() + 0.5f);
			val abcd = a+b+c+d;
			sumA(i) = a / abcd;
			sumAB(i) = (a+b) / abcd;
			sumABC(i) = (a+b+c) / abcd;
		}
		
		team.placeGroup().broadcastFlat(() => {
			val role = team.role()(0);
			val offset = role * numLocalEdges;
			Parallel.iter(0..(numLocalEdges - 1), (tid :Long, r :LongRange) => {
				val rnd_ = rnd.clone();
				rnd_.skip((offset + r.min) * scale);
				val edgeMem_ = edgeMemory();
				for(i in r) {
					var srcVertex :Long = 0;
					var dstVertex :Long = 0;
					for(depth in 0..(scale-1)) {
						srcVertex <<= 1;
						dstVertex <<= 1;
						val x = rnd_.nextFloat();
						if(x < sumA(depth)) { }
						else if(x < sumAB(depth)) { dstVertex += 1; }
						else if(x < sumABC(depth)) { srcVertex += 1; }
						else { dstVertex += 1; srcVertex += 1; }
					}
					edgeMem_(i*2+0) = srcVertex;
					edgeMem_(i*2+1) = dstVertex;
				}
			});
		});
		
		rnd.skip(numEdges * scale);
		
		return edgeMemory;
	}
}