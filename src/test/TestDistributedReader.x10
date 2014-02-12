/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
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

import org.scalegraph.test.STest;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;

final class TestDistributedReader extends STest {
	public static def main(args: Array[String](1)) {
		new TestDistributedReader().execute(args);
	}
	
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

	public def run(args: Array[String](1)): Boolean {
	    //val args = ["/nfs/data0/testdata/WEIGHTED_COMMA_SPLIT_RMAT_SCALE_20", ""];
	    entry(args);
	    return true;
	}
	
	public def entry(args: Array[String](1)) {
	    val team = Team.WORLD;
	    val format = args(0).endsWith(".txt") ? inputFormat_g1 : inpurFormat_g2;
	    var time: Long = System.currentTimeMillis();
	    val rawData = DistributedReader.read([args(0) as String], format);
	    time = System.currentTimeMillis() - time;
	    Console.OUT.println("Load time: " + (time));
	    Console.OUT.println("Complete!!!");
	}
}