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

import x10.util.Team;

import org.scalegraph.Config;
import org.scalegraph.harness.sx10Test;
import org.scalegraph.api.SpectralClustering;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.random.Random;


final class SpectralClusteringTest extends sx10Test {
	public static def main(args: Array[String](1)) {
		new SpectralClusteringTest().execute(args);
	}

	public def run(args :Array[String](1)): Boolean {
		val scale = Int.parse(args(0));         // scale of RMAT graph
		val edgeFactor = Int.parse(args(1));    // edge factor of RMAT graph
		val numCluster = Int.parse(args(2));    // number of clusters
		val tolerance = Double.parse(args(3));  // tolerance of ARPACK
		val maxitr = Int.parse(args(4));        // max number of iteration in k-means
		val threshold = Double.parse(args(5));  // threshold for convergence test in k-means
		
		val team = Config.get().worldTeam();
		
		val R = 1 << (MathAppend.ceilLog2(team.size()) / 2);
		val C = team.size() / R;
		val RC = R * C;
		val dist = Dist2D.make2D(team, R, C);
		
		val sw = new MyStopWatch();
		
		Console.OUT.println(dist);
		Console.OUT.println("Graph generation ...");
		
		sw.start("graph generation");
		val rnd = new Random(2, 3);
		val edgelist = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd);
		// val weight = GraphGenerator.genRandomEdgeValue(scale, 16, rnd);
		val weight = new DistMemoryChunk[Double](team.placeGroup(),
				() => new MemoryChunk[Double](edgelist.src().size(), (Long) => 1.0));

		val g = Graph.make(edgelist);
		g.setEdgeAttribute("edgevalue", weight);
		Console.OUT.println("vertices = " + g.numberOfVertices());
		Console.OUT.println("edges    = " + g.numberOfEdges());
		
		sw.next("spectral clustering");
		
		val result = SpectralClustering.run(g, "edgevalue", numCluster, tolerance, maxitr, threshold);
		
		sw.next("output");
		
		DistributedReader.write("outvec-%d.txt", result);
		
		sw.end();
		sw.print();
		
		return true;
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
