package test.scalegraph.patternmatching;

import org.scalegraph.patternmatching.PatternMatching;
import org.scalegraph.patternmatching.PatternMatchingResult;
import org.scalegraph.io.EdgeListReader;
import org.scalegraph.graph.PlainGraph;

/**
 * Class TestPatternmatching
 */
public class TestPatternMatching {
    /**
     * Main method 
     */
    public static def main(args: Array[String]) {
    	val reader:EdgeListReader = new EdgeListReader();
    	var testG:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-16.dl");
    	var obj:PatternMatching = new PatternMatching();
    	var result:PatternMatchingResult = obj.run(testG);
    }
}