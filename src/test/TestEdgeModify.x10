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

/*
 *   1
 *  /|\
 * 4-0-2
 *  \|/
 *   3
 */

public class TestEdgeModify {
	public static def main(args:Array[String](1)) {
		
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
		
		//set all vertex value as 0L 
	//	xpregel.initVertexValue(0L);
		
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
				//remove out edge
				val e = (myId+1)%ctx.numberOfVertices();

				//super step ha 0 start rashii
				sb.add("---superstep "+ctx.superstep()+" myId "+ myId + " ---\n");
				
				for (m in messages.range()){
					sb.add("message:"+ messages(m)+"\n");
				}
				
				if(myId != 0L && (ctx.superstep() as Long)==myId){
					sb.add(myId + ":\tRemove:\t" + e + "\n");
					removeOutEdge(ctx,ctx.dstId(e));
				}
				
				//display current out edges
				val OEsId = ctx.outEdgesId();
				for(eI in OEsId){
					sb.add(myId + "->" + ctx.realId(eI) + "\n");
				}
				
				atomic {	//atomic ga nai to hukusuu thread de shinu
					mesBuf().add(sb.toString());
				}
				
				if(ctx.superstep()>=ctx.numberOfVertices()-1){	//koko de vote hantei
					ctx.voteToHalt();
				}else{
					//send dummy message
					if(myId==0L){
						ctx.sendMessageToAllNeighbors(myId);
					}else if(myId < ctx.superstep()){
						ctx.sendMessageToAllNeighbors(myId);
					}
				}
			},
			(values :MemoryChunk[Long]) => MathAppend.nextPowerOf2(0L),	//returns 0 with no cost
			(superstep :Int, aggVal :Long) => (superstep > 1000)			//tekitou
		);
		//-----end of work

		Console.OUT.println("finished work");
		val end_time = System.currentTimeMillis();
		
		val ps=team.places();
		for(p in ps) at(ps(p)) {// ...
			atomic{
			Console.OUT.println(p + ":\n" + mesBuf().toString());
			}
		}
		
		Console.OUT.println("Finish after =" + (end_time-start_time));
		Console.OUT.println("Finish application");	
	}
	
	public static def removeOutEdge(ctx :VertexContext[Long, Long, Long, Long ],dstId :Long){
		//Console.OUT.println("\tEnter removeOutEdge:dstId="+dstId);
		val temp = ctx.outEdges();
		val len = temp.get1().size();	//motono nagasa
		//Console.OUT.println("\t len:="+len);
		//temp ha outEdges no copy rashii
		ctx.clearOutEdges();

		//TODO:subpart tsukaou
		//modified  len -> len-1
		for(i in 0..(len - 1)) {		//length -> index
			//Console.OUT.println("\t  i:="+i+" temp.get1()(i):="+temp.get1()(i));
			if(temp.get1()(i)!=dstId){	//keshitakatta dst de nakereba
				//Console.OUT.println("\t deleteId:dstId="+dstId+" add:i="+i);
				ctx.addOutEdge(temp.get1()(i),temp.get2()(i));
			}else{
				//Console.OUT.println("\t deleteId:dstId="+dstId+" NoOp:i="+i);
			}
		}
		//Console.OUT.println("\tQuit removeOutEdge:"+dstId);
	}
}	





