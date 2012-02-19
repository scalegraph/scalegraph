package test.scalegraph.util;

import org.scalegraph.util.ScaleGraphRandom;

/**
 * Class TestScaleGraphRandom
 */
public class TestScaleGraphRandom {
    /**
     * Main method 
     */
    public static def main(args: Array[String]) {
        //var r:Double = ScaleGraphRandom.rand();
    	// /ScaleGraphRandom.init(2.0);
    	ScaleGraphRandom.init();

    	for(i in 0..1000){
    		Console.OUT.println(ScaleGraphRandom.getRand());
    	}

    }
}