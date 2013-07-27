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

import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.harness.sx10Test;

public final class TestDistributedReader extends sx10Test {
	public static inputFormat_g1 = (s:String)=> {
		val elements = s.split(",");
		return Tuple3[Long, Long, Double](
				Long.parse(elements(0)),
				Long.parse(elements(1)),
				Double.parse(elements(3)));
	};
	public static inpurFormat_g2 = (s:String)=> {
		val elements = s.split(",");
		return Tuple3[Long, Long, Double](
				Long.parse(elements(0)),
				Long.parse(elements(1)),
				Double.parse(elements(2)));
	};
	
	public static def main(args: Array[String](1)) {
		val t = new TestDistributedReader();
		t.execute();
	}
	
	public def run(): Boolean {
	    val args = ["/nfs/data0/testdata/WEIGHTED_COMMA_SPLIT_RMAT_SCALE_20", ""];
	    entry(args);
	    return true;
	}
	
	public def entry(args: Array[String](1)) {
	    val team = Team.WORLD;
	    val format = args(0).endsWith(".txt") ? inputFormat_g1 : inpurFormat_g2;
	    var time: Long = System.currentTimeMillis();
	    val rawData = DistributedReader.read(team, [args(0) as String], format);
	    time = System.currentTimeMillis() - time;
	    Console.OUT.println("Load time: " + (time));
	    Console.OUT.println("Complete!!!");
	}
}