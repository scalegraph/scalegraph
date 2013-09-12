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

package org.scalegraph.test;

import org.scalegraph.util.random.Random;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.io.ID;
import org.scalegraph.io.CSV;
import org.scalegraph.id.Type;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.SString;
import org.scalegraph.Config;
import x10.util.Ordered;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.Parallel;
import x10.util.Team;

public abstract class AlgorithmTest extends ScaleGraphTest {
    
	public var graph :Graph;
	public var args :Array[String](1);
	
	private static def loadGraph(args :Array[String](1)) {
		if(args.size < 2) {
			throw new IllegalArgumentException("Too few arguments");
		}
		if (args(0).equals("rmat")) {
			val scale = Int.parse(args(1));
			val edgefactor = (args.size > 2) ? Int.parse(args(2)) : 16;
			val A = (args.size > 3) ? Double.parse(args(3)) : 0.45;
			val B = (args.size > 4) ? Double.parse(args(4)) : 0.15;
			val C = (args.size > 5) ? Double.parse(args(5)) : 0.15;
			val rnd = new Random(2, 3);
			val edgeList = GraphGenerator.genRMAT(scale, edgefactor, A, B, C, rnd);
			val rawWeight = GraphGenerator.genRandomEdgeValue(scale, edgefactor, rnd);
			val g = Graph.make(edgeList);
			g.setEdgeAttribute[Double]("weight", rawWeight);
			return g;
		}
		else if (args(0).equals("random")) {
			val scale = Int.parse(args(1));
			val edgefactor = (args.size > 2) ? Int.parse(args(2)) : 16;
			val rnd = new Random(2, 3);
			val edgeList = GraphGenerator.genRandomGraph(scale, edgefactor, rnd);
			val rawWeight = GraphGenerator.genRandomEdgeValue(scale, edgefactor, rnd);
			val g = Graph.make(edgeList);
			g.setEdgeAttribute[Double]("weight", rawWeight);
			return g;
		}
		else if (args(0).equals("file")) {
			val colTypes = [Type.Long as Int, Type.Long, Type.Double];
			return Graph.make(CSV.read(args(1), colTypes, true));
		}
		else {
			throw new IllegalArgumentException("Unknown graph type :" + args(0));
		}
	}
	
	private static def splitArgs(args :Array[String](1)) {
		for([s] in args) {
			if(args(s).equals("-")) {
				val args1 = new Array[String](s, (i :Int) => args(i));
				val args2 = new Array[String](args.size - s - 1, (i :Int) => args(s + 1 + i));
				return [ args1, args2 ];
			}
		}
		throw new IllegalArgumentException("Input parameter does not have splitter flag");
	}
	
	public def init(args :Array[String](1)) {
		val [ graphArgs, mainArgs ] = splitArgs(args);
		this.graph = loadGraph(graphArgs);
		this.args = mainArgs;
	}
	
	public def checkResult[T](result :DistMemoryChunk[T], reference :SString, threshold :T)
	{ T <: Arithmetic[T], T <: Ordered[T], T haszero }
	{
		val team = Config.get().worldTeam();
		val refdata = CSV.read(reference, [Type.Long as Int, Type.typeId[T]()], true);
		val index = refdata.get[Long](0);
		val refval = refdata.get[T](1);
		
		team.placeGroup().broadcastFlat( () => {
			val teamRole = team.role()(0);
			val teamSize = team.size();
			val result_ = result();
			val index_ = index();
			val refval_ = refval();
			
			var flags :Int = 0;
			if(result_.size() != refval_.size()) {
				flags = 2;
			}
			else {
				flags = Parallel.reduce[Int](result_.range(), (tid :Long, r :LongRange) => {
					for(i in r) {
						if(index_(i) != (i * teamSize + teamRole)) {
							return 2;
						}
						val diff = MathAppend.abs(result_(i) - refval_(i));
						if(diff > threshold) {
							return 1;
						}
					}
					return 0;
				},
				(o1 :Int, o2 :Int) => o1 | o2);
			}
			
			flags = team.allreduce(teamRole, flags, Team.OR);
			
			if((flags & 2) != 0) {
				val recv = new MemoryChunk[T](result_.size());
				Remote.put(team, 
			}
		});
	}

}
