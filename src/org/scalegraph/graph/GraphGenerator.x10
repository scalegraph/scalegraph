/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
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

import org.scalegraph.Config;
import org.scalegraph.util.random.Random;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.Team2;
import org.scalegraph.util.MathAppend;

/**
 * Provides various graph generators.
 */
public final class GraphGenerator {

	/** Generates a 2D-grid graph of Rows rows and Cols columns. */
	//面倒なのでトーラス
	/*
	public static def genGrid(rows :Long, columns :Long)
	: EdgeList[Long]
	{
	    val team = Config.get().worldTeam();
	    val numVertices = rows*columns;
	    val numEdges = numVertices;
	    val teamSize = team.size();
	    val numLocalEdges = 4*numEdges / teamSize;
	    
	    // last place has edges less than another place by 1
	    val srcMemory = new DistMemoryChunk[Long](team.placeGroup(),
	    	() => MemoryChunk.make[Long](numLocalEdges));
	    val dstMemory = new DistMemoryChunk[Long](team.placeGroup(),
	    	() => MemoryChunk.make[Long](numLocalEdges));
	    
	    team.placeGroup().broadcastFlat(() => {
	        val srcMem_ = srcMemory();
	        val dstMem_ = dstMemory();
	        val role = team.role();
	        
	        // val range = here.id == 0 ? 1L..(srcMem_.range().max): srcMem_.range();
	        val d4 = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
	        for (i in srcMem_.range()) {
	            val src = teamSize * i + role;
	            val x = src % columns;
	            val y = src / rows;
	        	for (j in 0..3) {
					val nx = (x + d4[j][0] + rows - 1) % rows;
					val nx = (x + d4[j][0] + columns - 1) % columns;
					val dst = ny * rows + nx;
		            srcMem_(i*4+j) = src;
		            dstMem_(i*4+j) = dst;
	        	}
	        }
	    });
	    
	    return EdgeList(srcMemory, dstMemory);
	}*/

	/** Generates a graph with star topology. Node id 0 is in the center and then links to all other nodes.  */
	public static def genStar(scale :Int)
	: EdgeList[Long]
	{
	    val team = Config.get().worldTeam();
	    val numVertices = 1L << scale;
	    val numEdges = numVertices;
	    val teamSize = team.size();
	    val numLocalEdges = numEdges / teamSize;
	    
	    // last place has edges less than another place by 1
	    val srcMemory = new DistMemoryChunk[Long](team.placeGroup(),
	    	() => MemoryChunk.make[Long](numLocalEdges));
	    val dstMemory = new DistMemoryChunk[Long](team.placeGroup(),
	    	() => MemoryChunk.make[Long](numLocalEdges));
	    
	    team.placeGroup().broadcastFlat(() => {
	        val srcMem_ = srcMemory();
	        val dstMem_ = dstMemory();
	        val role = team.role();
	        
	        // val range = here.id == 0 ? 1L..(srcMem_.range().max): srcMem_.range();
	        for (i in srcMem_.range()) {
	            val src = teamSize * i + role;
	            val dst = 0;
	            srcMem_(i) = src;
	            dstMem_(i) = dst;
	        }
	    });
	    
	    return EdgeList(srcMemory, dstMemory);
	}

	/** Generates a circle graph where every node creates out-links to NodeOutDeg forward nodes.  */
	public static def genCircle(scale :Int, nodeOutDeg :Int)
	: EdgeList[Long]
	{
		Console.OUT.println(scale+" "+nodeOutDeg);
	    val team = Config.get().worldTeam();
	    val numVertices = 1L << scale;
	    val numEdges = numVertices;
	    val teamSize = team.size();
	    val numLocalEdges = nodeOutDeg * numEdges / teamSize;
	    
	    // last place has edges less than another place by 1
	    val srcMemory = new DistMemoryChunk[Long](team.placeGroup(),
	    	() => MemoryChunk.make[Long](numLocalEdges));
	    val dstMemory = new DistMemoryChunk[Long](team.placeGroup(),
	    	() => MemoryChunk.make[Long](numLocalEdges));
	    
	    team.placeGroup().broadcastFlat(() => {
	        val srcMem_ = srcMemory();
	        val dstMem_ = dstMemory();
	        val role = team.role();
	        
	        // val range = here.id == 0 ? 1L..(srcMem_.range().max): srcMem_.range();
	        for (i in 0L..(numEdges / teamSize -1)) {
            	val src = teamSize * i + role;
	            for (j in 0..(nodeOutDeg-1)) {
	            	val dst = (src + 1 + j) % numVertices;
		            srcMem_(i*nodeOutDeg+j) = src;
		            dstMem_(i*nodeOutDeg+j) = dst;
	            }
	        }
	    });
	    
	    return EdgeList(srcMemory, dstMemory);
	}

	/** Generates a complete graph on Nodes nodes. Graph has no self-loops.  */
	public static def genFull(fanout :Int, levels :Int, childPointsToParent :Boolean)
	: EdgeList[Long]
	{
		throw new UnsupportedOperationException();
	}

	/** Generates a tree graph of Levels levels with every parent having Fanout children.  */
	public static def genTree(scale :Int)
	: EdgeList[Long]
	{
	    val team = Config.get().worldTeam();
	    val numVertices = 1L << scale;
	    val numEdges = numVertices;
	    val teamSize = team.size();
	    val numLocalEdges = numEdges / teamSize;
	    
	    // last place has edges less than another place by 1
	    val srcMemory = new DistMemoryChunk[Long](team.placeGroup(),
	            () => MemoryChunk.make[Long](here.id == 0 ? numLocalEdges - 1: numLocalEdges));
	    val dstMemory = new DistMemoryChunk[Long](team.placeGroup(),
	            () => MemoryChunk.make[Long](here.id == 0 ? numLocalEdges - 1: numLocalEdges));
	    
	    team.placeGroup().broadcastFlat(() => {
	        val srcMem_ = srcMemory();
	        val dstMem_ = dstMemory();
	        val role = team.role();
	        val indexOffset = here.id == 0 ? 1: 0;
	        
	        // val range = here.id == 0 ? 1L..(srcMem_.range().max): srcMem_.range();
	        for (i in srcMem_.range()) {
	            val src = teamSize * (i + indexOffset) + role;
	            val dst = src / 2;
	            srcMem_(i) = src;
	            dstMem_(i) = dst;
	        }
	    });
	    
	    return EdgeList(srcMemory, dstMemory);
	}
	
	/** Generates an Erdos-Renyi random graph. */
	public static def genRandomGraph(scale :Int, edgefactor :Int, rnd :Random)
	: EdgeList[Long]
	{
		val team = Config.get().worldTeam();
		val numVertices = 1L << scale;
		val numEdges = edgefactor * numVertices;
		val numLocalEdges = numEdges / team.size();
		
		val srcMemory = new DistMemoryChunk[Long](team.placeGroup(),
				() => MemoryChunk.make[Long](numLocalEdges));
		val dstMemory = new DistMemoryChunk[Long](team.placeGroup(),
				() => MemoryChunk.make[Long](numLocalEdges));
		
		team.placeGroup().broadcastFlat(() => {
			val role = team.role();
			val offset = role * numLocalEdges;
			Parallel.iter(0..(numLocalEdges - 1), (tid :Long, r :LongRange) => {
				val rnd_ = rnd.clone();
				// 4 random values per single edge (nextLong() uses 2 generated random values)
				rnd_.skip((offset + r.min)*4);
				val srcMem_ = srcMemory();
				val dstMem_ = dstMemory();
				val vertexMask = numVertices - 1;
				for(i in r) {
					srcMem_(i) = rnd_.nextLong() & vertexMask;
					dstMem_(i) = rnd_.nextLong() & vertexMask;
				}
			});
		});
		
		rnd.skip(numEdges * 4);
		
		return EdgeList(srcMemory, dstMemory);
	}
	
	public static def genRandomEdgeValue(getSize :()=>Long, rnd :Random)
	: DistMemoryChunk[Double]
	{
		val team = Config.get().worldTeam();
		val sizeArray = new GlobalRef[Cell[MemoryChunk[Long]]](new Cell(MemoryChunk.make[Long](team.size())));
		
		team.placeGroup().broadcastFlat(() => {
			val t2 = new Team2(team);
			val src = MemoryChunk.make[Long](1);
			src(0) = getSize();
			val dst = (sizeArray.home == here) ? sizeArray.getLocalOrCopy()() : MemoryChunk.make[Long](0);
			t2.gather(0n, src, dst);
		});
		
		val edgeMemory = new DistMemoryChunk[Double](team.placeGroup(),
				() => MemoryChunk.make[Double](getSize()));
		
		val sizeArray_ = sizeArray()();
		val placeArray = team.places();
		var numEdges :Long = 0;
		for(role in placeArray.range()) {
			val numLocalEdges = sizeArray_(role);
			val offset = numEdges;
			at(placeArray(role)) async {
				Parallel.iter(0..(numLocalEdges - 1), (tid :Long, r :LongRange) => {
					val rnd_ = rnd.clone();
					// 2 random values per single edge (nextDouble() uses 2 generated random values)
					rnd_.skip((offset + r.min)*2);
					val edgeMem_ = edgeMemory();
					for(i in r) {
						edgeMem_(i) = rnd_.nextDouble();
					}
				});
			}
			numEdges += numLocalEdges;
		}
		
		rnd.skip(numEdges * 2);
		
		return edgeMemory;
	}
	
	public static def genRandomEdgeValue(scale :Int, edgefactor :Int, rnd :Random)
	: DistMemoryChunk[Double]
	{
		val team = Config.get().worldTeam();
		val numVertices = 1L << scale;
		val numEdges = edgefactor * numVertices;
		val numLocalEdges = numEdges / team.size();
		
		val edgeMemory = new DistMemoryChunk[Double](team.placeGroup(),
				() => MemoryChunk.make[Double](numLocalEdges));
		
		team.placeGroup().broadcastFlat(() => {
			val role = team.role();
			val offset = role * numLocalEdges;
			Parallel.iter(0..(numLocalEdges - 1), (tid :Long, r :LongRange) => {
				val rnd_ = rnd.clone();
				// 2 random values per single edge (nextDouble() uses 2 generated random values)
				rnd_.skip((offset + r.min)*2);
				val edgeMem_ = edgeMemory();
				for(i in r) {
					edgeMem_(i) = rnd_.nextDouble();
				}
			});
		});
		
		rnd.skip(numEdges * 2);
		
		return edgeMemory;
	}
	
	/** Generates a R-MAT graph using recursive descent into a 2x2 matrix [A,B; C, 1-(A+B+C)].
	 	Permutation is enabled. */
	public static def genRMAT(scale :Int, edgefactor :Int,
			A :Double, B :Double, C :Double, rnd :Random) : EdgeList[Long]
		= genRMAT(scale, edgefactor, A, B, C, rnd, true);
	
	/** Generates a R-MAT graph using recursive descent into a 2x2 matrix [A,B; C, 1-(A+B+C)]. */
	public static def genRMAT(scale :Int, edgefactor :Int,
			A :Double, B :Double, C :Double, rnd :Random, permute :Boolean)
	: EdgeList[Long]
	{
		if(A+B+C >= 1.0f) throw new IllegalArgumentException("A+B+C >= 1.0: Invalid probabilities");

		val team = Config.get().worldTeam();
		val numVertices = 1L << scale;
		val numEdges = edgefactor * numVertices;
		val numLocalEdges = numEdges / team.size();

		val srcMemory = new DistMemoryChunk[Long](team.placeGroup(),
				() => MemoryChunk.make[Long](numLocalEdges));
		val dstMemory = new DistMemoryChunk[Long](team.placeGroup(),
				() => MemoryChunk.make[Long](numLocalEdges));

		val sumA = MemoryChunk.make[Double](scale);
		val sumAB = MemoryChunk.make[Double](scale);
		val sumABC = MemoryChunk.make[Double](scale);
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
			val role = team.role();
			val offset = role * numLocalEdges;
			Parallel.iter(0..(numLocalEdges - 1), (tid :Long, r :LongRange) => {
				val rnd_ = rnd.clone();
				rnd_.skip((offset + r.min) * scale);
				val srcMem_ = srcMemory();
				val dstMem_ = dstMemory();
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
					if(permute) {
						//srcMem_(i) = MathAppend.scramble(scale, srcVertex, 0x1234567812345678UL, 0x2345678923456789UL);
						//dstMem_(i) = MathAppend.scramble(scale, dstVertex, 0x1234567812345678UL, 0x2345678923456789UL);
						srcMem_(i) = MathAppend.scramble(scale, srcVertex, 0x1234567812345678L, 0x2345678923456789L);
						dstMem_(i) = MathAppend.scramble(scale, dstVertex, 0x1234567812345678L, 0x2345678923456789L);
					}
					else {
						srcMem_(i) = srcVertex;
						dstMem_(i) = dstVertex;
					}
				}
			});
		});
		
		rnd.skip(numEdges * scale);

		return EdgeList(srcMemory, dstMemory);
	}
}
