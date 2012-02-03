package org.scalegraph.generator.randomized;

import x10.array.Dist;
import x10.util.Random;
import x10.util.ArrayList;

import org.scalegraph.graph.Graph;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.graph.GraphSizeCategory;

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
	
	private def zeros_par(numElements:Int):Array[Int]{
		var result:Array[Int] = new Array[Int](numElements);
		
		var nThreads:Int = 600;
		var offset:Int = numElements/nThreads;
		var s:Int = offset * nThreads;
		
		finish for(var i:Int = 0; i < s; i = i + offset){
			val k = i;
			async for(var j:Int = k; j < (k + offset); j++){
				result(j) = 0; 
			}
		}
		
		if(s < numElements){
			for(var i:Int = s; i < numElements; i++){
				result(i) = 0;
			}
		}
		
		return result;
	}
	
	/**
	 * If there is a vector V and a scalar s, this method returns an integer valued vector where if V[i] > s the resulting array cell will have 1.
	 * If not it will be 0.
	 */
	private def greaterThan(lhs:Array[Double], rhs:Double):Array[Int]{
		return new Array[Int] (lhs.size, (i:Int)=>(lhs(i) > rhs) ? 1 : 0);
	}
	
	
	private def greaterThan_par(lhs:Array[Double], rhs:Double):Array[Int]{
		var result:Array[Int] = new Array[Int](lhs.size);
		
		var nThreads:Int = 600;
		var offset:Int = lhs.size/nThreads;
		var s:Int = nThreads * offset;
		
		finish for(var i:Int = 0; i < s; i = i + offset){
			val k = i;
			async for(var j:Int = k; j < (offset + k); j++){
				result(j) = lhs(j) > rhs ? 1 : 0; 
			}
		}
		
		if(s < lhs.size){
			for(var i:Int = s; i < lhs.size; i++){
				result(i) = lhs(i) > rhs ? 1 : 0;
			}
		}
	
		return result;
	}
	
	/**
	 * If there is a vector V and another vector W, this method returns an integer valued vector where if V[i] > w[i] the resulting array cell will have 1.
	 * If not it will be 0.
	 */
	private final def greaterThan (lhs:Array[Double], rhs:Array[Double]){
		return new Array[Int] (lhs.size, (i:Int)=>(lhs(i) > rhs(i)) ? 1 : 0);
	}
	
	
	private def greaterThan_par(lhs:Array[Double], rhs:Array[Double]):Array[Int]{
		var result:Array[Int] = new Array[Int](lhs.size);
		
		var nThreads:Int = 600;
		var offset:Int = lhs.size/nThreads;
		var s:Int = nThreads * offset;
		
		finish for(var i:Int = 0; i < s; i = i + offset){
			val k = i;
			async for(var j:Int = k; j < (offset + k); j++){
				result(j) = lhs(j) > rhs(j) ? 1 : 0; 
			}
		}
		
		if(s < lhs.size){
			for(var i:Int = s; i < lhs.size; i++){
				result(i) = lhs(i) > rhs(i) ? 1 : 0;
			}
		}
		
		return result;
	}
	
	/**
	 * Generates a vector of M random numbers 
	 */
	
	public def rand(rng:Random, numElements:Int):Array[Double]{
		var result:Array[Double] = new Array[Double](numElements);
		for(var i:Int = 0; i < numElements; i = i + 1){
				result(i) = rng.nextDouble();
		}

		return result;
	}
	
	public def rand_par(val seed:Long, numElements:Int):Array[Double]{
		
		var result:Array[Double] = new Array[Double](numElements);
		
		var nThreads:Int = 600;
		var offset:Int = numElements/nThreads;
		var s:Int = nThreads * offset;
		var randArr:Array[Random] = new Array[Random](nThreads+1);
		var c:Int = 0;
		
		var rnd:Random = new Random(seed);
		
		for(var i:Int = 0; i < s; i = i + offset){			
			for(var j:Int = i; j < (offset + 1); j++){
				result(j) = rnd.nextDouble();
			}
		}
		
		if(s < numElements){
				for(var j:Int = s; j < numElements; j++){
					result(j) = rnd.nextDouble();
				}
		}
		
		return result;
	}
	
	/**
	 * A straightforward addition of two vectors of Double.
	 */
	private def add (lhs:Array[Double], rhs:Array[Double]){
		return new Array[Double] (lhs.size, (i:Int)=>lhs(i)+rhs(i));
	}
	
	private def add_par (lhs:Array[Double], rhs:Array[Double]){
		var result:Array[Double] = new Array[Double](lhs.size);
		
		var nThreads:Int = 600;
		var offset:Int = lhs.size/nThreads;
		var s:Int = nThreads * offset;
		
		finish for(var i:Int = 0; i < s; i = i + offset){
			val k = i;
			async for(var j:Int = k; j < (offset + k); j++){
				result(j) = lhs(j)+rhs(j); 
			}
		}
		
		if(s < lhs.size){
			for(var j:Int = s; j < lhs.size; j++){
				result(j) = lhs(j)+rhs(j); 
			}			
		}
		
		return result;
	}
	
	/**
	 * A straightforward addition of two vectors of Int.
	 */
	private def add (lhs:Array[Int], rhs:Array[Int]){ 
		return new Array[Int] (lhs.size, (i:Int)=>lhs(i)+rhs(i));
	}
	
	private def add_par (lhs:Array[Int], rhs:Array[Int]){ 
		var result:Array[Int] = new Array[Int](lhs.size);
		
		var nThreads:Int = 600;
		var offset:Int = lhs.size/nThreads;
		var s:Int = nThreads * offset;
		
		finish for(var i:Int = 0; i < s; i = i + offset){
			val k = i;
			async for(var j:Int = k; j < (offset + k); j++){
				result(j) = lhs(j)+rhs(j); 
			}
		}
		
		if(s < lhs.size){
			for(var j:Int = s; j < lhs.size; j++){
				result(j) = lhs(j)+rhs(j); 
			}	
		}
		
		return result;
	}
	
	
	/**
	 * A vector and scalar multiplication.
	 * The scalar multiplier is a Double.
	 */
	public def multiply (lhs:Array[Int], multiplier:Double, flip:Boolean):Array[Double]{
		return new Array[Double] (lhs.size, (i:Int)=> { 
			val lhsMultiplier = flip ? ((lhs(i) > 0) ? 0 : 1) : lhs(i); multiplier*(lhsMultiplier as Double)});
	}

	public def multiply_par (lhs:Array[Int], multiplier:Double, flip:Boolean):Array[Double]{
		
		var result:Array[Double] = new Array[Double](lhs.size);
		
		var nThreads:Int = 600;
		var offset:Int = lhs.size/nThreads;
		var s:Int = nThreads * offset;
		
		finish for(var i:Int = 0; i < s; i = i + offset){
			val k = i;
			async for(var j:Int = k; j < (offset + k); j++){
				val lhsMultiplier = flip ? ((lhs(k) > 0) ? 0 : 1) : lhs(k);
				result(j) = multiplier *(lhsMultiplier as Double); 
			}
		}
		
		if(s < lhs.size){
			for(var j:Int = s; j < lhs.size; j++){
				val lhsMultiplier = flip ? ((lhs(j) > 0) ? 0 : 1) : lhs(j);
				result(j) = multiplier *(lhsMultiplier as Double); 
			}			
		}
				
		return result;
	}
	
	/**
	 * A vector and scalar multiplication.
	 * The scalar multiplier is an Int.
	 */	
	private def multiply(lhs:Array[Int], multiplier:Int){
		return new Array[Int] (lhs.size, (i:Int)=>lhs(i)*multiplier);
	}
	
	private def multiply_par(lhs:Array[Int], multiplier:Int){
		var result:Array[Int] = new Array[Int](lhs.size);
		
		var nThreads:Int = 600;
		var offset:Int = lhs.size/nThreads;
		var s:Int = nThreads * offset;
		
		finish for(var i:Int = 0; i < s; i = i + offset){
			val k = i;
			async for(var j:Int = k; j < (offset + k); j++){
				result(j) = lhs(j)*multiplier; 
			}
		}
		
		if(s < lhs.size){
			for(var j:Int = s; j < lhs.size; j++){
				result(j) = lhs(j)*multiplier; 
			}
		}
		
		return result;
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
		val np:Int = 100;
		val offset:Int = numEdges/np;
				
		val ii:Array[Array[Int]] = new Array[Array[Int]](np); 
		val jj:Array[Array[Int]] = new Array[Array[Int]](np);
				
		for (var i:Int = 0; i < np; i++){
			ii(i) = zeros_par(offset);
			jj(i) = zeros_par(offset);
		}
	
		val ab = a+b;
		val cNorm = c/(c+d);
		val aNorm = a/(a+b);
		
		finish for(var q:Int = 0; q < np; q++){

			val ind:Int = q;
			
			for (var ib:Int = 0; ib < scale; ib++) {
				    val rnds:Random = rnd;
				    val ar = rand(rnds, offset);
				    val ar2 = rand(rnds, offset);
				    var iiBit:Array[Int] = null;
				    var jjBitComparator:Array[Double] = null;
				    var jjBit:Array[Int] = null;
				    
					iiBit = this.greaterThan_par(ar, ab);
										
					jjBitComparator = add_par(multiply_par(iiBit, cNorm, false),this.multiply_par(iiBit, aNorm, true));
					jjBit = greaterThan_par(ar2,jjBitComparator);

					
				    val exponent = Math.pow (2, ib) as Int;
				    
					finish{
						async{
							ii(ind) = add_par(ii(ind), multiply_par(iiBit, exponent));
						}
						
						async{
							jj(ind) = add_par(jj(ind), multiply_par(jjBit, exponent));
						}
					}

			}
		}
				
		if(scale <= GraphSizeCategory.SMALL){
			result = new PlainGraph();	
		}
		else{
			if(scale < GraphSizeCategory.MEDIUM + (Math.log(Place.places().size())/Math.log(2))){
				result = new PlainGraph(GraphSizeCategory.MEDIUM);	
			}else{
				throw new UnsupportedOperationException("A graph of scale " + scale + " cannot be supported with the current number of places.");
			}
		}
		
		var u:Int = 0;
		var j:Int = 0;
		var q:Array[String] = new Array[String](numEdges);
		
		
		Console.OUT.println("Done running RMAT");
		
		finish for(j = 0; j < np; j++){
				val f:Int = j;
				async for(var i:Int = 0; i < ii(f).size; i++){				
					q(u) = ((ii(f)(i))+ 1) + " " + ((jj(f)(i))+1);
					atomic{
						u++;
					}
				}
		}
		
		Console.OUT.println("Done creating big array");
		
		(result as PlainGraph).addEdges(q);
		
		Console.OUT.println("Done adding edges");
				
		return result;
	}
}