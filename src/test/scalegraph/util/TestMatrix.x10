package test.scalegraph.util;

import x10.util.Pair;

import org.scalegraph.util.Matrix;

/**
 * This class tests the Matrix class of ScaleGraph
 */
public class TestMatrix {
    /**
     * Main method 
     */
    public static def main(args: Array[String]) {
    	var adjMat:Matrix = new Matrix(10,10);
    	adjMat.setAt(1,1,3);
    	adjMat.setAt(1,2,1);
    	Console.OUT.println(adjMat.getAt(1,1));
    	Console.OUT.println(adjMat.getAt(1,2));
    	
    	val p:Pair[Int,Int] = adjMat.getDimensions();
    	Console.OUT.println(p);
    	
    	for(var i:Int = 1; i < p.first; i++){
    		for(var j:Int = 1; j < p.second; j++){
    			Console.OUT.print(adjMat.getAt(i,j));
    		}
    		Console.OUT.println();
    	}
    	
    }
}