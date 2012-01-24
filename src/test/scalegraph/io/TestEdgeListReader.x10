package test.scalegraph.io;

import org.scalegraph.io.EdgeListReader;
import org.scalegraph.graph.PlainGraph;

/**
 * Class TestEdgeListReader
 */
public class TestEdgeListReader {
    /**
     * Main method 
     */
    public static def main(args: Array[String]) {
        val reader:EdgeListReader = new EdgeListReader();
        var testG:PlainGraph = reader.loadFromFile("/nfs/data1/miyuru/Graph Data Sets/R-MAT/16.dl");
        testG.printCont();
    }
}