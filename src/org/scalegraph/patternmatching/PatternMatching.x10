package org.scalegraph.patternmatching;

import x10.util.StringBuilder;
import x10.util.ArrayList;
import org.scalegraph.graph.AttributedGraph;


public class PatternMatching {
	

	//private var current:LatticeNode;
	private var max_iter:Int = 1000;
	private var minsup:Int = 30;
	
	
	
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
			var start:Cell[LatticeNode] = new Cell[LatticeNode](new LatticeNode());
			start() = rwm.initialize(); 
			zero_neighbors = rwm.walk(start,cur_iter);
			Console.OUT.println("current iter : " + cur_iter());
		} while (zero_neighbors == false);
		
		val r = rwm.get_node_map().entries();
		val l = rwm.get_freq_cnt();
		val builder = new StringBuilder();
		//print out the result of patterns stored in pattern lattice
		
		for(x in r){
			builder.add("pattern:\n" + x.getKey().toString() + "\n" + x.getValue().toString()+"\n");
			builder.add("frequent:" + l.get(x.getKey().toString()) + "\n");
		}
		Console.OUT.println(builder.result());
		
		Console.OUT.println("number of pattern:" + r.size());
		/*
		Console.OUT.println("checking sotred edges in database");
		val ed = database.get_ext_map().entries();
		for(i in ed){
			Console.OUT.println(i.getKey().toString());
			val s = i.getValue();
			for(j in s){
				Console.OUT.println(j.toString());
			}
		}
		 * */
		

	/*-------------------------------------------------------------------------------*/		
		return result;
	}


}

