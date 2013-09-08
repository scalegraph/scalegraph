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

import org.scalegraph.harness.sx10Test;
import org.scalegraph.io.ID;
import org.scalegraph.io.CSV;
import org.scalegraph.id.Type;

final class CSVReaderTest extends sx10Test {
	public static def main(args: Array[String](1)) {
		new CSVReaderTest().execute(args);
	}
	
	public def run(args: Array[String](1)): Boolean {
		val team = Team.WORLD;
		val colTypes = [Type.Long as Int, Type.Long, Type.None, Type.Double];
		val nd = CSV.read(args(0), colTypes, false);
		
		//Console.OUT.println(InputSplitter.T_CHUNK_SIZE);
		// print result
		Console.OUT.println(nd.name());
		return true;
	}
}
