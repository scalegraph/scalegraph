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
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.test.STest;
import org.scalegraph.api.SpectralClustering;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.EdgeList;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.io.ID;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.io.impl.CSVWriter;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.SString;
import org.scalegraph.util.Team2;
import org.scalegraph.util.random.Random;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.tuple.Tuple3;


final class SpectralClusteringTest extends AlgorithmTest {
	public static def main(args: Array[String](1)) {
		new SpectralClusteringTest().execute(args);
	}

	public def run(args :Array[String](1), g : Graph): Boolean {
		val config = Config.get();
		val team = config.worldTeam();
		val dist = config.dist2d();
		
		val numCluster = Int.parse(args(0));
		val tolerance = Double.parse(args(1));
		val maxitr = Int.parse(args(2));
		val threshold = Double.parse(args(3));
		val outOrEval = args(4);
		val outputPath = args(5);
		
		Console.OUT.println("dist2d = " + dist);
		
		Console.OUT.println("vertices = " + g.numberOfVertices());
		Console.OUT.println("edges    = " + g.numberOfEdges());
		
		val sw = new MyStopWatch();
		
		sw.start("create dist sparse matrix");
		val W = g.createDistSparseMatrix[Double](dist, ID.NAME_WEIGHT, false, false);
		g.del();
		
		sw.next("spectral clustering");
		val result = SpectralClustering.run(W, numCluster, tolerance, maxitr, threshold);
		
		sw.next("normalized cut");
		val ncut = normalizedCut(W, result, numCluster);
		Console.OUT.println("ncut = " + ncut);
		
		if(outOrEval.equals("out")) {
		
			sw.next("output");
			val namedDistData = new NamedDistData(["sc_result" as String], [result as Any]);
			CSVWriter.write(team, outputPath, namedDistData, true);
			
		} else if(outOrEval.equals("eval")) {
		
			sw.next("validation");
			checkResult[Int](result, outputPath, 0);
			
		} else {
			Console.OUT.printf("Worning: invalid argument \"%s\" will be ignored\n", outOrEval);
		}
		
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
			if(cut(i) == 0L && assoc(i) == 0L) continue;
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
