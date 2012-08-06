package org.scalegraph.patternmatching;

import x10.util.ArrayList;
import org.scalegraph.graph.AttributedGraph;


public class PatternMatching {
	

	//private var current:LatticeNode;
	private var max_iter:Int = 20;
	private var minsup:Int = 1;
	
	
	
	public def run(var graph:ArrayList[AttributedGraph]):PatternMatchingResult{
		var result:PatternMatchingResult = new PatternMatchingResult();
		
	/*-------------------- Kansyun's patterm matching algorithm implementation ------*/	
		var zero_neighbors:Boolean = false;
		var database:DataBase = null;
		
		
		/* creating database and loading data */
		//try {
			database = new DataBase(graph);
			database.set_minsup(minsup);
	//	}
	/*	catch(Exception){
			assert(false):"fail to construct database";
		}
		*/
		database.remove_infrequent_edges();
		//database->print_database();
		/* creating random_walk_manager and starting walk */
		var rwm:RandamWalk = new RandamWalk(database, max_iter);
		var cur_iter:Cell[Int]= new Cell[Int](0);
		
		//will call initialize followed by walk again and again until it gets a single edge pattern with some neighbors.
		do {
			var start:LatticeNode = rwm.initialize(); 
			zero_neighbors = rwm.walk(start,cur_iter);
			Console.OUT.println("current iter : " + cur_iter());
		} while (zero_neighbors == false);
		
		
	/*-------------------------------------------------------------------------------*/		
		return result;
	}
}