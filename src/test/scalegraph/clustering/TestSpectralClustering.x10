package test.scalegraph.clustering;

import x10.util.Timer;

import org.scalegraph.clustering.DistSpectralClustering;
import org.scalegraph.clustering.SpectralClustering;
import org.scalegraph.clustering.ClusteringResult;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.io.EdgeListReader;

public class TestSpectralClustering {
	public static def main(args: Array[String]) {
		val reader:EdgeListReader = new EdgeListReader();
		//val graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/scalegraph/data/scale-12-3628.dl");
		val graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/scalegraph/data/scale-8.dl");
		//val graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/ogata/data/mini_graph.dl");
		
		val sc = new SpectralClustering(graph);
		val t0 = Timer.milliTime();
		var result:ClusteringResult = sc.run(2);
		val t1 = Timer.milliTime();
		Console.OUT.println(result);
		
		val dsc = new DistSpectralClustering(graph);
		val t2 = Timer.milliTime();
		result = dsc.run(2);
		val t3 = Timer.milliTime();
		Console.OUT.println(result);
		
		Console.OUT.println("elapsed time(single) = " + (t1 - t0));
		Console.OUT.println("elapsed time(dist)   = " + (t3 - t2));
	}
}