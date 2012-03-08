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
            graph.getVertexCount();
        } catch (NullPointerException) {
            Console.OUT.println("crashed by NullPointerException");
            return;
        }
        Console.OUT.println("End Test");
    }
}