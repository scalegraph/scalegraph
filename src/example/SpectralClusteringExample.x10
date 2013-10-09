package example;

import org.scalegraph.api.SpectralClustering;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.io.impl.CSVWriter;
import x10.util.Team;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.util.random.Random;
import org.scalegraph.graph.Graph;

public final class SpectralClusteringExample {

    public static def main(args: Array[String]) {
        
        val team = Team.WORLD;
        val numCluster = 2;
        val tolerance = 0.5;
        val maxitr = 32;
        val threshold = 0.8;
        val outputPath = "sc-%d";
                
        val scale = 10;
        val edgeFactor = 8;
        val rnd = new Random(2, 3);
        val edgeList = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd);
        val g = Graph.make(edgeList);
        
        val weight = GraphGenerator.genRandomEdgeValue(scale, edgeFactor, rnd);
        g.setEdgeAttribute[Double]("weight", weight);
        
        val result = SpectralClustering.run(g, "weight", numCluster, tolerance, maxitr, threshold);
        
        val namedDistData = new NamedDistData(["sc_result" as String], [result as Any]);
        CSVWriter.write(team, outputPath, namedDistData, true);
    }
}