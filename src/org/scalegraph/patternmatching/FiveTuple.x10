package org.scalegraph.patternmatching;

public class FiveTuple {
	// FiveTuple is an expression of edge
	
	public val i:Int;// source id in matrix
	public val j:Int;// destination id in matrix
	public val li:Int;// vertex lbael of source
	public val lj:Int;// vertex label of destination
	public val lij:Int;// edge label
	
	public def this(var i:Int,var j:Int,var li:Int,var lij:Int,var lj:Int){
		this.i=i;
		this.j=j;
		this.li=li;
		this.lj=lj;
		this.lij=lij;
	}
	
	public operator this < (rhs:FiveTuple):Boolean{
		var is_fwd:Boolean=(this.i<this.j);
		var rhs_is_fwd:Boolean=(rhs.i<rhs.j);

		if(!is_fwd && rhs_is_fwd) {                                      // back-edge < forward-edge
			return true;
		}

		if(!is_fwd && !rhs_is_fwd && this.j<rhs.j) {                        // if both back edge, and _j < rhs._j
			return true;
		}

		if(!is_fwd && !rhs_is_fwd && this.j==rhs.j && this.lij<rhs.lij) {      // if both back edge, _j==rhs._j, and _lij < rhs._lij
			return true;
		}

		// Added by VC...
		if(!is_fwd && !rhs_is_fwd && this.j==rhs.j && this.lij==rhs.lij && this.i<rhs.i) { // if both back edge, _j==rhs._j, and _lij == rhs._lij
			return true;
		}

		if(is_fwd && rhs_is_fwd && this.i>rhs.i) {                          // if both forward edge, _i > rhs._i
			return true;
		}

		if(is_fwd && rhs_is_fwd && this.i==rhs.i && this.li<rhs.li) {         // if both forward edge, _i == rhs._i and _li < rhs._li
			return true;
		}

		if(is_fwd && rhs_is_fwd && this.i==rhs.i && 
				this.li==rhs.li && this.lij<rhs.lij) {            // if both forward, _i == rhs._i, _li == rhs._li, then _lij < rhs._lij
			return true;
		}

		if(is_fwd && rhs_is_fwd && this.i==rhs.i && this.li==rhs.li && 
				this.lij==rhs.lij && this.lj<rhs.lj) {   // if both forward, _i == rhs._i, _lij == rhs._lij, _lj<rhs._lj
			return true;
		}

		// If both forward, everything same other than the destination
		if(is_fwd && rhs_is_fwd && this.i==rhs.i && this.li==rhs.li && 
				this.lij==rhs.lij && this.lj==rhs.lj && this.j<rhs.j) {
			return true;
		}

		return false;
	}//end operator<
	
	
	public final def equals(val other:Any):Boolean{
		atomic{
			//Console.OUT.println("assign is Any");
		
			if(other instanceof FiveTuple){
				return this.equals(other as FiveTuple);
			}
			else{
				return false;
			}
		}
	}
	
	
	
	public final def equals(val other:FiveTuple):Boolean{
		atomic{
			//Console.OUT.println("assign is Five Tuple");
			if(this.i.equals(other.i) && this.j.equals(other.j) 
					&& this.li.equals(other.li) && this.lj.equals(other.lj)
					&& this.lij.equals(other.lij)){
				return true;
			}
			else{
				return false;
			}
		}
	}
	
	
	public def toString ():String{
		return "(i : " + i + ",j : " + j + ",li : " + li + ",lj :" + lj + ",lij :" +lij + ")";
	}
	
	public def hashCode():Int{
		return (i.hashCode() ^ j.hashCode() ^ li.hashCode() ^ lj.hashCode() ^ lij.hashCode());
	}
	
}