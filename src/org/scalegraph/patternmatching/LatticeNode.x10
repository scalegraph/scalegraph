package org.scalegraph.patternmatching;
import x10.util.ArrayList;

public class LatticeNode {
	//LaticeNode contains graph pattarn and pointer to otherLattice Node
	
	private var _is_processed:Boolean;//!< it is true, when we know all neighbors and their status of this pattern
	private var _pat:Pattern;//!< Store a pattern in lattice node
	private var _neighbors:ArrayList[LatticeNode];//!< store all neighbors that consist of LatticeNode that contains superpattern or subpattern
	private var _neighbor_prob:ArrayList[Double];//!< store Double type data useful for select which neighbor to transition
	
	public def this(var pat:Pattern){
		_pat = pat;
	}

	public def getis_processed():Boolean{
		return _is_processed;
	}
	
	public def setis_processed(var i:Boolean):void{
		_is_processed = i;
	}
	
	public def getpattern():Pattern{
		return _pat;
	}
	
	public def getneighbors():ArrayList[LatticeNode]{
		return _neighbors;
	}
	
	public def getneighbor_prob():ArrayList[Double]{
		return _neighbor_prob;
	}
}