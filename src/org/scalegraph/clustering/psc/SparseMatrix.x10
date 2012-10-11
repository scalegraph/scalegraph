package org.scalegraph.clustering.psc;

import x10.util.StringBuilder;
import x10.util.Pair;

public class SparseMatrix {
	
	var size:Int;
	var entry:Array[Array[Pair[Int, Double]]];
	
	public def getSize(): Int {
		return size;
	}
	
	public def mult(x:Array[Double](1)): Array[Double] {
		val y = new Array[Double](this.size, 0);
		
		for(var i:Int = 0; i < this.size; i++){
			for(jj in entry(i)){
				val j = entry(i)(jj).first;
				val v = entry(i)(jj).second;
				y(i) += v * x(j);
			}
		}
		
		return y;
	}
	
	public def mult(work:Array[Double](1), ofsx:Int, ofsy:Int): void {
		for(var i:Int = 0; i < this.size; i++){
			work(ofsy + i) = 0;
			for(jj in entry(i)){
				val j = entry(i)(jj).first;
				val v = entry(i)(jj).second;
				work(ofsy + i) += v * work(ofsx + j);
			}
		}
	}
	
	public def toString(): String {
		val builder = new StringBuilder();
		builder.add("********** entries **********\n");
		for(i in entry){
			for(j in entry(i)){
				val pair = entry(i)(j);
				builder.add(i + ", " + pair.toString() + "\n");
			}
		}
		builder.add("*****************************\n");
		builder.add("size = " + size);
		builder.add("*****************************\n");
		return builder.result();
	}
}