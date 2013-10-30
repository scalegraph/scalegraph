package test;
import org.scalegraph.external.MetisInterface;
import org.scalegraph.util.MemoryChunk;
import x10.util.Team;
import x10.compiler.Native;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.graph.Graph;
import org.scalegraph.util.Dist2D;
import org.scalegraph.api.Metis;
import org.scalegraph.io.CSV;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.io.FileAccess;
import x10.io.File;

public final class TestMetis  extends AlgorithmTest {
    
    public static def main(args: Array[String]) {
        new TestMetis().execute(args);
    }
    
    public def run(args :Array[String](1), g :Graph): Boolean {
        
        Console.OUT.println("Start Metis");
        if (args(0).equals("high")) {
            val matrix = g.createDistSparseMatrix[Double](
                    Dist2D.make1D(g.team(), Dist2D.DISTRIBUTE_COLUMNS), "weight", false, true);
            val result = Metis.ParMETIS_V3_PartKway(matrix);
            CSV.write(args(1), new NamedDistData(["part" as String], [result as Any]),true);
            return true;
        } else if (args(0).equals("write_graph")) {
            val path = args(1);
            assert Team.WORLD.size() == 1: "Number of place must be 1";
            
            val N = g.numberOfVertices();
            val matrix = g.createDistSparseMatrix[Double](
                    Dist2D.make1D(g.team(), Dist2D.DISTRIBUTE_COLUMNS), "weight", false, true);
            
            val outfile = new File(args(1));
            val printer = outfile.printer();
            var edgeCount: Long = 0;
            for (i in 0..(N -1)) {
                // Console.OUT.print(i);
                val adj = matrix().adjacency(i);
                
                
                for (j in 0..(adj.size() - 1)) {
                    ++edgeCount;
                    if (j > 0)
                        printer.print(" ");
                    printer.print(adj(j) + 1);
                }
                printer.println();
            }
            
            printer.println("edge count: " + edgeCount);
            printer.close();
            return true;
        }
        else {
            throw new UnsupportedOperationException();
        }
    }
}