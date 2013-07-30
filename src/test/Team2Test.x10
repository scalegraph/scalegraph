/* 
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package test;

import x10.util.Team;
import x10.util.Timer;
import x10.util.StringBuilder;

import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;

public final class Team2Test {
	private static val mesBuf = PlaceLocalHandle.make[StringBuilder](Team.WORLD.placeGroup(), ()=> new StringBuilder());
	private static def message (str:String) : void {
		//Console.OUT.println("TIME:" + Timer.milliTime() + ": " + here + "(" + Runtime.workerId() + ")" + str);
		//Console.OUT.println( here + "(" + Runtime.workerId() + ")" + str);
		//Console.OUT.flush();
		mesBuf().add( here + "(" + Runtime.workerId() + ")" + str + "\n");
	}
	
	static def testscatterv() : void{
		val team = Team2(Team.WORLD);
		val team_size = team.size();
		message("scatterv Test");
		val counts = 3;
		val root = 0;
		finish for (p in Place.places()) async at (p) {
			val role = here.id;
			val src = (role == root) ? new MemoryChunk[Double](counts * (counts + team_size-1) * team_size / 2 , (i:Long)=> i as Double) : MemoryChunk.getNull[Double]();
			val src_counts = new MemoryChunk[Int](team_size, (i:Long)=> counts + i as Int);
			team.barrier(role);
			val dst = team.scatterv[Double](root, src, src_counts);
			message(here + ": scatterv: dst.size() = " + dst.size() );
			for (i in dst.range()) {
				message(here + ": scatterv: dst( " + i + " ) = " + dst(i));
			}
		}
	}
	
	static def testgatherv() : void{
		val team = Team2(Team.WORLD);
		val team_size = team.size();
		message("gatherv Test");
		val root = 0;
		finish for (p in Place.places()) async at (p) {
			val role = here.id;
			val src = new MemoryChunk[Double](role + 1, (i:Long)=> (role + 1) * role / 2 + 1 + i as Double);
			team.barrier(role);
			val recv = team.gatherv[Double](root, src);
			if(root == role){
				for (i in recv.get2().range()) {
					message(here + ": gatherv: dst_counts( " + i + " ) = " + recv.get2()(i));
				}
				for (i in recv.get1().range()) {
				message(here + ": gatherv: dst( " + i + " ) = " + recv.get1()(i));
				}
			}
		}
	}
	
	static def testallgatherv() : void{
		val team = Team2(Team.WORLD);
		val team_size = team.size();
		message("allgatherv Test");
		finish for (p in Place.places()) async at (p) {
			val role = here.id;
			val src = new MemoryChunk[Double](role + 1, (i:Long)=> (role + 1) * role / 2 + 1 + i as Double);
			team.barrier(role);
			val recv = team.allgatherv[Double](src);
			for (i in recv.get2().range()) {
				message(here + ": allgatherv: dst_counts( " + i + " ) = " + recv.get2()(i));
			}
			for (i in recv.get1().range()) {
				message(here + ": allgatherv: dst( " + i + " ) = " + recv.get1()(i));
			}
		}
	}
	
	static def testalltoallv() : void{
		val team = Team2(Team.WORLD);
		val team_size = team.size();
		message("alltoallv Test");
		finish for (p in Place.places()) async at (p) {
			val role = here.id;
			val src = new MemoryChunk[Double]((role + 1 + role + team_size ) * team_size / 2 , (i:Long)=> role * 100 + i as Double);
			val src_counts = new MemoryChunk[Int](team_size, (i:Long)=> role + 1 + i as Int );
			team.barrier(role);
			val recv = team.alltoallv[Double](src, src_counts);
			for (i in recv.get2().range()) {
				message(here + ": alltoallv: dst_counts( " + i + " ) = " + recv.get2()(i));
			}
			for (i in recv.get1().range()) {
				message(here + ": alltoallv: dst( " + i + " ) = " + recv.get1()(i));
			}
		}
	}
	
	public static def main(args:Array[String](1)) : void {
		
		message("Test Start!");
		
		//testscatterv();
		//testgatherv();
		//testallgatherv();
		testalltoallv();
		
		message("Finish!");
		
		finish for(p in Place.places()) at(p) {
			Console.OUT.println(p + "\n" + mesBuf().toString());
		}
	}
}
