package example;

import x10.util.Team;

import org.scalegraph.graph.Graph;
import org.scalegraph.Config;
import org.scalegraph.id.Type;
import org.scalegraph.io.CSV;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;


public class PageRankSimple {
    
    public static def main(args:Array[String](1)) {
        
        val team = Team.WORLD;
        
        // load graph from CSV file
        val graph = Graph.make(CSV.read(args(0), 
                                        [Type.Long as Int, Type.Long, Type.Double],
                                        ["source", "target", "weight"]));
        // create sparse matrix
        val csr = graph.createDistSparseMatrix[Double](Config.get().dist1d(), "weight", true, true);
        
        // create xpregel instance
        val xpregel = XPregelGraph.make[Double, Double](csr);
        
        xpregel.updateInEdge();
        
        // for each iteration
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
        // stop computation if it is more than 30 steps or quadratic error is less than 0.0001
        (superstep :Int, aggVal :Double) => (superstep >= 30 || aggVal < 0.0001));
    }
}