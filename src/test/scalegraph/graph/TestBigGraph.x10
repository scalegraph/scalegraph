package test.scalegraph.graph;

import org.scalegraph.graph.BigGraph;

public class TestBigGraph {
    
    public static def main(args: Array[String]) {
        
        // val nodes = 1L << 20;
        // val b = BigGraph.make(nodes,true);
        // Console.OUT.println("Size: " + nodes);
        
        var t: Long = System.currentTimeMillis();
        
        Console.OUT.println("Start testing");
        
        // val g = BigGraph.loadFromFile("/nfs/home/charuwat/Desktop/BigGraph Loader Test/flickr.dl", true);
        val g = BigGraph.loadFromFile("/home/usr6/11R34003/flickr.dl", true);
        // val g = BigGraph.loadFromFile("/work0/t2gsuzumuralab/scalegraph/data/twitter_rv.net", true);
        
        t = System.currentTimeMillis() - t;
        
        
        
        // g.print();
        
        Console.OUT.println("Load time: " + t);
        // Console.OUT.println("Enter to Continue");
        // Console.IN.readChar();
    }
}