package test.scalegraph.clustering;

import x10.util.StringBuilder;

import org.scalegraph.clustering.MPI;
import org.scalegraph.clustering.BLACS;
import org.scalegraph.clustering.ScaLAPACK;

public class TestScaLAPACK {
    public static def main(args: Array[String]) {
    	Console.OUT.println("hello");
    	val nprow = 2;
    	val npcol = 2;
    	val mb = 2;
    	val nb = 2;
    	val gRow = 7;
    	val gCol = 7;
    	finish for(p in Place.places()) async at(p) {
    		var ictxt:Int = -1;
    		ScaLAPACK.slInit(ictxt, nprow, npcol);
    		/*
    		var iam:Int = -1;
    		var nprocs:Int = -1;
    		Console.OUT.println("before pInfo");
    		BLACS.pInfo(iam, nprocs);
    		Console.OUT.println("iam = " + iam + ", nprocs = " + nprocs);
    		if(nprocs < 1){
    			if(iam == 0){
    				nprocs = nprow * npcol;
    			}
    			Console.OUT.println("before setup");
    			BLACS.setup(iam, nprocs);
    		}
    		Console.OUT.println("iam = " + iam + ", nprocs = " + nprocs);
    		Console.OUT.println("before get");
    		BLACS.get(-1, 0, ictxt);
    		Console.OUT.println("ictxt = " + ictxt);
    		Console.OUT.println("before gridInit");
    		BLACS.gridInit(ictxt, 'R', nprow, npcol);
    		*/
    		
    		var myrow:Int = -1;
    		var mycol:Int = -1;
    		BLACS.gridInfo(ictxt, npcol, nprow, myrow, mycol);
    		
    		if(myrow >= 0 && mycol >= 0){
    			val rank = MPI.getRank();
    			val lRow = ScaLAPACK.numroc(gRow, mb, myrow, 0, nprow);
    			val lCol = ScaLAPACK.numroc(gCol, nb, mycol, 0, npcol);
    			val lMatrix = new Array[Double](lRow * lCol, 0.0);
    			val desc = new Array[Int](9, 0);
    			var info:Int = -1;
    			ScaLAPACK.descInit(desc, gRow, gCol, mb, nb, 0, 0, ictxt, Math.max(1, lRow), info);
    			if(rank == 0){
    				Console.OUT.println(desc);
    			}
    			for(var i:Int = 0; i < gRow; i++){
    				for(var j:Int = 0; j < gCol; j++){
    					ScaLAPACK.pdelset(lMatrix, i + 1, j + 1, desc, i * gCol + j);
    				}
    			}
    			if(rank == 0){
    				for(var i:Int = 0; i < lRow; i++){
    					for(var j:Int = 0; j < lCol; j++){
    						Console.OUT.print(lMatrix(j * lRow + i) + " ");
    					}
    					Console.OUT.println("");
    				}
    			}
    			BLACS.gridExit(ictxt);
    		}
    	}
    }
}