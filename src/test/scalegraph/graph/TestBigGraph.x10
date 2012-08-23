package test.scalegraph.graph;

import org.scalegraph.graph.BigGraph;

public class TestBigGraph {
    
    public static def main(args: Array[String]) {
        
        val nodes = 1L << 32;
        val b = BigGraph.make(nodes);
        Console.OUT.println("Enter to Continue");
        Console.IN.readChar();
    }
}