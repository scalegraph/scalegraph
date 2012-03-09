package test.scalegraph.communities;

import org.scalegraph.graph.PlainGraph;
import org.scalegraph.graph.GraphSizeCategory;
import org.scalegraph.io.ScatteredEdgeListReader;

public class TestRandomWalk {
    public static def main(Array[String]) {
        Console.OUT.println("Start Random Walk with Restart Test");
        val graph = new PlainGraph(GraphSizeCategory.SMALL);
        Console.OUT.println("add edge");
        graph.addVertex("1");
        graph.addVertex("2");
        graph.addEdge("1 2");
        Console.OUT.println("count vertex");
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
        
        Console.OUT.println("End Test");
    }
}