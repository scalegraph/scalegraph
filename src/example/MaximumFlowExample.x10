package example;

import org.scalegraph.io.NamedDistData;
import org.scalegraph.io.impl.CSVWriter;
import x10.util.Team;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.util.random.Random;
import org.scalegraph.graph.Graph;
import org.scalegraph.Config;
import org.scalegraph.util.SStringBuilder;
import org.scalegraph.io.FileWriter;
import org.scalegraph.io.FileMode;


public final class MaximumFlowExample {

    public static def main(args: Array[String]) {
        
        val config = Config.get();
        val team = config.worldTeam();
        val dist = config.dist2d();
        val weightAttr = "weight";
        
        // Generate RMAT graph
        val scale = 10;
        val edgeFactor = 8;
        val rnd = new Random(2, 3);
        val edgeList = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd);
        val g = Graph.make(edgeList);
        
        // Generate edge weight
        val weight = GraphGenerator.genRandomEdgeValue(scale, edgeFactor, rnd);
        g.setEdgeAttribute[Double](weightAttr, weight);
        
        // Create API object
        val api = new org.scalegraph.api.MaxFlow();
        
        // Set source and sink vertices
        api.sourceVertexId = 0L;
        api.sinkVertexId = 1L;
        
        // Set edge attribute
        api.weights = "weight";
        
        // Call api
        val result = api.run(g);
        
        // Show result
        Console.OUT.println("Maximum Flow is "+ result.maxFlow);
    }
}