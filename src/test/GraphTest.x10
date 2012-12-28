package test;

import org.scalegraph.util.tuple.*;
import gimv.fileread.DistributedReader;
import x10.util.Team;
import gimv.graph.Graph;
import gimv.graph.Dist2D;

public class GraphTest {
	
	public static def ditributed_2dcsr_test(srcfile :String, RC :String) {
		val team = Team.WORLD;
		val filelist = new Array[String](1); filelist(0) = srcfile;
		val inputFormat = (s:String)=> {
			val elements = s.split(",");
			return Tuple3[Long, Long, Double](
					Long.parse(elements(0)),
					Long.parse(elements(1)),
					Double.parse(elements(3)));
		};
		Console.OUT.println("Reading file: " + filelist(0) + " ...");
		
		val rawdata = DistributedReader.read(team, filelist, inputFormat);
		val edgelist = rawdata.get1();
		val weight = rawdata.get2();
		
		Console.OUT.println("Creating graph object ...");
		
		val g = new Graph(team, Graph.VertexType.Long, true);
		g.addEdges(edgelist.data(team.placeGroup()));
		g.setEdgeAttribute[Double]("weight", weight.data(team.placeGroup()));
		
		// chech results
		Console.OUT.println("# of Verteices: " + g.numberOfVertices() + ", # of Edges: " + g.numberOfEdges());
		
		val rxc = RC.split("x");
		val R = Int.parse(rxc(0));
		val C = Int.parse(rxc(1));
		val dist2d = Dist2D.make2D(C, R, team);
		
		Console.OUT.println("Constructing 2DCSR ...");
		
		// undirected, inner edge
		val csr = g.constructDistSparseMatrix(dist2d, false, false);
		val att1 = g.constructDistAttribute[Double](csr, false, "weight");

		// chech results
		for(p in team.placeGroup()) at (p) {
			val matrix = csr();
			Console.OUT.println("Place: " + p.id + ", # of vertices: " + matrix.offsets.size() + ", # of edges: " + matrix.vertexes.size() + ", # of weights: " + att1().size());
		}
		
		Console.OUT.println("Complete!!!");
	}
	
    public static def main(args: Array[String](1)) {
    	ditributed_2dcsr_test(args(1), args(0));
    }
}