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

package org.scalegraph.io;

public interface FileMode {

	public static val Append		:Int = 0;
	public static val Create		:Int = 1;
	public static val CreateNew		:Int = 2;
	public static val Open			:Int = 3;
	public static val OpenOrCreate	:Int = 4;
	public static val Truncate		:Int = 5;
	
}
