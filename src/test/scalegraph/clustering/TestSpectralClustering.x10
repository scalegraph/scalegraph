package test.scalegraph.clustering;

import org.scalegraph.clustering.SpectralClustering;
import org.scalegraph.clustering.ClusteringResult;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.io.EdgeListReader;

public class TestSpectralClustering {
	public static def main(args: Array[String]) {
		val reader:EdgeListReader = new EdgeListReader();
		val graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/scalegraph/data/scale-8.dl");
		//val graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/ogata/data/mini_graph.dl");
		
		val sc = new SpectralClustering(graph);
		val result = sc.run(2);
		Console.OUT.println(result);
		for(vertexID in result.getAllVertices()){
			Console.OUT.println("[" + vertexID + "] -> [" + result.getCluster(vertexID) + "]");
		}
		for(i in result.getAllClusters()){
			Console.OUT.println("[" + i + "] -> " + result.getVertices(i));
		}
	}
}