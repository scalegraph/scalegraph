package test.scalegraph.metrics;

import x10.util.HashMap;
import x10.util.Set;

import org.scalegraph.graph.PlainGraph;
import org.scalegraph.io.EdgeListReader;
import org.scalegraph.metrics.Degree;

public class TestDegree {
	
	public static def main(args: Array[String]) {
		val reader:EdgeListReader = new EdgeListReader();
		Console.OUT.println("Start loading at : " + System.currentTimeMillis());
		var testG:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-8.dl");
		Console.OUT.println("Done loading at : " + System.currentTimeMillis());
		
		Console.OUT.println("--------------------- Start Degree Test --------------------");
		Console.OUT.println("Start degree calc at : " + System.currentTimeMillis());
		
		var deg:Degree = new Degree();
		var result:HashMap[Long, Long] = deg.getInOutDegree(testG);
		
		var keys:Set[Long] = result.keySet();
		var len:Long = keys.size();
		var itr:Iterator[Long] = keys.iterator();
		
		while(itr.hasNext()){
			val itm:Long = itr.next();
			
			Console.OUT.println(itm + " " + result.get(itm));
		}
		
		Console.OUT.println("Done degree calc at : " + System.currentTimeMillis());
		Console.OUT.println("--------------------- End Degree Test ----------------------");
	}
}



