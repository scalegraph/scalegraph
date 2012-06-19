package org.scalegraph.patternmatching;

import x10.util.ArrayBuilder;
import x10.util.Pair;

/**
 * square symmetrical matrix class
 */
public class SqrSymMatrix extends Matrix {

	public def this(){
		
	}
	
	/**
	 * constructor
	 */
	public def this(n:Int): SqrSymMatrix {
		super(n, n);
	}
	
	/**
	 * getter
	 */
	public def getSize(): Int {
		assert(this.rows == this.cols);
		return this.rows;
	}
	
	/**
	 * resize this matrix for new vertex
	 */
	public def addVertex(): Int {
		addRow();
		addCol();
		return this.getSize() - 1;
	}
	
	/* called from only 1 place */
	public def changeAdjMatrix(s:Int, adjList:Array[Pair[Int, Int]]): void {
		this.resize(s, s);
		for(i in adjList){
			val pair:Pair[Int, Int] = adjList(i);
			this(pair.first, pair.second) = 1;
			this(pair.second, pair.first) = 1;
		}
	}
	
	/**
	 * return the neighbours of specified vertex
	 */
	public def getNeighbours(v:Int): Array[Int](1) {
		if(v < 0 || this.rows <= v){
			Console.OUT.println("error: AdjMatrix.neighbours: Requesting degree of non-existent vertex");
			return null;
		}
		
		val builder = new ArrayBuilder[Int]();
		for(var i:Int = 0; i < this.cols; i++){
			if(this(v, i) == 1){
				builder.add(i);
			}
		}
		return builder.result();
	}
	
	/* called from only 1 place */
	public def isEssentialEdge(src:Int, dst:Int): Boolean {
		val nSrc = getNeighbours(src);
		val nDst = getNeighbours(dst);
		if(nSrc.size == 1 || nDst.size == 1) return false;
		
		val visited = new Array[Boolean](this.getSize());
		visited(src) = true;
		var reachable:Boolean = false;
		for(i in nSrc){
			val pos = nSrc(i);
			if(pos == dst) continue;
			reachable = isReachable(pos, dst, visited);
			if(reachable) return false;
		}
		
		assert(visited(dst) == false);
		return true;
	}
	
	private def isReachable(src:Int, dst:Int, visited:Array[Boolean]): Boolean {
		visited(src) = true;
		val array = getNeighbours(src);
		for(i in array){
			val pos = array(i);
			if(visited(pos)) continue;
			if(pos == dst || isReachable(pos, dst, visited)) return true;
		}
		return false;
	}
}