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

import x10.util.Random;

import org.scalegraph.util.*;

public class TestMathAppend {
	private static def message (str:String) : void {
		Console.OUT.println("IdConvEx: " + str);
	}
	
	static def testCeilLog2() {
		val n = 10;
		for (i in 0..n) {
			message("i: " + i + ", ceilLog2(i): " + MathAppend.ceilLog2(i));
		}
	}
	public static def main(argv: Array[String](1)) {
		testCeilLog2();
	}
}
