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

import x10.util.Team;
import x10.util.Ordered;

import org.scalegraph.Config;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.SString;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.Remote;
import org.scalegraph.util.random.Random;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.EdgeList;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.io.CSV;
import org.scalegraph.id.Type;

public abstract class AlgorithmTest extends STest {
	
	public abstract def run(args :Array[String](1), graph :Graph) :Boolean;
	
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
			
			val start_read_time = System.currentTimeMillis();
			val edgeList = GraphGenerator.genRMAT(scale, edgefactor, A, B, C, rnd);
			val rawWeight = GraphGenerator.genRandomEdgeValue(scale, edgefactor, rnd);
			val g = Graph.make(edgeList);
			g.setEdgeAttribute[Double]("weight", rawWeight);
			val end_read_time = System.currentTimeMillis();
			Console.OUT.println("Gen RMAT graph: "+(end_read_time-start_read_time)+" millis");	
			return g;
		}
		else if (args(0).equals("random")) {
			val scale = Int.parse(args(1));
			val edgefactor = (args.size > 2) ? Int.parse(args(2)) : 16;
			val rnd = new Random(2, 3);
			
			val start_read_time = System.currentTimeMillis();
			val edgeList = GraphGenerator.genRandomGraph(scale, edgefactor, rnd);
			val rawWeight = GraphGenerator.genRandomEdgeValue(scale, edgefactor, rnd);
			val g = Graph.make(edgeList);
			g.setEdgeAttribute[Double]("weight", rawWeight);
			val end_read_time = System.currentTimeMillis();
			Console.OUT.println("Gen random graph: "+(end_read_time-start_read_time)+" millis");	
			return g;
		}
		else if (args(0).equals("file")) {
			val colTypes = [Type.Long as Int, Type.Long, Type.Double];
			
			val start_read_time = System.currentTimeMillis();
			val g = Graph.make(CSV.read(args(1), colTypes, true));
			val end_read_time = System.currentTimeMillis();
			Console.OUT.println("Read File: "+(end_read_time-start_read_time)+" millis");
			return g;
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

	public def run(args :Array[String](1)): Boolean {
		val [ graphArgs, mainArgs ] = splitArgs(args);
		return run(mainArgs, loadGraph(graphArgs));
	}
	
	public def checkResult[T](result :DistMemoryChunk[T], reference :String, threshold :T)
	{ T <: Arithmetic[T], T <: Ordered[T], T haszero }
	{
		val team = Config.get().worldTeam();
		val refdata = CSV.read(reference, [Type.Long as Int, Type.typeId[T]()], true);
		val index = refdata.get[Long](0);
		val refval = refdata.get[T](1);
		val checkResult = GlobalRef[Cell[Boolean]](new Cell[Boolean](false));
		
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
				val shift = MathAppend.ceilLog2(teamSize);
				val mask = (1L << shift) - 1;
				val recv = new MemoryChunk[T](result_.size());
				Remote.put(team, recv, index_.range(),
						(index :Long, put :(Int, Long, T)=>void)=> {
					val id = index_(index);
					val p = id & mask;
					val ridx = id >> shift;
					put(p as Int, ridx, refval_(index));
				});
				
				flags = Parallel.reduce[Int](result_.range(), (tid :Long, r :LongRange) => {
					for(i in r) {
						val diff = MathAppend.abs(result_(i) - recv(i));
						if(diff > threshold) {
							return 1;
						}
					}
					return 0;
				},
				(o1 :Int, o2 :Int) => o1 | o2);
				
				flags = team.allreduce(teamRole, flags, Team.OR);
			}
			
			if(checkResult.home == here) {
				checkResult.getLocalOrCopy()() = (flags == 0);
			}
		});
		
		return checkResult()();
	}
		
	private def internalCheckResult[T](result :DistSparseMatrix[T], ref :DistSparseMatrix[T], withValue :Boolean, threshold :T)
	{ T <: Arithmetic[T], T <: Ordered[T], T haszero }
	{
		val team = Config.get().worldTeam();
		val checkResult = GlobalRef[Cell[Boolean]](new Cell[Boolean](false));
		
		team.placeGroup().broadcastFlat( () => {
			val teamRole = team.role()(0);
			val teamSize = team.size();
			val res_ = result();
			val ref_ = ref();
			var error :Int = 0;
			val numVertexes = res_.offsets.size() - 1;
			
			if(res_.offsets.size() != ref_.offsets.size()
					|| res_.vertexes.size() != ref_.vertexes.size()
					//	|| res_.values.size() != ref_.values.size()
			)
			{
				error = 1;
			}
			else {
				error |= Parallel.reduce[Int](res_.offsets.range(), (tid :Long, r :LongRange) => {
					var lerror :Int = 0;
					for(i in r) if(res_.offsets(i) != ref_.offsets(i)) lerror = 1;
					return lerror;
				}, (a :Int, b :Int) => a | b);
				
				error |= Parallel.reduce[Int](res_.vertexes.range(), (tid :Long, r :LongRange) => {
					var lerror :Int = 0;
					for(i in r) if(res_.vertexes(i) != ref_.vertexes(i)) lerror = 1;
					return lerror;
				}, (a :Int, b :Int) => a | b);
				
				if(withValue) {
					error |= Parallel.reduce[Int](res_.values.range(), (tid :Long, r :LongRange) => {
						var lerror :Int = 0;
						for(i in r) {
							val diff = MathAppend.abs(res_.values(i) - ref_.values(i));
							if(diff > threshold) lerror = 1;
						}
						return lerror;
					}, (a :Int, b :Int) => a | b);
				}
			}
			
			error = team.allreduce(teamRole, error, Team.OR);
			
			if(checkResult.home == here) {
				checkResult.getLocalOrCopy()() = (error == 0);
			}
		});
		
		return checkResult()();
	}
	
	public def checkResult[T](source :DistMemoryChunk[Long], target :DistMemoryChunk[Long],
			value :DistMemoryChunk[T], reference :String, threshold :T)
	{ T <: Arithmetic[T], T <: Ordered[T], T haszero }
	{
		val resdata = Graph.make(EdgeList(source, target));
		resdata.setEdgeAttribute("weight", value);
		val res = resdata.createDistSparseMatrix[T](Config.get().dist1d(), "weight", true ,true);
		val refdata = Graph.make(CSV.read(reference,
				[Type.Long as Int, Type.Long, Type.Double],
				["source" as String, "target", "weight"]));
		val ref = refdata.createDistSparseMatrix[T](Config.get().dist1d(), "weight", true, true);
		
		return internalCheckResult(res, ref, true, threshold);
	}
	
	public def checkResult(source :DistMemoryChunk[Long], target :DistMemoryChunk[Long], reference :String)
	{
		val resdata = Graph.make(EdgeList(source, target));
		val res = resdata.createDistEdgeIndexMatrix(Config.get().dist1d(), true ,true);
		val refdata = Graph.make(CSV.read(reference,
				[Type.Long as Int, Type.Long, Type.Double],
				["source" as String, "target", "weight"]));
		val ref = refdata.createDistEdgeIndexMatrix(Config.get().dist1d(), true, true);
		
		return internalCheckResult(res, ref, false, 0L);
	}

}
