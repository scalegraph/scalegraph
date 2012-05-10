package org.scalegraph.clustering;

public class Vector(N:Int) {
	
	public val d:Array[Double](1){rail};
	
	public def this(x:Array[Double](1){rail}) {
		property(x.size);
		this.d = x;
	}
	
	public static def make(n:Int): Vector{self.N==n} {
		val vector:Vector = new Vector(new Array[Double](n, 0.0));
		return vector;
	}
	
	public def rail(): Array[Double](1){rail} {
		return this.d;
	}
	
	public def reset(): Vector{self==this} {
		for(var i:Int = 0; i < this.N; i++){
			this.d(i) = 0.0;
		}
		return this;
	}
	
	public operator this(x:Int):Double = d(x);
	public operator this(x:Int) = (v:Double):Double {
		d(x) = v;
		return v;
	}
	
	public def cellAdd(v:Vector{self.N==this.N}): Vector{self==this} {
		for(var i:Int = 0; i < N; i++){
			this.d(i) += v.d(i);
		}
		return this;
	}
	
	public def cellDiv(v:Double): Vector{self==this} {
		for(var i:Int = 0; i < N; i++){
			this.d(i) /= v;
		}
		return this;
	}
	
	public operator this - (v:Vector{self.N==this.N}): Vector{self.N==this.N} {
		val x:Array[Double](1){rail} = new Array[Double](this.N, 0.0);
		for(var i:Int = 0; i < this.N; i++){
			x(i) = this.d(i) - v(i);
		}
		return new Vector(x);
	}
	
	public def norm(): Double {
		var norm:Double = 0.0;
		for(var i:Int = 0; i < this.N; i++){
			norm += this.d(i) * this.d(i);
		}
		norm = Math.sqrt(norm);
		return norm;
	}
}