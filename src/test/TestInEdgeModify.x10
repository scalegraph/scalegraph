package test;

import x10.util.Team;
import x10.compiler.Native;
import x10.util.StringBuilder;

import org.scalegraph.Config;
import org.scalegraph.id.Type;
import org.scalegraph.io.CSV;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.random.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;

public class TestInEdgeModify {
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
		Console.OUT.println("initial update inEdge");
		xpregel.updateInEdge();
		Console.OUT.println("Update In Edge: " + (System.currentTimeMillis()-start_time) + " [ms]");
		
		//set all vertex value as 0L 
	//	xpregel.initVertexValue(0L);
		
		//make stringbuilder
		Console.OUT.println("make stringBuilder");
		val mesBuf = PlaceLocalHandle.make[StringBuilder](team.placeGroup(), ()=> new StringBuilder());
		
		//-----start of work
		Console.OUT.println("start work");
		
		
		for(nnn in 0..2){
			mesBuf().add(nnn+"kaime!\n");
			//-----update inEdge
			Console.OUT.println("update inEdge!");
			xpregel.updateInEdge();
			xpregel.iterate[Long, Long](
				(ctx :VertexContext[Long, Long, Long, Long ],
						messages :MemoryChunk[Long] ) => {
					//temp string
					val sb = new StringBuilder();
					//ID
					val myId = ctx.realId();
					
					//show current state
					//display current in edges
					sb.add("--ss:"+ctx.superstep()+" id:"+ myId + 
							" dstid:" + ctx.dstId(myId) + " --\n\tcurrent inedges:\n");
					// val IEsId = ctx.inEdgesId();
					// for(eI in IEsId){
					// 	sb.add("\t" + ctx.realId(eI) + "\t->\t" + myId +"\n");
					// }
					for(val it = ctx.getInEdgesIterator(); it.hasNext(); it.next()){
						sb.add("\t" + ctx.realId(it.curId()) + "\t->\t" + myId +"\n");
					}
					
					//display current out edges
					sb.add("\tcurrent outedges:\n");
					// val OEsId = ctx.outEdgesId();
					// for(eI in OEsId){
					// 	sb.add("\t" + myId + "\t->\t" + ctx.realId(eI) +"\n");
					// }
					for(val it = ctx.getOutEdgesIterator(); it.hasNext(); it.next()){
						sb.add("\t" + myId + "\t->\t" + ctx.realId(it.curId()) +"\n");
					}
					//add out edge
					if(myId != 0L){
						//make number
						val r = (nnn+myId+ctx.superstep())%ctx.numberOfVertices();
						ctx.addOutEdge(ctx.dstId(r),0L);
						sb.add("\t\tadd outedge:\t" + r + " (dstid=" + r + ")\n");
					}
					//display current out edges
					sb.add("\tcurrent outedges:\n");
					// val OEsId2 = ctx.outEdgesId();
					// for(eI in OEsId2){
					// 	sb.add("\t" + myId + "\t->\t" + ctx.realId(eI) +"\n");
					// }
					for(eI in ctx) {
						sb.add("\t" + myId + "\t->\t" + ctx.realId(eI) +"\n");
					}
					
					atomic {	//atomic ga nai to hukusuu thread de shinu
						mesBuf().add(sb.toString());
					}
					
					ctx.sendMessage(0L,myId);
				},
				(values :MemoryChunk[Long]) => 0L,	//returns 0 with no cost
				(superstep :Int, aggVal :Long) => (superstep > 1)
			);
		}
		
		
		
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





