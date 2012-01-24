package org.scalegraph.generator.randomized;

import org.scalegraph.graph.Graph;
import org.scalegraph.graph.PlainGraph;
import x10.matrix.dist.DistDenseMatrix;
import x10.matrix.dist.DistMatrix;
import x10.matrix.block.Grid;
import x10.matrix.Matrix; 
import x10.array.Dist;
import x10.util.Random;

/*
 * This class implements the RMAT generator which is described by Chakrabarti et al. in
 * their paper "R-MAT: A Recusrive Model for Graph Mining, SIAM Data Mining 2004, Orlando, Florida, USA"
 */

public class RMAT {
	
	public def this(){
		
	}
	
	/**
	 * Create a zero initialized vector.
	 */
	private def zeros(numElements:Int):Array[Int]{
		return new Array[Int] (numElements, (Int)=>0);
	}
	
	/**
	 * If there is a vector V and a scalar s, this method returns an integer valued vector where if V[i] > s the resulting array cell will have 1.
	 * If not it will be 0.
	 */
	private def greaterThan(lhs:Array[Double], rhs:Double):Array[Int]{
		return new Array[Int] (lhs.size, (i:Int)=>(lhs(i) > rhs) ? 1 : 0);
	}
	
	/**
	 * If there is a vector V and another vector W, this method returns an integer valued vector where if V[i] > w[i] the resulting array cell will have 1.
	 * If not it will be 0.
	 */
	private final def greaterThan (lhs:Array[Double], rhs:Array[Double]){
		return new Array[Int] (lhs.size, (i:Int)=>(lhs(i) > rhs(i)) ? 1 : 0);
	}
	
	/**
	 * Generates a vector of M random numbers 
	 */
	private def rand(rng:Random, numElements:Int):Array[Double]{
		return new Array[Double] (numElements, (Int)=>rng.nextDouble());
	}
	
	/**
	 * A straightforward addition of two vectors of Double.
	 */
	private def add (lhs:Array[Double], rhs:Array[Double]){
		return new Array[Double] (lhs.size, (i:Int)=>lhs(i)+rhs(i));
	}
	
	/**
	 * A straightforward addition of two vectors of Int.
	 */
	private def add (lhs:Array[Int], rhs:Array[Int]){ 
		return new Array[Int] (lhs.size, (i:Int)=>lhs(i)+rhs(i));
	}
	
	/**
	 * A vector and scalar multiplication.
	 * The scalar multiplier is a Double.
	 */
	private def multiply (lhs:Array[Int], multiplier:Double, flip:Boolean):Array[Double]{
		return new Array[Double] (lhs.size, (i:Int)=> { val lhsMultiplier = flip ? ((lhs(i) > 0) ? 0 : 1) : lhs(i); multiplier*(lhsMultiplier as Double)});
	}
	
	/**
	 * A vector and scalar multiplication.
	 * The scalar multiplier is an Int.
	 */	
	private def multiply(lhs:Array[Int], multiplier:Int){
		return new Array[Int] (lhs.size, (i:Int)=>lhs(i)*multiplier);
	}
	
	/**
	 * This is the method that generates the Graph
	 */
	public def generate(val scale:Int, val a:double, val b:double, val c:double, val d:double, val seed:Long):Graph{
		var result:Graph = null;
		if((a+b+c+d) != 1.0){
			throw new UnsupportedOperationException("Sum of the four probability values a,b,c and d must add up to 1.");
		}
		
		val rnd:Random = new Random(seed);
		val numVertices:Int = Math.pow(2,scale) as Int;
		val numEdges:Int = 8 * numVertices;

		var ii:Array[Int] = zeros(numEdges);
		var jj:Array[Int] = zeros(numEdges);
		
		val ab = a+b;
		val cNorm = c/(c+d);
		val aNorm = a/(a+b);
		
		for (var ib:Int=0; ib < scale; ++ib) {
			finish async{
				val iiBit = this.greaterThan(rand(rnd, numEdges), ab);
				val jjBitComparator = add(multiply(iiBit, cNorm, false),this.multiply(iiBit, aNorm, true));
				val jjBit = greaterThan(rand(rnd, numEdges),jjBitComparator);
				val exponent = Math.pow (2, ib) as Int;
				ii = add(ii, multiply(iiBit, exponent));
				jj = add(jj, multiply(jjBit, exponent));
			}
		}
		
		result = new PlainGraph();
		
		for(var i:Int = 0; i < ii.size; i++){
				result.addEdge(ii(i) + " " + jj(i));		
		}
		
		return result;
	}
}