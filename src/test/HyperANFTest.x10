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

import org.scalegraph.Config;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.graph.Graph;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.io.CSV;
import org.scalegraph.util.SString;
import org.scalegraph.util.SStringBuilder;
import org.scalegraph.io.FileWriter;
import org.scalegraph.io.FileMode;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.io.FileReader;
import org.scalegraph.util.*;
import x10.io.EOFException;

final class HyperANFTest extends AlgorithmTest{
	
	public static def main(args: Array[String](1)) {
		new HyperANFTest().execute(args);
	}
	
	public def run(args :Array[String](1), g :Graph): Boolean {
//		val result = org.scalegraph.api.HyperANF.run(g);	
		val hyperANF = new org.scalegraph.api.HyperANF();
		val result :MemoryChunk[Double];
		hyperANF.niter = Int.parse(args(3));
		if(args(0).equals("high")) {
			result = hyperANF.execute(g);
		}
		else if(args(0).equals("low")) {
			val matrix = g.createDistSparseMatrix[Double](
			Config.get().distXPregel(), "weight", true, false);
			// delete the graph object in order to reduce the memory consumption
			g.del();
			result = hyperANF.execute(matrix);
		}
		else {
			throw new IllegalArgumentException("Unknown level parameter :" + args(0));
		}
		if(args(1).equals("write")) {
			var iter:Long = 0;
			val sb = new SStringBuilder();
			for(i in result.range()) {
				sb.add(result(i)).add("\n");
			}
			val fw = new FileWriter(args(2), FileMode.Create);
			fw.write(sb.result().bytes());
			fw.close();
			return true;
		}
		else if(args(1).equals("check")) {
			val fr = new FileReader(args(2));
			val refdata = new GrowableMemory[Double]();
			try {
				do {
					refdata.add(fr.fastReadLine().toDouble());
				} while(true);
			}
			catch(e :EOFException) { }
			fr.close();
			
			if(result.size() != refdata.size()) {
				return false;
			}
			else {
				for(i in result.range()) {
					val abs = MathAppend.abs( (result(i) + 1.0) /( refdata(i) + 1.0 ) - 1.0);
					if(abs > 0.0001) {
						return false;
					}
				}
			}
			return true;
			
		}
		else {
			throw new IllegalArgumentException("Unknown command :" + args(0));
		}
	}
	
}