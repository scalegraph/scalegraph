package test.scalegraph.metrics;

import x10.util.HashMap;
import x10.util.Set;

import org.scalegraph.graph.PlainGraph;
import org.scalegraph.io.ScatteredEdgeListReader;
import org.scalegraph.io.EdgeListReader;
import org.scalegraph.metrics.Degree;
import test.scalegraph.metrics.YahooAltavistaReader;

public class TestDegree {
	
	public static def main(args: Array[String]) {
		val reader:EdgeListReader = new EdgeListReader();
		//var reader:ScatteredEdgeListReader = new ScatteredEdgeListReader();
		//var reader:YahooAltavistaReader = new YahooAltavistaReader();
		//var graph:PlainGraph = null;
		
		val startLoadingTime = System.currentTimeMillis();
		//Console.OUT.println("Start loading at : " + System.currentTimeMillis());
		var graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-18-39322.dl");
		//var graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-20-82792.dl");
		//var graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-8.dl");
		//var graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-12-3628.dl");
		
		//var graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-16.dl");
		
		//graph = reader.loadFromDir("/data0/t2gsuzumuralab/miyuru/data/scale12-scattered");
		//graph = reader.loadFromDir("/data0/t2gsuzumuralab/miyuru/data/scale16-scattered");
		
		//graph = reader.loadFromDir("/data0/t2gsuzumuralab/miyuru/data/scale16-scattered");
		
		//graph = reader.loadFromDir("/data0/t2gsuzumuralab/miyuru/data/scattered_twitter");
		//graph = reader.loadFromDir("/data0/t2gsuzumuralab/miyuru/data/scattered_twitter_exact");
		
		//graph = reader.loadFromDir("/data0/t2gsuzumuralab/miyuru/data/cdr/yaltavista");
		
		//graph = reader.loadFromDir("/data0/t2gsuzumuralab/miyuru/data/twitter-677");
		
		//graph = reader.loadFromDir("/data0/t2gsuzumuralab/miyuru/data/twitter-100");
		
		//graph = reader.loadFromDir("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale12-scattered");
		//graph = reader.loadFromDir("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale16-scattered");
		//Console.OUT.println("Done loading at : " + System.currentTimeMillis());
		
		val endLoadingTime = System.currentTimeMillis();
		
		var vcount:Long = graph.getVertexCount();
		
		val endVertexTime = System.currentTimeMillis();
				
		var ecount:Long = graph.getEdgeCount();

		val endEdgeTime = System.currentTimeMillis();
		
		val largestVert = graph.getMaximumVertexID();
		
		val startDegreeTime = System.currentTimeMillis();
		
		Console.OUT.println("--------------------- Start Degree Test --------------------");
		
		var deg:Degree = new Degree();
		var result:HashMap[Long, Long] = deg.getInOutDegree(graph);
		
		val endDegreeTime = System.currentTimeMillis();
		
		if(result == null){
			Console.OUT.println("Result is null.");
		}
		
		if(result!= null){
			var keys:Set[Long] = result.keySet();
			var len:Long = keys.size();
			
			var itr:Iterator[Long] = keys.iterator();
			
			while(itr.hasNext()){
				val itm:Long = itr.next();
				
				Console.OUT.println(itm + " " + result.get(itm));
			}
		}

		Console.OUT.println("--------------------------- Summary ---------------------------------");
		Console.OUT.println("Largest vertex id : " + largestVert);
		Console.OUT.println("Total vertex count : " + vcount);
		Console.OUT.println("Total edge count : " + ecount);
		Console.OUT.println("Time to Load the graph (ms): " + (endLoadingTime - startLoadingTime) );
		Console.OUT.println("Time to get vertex count (ms): " + (endVertexTime - endLoadingTime) );
		Console.OUT.println("Time to get edge count (ms): " + (endEdgeTime - endVertexTime) );
		Console.OUT.println("Time to inout degree clac (ms): " + (endDegreeTime - startDegreeTime) );
		Console.OUT.println("---------------------------------------------------------------------");		
		
		Console.OUT.println("--------------------- End Degree Test ----------------------");
	}
}