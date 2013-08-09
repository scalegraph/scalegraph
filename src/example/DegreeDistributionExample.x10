package example;

import x10.util.Team;
import x10.io.File;
import x10.io.FileReader;
import x10.io.IOException;

import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.graph.Graph;
import org.scalegraph.blas.SparseMatrix;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.api.DegreeDistribution;
// import org.scalegraph.metrics.Degree;


public final class DegreeDistributionExample {
    
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
        g.addEdges(edgeList.raw(team.placeGroup()));
        
        val indegResult = DegreeDistribution.run(g, DegreeDistribution.IN_DEGREE);
        val outdegResult = DegreeDistribution.run(g, DegreeDistribution.OUT_DEGREE);
        val inOutdegResult = DegreeDistribution.run(g, DegreeDistribution.INOUT_DEGREE);

        DistributedReader.write("out/indeg-%d", team, indegResult.raw(team.placeGroup()));
        DistributedReader.write("out/outdeg-%d", team, outdegResult.raw(team.placeGroup()));
        DistributedReader.write("out/inoutdeg-%d", team, inOutdegResult.raw(team.placeGroup()));
    }
}