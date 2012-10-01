package org.scalegraph.patternmatching;

import x10.util.StringBuilder;
import x10.util.ArrayList;

public class LatticeNode {
	//LaticeNode contains graph pattarn and pointer to otherLattice Node
	
	private var isProcessed:Boolean = false;//!< it is true, when we know all neighbors and their status of this pattern
	private var pat:Pattern = new Pattern();//!< Store a pattern in lattice node
	private var neighbors:ArrayList[LatticeNode] = new ArrayList[LatticeNode]();//!< store all neighbors that consist of LatticeNode that contains superpattern or subpattern
	private var neighbor_prob:ArrayList[Double] = new ArrayList[Double]();//!< store Double type data useful for select which neighbor to transition
	
	public def this(var pat:Pattern){
		this.pat = pat;
	}

	public def getis_processed():Boolean{
		return this.isProcessed;
	}
	
	public def setis_processed(var i:Boolean):void{
		this.isProcessed = i;
	}
	
	public def getpattern():Pattern{
		return this.pat;
	}
	
	public def getneighbors():ArrayList[LatticeNode]{
		return this.neighbors;
	}
	
	public def getneighbor_prob():ArrayList[Double]{
		return this.neighbor_prob;
	}
	
	public def toString():String{
		val builder = new StringBuilder(); 
		builder.add(pat.toString());
		return builder.result();
	}
	/*
	public def toString(val x:int):String{
		val builder = new StringBuilder(); 
		builder.add("pattern"+ x + "\n"+ super.toString());
		return builder.result();
	}
	 * */
}