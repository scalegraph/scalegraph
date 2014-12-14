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

import org.scalegraph.test.STest;
import org.scalegraph.util.SString;
import org.scalegraph.util.SStringBuilder;

public class SStringBuilderTest extends STest {
	public static def main(args: Rail[String]) {
		new SStringBuilderTest().execute(args);
	}
	
	public def run(args: Rail[String]): Boolean {
		val sb = new SStringBuilder();
		
		sb.add("X10").add(" ").add("String");
		Console.OUT.println(sb);
		
		sb.add(" %s %d" as SString, ("is" as SString).c_str(), 10n);
		Console.OUT.println(sb);
		
		sb.delete(4n, 10n);
		Console.OUT.println(sb);
		
		return true;
	}
}
