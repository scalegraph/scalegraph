package org.scalegraph.patternmatching;
import x10.util.ArrayList;

public class Subiso {
	
	
	public def subgraph_iso_test(val A:SqrSymMatrix, val B:SqrSymMatrix, val M:Matrix):Boolean{
		assert(false):"not implemented yet";
		return false;
	}
	
	public def UllMan_edge_Refinement(val A:FullLabelAdjMatrix,val B:FullLabelAdjMatrix,var M:Matrix, val d:Int,var k:Int):Boolean {
		assert(false):"not implemented yet";
		return false;
	}

	public def UllMan_Refinement(val A:SqrSymMatrix, val B:SqrSymMatrix,var M:Matrix,var d:Int) {
		assert(false):"not implemented yet";
		return false;
	}


	
	
	public def UllMan_backtracking(val A:FullLabelAdjMatrix, val B:FullLabelAdjMatrix , val M_minus1:Matrix, var all_iso:Boolean) {
		var alpha:Int = M_minus1.getRows();   // size of smaller matrix alpha>=0
		var beta:Int = M_minus1.getCols();    // size of larger matrix beta>=0
		
		
		for (var i:Int=0; i<alpha; i++) {
			if (M_minus1.rowset_empty(i) == true) {
				
				return false;
			}
		}

		var H:ArrayList[Int] = new ArrayList[Int](alpha);  // H[i] = k means k'th column has been used in depth i
		for(var i:Int = 0;i < alpha;i++){
		 	H(i) = -1;
		}
		var F:ArrayList[Int] = new ArrayList[Int](beta);  // set '1' for used column, 0 for unused (boost bitset default is 0)
		for(var i:Int = 0;i < beta;i++){
			F(i) = 0;
		}
		var M_d:ArrayList[Matrix] = new ArrayList[Matrix](alpha);    // Store matching matrix at different depth

		// initialization (step 1)
		var d:Int = 0;                      
		var M:Matrix = M_minus1;                 
		if (UllMan_Refinement(A, B, M, d) == true) return false; 
		var k:Int = 0,j:Int = 0;               // column scan at depth d start from k'th column

		

		M_d(0) = M;
		var extend_mode:Boolean = true;
		var same_row_next:Boolean = false;
		
		while (true) {
			
			if (extend_mode == true) {
				
				k = (d ==0) ? H(0) : -1;
				extend_mode = false;
			}
			if (same_row_next == false) {
				
				
				for (j=k+1; j < beta; j++) {
					if (M(d,j)==1 && F(j) == 0) break;   // break when finds a column to choose at this depth
				}
			}
			if (j < beta || same_row_next == true) {    // j found, whose value = k, so k'th column was selected at depth d
				
				same_row_next = false;
				
				k = j;
				M_d(d) = M; 
				M.reset(d);
				M(d,k) = 1;   // setting M_(dj)
				
				var fail:Boolean = UllMan_Refinement(A, B, M, d); 
				var fail2:Boolean = false;
				if (!fail) {
					fail2 = UllMan_edge_Refinement(A, B, M, d, k); 
				}
				if (fail || fail2) {
					for (j=k+1; j < beta; j++) {
						if (M_d(d)(d,j)==1 && F(j) == 0) break;   // break when finds a column to choose at this depth
					}
					if (j < beta) {
						M = M_d(d);
						same_row_next = true;
						continue;
					}
					else {
						extend_mode=false;
						k = beta;
						continue;
					} 
				}
				if (d < alpha-1) {
					H(d) = k;
					F(k) = 1;
					d = d + 1;
					extend_mode = true;
					continue;
				}
				else {
					if (subgraph_iso_test(A, B, M) == true) {
						if (!all_iso) return true;
					}
					else {
						//if need print debug code
					}
					if (k < beta-1) {
						M = M_d(d);
						continue;
					}
				}
			}
			else {
				// if need print debug code 
			}
			if (d == 0) break;
			if (k>=0 && k<beta) {
				F(k) = 0; 
			}
			d = d - 1;
			M = M_d(d);

			
			k = H(d);
			if (k>=0)
				F(k) = 0; 

		}
		return false;	
	}
	
}