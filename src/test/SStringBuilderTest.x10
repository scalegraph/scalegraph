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

import org.scalegraph.harness.sx10Test;
import org.scalegraph.util.SString;
import org.scalegraph.util.SStringBuilder;

public class SStringBuilderTest extends sx10Test {
	public static def main(args: Array[String](1)) {
		new SStringBuilderTest().execute(args);
	}
	
	public def run(args: Array[String](1)): Boolean {
		val sb = new SStringBuilder();
		
		sb.add("X10").add(" ").add("String");
		Console.OUT.println(sb);
		
		sb.add(" %s %d" as SString, ("is" as SString).c_str(), 10);
		Console.OUT.println(sb);
		
		sb.delete(4, 10);
		Console.OUT.println(sb);
		
		return true;
	}
}