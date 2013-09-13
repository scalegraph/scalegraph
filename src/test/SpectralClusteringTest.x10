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
package test;

import x10.util.ArrayList;
import x10.util.Team;

import org.scalegraph.Config;
import org.scalegraph.harness.sx10Test;
import org.scalegraph.api.SpectralClustering;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.EdgeList;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.Team2;
import org.scalegraph.util.random.Random;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.tuple.Tuple3;


final class SpectralClusteringTest extends sx10Test {
	public static def main(args: Array[String](1)) {
		new SpectralClusteringTest().execute(args);
	}

	public def run(args :Array[String](1)): Boolean {
		val config = Config.get();
		val team = config.worldTeam();
		val dist = config.dist2d();
		
		val arglist = new ArrayList[String]();
		for(v in args.values()) arglist.add(v);
		
		val sw = new MyStopWatch();
		sw.start("graph generation");
		
		var g:Graph = null;
		
		val mode = arglist.removeFirst();
		if(mode.equals("rmat")) {
			val scale = Int.parse(arglist.removeFirst());
			val edgeFactor = Int.parse(arglist.removeFirst());
			
			val rnd = new Random(2, 3);
			val edgelist = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd);
			// val weight = GraphGenerator.genRandomEdgeValue(scale, 16, rnd);
			val weight = new DistMemoryChunk[Double](team.placeGroup(),
					() => new MemoryChunk[Double](edgelist.src().size(), (Long) => 1.0));

			g = Graph.make(edgelist);
			g.setEdgeAttribute("edgevalue", weight);
			
		} else if(mode.equals("file")) {
			val fileList = [arglist.removeFirst() as String];
			val tuple2 = DistributedReader.read(fileList, (line:String) => {
				val list = line.split(" ");
				Tuple3[Long, Long, Double](Long.parse(list(0)), Long.parse(list(1)), 1.0)
			});
			val splittedEdgeList = split(team, tuple2.get1().raw(team.placeGroup()));
			val edgelist = EdgeList[Long](splittedEdgeList.get1(), splittedEdgeList.get2());
			val weight = tuple2.get2().raw(team.placeGroup());
			
			g = Graph.make(edgelist);
			g.setEdgeAttribute("edgevalue", weight);
		}
		
		return run(g, arglist, sw);
	}
	
	public def run(g :Graph, arglist :ArrayList[String], sw :MyStopWatch): Boolean {
		val config = Config.get();
		val team = config.worldTeam();
		val dist = config.dist2d();
		
		val numCluster = Int.parse(arglist.removeFirst());
		val tolerance = Double.parse(arglist.removeFirst());
		val maxitr = Int.parse(arglist.removeFirst());
		val threshold = Double.parse(arglist.removeFirst());
		
		Console.OUT.println("vertices = " + g.numberOfVertices());
		Console.OUT.println("edges    = " + g.numberOfEdges());
		
		sw.next("spectral clustering");
		
		val result = SpectralClustering.run(g, "edgevalue", numCluster, tolerance, maxitr, threshold);
		
		//sw.next("output");
		
		//DistributedReader.write("outvec-%d.txt", result);
		
		sw.next("normalized cut");
		
		val W = g.createDistSparseMatrix[Double](dist, "edgevalue", false, false);
		val ncut = normalizedCut(W, result, numCluster);
		Console.OUT.println("ncut = " + ncut);
		
		sw.end();
		sw.print();
		
		return true;
	}
	
	
	static def normalizedCut(W : DistSparseMatrix[Double], cluster : DistMemoryChunk[Int], numberOfClusters : Int) : Double {
		val config = Config.get();
		val team = config.worldTeam();
		val dist = W.dist();
		val ids = W.ids();
		
		val localSize = 1L << ids.lgl;
		val localWidth = 1L << (ids.lgl + ids.lgr);
		val localHeight = 1L << (ids.lgl + ids.lgc);
		
		val factors = PlaceLocalHandle.make[Cell[Tuple2[Array[Long], Array[Long]]]](team.placeGroup(), () => {
			val assoc = new Array[Long](numberOfClusters);
			val cut = new Array[Long](numberOfClusters);
			
			val W_ = W();
			val offsets = W_.offsets;
			val vertexes = W_.vertexes;
			val values = W_.values;
			
			val srcRefVector = new MemoryChunk[Int](localHeight);
			val dstRefVector = new MemoryChunk[Int](localWidth);
			
			val rowTeam = Team2(dist.rowTeam());
			val columnTeam = Team2(dist.columnTeam());

			rowTeam.allgather(cluster(), srcRefVector);
			columnTeam.allgather(cluster(), dstRefVector);
			
			for(i in 0..(offsets.size() - 2)) {
				for(var jj:Long = offsets(i); jj < offsets(i + 1); jj++) {
					val j = vertexes(jj);
					if(srcRefVector(i) == dstRefVector(j)) {
						assoc(srcRefVector(i))++;
					} else {
						cut(srcRefVector(i))++;
						cut(dstRefVector(j))++;
					}
				}
			}
			
			for(p in team.placeGroup()) {
				if(p == here) {
					Console.OUT.println(here);
					Console.OUT.println(cut);
					Console.OUT.println(assoc);
				}
				team.barrier(team.role()(0));
			}
			
			team.allreduce(team.role()(0), assoc, 0, assoc, 0, assoc.size, Team.ADD);
			team.allreduce(team.role()(0), cut,   0, cut,   0, cut.size,   Team.ADD);
			new Cell(Tuple2[Array[Long], Array[Long]](cut, assoc))
		})()();
		
		val cut = factors.get1();
		val assoc = factors.get2();
		Console.OUT.println(cut);
		Console.OUT.println(assoc);
		var ncut:Double = 0.0;
		for(i in 0..(numberOfClusters - 1)) {
			ncut += cut(i) as Double / assoc(i);
		}
		
		return ncut;
	}
	
	
	static def printSparseMatrix(team:Team, A:DistSparseMatrix[Double]) : void {
		for(p in team.placeGroup()) at(p) {
			val offsets = A().offsets;
			val vertexes = A().vertexes;
			val values = A().values;
			Console.OUT.println("****** SparseMatrix(" + team.role()(0) + ") ******");
			Console.OUT.println(offsets);
			Console.OUT.println(vertexes);
			Console.OUT.println(values);
			Console.OUT.println("*****************************");
		}
	}
	
	static def printIdStruct(ids:org.scalegraph.graph.id.IdStruct) : void {
		Console.OUT.println("[" + ids.lgl + ", " + ids.lgc + ", " + ids.lgr + "]");
	}
	
	static def split[T](team : Team, dmc : DistMemoryChunk[T]) : Tuple2[DistMemoryChunk[T], DistMemoryChunk[T]] {
		val src = new DistMemoryChunk[T](team.placeGroup(), () => {
			val dmc_ = dmc();
			val mc = new MemoryChunk[T](dmc_.size() / 2);
			for(i in 0..(mc.size() - 1)) {
				mc(i) = dmc_(i * 2);
			}
			mc
		});
		val dst = new DistMemoryChunk[T](team.placeGroup(), () => {
			val dmc_ = dmc();
			val mc = new MemoryChunk[T](dmc_.size() / 2);
			for(i in 0..(mc.size() - 1)) {
				mc(i) = dmc_(i * 2 + 1);
			}
			mc
		});
		return Tuple2[DistMemoryChunk[T], DistMemoryChunk[T]](src, dst);
	}
}


class MyStopWatch {
	
	class Record {
		val label : String;
		var time : Long;
		
		def this(label : String, time : Long) {
			this.label = label;
			this.time =  time;
		}
	}
	
	val list : x10.util.ArrayList[Record] = new x10.util.ArrayList[Record]();
	var maxLength : Int = 0;
	
	def start(label : String) {
		list.add(new Record(label, x10.util.Timer.milliTime()));
		maxLength = Math.max(label.length(), maxLength);
		Console.OUT.println("*** " + label + " ***");
	}
	
	def next(label : String) {
		end();
		start(label);
	}
	
	def end() {
		val rec = list.getLast();
		rec.time = x10.util.Timer.milliTime() - rec.time;
	}
	
	def print() {
		for(rec in list) {
			val numTab = (maxLength / 8 + 1) - (rec.label.length() / 8);
			Console.OUT.printf("%s%s%.3f sec\n", rec.label, new String(new Array[Char](numTab, '\t')), rec.time / 1000.0);
		}
	}
}
