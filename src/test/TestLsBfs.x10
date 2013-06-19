package test;

import org.scalegraph.harness.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.visitor.LsBfsVisitor;
import x10.util.Team;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;
import org.scalegraph.util.Dist2D;
import org.scalegraph.graph.DistSparseMatrix;
import org.scalegraph.util.Bitmap2;
import org.scalegraph.graph.id.OnedC;
import x10.util.concurrent.AtomicLong;

public class TestLsBfs extends sx10Test {
    
    val inputFile: Array[String] = new Array[String](1, (Int) => "/nfs/data0/testdata/RMAT_SCALE_8");
    
    public static class LocalState {
        val localVertices: Long;
        val visited: Bitmap2;
        val vtoS: OnedC.VtoS;
        val vertexCount: AtomicLong;
        val edgeCount:AtomicLong;
        def this(csr: DistSparseMatrix) {
            val ids = csr.ids();
            localVertices = ids.numberOfLocalVertexes();
            visited = new Bitmap2(localVertices);
            vtoS = new OnedC.VtoS(ids);
            vertexCount = new AtomicLong(0);
            edgeCount = new AtomicLong(0);
        }
    }
    
    public static def main(args: Array[String]) {
        val t = new TestLsBfs();
        t.execute();
    }
    
    public static val inputFormat = (s: String) => {
        val items = s.split(" ");
        return Tuple3[Long, Long, Double] (
                Long.parse(items(0).trim()),
                Long.parse(items(1).trim()),
               1D
        );
    };
    
    
    public def run():x10.lang.Boolean {
        
        val team = Team.WORLD;
        
        // Load data
        val rawData = DistributedReader.read(team, inputFile, inputFormat);
        // Create graph
        val edgeList = rawData.get1();
        val weightList = rawData.get2();
        
        val g = new Graph(team, Graph.VertexType.Long, false);
        g.addEdges(edgeList.raw(team.placeGroup()));
        
        // Create dist sparse matrix
        val csr = g.constructDistSparseMatrix(
                                              Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS),
                                              true,
                                              true);
        
        // Create handle for each place
        val lch: PlaceLocalHandle[LocalState] = PlaceLocalHandle.make[LocalState](team.placeGroup(),
                () => {return new LocalState(csr); });
        val source = 0L;
        val handler = (v: Long, pred: Long, isFirstVisit: Boolean, dist: Long) => { 
            // Console.OUT.println(pred + " " + v + " " + dist);
            val localVertex = lch().vtoS(v);
            if (lch().visited.isNotSetThenSet(localVertex)) {
                // already visited, do nthoing
                lch().vertexCount.getAndIncrement();
                // lch().visited.set(localVertex);
            }
            lch().edgeCount.getAndIncrement();
        };

        val visitor = LsBfsVisitor.make(csr, handler, source);
        visitor.run();
        
        team.placeGroup().broadcastFlat(() => {
            val allVisited = team.allreduce(team.role()(0), lch().vertexCount.get(), Team.ADD);
            val allEdges = team.allreduce(team.role()(0), lch().edgeCount.get(), Team.ADD);
            if (here == Place.FIRST_PLACE) {
                // Console.OUT.println("Visited: " + allVisited);
                // Console.OUT.println("Edge: " + allEdges);
                lch().vertexCount.set(allVisited);
                lch().edgeCount.set(allEdges);
            }
        });
        
        // Answer for RMAT scale-8 graph 
        if (lch().vertexCount.get() == 255L && lch().edgeCount.get() == 587L) {
            return true;
        } 
        
        return false;
    }
}