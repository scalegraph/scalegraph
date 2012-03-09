package test.scalegraph.communities;

import org.scalegraph.graph.PlainGraph;
import org.scalegraph.graph.GraphSizeCategory;
import org.scalegraph.io.ScatteredEdgeListReader;
import org.scalegraph.communities.RandomWalk;

public class TestRandomWalk {
    public static def main(Array[String]) {
        Console.OUT.println("Start Random Walk with Restart Test");
        val graph = new PlainGraph(GraphSizeCategory.SMALL);
        Console.OUT.println("add edges");
        graph.addEdge("11 12");
        graph.addEdge("1 2");
        graph.addEdge("9 10");
        graph.addEdge("10 11");
        graph.addEdge("2 3");
        graph.addEdge("5 7");
        graph.addEdge("6 7");
        graph.addEdge("8 9");
        graph.addEdge("2 8");
        graph.addEdge("1 3");
        graph.addEdge("1 4");
        graph.addEdge("5 6");
        graph.addEdge("8 11");
        graph.addEdge("10 12");
        graph.addEdge("3 4");
        graph.addEdge("4 5");
        Console.OUT.println("end add edges");
        try {
            val vcount = graph.getVertexCount();
            
            Console.OUT.println("vertex count is : " + vcount);
            
        } catch (NullPointerException) {
            Console.OUT.println("crashed by NullPointerException");
            return;
        }
        
        val result:DistArray[Long] = graph.getVertexList();
        
        Console.OUT.println("printing vertex List");
        for(p in Place.places()){
        	val r:Region = result.dist.get(p);
        	
        	at(p){
        		for(point:Point in r){
        			Console.OUT.println(result(point));
        		}
        	}
        }

        RandomWalk.run(graph);
        
        Console.OUT.println("End Test");
    }
}