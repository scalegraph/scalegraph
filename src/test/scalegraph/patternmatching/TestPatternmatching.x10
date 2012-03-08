package test.scalegraph.patternmatching;
import org.scalegraph.patternmatching.Patternmatching;
/**
 * Class TestPatternmatching
 */
public class TestPatternmatching {
    /**
     * Main method 
     */
    public static def main(args: Array[String]) {
    	val reader:EdgeListReader = new EdgeListReader();
    	var testG:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-16.dl");
       var obj:Patternmatching = new Patternmatching();
       var result:PatternmatchingResult = obj.run(testG);
       
    }
}