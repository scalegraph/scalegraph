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

package org.scalegraph.test;

import x10.util.Team;
import x10.util.Ordered;
import x10.compiler.Ifdef;

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
	
	private static def genConstanceValueEdges(getSize :()=>Long, value :Double)
	{
		val team = Config.get().worldTeam();
		
		val edgeMemory = new DistMemoryChunk[Double](team.placeGroup(),
				() => MemoryChunk.make[Double](getSize()));
		
		team.placeGroup().broadcastFlat(() => {
			val role = team.role()(0);
			Parallel.iter(0..(getSize() - 1), (tid :Long, r :LongRange) => {
				val edgeMem_ = edgeMemory();
				for(i in r) {
					edgeMem_(i) = value;
				}
			});
		});
		
		return edgeMemory;
	}
	
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
			
			val sw = Config.get().stopWatch();
			val edgeList = GraphGenerator.genRMAT(scale, edgefactor, A, B, C, rnd);
			sw.lap("Generate RMAT[scale=" + scale + ",edgefactor=" + edgefactor + "]");
			val rawWeight = GraphGenerator.genRandomEdgeValue(scale, edgefactor, rnd);
			sw.lap("Generate random edge value");
			val g = Graph.make(edgeList);
			g.setEdgeAttribute[Double]("weight", rawWeight);
			sw.lap("Complete making graph");
			return g;
		}
		else if (args(0).equals("random")) {
			val scale = Int.parse(args(1));
			val edgefactor = (args.size > 2) ? Int.parse(args(2)) : 16;
			val rnd = new Random(2, 3);

			val sw = Config.get().stopWatch();
			val edgeList = GraphGenerator.genRandomGraph(scale, edgefactor, rnd);
			sw.lap("Generate edos random graph[scale=" + scale + ",edgefactor=" + edgefactor + "]");
			val rawWeight = GraphGenerator.genRandomEdgeValue(scale, edgefactor, rnd);
			sw.lap("Generate random edge value");
			val g = Graph.make(edgeList);
			g.setEdgeAttribute[Double]("weight", rawWeight);
			sw.lap("Complete making graph");
			return g;
		}
		else if (args(0).equals("circle")) {
			val scale = Int.parse(args(1));
			val A = (args.size > 2) ? Int.parse(args(2)) : 16;
			val rnd = new Random(2, 3);

			val team = Config.get().worldTeam();
			val sw = Config.get().stopWatch();
			val edgeList = GraphGenerator.genCircle(scale, A);
			sw.lap("Generate circle[scale=" + scale + ",length=" + A + "]");
			val rawWeight = GraphGenerator.genRandomEdgeValue(() => (1L << scale) * A / team.size(), rnd);
			sw.lap("Generate random edge value");
			val g = Graph.make(edgeList);
			g.setEdgeAttribute[Double]("weight", rawWeight);
			sw.lap("Complete making graph");
			return g;
		}
		else if (args(0).equals("tree")) {
			val scale = Int.parse(args(1));
			val rnd = new Random(2, 3);
			val team = Config.get().worldTeam();
			val sw = Config.get().stopWatch();
			val edgeList = GraphGenerator.genTree(scale);
			sw.lap("Generate tree[scale=" + scale + "]");
			val rawWeight = GraphGenerator.genRandomEdgeValue(() => (1L << scale)/team.size() - (here.id == 0 ? 1 : 0), rnd);
			sw.lap("Generate random edge value");
			val g = Graph.make(edgeList);
			g.setEdgeAttribute[Double]("weight", rawWeight);
			sw.lap("Complete making graph");
			return g;
		}
		else if (args(0).equals("file") || args(0).equals("file-renumbering")) {
			val randomEdge :Boolean = (args.size > 2) ? args(2).equals("random") : true;
			val edgeConstVal = randomEdge ? 0.0 : Double.parse(args(2));
			val colTypes = [Type.Long as Int, Type.Long];

			val renumbering = args(0).equals("file-renumbering");
			val sw = Config.get().stopWatch();
			val g = Graph.make(CSV.read(args(1), colTypes, true), renumbering);
			sw.lap("Read graph[path=" + args(1) + "]");
			@Ifdef("PROF_IO") { Config.get().dumpProfIO("Graph Load (AlgorithmTest):"); }
			val srcList = g.source();
			val getSize = ()=>srcList().size();
			val edgeList = randomEdge
					? GraphGenerator.genRandomEdgeValue(getSize, new Random(2, 3))
					: genConstanceValueEdges(getSize, edgeConstVal);
			g.setEdgeAttribute("weight", edgeList);
			sw.lap("Generate the edge weights");
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

	public final def run(args :Array[String](1)): Boolean {
		print("ARGS: "); println(args);
		val [ graphArgs, mainArgs ] = splitArgs(args);
		return run(mainArgs, loadGraph(graphArgs));
	}
	
	private def printError[T](teamSize :Int, teamRole :Int, local :Long, result :T, reference :T) {
	    println("Check result: error: here=" + here.id + ",pos=" + (local * teamSize + teamRole) + "(local=" + local + "),result=" + result + ",reference=" + reference);
	}
	
	public def checkResult[T](result :DistMemoryChunk[T], reference :String, threshold :T)
	{ T <: Arithmetic[T], T <: Ordered[T], T haszero }
	{
		val sw = Config.get().stopWatch();
		val team = Config.get().worldTeam();
		val refdata = CSV.read(reference, [Type.Long as Int, Type.typeId[T]()], true);
		sw.lap("Read reference data[path=" + reference + "]");
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
						    printError(teamSize, teamRole, i, result_(i), refval_(i));
							return 1;
						}
					}
					return 0;
				},
				(o1 :Int, o2 :Int) => o1 | o2);
			}
			
			flags = team.allreduce(teamRole, flags, Team.BOR);
			
			if((flags & 2) != 0) {
				val shift = MathAppend.ceilLog2(teamSize);
				val mask = (1L << shift) - 1;
				val recv = MemoryChunk.make[T](result_.size());
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
						    printError(teamSize, teamRole, i, result_(i), recv(i));
							return 1;
						}
					}
					return 0;
				},
				(o1 :Int, o2 :Int) => o1 | o2);
				
				flags = team.allreduce(teamRole, flags, Team.BOR);
			}
			
			if(checkResult.home == here) {
				checkResult.getLocalOrCopy()() = (flags == 0);
			}
		});
		sw.lap("Compare result and reference data");
		
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
			
			error = team.allreduce(teamRole, error, Team.BOR);
			
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
		val sw = Config.get().stopWatch();
		val resdata = Graph.make(EdgeList(source, target));
		resdata.setEdgeAttribute("weight", value);
		val res = resdata.createDistSparseMatrix[T](Config.get().dist1d(), "weight", true ,true);
		sw.lap("Construct a graph from result");
		val refdata = Graph.make(CSV.read(reference,
				[Type.Long as Int, Type.Long, Type.Double],
				["source" as String, "target", "weight"]));
		sw.lap("Read reference data[path=" + reference + "]");
		val ref = refdata.createDistSparseMatrix[T](Config.get().dist1d(), "weight", true, true);
		sw.lap("Construct a graph from reference data");
		val ret = internalCheckResult(res, ref, true, threshold);
		sw.lap("Compare result and reference data");
		
		return ret;
	}
	
	public def checkResult(source :DistMemoryChunk[Long], target :DistMemoryChunk[Long], reference :String)
	{
		val sw = Config.get().stopWatch();
		val resdata = Graph.make(EdgeList(source, target));
		val res = resdata.createDistEdgeIndexMatrix(Config.get().dist1d(), true ,true);
		sw.lap("Construct a graph from result");
		val refdata = Graph.make(CSV.read(reference,
				[Type.Long as Int, Type.Long, Type.Double],
				["source" as String, "target", "weight"]));
		sw.lap("Read reference data[path=" + reference + "]");
		val ref = refdata.createDistEdgeIndexMatrix(Config.get().dist1d(), true, true);
		sw.lap("Construct a graph from reference data");
		val ret = internalCheckResult(res, ref, false, 0L);
		sw.lap("Compare result and reference data");
		
		return ret;
	}

}
