package test.scalegraph.metrics;

import x10.util.HashMap;
import x10.util.Set;

import org.scalegraph.graph.PlainGraph;
import org.scalegraph.io.ScatteredEdgeListReader;
import org.scalegraph.metrics.Degree;

public class TestDegree {
	
	public static def main(args: Array[String]) {
		//val reader:EdgeListReader = new EdgeListReader();
		var reader:ScatteredEdgeListReader = new ScatteredEdgeListReader();
		var graph:PlainGraph = null;
		
		Console.OUT.println("Start loading at : " + System.currentTimeMillis());
		//var graph:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-8.dl");
		//graph = reader.loadFromDir("/data0/t2gsuzumuralab/miyuru/data/scale12-scattered");
		//graph = reader.loadFromDir("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale12-scattered");
		graph = reader.loadFromDir("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale16-scattered");
		Console.OUT.println("Done loading at : " + System.currentTimeMillis());
		
		Console.OUT.println("--------------------- Start Degree Test --------------------");
		Console.OUT.println("Start degree calc at : " + System.currentTimeMillis());
		
		var deg:Degree = new Degree();
		var result:HashMap[Long, Long] = deg.getInOutDegree(graph);
		
		if(result!= null){
			var keys:Set[Long] = result.keySet();
			var len:Long = keys.size();
			var itr:Iterator[Long] = keys.iterator();
			
			while(itr.hasNext()){
				val itm:Long = itr.next();
				
				Console.OUT.println(itm + " " + result.get(itm));
			}
		}
		Console.OUT.println("Done degree calc at : " + System.currentTimeMillis());
		Console.OUT.println("--------------------- End Degree Test ----------------------");
	}
}



