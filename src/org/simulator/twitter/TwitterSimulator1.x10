/*
 * 012.
 */


package org.simulator.twitter;


import org.scalegraph.Config;
import org.scalegraph.id.Type;
//import org.scalegraph.io.CSV;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.util.MemoryChunk;
import x10.lang.Iterator;
import org.scalegraph.util.random.Random;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.graph.Graph;
import org.simulator.twitter.TwitterUser;



public class TwitterSimulator1 {																																																																																																																																																																
    
    public static def main(args:Array[String]) {
    	
    	val config = Config.get();
    	val team = config.worldTeam();
    	val dist = config.dist2d();
    	val weightAttr = "weight";																																																																		
    	val outputPath = "pagerank-%d";
    	val tweetCount = 0;																																																																														
    	
    	val individual =1;																													
    	val broadcast =2;
    	val attribute = 3;
    	val direction = 4;
    	val mutual = 5;
    	
    	// Generate RMAT graph
    	val scale = 10;
    	val edgeFactor = 3;
    	val rnd = new Random(2, 3);
    	val edgeList = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd);
    	val g = Graph.make(edgeList);
    	
	// Set edge attribute "weight" to create sparse matrix
	val weights = GraphGenerator.genRandomEdgeValue(scale, edgeFactor, rnd);
    	g.setEdgeAttribute[Double](weightAttr, weights);
    	
    	// create sparse matrix
    	val csr = g.createDistSparseMatrix[Double](Config.get().dist1d(), "weight", true, true);
    	
    
    	
    	
    	// create xpregel instance
        val xpregel = XPregelGraph.make[TwitterUser, Double](csr);
        
        xpregel.updateInEdge();   //Not sure if we need to update in edges in twitter network. We should (followers) but needs more discussion
        
        // for each iteration
        xpregel.iterate[Double,Double]((ctx :VertexContext[TwitterUser, Double, Double, Double], messages :MemoryChunk[Double]) => {
            val value :Double;
            val following :MemoryChunk[Long];
            val itr : Iterator[Long];
            if(ctx.superstep() == 0){
            	ctx.sendMessageToAllNeighbors(broadcast); //Send MulticastTweet
            }else{
		val step = ctx.superstep();
            	following = (ctx.outEdges()).get1(); //outEdges return a Tuple2, get1() returns memorychunk of distId`s
		if(following.size() > step){
			val destid = following(step) % following.size();
			ctx.sendMessage(destid, individual);
		}
				
		ctx.setValue(new TwitterUser());

//            	itr = following.iterator();
//            	if(itr.hasNext()){
//            		ctx.sendMessage(itr.next(), individual);  //put message id here
//            		value = 1;
//            		ctx.setValue(value);
//            	}
            }
            if(ctx.superstep() >= 5){
            	ctx.voteToHalt();
            }
         },
         (values :MemoryChunk[Double]) => MathAppend.sum(values),
        // stop computation if it is more than 5 steps or quadratic error is less than 0.0001
        (superstep :Int, aggVal :Double) => (superstep >= 5));
    }
}





