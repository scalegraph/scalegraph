package org.scalegraph.clustering.psc;

import x10.util.StringBuilder;
import x10.util.Pair;

public class SparseMatrix[T] {T <: Arithmetic[T], T haszero} {
	
	val size:Int;
	val entry:Array[Array[Pair[Int, T]](1)](1);
	
	public def this(size:Int, entry:Array[Array[Pair[Int, T]](1)](1)) {
		this.size = size;
		this.entry = entry;
	}
	
	public def getSize(): Int {
		return size;
	}
	
	public def mult(x:Array[T](1), ofsx:Int, y:Array[T](1), ofsy:Int): void {
		for(var i:Int = 0; i < this.size; i++){
			y(ofsy + i) = Zero.get[T]();
			for(jj in entry(i)){
				val j = entry(i)(jj).first;
				val v = entry(i)(jj).second;
				y(ofsy + i) += v * x(ofsx + j);
			}
		}
	}
	
	/*public def mult(work:Array[Double](1), ofsx:Int, ofsy:Int): void {
		for(var i:Int = 0; i < this.size; i++){
			work(ofsy + i) = 0;
			for(jj in entry(i)){
				val j = entry(i)(jj).first;
				val v = entry(i)(jj).second;
				work(ofsy + i) += v * work(ofsx + j);
			}
		}
	}*/
	
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