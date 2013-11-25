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

package org.scalegraph.api;

import x10.compiler.Ifdef;
import x10.util.Team;
import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;

import org.scalegraph.Config;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.id.Type;
import org.scalegraph.io.CSV;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.util.random.Random;
import org.scalegraph.blas.DistSparseMatrix;

@NativeCPPInclude("HyperANF_Natives.h")
public class HyperANF {
	
	/** The team that provides place group the calculation will take on.
	 * If the graph object provides different team, this variable is overridden with Graph's one. 
	 * Default: Config.get().worldTeam()
	 */
	public var team :Team = Config.get().worldTeam();
	/** Maximum number of iterations.
	 * Default: 1000
	 */
	public var niter:Int = 1000;
	
	public var weights :String = "weight";
	/*
	 * calcSize Method
	 * 
	 * Calculate Approximating the Neighbourhood Function.
	 * 
	 */
	
	private static struct MesHANF {
		val b0:Byte, b1:Byte, b2:Byte, b3:Byte;
		val b4:Byte, b5:Byte, b6:Byte, b7:Byte;
		val b8:Byte, b9:Byte, ba:Byte, bb:Byte;
		val bc:Byte, bd:Byte, be:Byte, bf:Byte;
		def this(mc:MemoryChunk[Byte]) {
//			if(mc.size()!=16L) return;
			b0 = mc( 0); b1 = mc( 1); b2 = mc( 2); b3 = mc( 3);
			b4 = mc( 4); b5 = mc( 5); b6 = mc( 6); b7 = mc( 7);
			b8 = mc( 8); b9 = mc( 9); ba = mc(10); bb = mc(11);
			bc = mc(12); bd = mc(13); be = mc(14); bf = mc(15);
		}
		
	}
	private static def retMC(mes:MesHANF) {
		val mc = new MemoryChunk[Byte](16);
		mc( 0) = mes.b0; mc( 1) = mes.b1; mc( 2) = mes.b2; mc( 3) = mes.b3;
		mc( 4) = mes.b4; mc( 5) = mes.b5; mc( 6) = mes.b6; mc( 7) = mes.b7;
		mc( 8) = mes.b8; mc( 9) = mes.b9; mc(10) = mes.ba; mc(11) = mes.bb;
		mc(12) = mes.bc; mc(13) = mes.bd; mc(14) = mes.be; mc(15) = mes.bf;
		return mc;
	}


	// TODO
	// message繧剃ｽ懊ｋ縺ｨ縺薙ｍ縺ｫ譁ｰ縺励＞髢｢謨ｰ繧剃ｽ懊ｋ
	// @Native繧呈怙蛻昴↓譖ｸ縺�※
	// 荳ｭ霄ｫ縺ｧx10縺ｮ蜃ｦ逅�ｒ譖ｸ縺�※
	// 
	//
	
	private static def calcSize(counter:MemoryChunk[Byte], alpha:Double) {
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
	
	@Native("c++", "org::scalegraph::api::hyperANF_update_counter((#counter)->pointer(), (x10_byte*)((#mes)->pointer() + #offset))")
	private static def update(counter: MemoryChunk[Byte] , mes:MemoryChunk[MesHANF], offset : Long) :void {
		val counterC = retMC(mes(offset));
		for(j in counterC.range()) {
			counter(j) = MathAppend.max(counterC(j) , counter(j));
		}
	}
	private static def execute(param :HyperANF, matrix :DistSparseMatrix[Double]) {

		val team = param.team;
		val niter = param.niter;
		val sw = Config.get().stopWatch();
		
		
		val blockLength = 3L;

//		val csr = graph.createDistEdgeIndexMatrix(Config.get().dist1d(), true, true);
//		val xpregel = new XPregelGraph[MemoryChunk[Byte], Double](csr);
		val xpregel = XPregelGraph.make[MemoryChunk[Byte], Double](matrix);
		xpregel.setLogPrinter(Console.ERR, 0);
		xpregel.updateInEdge();
		
		sw.lap("UpdateInEdge");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Update In Edge:"); }
		
//		val N:Long = graph.numberOfVertices();
		val N:Long = xpregel.size();
		val B = 7;
		val M = 1<<B;

		val alpha:Double;
		if(B==5) alpha = 0.697;
		else if(B==6) alpha = 0.769;
		else alpha = 0.7213 / (1.00+1.073/M);
		
		val base = 16;
		val loop = M / base;
		/*
		 *  
		 * in superstep 
		 * 		0 : initialize each node value(MemoryChunk)
		 * 		0~ : recieve messages , change my value and send my value to adjacent nodes.
		 */
		val results: GlobalRef[Cell[MemoryChunk[Double]]] = new GlobalRef[Cell[MemoryChunk[Double]]](new Cell[MemoryChunk[Double]](new MemoryChunk[Double](niter+2)));
		val compute :(ctx :VertexContext[MemoryChunk[Byte], Double, MesHANF, Double], messages :MemoryChunk[MesHANF]) => void
		 = (ctx :VertexContext[MemoryChunk[Byte], Double, MesHANF, Double], messages :MemoryChunk[MesHANF]) => {

//			 var counterB:MemoryChunk[Byte];
			 if(ctx.superstep()==0) {
				 val counterA = new MemoryChunk[Byte](M);
				 for(i in counterA.range()) counterA(i) = 0;
				 val rand = new Random(ctx.realId(ctx.id()), 1000);
				 val pos = rand.nextLong()%M;
				 var num:Long = rand.nextLong()+1;
				 var cnt:Byte = 1;
				 while(num%2==0L) {
					 num /= 2;
					 cnt = cnt+1;
				 }
				 counterA(pos) =  cnt;
				 ctx.setValue(counterA);
			 }
			 
			 else {
				 val startPos = base * ((ctx.superstep()-1) % loop ) ; // ctx.superstep()>=1
				 val counterA = ctx.value().subpart(startPos, 16);
				 //maxim massages
				 if(ctx.id()==0L) sw.lap("hoge"+startPos);
				 for(i in messages.range()) {
					 update(counterA, messages, i);
				 }
			 }
			 val startPos = base * (ctx.superstep() % loop);
			val mes =new MesHANF( ctx.value().subpart(startPos, base) );
			/*
			 for(i in ctx.outEdgesId().range() ) 
				 ctx.sendMessage(ctx.outEdgesId()(i), mes);
			*/
			 ctx.sendMessageToAllNeighbors(mes);
			 
			 val retval = (ctx.superstep()%loop==0) ? calcSize(/*counterB*/ ctx.value(),alpha) : 0.0;
			 ctx.aggregate(retval);
		 };
		val aggregator :(values :MemoryChunk[Double]) => Double
		  = (values :MemoryChunk[Double]) => MathAppend.sum(values);
		  /*
		val combiner :(values : MemoryChunk[MemoryChunk[Byte]]) => MemoryChunk[Byte] =
			(values : MemoryChunk[MemoryChunk[Byte]]) =>{
				if(values.size()==0L) {
					val ret:MemoryChunk[Byte] = new MemoryChunk[Byte]((M as Long)) ;
					for(i in ret.range()) ret(i) = (0 as Byte);
					return ret;
				}
				val ret = values(0);
				for(i in values.range()) {
					for(j in ret.range()) {
						ret(j) = MathAppend.max(ret(j), values(i)(j));
					}
				}
				return ret;
				
			};
		   */
		val end :(superstep :Int, aggVal :Double) => Boolean =
			(superstep :Int, aggVal :Double) => {
				if(results.home==here) {
					if(superstep%loop!=0) return false;
					val index = superstep / loop;
					val md:MemoryChunk[Double] = results()();
					md(index) = aggVal;
					results()() = md;
					if(superstep>5) {
						val	a = md(index-1) + 1.0;
						val b = md(index) + 1.0;
						if(MathAppend.abs(a/b - 1.0) < 0.001)
							return true;
					}
				}
				if(here.id == 0) {
					sw.lap("Neighborhood function at superstep " + superstep + " = " + aggVal);
				}
				
				return superstep > niter;
			};
		//xpregel.iterate[MemoryChunk[Byte],Double](compute, aggregator, combiner, end);
		xpregel.iterate[MesHANF,Double](compute, aggregator, end);
		sw.lap("Main iterate");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("HyperANF Main iterate:"); }
		return results()();
		
	}	
	/** Run the calculation of HyperANF.
	 * This method is faster than run(Graph) method when it is called several times on the same graph.
	 * @param matrix 1D row distributed adjacency matrix with edge weights.
	 */
	public def execute(matrix :DistSparseMatrix[Double]) :MemoryChunk[Double] = execute(this, matrix);
	
	
	/** Run the calculation of HyperANF.
	 * @param g The graph object. 
	 */
	public def execute(g :Graph) :MemoryChunk[Double]{	
		//throw new UnsupportedOperationException();
		// Since graph object has its own team, we shold use graph's one.
		this.team = g.team();	
		val matrix = g.createDistSparseMatrix[Double](
				Config.get().distXPregel(), weights, true, false);
		return execute(matrix);	
	}

	// The algorithm interface also needs two helper methods like this.
	
	/** Run the calculation of HyperANF with default parameters.
	 * @param g The graph object. 
	 */
	public static def run(g :Graph) :MemoryChunk[Double]{
		//throw new UnsupportedOperationException();
		return new HyperANF().execute(g);
	}
	
	/** Run the calculation of StronglyConnectedComponent with default parameters.
	 * This method is faster than run(Graph) method when it is called several times on the same graph.
	 * @param matrix 1D row distributed adjacency matrix with edge weights.
	 */
	public static def run(matrix :DistSparseMatrix[Double]) :MemoryChunk[Double] = 
		new HyperANF().execute(matrix);

}
