package test;

import x10.compiler.Inline;
import x10.util.Team;
import x10.util.ArrayList;
import x10.util.concurrent.AtomicLong;
import x10.io.SerialData;
import x10.io.File;
import x10.io.FileReader;
import x10.io.IOException;

import org.scalegraph.concurrent.Dist2D;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.DistSparseMatrix;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.SparseMatrix;
import org.scalegraph.util.tuple.*;
import org.scalegraph.metrics.DistBetweennessCentrality;
import org.scalegraph.util.DistMemoryChunk;


public class DistBetweennessCentralityExample {
    
    public static val inputFormat = (s: String) => {
        val items = s.split(" ");
        try {
            val x = Long.parse(items(0).trim());
            val y = Long.parse(items(1).trim());
            
        } catch(e: Exception) {
            Console.OUT.println(items(0).trim() + " " + items(1).trim());
        }
        return Tuple3[Long, Long, Double] (
                Long.parse(items(0).trim()),
                Long.parse(items(1).trim()),
                0D
        );
    };
    
    public static def main(args: Array[String]) {
        if (args.size < 1) {
            Console.OUT.println("Please enter file name");
            return;
        }
        val team = Team.WORLD;
        val fileList = new Array[String](1);
        fileList(0) = args(0); 
        
        // Load data
        val rawData = DistributedReader.read(team, fileList, inputFormat);
        
        // Create graph
        val edgeList = rawData.get1();
        val g = new Graph(team, Graph.VertexType.Long, false);
        g.addEdges(edgeList.data(team.placeGroup()));
        
        DistBetweennessCentrality.calculate(g, true, "bc", false);
        val attrVertexId = g.getVertexAttribute[Long]("name");
        val attrBc = g.getVertexAttribute[Double]("bc");
        DistributedReader.write("output-%d.txt", team, attrVertexId, attrBc);
        
    }
}