package test.scalegraph.metrics.centrality;

import org.scalegraph.metrics.centrality.MatrixPagerank;
import org.scalegraph.metrics.centrality.PagerankResult;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.graph.GraphSizeCategory;
import org.scalegraph.io.ScatteredEdgeListReader;
import org.scalegraph.io.EdgeListReader;
import x10.util.Timer;
import x10.util.HashMap;
import x10.util.Pair;
import x10.matrix.DenseMatrix;

public class TestMatrixPagerank {
    private static def graphSetUp():PlainGraph {
        val graph = new PlainGraph(GraphSizeCategory.SMALL);
        graph.addEdge("1 2");        graph.addEdge("2 1");
        graph.addEdge("1 3");        graph.addEdge("3 1");
        graph.addEdge("1 4");        graph.addEdge("4 1");
        graph.addEdge("2 3");        graph.addEdge("3 2");
        graph.addEdge("2 8");        graph.addEdge("8 2");
        graph.addEdge("3 4");        graph.addEdge("4 3");
        graph.addEdge("4 5");        graph.addEdge("5 4");
        graph.addEdge("5 6");        graph.addEdge("6 5");
        graph.addEdge("5 7");        graph.addEdge("7 5");
        graph.addEdge("6 7");        graph.addEdge("7 6");
        graph.addEdge("8 9");        graph.addEdge("9 8");
        graph.addEdge("8 11");        graph.addEdge("11 8");
        graph.addEdge("9 10");        graph.addEdge("10 9");
        graph.addEdge("10 11");        graph.addEdge("11 10");
        graph.addEdge("10 12");        graph.addEdge("12 10");
        graph.addEdge("11 12");        graph.addEdge("12 11");
        return graph;
    }

    private static def graphSetUpTsubame():PlainGraph {
        val reader:EdgeListReader = new EdgeListReader();
	    //val reader:ScatteredEdgeListReader = new ScatteredEdgeListReader();
        return reader.
	    //loadFromDir("/work0/t2gsuzumuralab/scalegraph/data/flickr");
        //loadFromFile("/work0/t2gsuzumuralab/miyuru/data/scale-20-82792.dl");
        //loadFromFile("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale-20-82792.dl");
        loadFromFile("/work0/t2gsuzumuralab/miyuru/data/scale-8.dl");
    }
    
    public static def main(Array[String]) {
        Console.OUT.println("Start Random Walk with Restart Test");
        val graph = graphSetUpTsubame();
        //val graph = graphSetUp();

        val pagerank:MatrixPagerank = new MatrixPagerank(graph);
        Console.OUT.println("----------Start calculate rainking vector----------");
        val startTime = Timer.milliTime();
        val pagerankResult = pagerank.run();
        Console.OUT.printf("pre-compute stage time = %f\n",
                           (Timer.milliTime() - startTime) / 1000.0);
        // Console.OUT.println(pagerankResult);
        Console.OUT.println(pagerankResult);
        
        Console.OUT.println("----------End Test----------");
    }
}
