package example;

import x10.util.Team;

import org.scalegraph.Config;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.io.impl.CSVWriter;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.util.random.Random;

public final class PageRankExample {

    public static def main(args: Array[String]) {
        
        val config = Config.get();
        val team = config.worldTeam();
        val dist = config.dist2d();
        val weightAttr = "weight";
        val outputPath = "pagerank-%d";
                
        // Generate RMAT graph
        val scale = 10;
        val edgeFactor = 8;
        val rnd = new Random(2, 3);
        val edgeList = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd);
        val g = Graph.make(edgeList);
        
        // Generate edge weight
        val weight = GraphGenerator.genRandomEdgeValue(scale, edgeFactor, rnd);
        g.setEdgeAttribute[Double](weightAttr, weight);
        
        // Call API
        val pr = new org.scalegraph.api.PageRank();
        pr.directed = true;
        pr.damping = 0.85;
        pr.eps = 0.001;
        pr.niter = 15;
        
        val result = pr.execute(g);
        
        // Write output
        val namedDistData = new NamedDistData(["pr_result" as String], [result as Any]);
        CSVWriter.write(team, outputPath, namedDistData, true);
    }
}