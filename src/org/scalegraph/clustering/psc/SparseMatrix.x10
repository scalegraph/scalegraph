package org.scalegraph.clustering.psc;

import x10.util.StringBuilder;
import x10.util.Pair;

public class SparseMatrix[T] {T <: Arithmetic[T], T haszero} {
	
	private val nRow:Int;
	private val nCol:Int;
	private val offset:Array[Int];
	private val entry:Array[Pair[Int, T]];
	
	public def this(nRow:Int, nCol:Int, offset:Array[Int], entry:Array[Pair[Int, T]]) {
		this.nRow = nRow;
		this.nCol = nCol;
		this.offset = offset;
		this.entry = entry;
	}
	
	public def getRowCount(): Int {
		return nRow;
	}
	
	public def getColumnCount(): Int {
		return nCol;
	}
	
	public def mult(x:Array[T](1), ofsx:Int, y:Array[T](1), ofsy:Int): void {
		for(var i:Int = 0; i < nRow; i++){
			y(ofsy + i) = Zero.get[T]();
			for(var jj:Int = offset(i); jj < offset(i + 1); jj++) {
				val j = entry(jj).first;
				val mij = entry(jj).second;
				y(ofsy + i) += mij * x(ofsx + j);
			}
		}
	}
	
	/*public def toString(): String {
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
	}*/
}