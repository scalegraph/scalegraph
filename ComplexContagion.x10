package test;

import x10.util.Team;
import x10.compiler.Ifdef;
import org.scalegraph.id.Type;

import org.scalegraph.Config;
import org.scalegraph.test.AlgorithmTest2;
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

public final class ComplexContagion extends AlgorithmTest2 {
val rnd = new org.scalegraph.util.random.Random(1, 2);
//val baseID = new GlobalRef[Cell[Long]](new Cell[Long](0l));
var baseID: Long;
var startID: Long;
//var niter:Int= 200; 
var numInfected :Long ;
//50% infected recording
var hAmount:Long;
var setStart: Boolean;

public static def main(args: Array[String](1)) {
new ComplexContagion().execute(args);
}

public def run(args :Array[String](1), graph :Graph):Boolean {
//graph construction
rnd.skip(Long.parse(args(0)));

val csr = graph.createDistSparseMatrix[Double](Config.get().distXPregel(), "weight", true, false);
val xpgraph = XPregelGraph.make[Long, Double](csr);
graph.del();
xpgraph.updateInEdge();

xpgraph.iterate[Long, Long]((ctx :VertexContext[Long, Double, Long, Long], messages :MemoryChunk[Long]) => {
  var value :Long;
  var status:Long = 0l;
  if (ctx.superstep() == 0)
  { 

    hAmount = ctx.numberOfVertices()/2;
    if (setStart == false)
   {
///
//    finish {
//   if (here.id==0)  {
//  for (p in Place.places())
//         at(p) baseID = ctx.placeBaseVertexId();
//                 }
//      }
///

    startID = rnd.nextLong() % ctx.numberOfVertices();//+baseID;
//    Console.OUT.println("startID is :"+ startID+" and hereID is :"+here.id);
    setStart = true;
   }
    if (ctx.realId()!=startID) value = 0l;
    else
    {
      value = 1l;
      Console.OUT.println("------!!!----"+ctx.realId()+"="+ startID + " here id:"+here.id);
    }
    ctx.setValue(value);
  }
  else if (ctx.superstep() == 1)
  {
    value = MathAppend.sum(messages);
    if (ctx.value() == 1l) value = 1l; //beginning one
    else if (value > 0l)
    {
      value = 1l;
      status = 1l;

    }
    else value = 0l;
    ctx.setValue(value);
  }
  else  value = MathAppend.sum(messages);
  // Console.OUT.println(ctx.realId() + " " + value+" " + ctx.value()+ " here id:"+ here.id);
  if (ctx.value() == 0l)
  {
    if (value > 1l )  ///Complex Contagion
    {
      value = 1l;
      status = 1l;
      ctx.sendMessageToAllNeighbors(1l);
    }
    else value =0l;
  }
  else if (ctx.value() == 1l )
  {
    ctx.sendMessageToAllNeighbors(1l);
    status = 1l;
    value = 1l;
  }

  ctx.aggregate(status);
  ctx.setValue(value);

},
(values :MemoryChunk[Long]) => MathAppend.sum(values),  //end of aggregator closure
(superstep :Int, aggVal :Long) => {
 if (here.id == 0){ Config.get().stopWatch().lap("* "+aggVal+"  "+(superstep-1));}
    
  if  (aggVal > hAmount)
  {
   if(here.id == 0)
       { Config.get().stopWatch().lap("* half reached at:"+(superstep-1));
         return true;}
  }

  if (numInfected < aggVal)
  {
    numInfected = aggVal;
  }
  else
  {
   if (here.id == 0)

   {
     Config.get().stopWatch().lap("* Peak Amount is: "+ aggVal+", on step: "+ (superstep - 1)+" but Half Amount doesn't reached.");
   }
    return true;
  }

  return false;
} );//end of iteration

val result = xpgraph.stealOutput[Long]();
return true;
}//end of run


}//end of class


