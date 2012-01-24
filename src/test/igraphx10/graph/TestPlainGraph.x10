package test.scalegraph.graph;

import org.scalegraph.graph.PlainGraph;
import org.scalegraph.graph.GraphSizeCategory;

import x10.util.Pair;

/**
 * This class is used to test the PlainGraph class.
 */
public class TestPlainGraph {
    /**
     * Main method 
     */
    public static def main(args: Array[String]) {

    	//Case 1 : Just create a plain graph
    	Console.OUT.println("-->Start Init");
    	var testG:PlainGraph = new PlainGraph(GraphSizeCategory.MEDIUM);
    	testG.init();
    	Console.OUT.println("-->Done Init");
    	Console.OUT.println("-->adding vertex 2");
    	testG.addVertex("2");
    	Console.OUT.println("-->added vertex 2");
    	testG.addVertex("3");
    	Console.OUT.println("-->added vertex 3"); 
    	
    	Console.OUT.println("-->adding edge 2 3");
    	testG.addEdge("2 3");
    	Console.OUT.println("-->added edge 2 3");
    	Console.OUT.println("-->adding vertex 1200000");
    	testG.addVertex("1200000");
    	Console.OUT.println("-->added vertex 1200000");
    	Console.OUT.println("-->adding vertex 1048576");
		testG.addVertex("1048576");
		Console.OUT.println("-->added vertex 1048576");
		Console.OUT.println("-->adding vertex 1048577");
		testG.addVertex("1048577");
		Console.OUT.println("-->added vertex 1048577");
		Console.OUT.println("-->adding vertex 16777217");
		testG.addVertex("16777217");
		Console.OUT.println("-->added vertex 16777217");
		testG.addVertex("17000000");
		Console.OUT.println("-->added vertex 17000000");
		Console.OUT.println("-->adding vertex 50331650");
		testG.addVertex("50331650");
		Console.OUT.println("-->added vertex 50331650");
		Console.OUT.println("-->adding vertex 67108863");
		testG.addVertex("67108863");
		Console.OUT.println("-->added vertex 67108863");
		Console.OUT.println("-->adding edge  3 67108863");
		testG.addEdge("3 67108863");
		Console.OUT.println("-->adding edge  67108863 50331650");
		testG.addEdge("67108863 50331650");
        
        Console.OUT.println("start printing");
    	testG.printCont();
    	Console.OUT.println("ended printing");
    	
    	while(true){
    		System.sleep(1000);
    	}
    }
}