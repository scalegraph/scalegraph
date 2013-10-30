package example;

import org.scalegraph.api.SpectralClustering;
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


public final class HyperANFExample {

    public static def main(args: Array[String]) {
        
        val config = Config.get();
        val team = config.worldTeam();
        val dist = config.dist2d();
        val weightAttr = "weight";
        val outpath = "hyperanf";
        
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
        val result = org.scalegraph.api.HyperANF.run(g);
        
        // Write output
        // val namedDistData = new NamedDistData(["sc_result" as String], [result as Any]);
        // CSVWriter.write(team, outputPath, namedDistData, true);
        val sb = new SStringBuilder();
        for(i in result.range()) {
            sb.add(result(i)).add("\n");
        }
        val fw = new FileWriter(outpath, FileMode.Create);
        fw.write(sb.result().bytes());
        fw.close();
    }
}