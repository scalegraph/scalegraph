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

import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;
import org.scalegraph.harness.sx10Test;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;

public class PageRank extends sx10Test {
    
    public static def main(args:Array[String](1)) {
        val t = new PageRank();
        t.execute();
    }
    
    public def run(): Boolean {
        val arg: Array[String] = new Array[String](1);
        arg(0) = "/nfs/data0/testdata/WEIGHTED_COMMA_SPLIT_RMAT_SCALE_20";
        entry(arg);
        
        return true;
    }
	
	public def entry(args:Array[String]) {
		val team = Team.WORLD;
		val inputFormat = (s:String) => {
			val elements = s.split(",");
			return new Tuple3[Long,Long,Double](
				Long.parse(elements(0)),
				Long.parse(elements(1)),
				1.0
			);
		};
		val start_read_time = System.currentTimeMillis();
		val graphData = DistributedReader.read(team,args,inputFormat);
		val end_read_time = System.currentTimeMillis();
		Console.OUT.println("Read File: "+(end_read_time-start_read_time)+" millis");
	
		val edgeList = graphData.get1();
		val weigh = graphData.get2();
		
		val start_init_graph = System.currentTimeMillis();
		
		val g = Graph.make(team, edgeList.raw(team.placeGroup()));
		g.setEdgeAttribute[Double]("edgevalue", weigh.raw(team.placeGroup()));		
		val xpregel = XPregelGraph.make[Double, Double](team,
				g.createDistSparseMatrix[Double](
					Dist2D.make2D(team, 1, team.size()), "edgevalue", true, true));
		
		val start_time = System.currentTimeMillis();
		
		xpregel.updateInEdge();
		
		Console.OUT.println("Update In Edge: " + (System.currentTimeMillis()-start_time) + "ms");
		
		xpregel.iterate[Double,Double]((ctx :VertexContext[Double, Double, Double, Double], messages :MemoryChunk[Double]) => {
			val value :Double;
			if(ctx.superstep() == 0)
				value = 1.0 / ctx.numberOfVertices();
			else
				value = 0.15 / ctx.numberOfVertices() + 0.85 * MathAppend.sum(messages);

			if (ctx.superstep() < 30) {
				ctx.aggregate(Math.abs(value - ctx.value()));
				ctx.setValue(value);
				ctx.sendMessageToAllNeighbors(value / ctx.outEdgesId().size());
			}
			else {
				ctx.voteToHalt();
			}
		},
		(values :MemoryChunk[Double]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Double) => {
			if (here.id == 0) {
				Console.OUT.println("Large PageRank at superstep " + superstep + " = " + aggVal);
			}
			return (superstep >= 30 || aggVal < 0.0001);
		});
		
		val end_time = System.currentTimeMillis();
	
		Console.OUT.println("Finish after = " + (end_time-start_time) + " ms");
		Console.OUT.println("Finish application");
	}
}
