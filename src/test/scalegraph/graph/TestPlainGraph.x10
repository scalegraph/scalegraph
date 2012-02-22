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

    	var testG:PlainGraph = new PlainGraph(GraphSizeCategory.MEDIUM);
    	testG.init();
    	testG.setDirected(false);
    	
    	testG.addVertex("2");
    	testG.addVertex("3");
    	
    	testG.addEdge("2 3");
    	
        Console.OUT.println("start printing");
    	testG.printCont();
    	Console.OUT.println("ended printing");
    	
    	while(true){
    		System.sleep(1000);
    	}
    }
}