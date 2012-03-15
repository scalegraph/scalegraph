package test.scalegraph.clustering;

import x10.matrix.Matrix;
import x10.matrix.DenseMatrix;

public class TestGML {
    public static def main(args: Array[String]) {
    	val m:Matrix = DenseMatrix.makeRand(3, 4);
    	Console.OUT.println(m);
    }
}