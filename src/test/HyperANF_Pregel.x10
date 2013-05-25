package test;


import x10.util.Team;

import org.scalegraph.concurrent.Dist2D;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;


import org.scalegraph.util.random.Random;


public class HyperANF_Pregel {
	public static def calcSize(counter:MemoryChunk[Byte], alpha:Double) {
		var Z:Double = 0.0;
		val M:Double = counter.size();
		for(i in counter.range()) {
			Z += Math.pow(2.0, -counter(i));
		}
		Z = 1.0/Z;
		val E:Double = alpha * M * M * Z;
		
		val tmp:Double = M*5.0/2.0;
		if(E<tmp) {
			var cnt:Int =0;
			var zero:Byte = 0;
			for(i in counter.range()) 
				if(counter(i)==zero) 
					cnt++;
			if(cnt==0) return E;
			return M * Math.log(M/cnt);
		}
		var border:Double = 1.0/30.0;
		var i:Int = 0;
		while(i<32) {
			border *= 2.0;
			i ++;
		}
		if(E<=border) return E;
		border *= 30.0;
		return -border * Math.log(1.00 - E/border);
		
	}
	
	
	
	public static def main(args:Array[String](1)) {
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
		val g = new Graph(team,Graph.VertexType.Long,false);
		val start_init_graph = System.currentTimeMillis();
		g.addEdges(edgeList.data(team.placeGroup()));
		g.setEdgeAttribute[Double]("edgevalue",weigh.data(team.placeGroup()));
		val end_init_graph = System.currentTimeMillis();
		Console.OUT.println("Init Graph: " + (end_init_graph-start_init_graph) + "ms");
		

		val csr = g.constructDistSparseMatrix(Dist2D.make2D(team, 1, team.size()), true, true);
		val xpregel = new XPregelGraph[MemoryChunk[Byte], Double](team, csr);
		val edgeValue = g.constructDistAttribute[Double](csr, false, "edgevalue");
		xpregel.zipEdgeValue[Double](edgeValue, (value : Double) => value);
		
		val start_time = System.currentTimeMillis();
		
		xpregel.updateInEdge();
		
		Console.OUT.println("Update In Edge: " + (System.currentTimeMillis()-start_time) + "ms");
		
		val N:Long = g.numberOfVertices();
		val B = 7;
		val M = 1<<B;
		
		xpregel.do_computations[MemoryChunk[Byte],Double](
				(ctx :VertexContext[MemoryChunk[Byte], Double, MemoryChunk[Byte], Double], messages :MemoryChunk[MemoryChunk[Byte]]) => {
		//‚±‚±‚ªMemoryChunk[MemoryChunk[Byte]] ??

			val counter = ctx.value();
			if(ctx.superstep()==0) {
				
				val rand = new Random(ctx.realId(ctx.id()), 1000);
				val pos = rand.nextLong()%M;
				var num:Long = rand.nextLong()+1;
				var cnt:Byte = 0;
				while(num%2==0L) {
					num /= 2;
					cnt = cnt+1;
				}
				counter(pos) =  cnt;
				
			}
			else {
				//maxim massages
				for(i in messages.range()) {
					for(j in counter.range()) {
						counter(j) = MathAppend.max(messages(i)(j) , counter(j));
					}
				}
				
			}

			ctx.sendMessageToAllNeighbors(counter);
			
			val alpha:Double;
			if(B==5) alpha = 0.697;
			else if(B==6) alpha = 0.769;
			else alpha = 0.7213 / (1.00+1.073/M);
			val retval = calcSize(counter,alpha);
			
			ctx.aggregate(retval);
		},
		(values :MemoryChunk[Double]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Double) => (superstep >= 30) );
		
		val end_time = System.currentTimeMillis();
		
		Console.OUT.println("Finish after =" + (end_time-start_time));
		Console.OUT.println("Finish application");	
	}
}



