package org.scalegraph.clustering.psc;

import x10.util.ArrayBuilder;
import x10.util.ArrayList;
import x10.util.Box;
import x10.util.StringBuilder;
import x10.util.Pair;

import org.scalegraph.graph.PlainGraph;

public class SparseMatrix {
	
	var size:Int;
	var firstColumnIndex:Array[Int];
	var entries:Array[Pair[Int, Double]];
	var num:Numbering;
	
	public def getSize(): Int {
		return size;
	}
	
	public def mult(x:Array[Double](1)): Array[Double] {
		val y = new Array[Double](this.size, 0);
		
		for(var i:Int = 0; i < this.size; i++){
			for(var jj:Int = this.firstColumnIndex(i); jj < this.firstColumnIndex(i+1); jj++){
				val j = entries(jj).first;
				y(i) += entries(jj).second * x(j);
			}
		}
		
		return y;
	}
	
	public def mult(work:Array[Double](1), ofsx:Int, ofsy:Int): void {
		for(var i:Int = 0; i < this.size; i++){
			work(ofsy + i) = 0;
			for(var jj:Int = this.firstColumnIndex(i); jj < this.firstColumnIndex(i+1); jj++){
				val j = entries(jj).first;
				work(ofsy + i) += entries(jj).second * work(ofsx + j);
			}
		}
	}
	
	public def toString(): String {
		val builder = new StringBuilder();
		builder.add("****** firstColumnIndex *****\n");
		builder.add(firstColumnIndex + "\n");
		builder.add("********** entries **********\n");
		for(pt in entries){
			val pair = entries(pt);
			builder.add(pair.toString() + "\n");
		}
		builder.add("*****************************\n");
		return builder.result();
	}
}