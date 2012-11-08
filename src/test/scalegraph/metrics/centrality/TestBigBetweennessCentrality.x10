package test.scalegraph.metrics.centrality;

import x10.util.OptionsParser;
import x10.util.Option;
import org.scalegraph.graph.BigGraph;
import org.scalegraph.metrics.centrality.BigBetweennessCentrality;

public class TestBigBetweennessCentrality {
    
    public static def main(args: Array[String](1)): void {
        
        val params = new OptionsParser(args, null,
                                       [Option("i", "", "Input file/folder"),
                                        Option("o", "", "Output file"),
                                        Option("c", "", "Cut-off distance")]);

        val inputPath = params("-i", "");
        val outputPath = params("-o", "");
        val shouldPrintResult = params("-r");
        val cutoffDistance = params("-c", 0);

        if (inputPath == null || inputPath.equals("")) {
            
            Console.OUT.println("Please enter file name");
            return;
        }
        
        val g = BigGraph.loadFromFile(inputPath , true);
        BigBetweennessCentrality.run(g);
        
        Console.OUT.println("***************************");
        Console.OUT.println("Input: " + inputPath);
        Console.OUT.println("***************************");
    }
}