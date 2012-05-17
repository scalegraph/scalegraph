package org.scalegraph.patternmatching;

import x10.util.ArrayList;
import x10.util.StringBuilder;

/**
 * fundamental matrix class for uniform graph sampling
 */
public class Matrix {
	
	private var rows:Int; //row size
	private var cols:Int; //cow size
	private val data:ArrayList[ArrayList[Int]];  // the list of rows
	
	/**
	 * constructor
	 */
	public def this(r:Int, c:Int): Matrix {
		this.rows = r;
		this.cols = c;
		this.data = new ArrayList[ArrayList[Int]](r);
		for(var i:Int = 0; i < r; i++){
			val row = new ArrayList[Int](c);
			for(var j:Int = 0; j < c; j++){
				row.add(0);
			}
			this.data.add(row);
		}
	}
	
	/**
	 * getter and setter
	 */
	public def getRows() = this.rows;
	
	public def getCols() = this.cols;
	
	public operator this(r:Int, c:Int): Int = this.data(r)(c);
	
	public operator this(r:Int, c:Int) = (v:Int): Int {
		this.data(r)(c) = v;
		return v;
	}
	
	/**
	 * reset all data in specified row
	 */
	public def reset(r:Int): void {
		for(var c:Int = 0; c < this.cols; c++){
			this(r, c) = 0;
		}
	}
	
	/**
	 * return new matrix B, which is transposed matrix of A
	 */
	public static def transpose(a:Matrix): Matrix {
		val b = new Matrix(a.cols, a.rows);
		for(var i:Int = 0; i < a.rows; i++){
			for(var j:Int = 0; j < a.cols; j++){
				b(j, i) = a(i, j);
			}
		}
		return b;
	}
	
	public def transpose(): Matrix {
		return Matrix.transpose(this);
	}
	
	/**
	 * matrix multiplication
	 */
	public operator this * (m:Matrix): Matrix {
		assert(this.cols == m.rows);
		val result = new Matrix(this.rows, m.cols);
		for(var i:Int = 0; i < result.rows; i++){
			for(var j:Int = 0; j < result.cols; j++){
				var v:Int = 0;
				for(var k:Int = 0; k < this.cols; k++){
					v += this(i, k) * m(k, j);
				}
				result(i, j) = v;
			}
		}
		return result;
	}
	
	/**
	 * representation of this matrix
	 */
	public def toString(): String {
		val builder = new StringBuilder();
		for(var i:Int = 0; i < this.rows; i++){
			for(var j:Int = 0; j < this.cols; j++){
				builder.add(this(i, j) + " ");
			}
			builder.add("\n");
		}
		return builder.result();
	}
	
	public def getRowSetCount(i:Int): Int {
		var sum:Int = 0;
		for(var j:Int = 0; j < this.cols; j++){
			sum += this(i, j);
		}
		return sum;
	}
	
	/**
	 * scaling mathods
	 */
	protected def resize(r:Int, c:Int): void {
		this.data.clear();
		for(var i:Int = 0; i < r; i++){
			val row = new ArrayList[Int](c);
			for(var j:Int = 0; j < c; j++){
				row.add(0);
			}
			this.data.add(row);
		}
		this.rows = r;
		this.cols = c;
	}
	
	protected def addRow(): void {
		val row = new ArrayList[Int](this.cols);
		for(var i:Int = 0; i < this.cols; i++){
			row.add(0);
		}
		this.data.add(row);
		this.rows++;
	}
	
	protected def addCol(): void {
		for(var i:Int = 0; i < this.rows; i++){
			this.data(i).add(0);
		}
		this.cols++;
	}
	
	public def rowset_empty(val i:Int):Boolean{
		for(j in this.data(i)){
			if (j != 0){
				return false;
			}
		}
		return true;
	}
	
}