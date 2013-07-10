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

import org.scalegraph.util.random.Random;

public class RandomTest {

	public static def main(args: Array[String](1)) {
		val t1 = new Random(1, 2);

		Console.OUT.println(t1.nextInt());
		Console.OUT.println(t1.nextInt());
		Console.OUT.println(t1.nextInt());
		Console.OUT.println(t1.nextInt());
		Console.OUT.println(t1.nextInt());
		Console.OUT.println(t1.nextInt());
		Console.OUT.println(t1.nextInt());
		Console.OUT.println(t1.nextInt());
	}
}
