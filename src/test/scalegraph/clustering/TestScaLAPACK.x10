package test.scalegraph.clustering;

import x10.util.StringBuilder;

import org.scalegraph.clustering.MPI;
import org.scalegraph.clustering.BLACS;
import org.scalegraph.clustering.ScaLAPACK;

public class TestScaLAPACK {
    public static def main(args: Array[String]) {
    	val size = MPI.getSize();
    	val nprow = 2;
    	val npcol = 2;
    	
    	val sb = new StringBuilder();
    	val gsb = GlobalRef(sb);
    	
    	finish for(p in Place.places()) async at(p) {
    		val rank = MPI.getRank();
    		var ictxt:Int = -1;
    		var myrow:Int = -1;
    		var mycol:Int = -1;
    		ScaLAPACK.slInit(ictxt, nprow, npcol);
    		
    		if(ictxt >= 0){
	    		BLACS.gridInfo(ictxt, nprow, npcol, myrow, mycol);
	    		
	    		if(rank == 0){
	    			val tmp = new StringBuilder();
	    			tmp.add("size = " + size + "\n");
	    			tmp.add("ictxt = " + ictxt + "\n\n");
	    			at(gsb) gsb().add(tmp.toString());
	    		}
	    		//BLACS.barrier(ictxt, 'A');
	    		for(var i:Int = 0; i < size; i++){
	    			if(i == rank){
	    				val tmp = new StringBuilder();
	    				tmp.add("rank = " + rank + "\n");
	    				tmp.add("mypos = (" + myrow + ", " + mycol + ")\n\n");
	    				async at(gsb) gsb().add(tmp.toString());
	    			}
	    			//BLACS.barrier(ictxt, 'A');
	    		}
    			BLACS.gridExit(ictxt);
    		}
    	}
    	Console.OUT.println(sb);
    }
}