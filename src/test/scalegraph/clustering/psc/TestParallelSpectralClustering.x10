package test.scalegraph.clustering.psc;

import org.scalegraph.clustering.psc.ParallelSpectralClustering;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.io.EdgeListReader;
import test.scalegraph.clustering.StopWatch;

public class TestParallelSpectralClustering {
    public static def main(args: Array[String]) {
    	val sw = new StopWatch();
    	sw.start();
    	
    	val dir:String = "/nfs/data1/miyuru/Graph Data Sets/R-MAT/";
    	//val dir:String = "/nfs/home/ogata/workspace/data/";
    	//val dir:String = "/work0/t2gsuzumuralab/scalegraph/data/";
    	//val dir:String = "/work0/t2gsuzumuralab/ogata/Developments/data/";
    	
    	val reader:EdgeListReader = new EdgeListReader();
    	//val reader:ScatteredEdgeListReader = new ScatteredEdgeListReader();
    	
    	//val graph:PlainGraph = reader.loadFromFile(dir + "scale-22-142055.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "scale-20-82792.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "scale-18-39322.dl");
    	val graph:PlainGraph = reader.loadFromFile(dir + "scale-16-14164.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "scale-14-5900.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "scale-12.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "scale-8.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "simple_graph.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "mini_graph.dl");
    	
    	//val graph:PlainGraph = reader.loadFromDir(dir + "scattered_erdos");
    	//val graph:PlainGraph = reader.loadFromDir(dir + "twitter-5");
    	//val graph:PlainGraph = reader.loadFromDir(dir + "twitter-10");
    	//val graph:PlainGraph = reader.loadFromDir(dir + "twitter-100");
    	
    	//val graph:PlainGraph = reader.loadFromFile(dir + "simple_graph.dl");
    	
    	Console.OUT.println("graph loading finished: " + sw.get());
    	
    	val nClusters = 2;
    	val psc = new ParallelSpectralClustering(graph, nClusters);
    	val result = psc.run();
    	
    	Console.OUT.println("spectral clustering finished: " + sw.get());
    	Console.OUT.println(result);
    }
}