package test;
import x10.util.Team;
import org.scalegraph.util.random.Random;
import org.scalegraph.generator.GraphGenerator;
import org.scalegraph.graph.Graph;
import org.scalegraph.concurrent.Dist2D;

public class GeneratorTest {
	
	private static def rmat_test() {
		val team = Team.WORLD;
		val rnd = new Random(2,3);
		val rmatEdges = GraphGenerator.genRMAT(14, 16, 0.45, 0.15, 0.15, rnd, team);
		val graph = new Graph(team, Graph.VertexType.Long, true);
		graph.addEdges(rmatEdges);
		val dist = Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS);
		val matrix = graph.constructDistSparseMatrix(dist, true, true);
		Console.OUT.println("done");
	}
	
	private static def random_test() {
		val rnd = new Random(2, 3);
		for(i in 0..1000) {
			Console.OUT.println(rnd.nextFloat());
		}
	}
	
	public static def main(args: Array[String](1)) {
		rmat_test();
	}
}
