package test;

import x10.util.Team;
import x10.compiler.Native;

//import org.scalegraph.concurrent.Dist2D;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;
import x10.util.StringBuilder;

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
		
		//-----define edge length
		Console.OUT.println("define edge length");
		val edgeLength = 10;	//now dummy
		//-----make graph
		
		//-----define format
		Console.OUT.println("define format");
		val inputFormat = (s:String) => {
			val elements = s.split(",");
			return new Tuple3[Long,Long,Double](
					Long.parse(elements(0)),
					Long.parse(elements(1)),
					1.0
			);
		};
		//Long
		//-----read data
		Console.OUT.println("read data");
		val start_read_time = System.currentTimeMillis();
		val graphData = DistributedReader.read(team,args,inputFormat);
		val end_read_time = System.currentTimeMillis();
		Console.OUT.println("Read File: "+(end_read_time-start_read_time)+" [ms]");
		//-----
		
		val edgeList = graphData.get1();
		val weigh = graphData.get2();
		val g = new Graph(team,Graph.VertexType.Long,false);
		
		//-----init graph
		Console.OUT.println("init graph");
		val start_init_graph = System.currentTimeMillis();
		g.addEdges(edgeList.raw(team.placeGroup()));
		g.setEdgeAttribute[Double]("edgevalue",weigh.raw(team.placeGroup()));
		val end_init_graph = System.currentTimeMillis();
		Console.OUT.println("Init Graph: " + (end_init_graph-start_init_graph) + " [ms]");
		//-----
		
		//-----init xpregel
		Console.OUT.println("init xpregal");
		val csr = g.constructDistSparseMatrix(Dist2D.make2D(team, 1, team.size()), true, true);
		val xpregel = new XPregelGraph[Long, Long](team, csr);
		//-----
		
		val start_time = System.currentTimeMillis();
		
		//-----update inEdge
		Console.OUT.println("update inEdge");
		xpregel.updateInEdge();
		Console.OUT.println("Update In Edge: " + (System.currentTimeMillis()-start_time) + " [ms]");
		//-----
		
		//set all vertex value as 0L 
		xpregel.initVertexValue(0L);
		
		//make stringbuilder
		Console.OUT.println("make stringBuilder");
		val mesBuf = PlaceLocalHandle.make[StringBuilder](team.placeGroup(), ()=> new StringBuilder());
		
		//-----start of work
		Console.OUT.println("start work");
		xpregel.iterate[Long, Long](
			(ctx :VertexContext[Long, Long, Long, Long ],
					messages :MemoryChunk[Long] ) => {
				//ID
				val myId = ctx.realId();
				
				//display current status
				mesBuf().add("---Id " + myId + " superstep " + ctx.superstep() + " start---\n");
				
				//remove out edge
				val e = (myId+1)%ctx.numberOfVertices();
				//super step ha 0 start rashii
				if(ctx.superstep() as Long==myId){
					atomic {
						mesBuf().add(myId + ":\tRemove:\t" + e + "\n");
					}
					removeOutEdge(ctx,e);
				}
				
				//display current out edges
				val OEsId = ctx.outEdgesId();
				for(eI in OEsId){
					atomic {
						mesBuf().add(myId + "->" + eI + "\t\t");
					}
				}
				
				if(ctx.superstep()>=5){
					ctx.voteToHalt();
				}else{
					//send dummy message
					ctx.sendMessage(e,e);
				}
			},
			(values :MemoryChunk[Long]) => MathAppend.nextPowerOf2(0L),	//returns 0
			(superstep :Int, aggVal :Long) => (superstep >= 5) 
		);
		//-----end of work

		Console.OUT.println("finished work");
		val end_time = System.currentTimeMillis();
		
		val ps=team.places();
		for(p in ps) at(ps(p)) {// ...
			Console.OUT.println(p + "\n" + mesBuf().toString());
		}
		
		Console.OUT.println("Finish after =" + (end_time-start_time));
		Console.OUT.println("Finish application");	
	}
	
	public static def removeOutEdge(ctx :VertexContext[Long, Long, Long, Long ],dstId :Long){
		val temp=ctx.outEdges();
		//temp ha outEdges no copy rashii
		ctx.clearOutEdges();

		//TODO:subpart tsukaou
		val len = temp.get1().size()-1;
		for(i in 0..len){
			if(temp.get1()(i)!=dstId){
				ctx.addOutEdge(temp.get1()(i),temp.get2()(i));
			}
		}
	}
}	





