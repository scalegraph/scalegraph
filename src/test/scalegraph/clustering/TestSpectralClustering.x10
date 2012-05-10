package test.scalegraph.clustering;

import x10.util.Timer;

import org.scalegraph.clustering.Clustering;
import org.scalegraph.clustering.MPISpectralClustering;
import org.scalegraph.clustering.ClusteringResult;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.io.EdgeListReader;
import org.scalegraph.io.ScatteredEdgeListReader;

public class TestSpectralClustering {
	public static def main(args: Array[String]) {
		val dir:String = "/nfs/data1/miyuru/Graph Data Sets/R-MAT/";
		//val dir:String = "/data0/t2gsuzumuralab/scalegraph/data/";
		
		val reader:EdgeListReader = new EdgeListReader();
		//val reader:ScatteredEdgeListReader = new ScatteredEdgeListReader();
		
		//val graph:PlainGraph = reader.loadFromFile(dir + "scale-22-142055.dl");
		//val graph:PlainGraph = reader.loadFromFile(dir + "scale-20-82792.dl");
		//val graph:PlainGraph = reader.loadFromFile(dir + "scale-18-39322.dl");
		//val graph:PlainGraph = reader.loadFromFile(dir + "scale-16-14164.dl");
		//val graph:PlainGraph = reader.loadFromFile(dir + "scale-14-5900.dl");
		//val graph:PlainGraph = reader.loadFromFile(dir + "scale-12.dl");
		val graph:PlainGraph = reader.loadFromFile(dir + "scale-8.dl");
		//val graph:PlainGraph = reader.loadFromFile(dir + "mini_graph.dl");
		
		//val graph:PlainGraph = reader.loadFromDir(dir + "scale12-scattered");
		
		var c:Clustering;
		val nClusters = 2;
		val nprow = 2;
		val npcol = 2;
		val mb = 64;
		val nb = 64;
		
		c = new MPISpectralClustering(graph, nClusters, nprow, npcol, mb, nb);
		val t0 = Timer.milliTime();
		var result:ClusteringResult = c.run();
		val t1 = Timer.milliTime();
		Console.OUT.println(result);
		
		Console.OUT.println("elapsed time = " + (t1 - t0));
	}
}