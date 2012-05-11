package test.scalegraph.util;

import org.scalegraph.util.ScaleGraphMath;

/**
 * This class tests IgraphX10Math
 */
public class TestscalegraphMath {
    /**
     * Default constructor 
     */
    public def this() {

    }
    
    public static def main(args: Array[String]) {
    	Console.OUT.println("ScaleGraphMath.pow(2,10) -> " + ScaleGraphMath.pow(2,10));
    	Console.OUT.println("ScaleGraphMath.pow(2,20) -> " + ScaleGraphMath.pow(2,20));
    	Console.OUT.println("ScaleGraphMath.pow(2,32) -> " + ScaleGraphMath.pow(2,32));
    	Console.OUT.println("ScaleGraphMath.pow(2,42) -> " + ScaleGraphMath.pow(2,42));
    	
    	Console.OUT.println("ScaleGraphMath.round(2000000000.78) -> " + ScaleGraphMath.round(2000000000.78));
    }
}