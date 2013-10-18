package example;

import x10.util.Team;

import org.scalegraph.api.SpectralClustering;
import org.scalegraph.Config;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.io.impl.CSVWriter;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.util.random.Random;


public final class SpectralClusteringExample {

    public static def main(args: Array[String]) {
        
        val config = Config.get();
        val team = config.worldTeam();
        val dist = config.dist2d();
        val weightAttr = "weight";
        
        // the number of cluster
        val numCluster = 2;
        
        // tolerance
        val tolerance = 0.01;
        
        // max iteration
        val maxitr = 1000;
        
        // thread
        val threshold = 0.001;
        val outputPath = "sc-%d";
                
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
        val W = g.createDistSparseMatrix[Double](dist, weightAttr, false, false);
        val result = SpectralClustering.run(W, numCluster, tolerance, maxitr, threshold);
        
        // Write output
        val namedDistData = new NamedDistData(["sc_result" as String], [result as Any]);
        CSVWriter.write(team, outputPath, namedDistData, true);
    }
}