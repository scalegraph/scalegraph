package test;

import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import x10.util.Team;
import x10.util.Timer;
import org.scalegraph.graph.Graph;
import org.scalegraph.concurrent.Dist2D;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.gimv.GIMV;
import org.scalegraph.graph.DistSparseMatrix;
import org.scalegraph.graph.Attribute;

public class PageRank {

	public static inputFormat_g1 = (s:String)=> {
		val elements = s.split(",");
		return Tuple3[Long, Long, Double](
				Long.parse(elements(0)),
				Long.parse(elements(1)),
				Double.parse(elements(3)));
	};
	public static inpurFormat_g2 = (s:String)=> {
		val elements = s.split(",");
		return Tuple3[Long, Long, Double](
				Long.parse(elements(0)),
				Long.parse(elements(1)),
				Double.parse(elements(2)));
	};

	public static def read_graph(srcfile :String, team :Team, useTranslator :Boolean) : Graph{self.vertexType==Graph.VertexType.Long} {
		val filelist = new Array[String](1); filelist(0) = srcfile;
		Console.OUT.println("Reading file: " + filelist(0) + " ...");

		val format = srcfile.endsWith(".txt") ? inputFormat_g1 : inpurFormat_g2;
		val rawdata = DistributedReader.read(team, filelist, format);
		val edgelist = rawdata.get1();
		val weight = rawdata.get2();

		Console.OUT.println("Creating graph object ...");

		val g = new Graph(team, Graph.VertexType.Long, useTranslator);
        val start = Timer.nanoTime();
		g.addEdges(edgelist.data(team.placeGroup()));
        Console.OUT.printf("addEdges: time = %g\n", (Timer.nanoTime() - start));
		g.setEdgeAttribute[Double]("weight", weight.data(team.placeGroup()));

		// check results
		Console.OUT.println("# of Verteices: " + g.numberOfVertices() + ", # of Edges: " + g.numberOfEdges());

		return g;
	}

	public static def normalize_columns_weights(g : Graph) {
		val team = Team.WORLD;

		Console.OUT.println("Constructing column distributed graph ...");

		val distColumn = Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS);
		// directed, outer
		val columnDistGraph = g.constructDistSparseMatrix(distColumn, true, true);
		val columnDistWeight = g.constructDistAttribute[Double](columnDistGraph, false, "weight");

		Console.OUT.println("Normalizing weights ...");

		team.placeGroup().broadcastFlat(() => {
			val localsize = 1L << columnDistGraph.ids().lgl;
			val m = columnDistGraph();
			val w = columnDistWeight();

			for(i in 0L..(localsize-1)) {
				val wl = m.attribute[Double](w, i);
				val inv = 1.0 / MathAppend.sum(wl);
				for(j in wl.range()) wl(j) *= inv;
			}
		});

		Console.OUT.println("Writing back the weights ...");

		g.setEdgeAttribute("normalized_weight", columnDistGraph, columnDistWeight);

		Console.OUT.println("Deleting objects ...");

		team.placeGroup().broadcastFlat(() => {
			columnDistWeight.del();
			columnDistGraph.del();
			distColumn.del();
		});
	}

	/** Computes the PageRank of the specified graph.
	 * @param g The column normalized graph
	 * @param weight Edge weights
	 * @param n The number of vertices in the graph.
	 */
	public static def pagerank(g :DistSparseMatrix, weight :DistMemoryChunk[Double], n :Long) {
		val team = g.dist().allTeam();
		val c = 0.85;
		val map = (mij :Double , vj :Double) => c * mij * vj;
		val combine = (index :Long, xs :MemoryChunk[Double]) => MathAppend.sum(xs);
		val assign = (i :Long, prev :Double , next :Double) => (1.0 - c) / n + next;
		val end = (diff :Double) => Math.sqrt(diff) < 0.0001;

		val vector = new DistMemoryChunk[Double](team.placeGroup(),
				() => new MemoryChunk[Double](g.ids().numberOfLocalVertexes2N()));

		team.placeGroup().broadcastFlat(() => {
			val iv = 1.0 / n;
			val v = vector();
			for(i in v.range()) v(i) = iv;
		});

		GIMV.main2DCSR(g, weight, vector, map, combine, assign, end);

		return vector;
	}

	public static def main(args: Array[String](1)) {
		val team = Team.WORLD;
		val g = read_graph(args(0), team, true);

		// normalize weight //
		normalize_columns_weights(g);

		Console.OUT.println("Constructing 2DCSR [directed, inner] ...");

		// directed, inner edge
		val csr = g.constructDistSparseMatrix(Dist2D.make2D(team, team.size(), 1), true, false);
		val weight = g.constructDistAttribute[Double](csr, false, "normalized_weight");

		val vector = pagerank(csr, weight, g.numberOfVertices());

		g.setVertexAttribute("pagerank", csr, vector);

		val att_names = g.getVertexAttribute[Long]("name");
		val att_pagerank = g.getVertexAttribute[Double]("pagerank");
		DistributedReader.write("output-%d.txt", team, att_names, att_pagerank);

		Console.OUT.println("Complete!!!");
	}
}
