package org.scalegraph.patternmatching;

public class FiveTuple {
	// FiveTuple is an expression of edge
	
	protected var _i:Int = 0;// source id in matrix
	protected var _j:Int = 0;// destination id in matrix
	protected var _li:Int = 0;// vertex lbael of source
	protected var _lj:Int = 0;// vertex label of destination
	protected var _lij:Int = 0;// edge label
	
	public def this(var i:Int,var j:Int,var li:Int,var lj:Int,var lij:Int){
		_i=i;
		_j=j;
		_li=li;
		_lj=lj;
		_lij=lij;
	}
	
	public operator this < (rhs:FiveTuple):Boolean{
		var is_fwd:Boolean=(_i<_j);
		var rhs_is_fwd:Boolean=(rhs._i<rhs._j);

		if(!is_fwd && rhs_is_fwd) {                                      // back-edge < forward-edge
			return true;
		}

		if(!is_fwd && !rhs_is_fwd && _j<rhs._j) {                        // if both back edge, and _j < rhs._j
			return true;
		}

		if(!is_fwd && !rhs_is_fwd && _j==rhs._j && _lij<rhs._lij) {      // if both back edge, _j==rhs._j, and _lij < rhs._lij
			return true;
		}

		// Added by VC...
		if(!is_fwd && !rhs_is_fwd && _j==rhs._j && _lij==rhs._lij && _i<rhs._i) { // if both back edge, _j==rhs._j, and _lij == rhs._lij
			return true;
		}

		if(is_fwd && rhs_is_fwd && _i>rhs._i) {                          // if both forward edge, _i > rhs._i
			return true;
		}

		if(is_fwd && rhs_is_fwd && _i==rhs._i && _li<rhs._li) {         // if both forward edge, _i == rhs._i and _li < rhs._li
			return true;
		}

		if(is_fwd && rhs_is_fwd && _i==rhs._i && 
				_li==rhs._li && _lij<rhs._lij) {            // if both forward, _i == rhs._i, _li == rhs._li, then _lij < rhs._lij
			return true;
		}

		if(is_fwd && rhs_is_fwd && _i==rhs._i && _li==rhs._li && 
				_lij==rhs._lij && _lj<rhs._lj) {   // if both forward, _i == rhs._i, _lij == rhs._lij, _lj<rhs._lj
			return true;
		}

		// If both forward, everything same other than the destination
		if(is_fwd && rhs_is_fwd && _i==rhs._i && _li==rhs._li && 
				_lij==rhs._lij && _lj==rhs._lj && _j<rhs._j) {
			return true;
		}

		return false;
	}//end operator<
	
	
	
	
}