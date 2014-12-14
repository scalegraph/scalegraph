package test;

import x10.util.Team;
import x10.compiler.Native;
import x10.util.StringBuilder;

import org.scalegraph.Config;
import org.scalegraph.id.Type;
import org.scalegraph.io.CSV;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;


public class TestShowEdge {
	public static def main(args:Rail[String]) {
		
		//-----initialize team
		Console.OUT.println("initialize team");	
		val team = Team.WORLD;
		
		//-----read data, make graph, init graph
		Console.OUT.println("read data");
		val start_read_time = System.currentTimeMillis();
		val g = Graph.make(CSV.read(args(0), 
				[Type.Long as Int, Type.Long, Type.None, Type.Double],
				["source", "target", "weight"]));
		val end_read_time = System.currentTimeMillis();
		Console.OUT.println("Read File: "+(end_read_time-start_read_time)+" [ms]");
		
		//-----init xpregel
		Console.OUT.println("init xpregal");
		val xpregel = new XPregelGraph[Long, Long](
				g.createDistEdgeIndexMatrix(Config.get().dist1d(), true, true));

		
		val start_time = System.currentTimeMillis();
		
		//-----update inEdge
		Console.OUT.println("update inEdge");
		xpregel.updateInEdge();
		Console.OUT.println("Update In Edge: " + (System.currentTimeMillis()-start_time) + " [ms]");
		
		//make stringbuilder
		Console.OUT.println("make stringBuilder");
		val mesBuf = PlaceLocalHandle.make[StringBuilder](team.placeGroup(), ()=> new StringBuilder());
		
		//-----start of work
		Console.OUT.println("start work");
		xpregel.iterate[Long, Long](
			(ctx :VertexContext[Long, Long, Long, Long ],
					messages :MemoryChunk[Long] ) => {
				//temp string
				val sb = new StringBuilder();
				//ID
				val myId = ctx.realId();
				
				for (m in messages.range()){
					sb.add("message:"+ messages(m)+"\n");
				}
				
				//display current in edges
				sb.add("-- ss:"+ctx.superstep()+" id:"+ myId + 
						" dstid:" + ctx.dstId(myId) + " --\n\tInEdges:\n");
				val IEsId = ctx.inEdgesId();
				for(eI in IEsId){
					sb.add("\t" + ctx.realId(eI) + "\t->\t" + myId +"\n");
				}
				//display current out edges
				sb.add("\tOutEdges:\n");
				val OEsId = ctx.outEdgesId();
				for(eI in OEsId){
					sb.add("\t" + myId + "\t->\t" + ctx.realId(eI) +"\n");
				}
				
				atomic {	//atomic ga nai to hukusuu thread de shinu
					mesBuf().add(sb.toString());
				}
				
				ctx.voteToHalt();
			},
			(values :MemoryChunk[Long]) => 0L,	//returns 0 with no cost
			(superstep :Int, aggVal :Long) => (superstep > 1)	//tekitou
		);
		//-----end of work

		Console.OUT.println("finished work");
		val end_time = System.currentTimeMillis();
		
		val ps=team.places();
		for(p in ps) at(p) {// ...
			atomic{
				Console.OUT.println(p + ":\n" + mesBuf().toString());
			}
		}
		
		Console.OUT.println("Finish after =" + (end_time-start_time));
		Console.OUT.println("Finish application");	
	}
}	





