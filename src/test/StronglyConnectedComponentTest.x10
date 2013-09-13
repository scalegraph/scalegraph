package test;


import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.graph.Graph;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.io.CSV;


final class StronglyConnectedComponentTest extends AlgorithmTest{	
	public static def main(args: Array[String](1)) {
		new StronglyConnectedComponentTest().execute(args);
	}
	
	public def run(args :Array[String](1), g :Graph): Boolean {
		val result = org.scalegraph.api.StronglyConnectedComponent.run(g);
		
		if(args(0).equals("write")) {
			CSV.write(args(1), new NamedDistData(["pagerank" as String], [result as Any]), true);
			return true;
		}
		else if(args(0).equals("check")) {
			/*
			 *  check!!
			 */
			
			
			return false;
		}
		else {
			throw new IllegalArgumentException("Unknown command :" + args(0));
		}
	}
	
}