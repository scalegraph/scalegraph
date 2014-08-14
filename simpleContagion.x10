/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
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
import x10.compiler.Ifdef;

import org.scalegraph.Config;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.random.Random;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.io.CSV;
import org.scalegraph.io.NamedDistData;

public final class simpleContagion extends AlgorithmTest{

//execute part

//val status = MemoryChunk.make[Int](numVertex);
//val status: GlobalRef[Cell[MemoryChunk[Int]]] = new GlobalRef[Cell[MemoryChunk[Int]]](new Cell[MemoryChunk[Int]](MemoryChunk.make[Int](numVertex)));
val rnd = new org.scalegraph.util.random.Random(3, 2);
val startID = rnd.nextLong() % 2048;


val niter=200;
var numInfected:Long = 0l;
val b = 0.05;
val r = 0.2;
public static def main(args: Array[String](1)) {
new simpleContagion().execute(args);  //the args will be divided into 2 parts by split in AlgorithmTest
}


public def run(args: Array[String](1), g: Graph): Boolean {  ///Args are divided by -, so: mpirun ./a.out rmat 11 -
//graph construction
val csr = g.createDistSparseMatrix[Double](Config.get().distXPregel(), "weight", true, false);
val xpgraph = XPregelGraph.make[Long, Double](csr);
g.del();
xpgraph.updateInEdge();
xpgraph.iterate[Long, Long]((ctx :VertexContext[Long, Double, Long, Long], messages :MemoryChunk[Long]) => {
  var value :Long;
  var status:Long = 0l;
  if (ctx.superstep() == 0) 
  {  /// vertexID can be get by ctx.readId()
    if (ctx.realId()!=startID) value = 0l;
    else 
   {
     value = 1l; 
  //   Console.OUT.println(ctx.realId()+"="+startID);
   }
    ctx.setValue(value);
  }
  else  value = MathAppend.sum(messages);
// Console.OUT.println(ctx.realId()+" "+ctx.value());
  if (ctx.value() == 0l) 
  {
    if (value > 0l && chanceToInfect(value) )  ///only suspected people have a chance to become infected
    {
      value = 1l;
      status = 1l;
    }
   else value =0l;
  }
  else if (ctx.value() == 1l )
  {
    ctx.sendMessageToAllNeighbors(1l);
    if (chanceToRecover()) value = 2l;
    else { status = 1l; value = 1l;}
  }
  else if (ctx.value() == 2l)
  {
    //halt;
    value =2l;
    ctx.voteToHalt();
  }

  ctx.aggregate(status);
  ctx.setValue(value);
  
},
(values :MemoryChunk[Long]) => MathAppend.sum(values),  //end of aggregator closure
(superstep :Int, aggVal :Long) => {
  // if (here.id==0)
  // {
  //  sw.lap("at superstep " + superstep );
  // }
  Console.OUT.println("at superstep:" + superstep + " aggVal:" + aggVal);
 Console.OUT.println("numInfected"+ numInfected);
  numInfected = aggVal;
  return (superstep>= niter ||(superstep>0 && aggVal==0l) ); //aggVal == 0 means infected members are all recovered
} );//end of iteration

val result = xpgraph.stealOutput[Long]();
return true;
}//end of run

def chanceToInfect(num: Long):Boolean
{
	return ((1-Math.pow((1-b), num)) * 100) >= (rnd.nextInt() % 100) ? true: false;
}

def chanceToRecover():Boolean
{
return (r * 100) >= rnd.nextInt()%100 ? true: false;
}

}//end of class



