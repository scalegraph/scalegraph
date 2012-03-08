package test.scalegraph.clustering;

import org.scalegraph.graph.PlainGraph;
import org.scalegraph.io.EdgeListReader;

public class TestSpectralClustering {
    public static def main(args: Array[String]) {
		val reader:EdgeListReader = new EdgeListReader();
    	//val graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/ogata/data/mini_graph.dl");
		//var graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-8.dl");
		var graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-12-3628.dl");
    	val result:DistArray[Long] = graph.getVertexList();
    	
    	// for(p in Place.places()){
    	// 	val r:Region = result.dist.get(p);
    	// 	
    	// 	at(p){
    	// 		for(point:Point in r){
    	// 			Console.OUT.println(result(point));
    	// 		}
    	// 	}
    	// }
    	
    	
    	
    	//val sc = new SpectralClustering();
    	//sc.run(graph);
    }
}