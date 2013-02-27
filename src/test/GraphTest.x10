package test;

import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import x10.util.Team;
import org.scalegraph.graph.Graph;
import org.scalegraph.concurrent.Dist2D;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.gimv.GIMV;

public class GraphTest {
	
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
		g.addEdges(edgelist.data(team.placeGroup()));
		g.setEdgeAttribute[Double]("weight", weight.data(team.placeGroup()));
		
		// chech results
		Console.OUT.println("# of Verteices: " + g.numberOfVertices() + ", # of Edges: " + g.numberOfEdges());
		
		return g;
	}
	
	public static def ditributed_2dcsr_test(srcfile :String, RC :String) {
		val team = Team.WORLD;
		val g = read_graph(srcfile, team, true);
		
		val rxc = RC.split("x");
		val R = Int.parse(rxc(0));
		val C = Int.parse(rxc(1));
		val dist2d = Dist2D.make2D(team, R, C);
		
		Console.OUT.println("Constructing 2DCSR [directed, inner] ...");
		
		// undirected, inner edge
		val csr1 = g.constructDistSparseMatrix(dist2d, true, false);
		val att1 = g.constructDistAttribute[Double](csr1, false, "weight");

		// chech results
		for(p in team.placeGroup()) at (p) {
			val matrix = csr1();
			Console.OUT.println("Place: " + p.id + ", # of vertices: " + matrix.offsets.size() + ", # of edges: " + matrix.vertexes.size() + ", # of weights: " + att1().size());
		}
		
		Console.OUT.println("Constructing 2DCSR [undirected, outer] ...");
		
		// undirected, inner edge
		val csr2 = g.constructDistSparseMatrix(dist2d, false, true);
		val att2 = g.constructDistAttribute[Double](csr2, false, "weight");

		// chech results
		for(p in team.placeGroup()) at (p) {
			val matrix = csr2();
			Console.OUT.println("Place: " + p.id + ", # of vertices: " + matrix.offsets.size() + ", # of edges: " + matrix.vertexes.size() + ", # of weights: " + att2().size());
		}
		
		
		Console.OUT.println("Complete!!!");
	}
	public static def ditributed_1dcsr_test(srcfile :String, RC :String) {
		val team = Team.WORLD;
		val g = read_graph(srcfile, team, true);
		
		val distRow = Dist2D.make1D(team, Dist2D.DISTRIBUTE_ROWS);
		
		Console.OUT.println("Constructing Row-Distributed CSR [directed, inner] ...");
		
		// undirected, inner edge
		val csr1 = g.constructDistSparseMatrix(distRow, true, false);
		val att1 = g.constructDistAttribute[Double](csr1, false, "weight");

		// chech results
		for(p in team.placeGroup()) at (p) {
			val matrix = csr1();
			Console.OUT.println("Place: " + p.id + ", # of vertices: " + matrix.offsets.size() + ", # of edges: " + matrix.vertexes.size() + ", # of weights: " + att1().size());
		}

		val distColumn = Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS);
		
		Console.OUT.println("Constructing Column-Distributed CSR [undirected, outer] ...");
		
		// undirected, inner edge
		val csr2 = g.constructDistSparseMatrix(distColumn, false, true);
		val att2 = g.constructDistAttribute[Double](csr2, false, "weight");

		// chech results
		for(p in team.placeGroup()) at (p) {
			val matrix = csr2();
			Console.OUT.println("Place: " + p.id + ", # of vertices: " + matrix.offsets.size() + ", # of edges: " + matrix.vertexes.size() + ", # of weights: " + att2().size());
		}
		
		Console.OUT.println("Complete!!!");
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
	
	private static def print_attribute_list(g :Graph) {
		var str :String = "Vertex attribute: [";
		for(key in g.vertexAttributeKeys())
			str += key + ",";
		str += "]";
		Console.OUT.println(str);
		str = "Edge attribute: [";
		for(key in g.edgeAttributeKeys())
			str += key + ",";
		str += "]";
		Console.OUT.println(str);
	}
	
	public static def ditributed_gimv_test(srcfile :String, RC :String) {
		val team = Team.WORLD;
		val useTranslator = true;
		val g = read_graph(srcfile, team, useTranslator);

		Console.OUT.println("Constructing 2DCSR [directed, inner] ...");
		
		val rxc = RC.split("x");
		val R = Int.parse(rxc(0));
		val C = Int.parse(rxc(1));
		val dist2d = Dist2D.make2D(team, R, C);
		
		// undirected, inner edge
		val csr = g.constructDistSparseMatrix(dist2d, true, false);
		val weight = g.constructDistAttribute[Double](csr, false, "weight");

		// check results
		for(p in team.placeGroup()) at (p) {
			val matrix = csr();
			Console.OUT.println("Place: " + p.id + ", # of vertices: " + matrix.offsets.size() + ", # of edges: " + matrix.vertexes.size() + ", # of weights: " + weight().size());
		}

		val map = (mij :Double , vj :Double) => 1.0;
		val combine = (index :Long, xs :MemoryChunk[Double]) => MathAppend.sum(xs);
		val assign = (i :Long, prev :Double , next :Double) => next;
		val end = (diff :Double) => true;
		
		val vector = new DistMemoryChunk[Double](team.placeGroup(),
				() => new MemoryChunk[Double](csr.ids().numberOfLocalVertexes()));
		
		GIMV.main2DCSR(csr, weight, vector, map, combine, assign, end);
		
		g.setVertexAttribute("degree", csr, vector);
		print_attribute_list(g);

		val att_names = useTranslator ? g.getVertexAttribute[Long]("name") : null;
		val att_pagerank = g.getVertexAttribute[Double]("degree");
		DistributedReader.write("degree-%d.txt", team, att_names, att_pagerank);
		
		Console.OUT.println("Complete!!!");
	}
	
	public static def ditributed_pagerank_test(srcfile :String, RC :String) {
		val team = Team.WORLD;
		val g = read_graph(srcfile, team, true);
		print_attribute_list(g);
		
		val att_names = g.getVertexAttribute[Long]("name");
		
		// normalize weight //
		normalize_columns_weights(g);
		print_attribute_list(g);

	//	val att_norm = g.getEdgeAttribute[Double]("normalized_weight");
	//	DistributedReader.write("norm-%d.txt", team, null, att_norm);
		
		Console.OUT.println("Constructing 2DCSR [directed, inner] ...");
		
		val rxc = RC.split("x");
		val R = Int.parse(rxc(0));
		val C = Int.parse(rxc(1));
		val dist2d = Dist2D.make2D(team, C, R);
		
		// directed, inner edge
		val csr = g.constructDistSparseMatrix(dist2d, true, false);
		val weight = g.constructDistAttribute[Double](csr, false, "normalized_weight");

		// check results
		for(p in team.placeGroup()) at (p) {
			val matrix = csr();
			Console.OUT.println("Place: " + p.id + ", # of vertices: " + matrix.offsets.size() + ", # of edges: " + matrix.vertexes.size() + ", # of weights: " + weight().size());
		}

		val n = g.numberOfVertices();
		val c = 0.85;
		val map = (mij :Double , vj :Double) => c * mij * vj;
		val combine = (index :Long, xs :MemoryChunk[Double]) => MathAppend.sum(xs);
		val assign = (i :Long, prev :Double , next :Double) => (1.0 - c) / n + next;
		val end = (diff :Double) => false;//Math.sqrt(diff) < 0.0001;
		
		val vector = new DistMemoryChunk[Double](team.placeGroup(),
				() => new MemoryChunk[Double](csr.ids().numberOfLocalVertexes()));
		
		team.placeGroup().broadcastFlat(() => {
			val iv = 1.0 / n;
			val v = vector();
			for(i in v.range()) v(i) = iv;
		});
		
		if(C == 1) { // 1D
			Console.OUT.println("Using 1D GIM-V Engine ...");
			GIMV.main1DCSR(csr, weight, vector, map, combine, assign, end);
		}
		else {
			Console.OUT.println("Using 2D GIM-V Engine ...");
			GIMV.main2DCSR(csr, weight, vector, map, combine, assign, end);
		}
		
		g.setVertexAttribute("pagerank", csr, vector);
		print_attribute_list(g);
		
		val att_pagerank = g.getVertexAttribute[Double]("pagerank");
		DistributedReader.write("output-%d.txt", team, att_names, att_pagerank);
		
		Console.OUT.println("Complete!!!");
	}
	
    public static def main(args: Array[String](1)) {
    	ditributed_pagerank_test(args(1), args(0));
    }
}
