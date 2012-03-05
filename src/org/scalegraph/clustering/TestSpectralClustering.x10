package org.scalegraph.clustering;

//import org.scalegraph.graph.PlainGraph;
//import org.scalegraph.io.EdgeListReader;

public class TestSpectralClustering {
    public static def main(args: Array[String]) {
		//val reader:EdgeListReader = new EdgeListReader();
    	//val graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/ogata/data/mini_graph.dl");
    	val sc = new SpectralClustering();
    	sc.run();
    }
}