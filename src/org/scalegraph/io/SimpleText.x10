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

import org.scalegraph.Config;
import org.scalegraph.util.SString;
import org.scalegraph.util.tuple.Tuple3;
import org.scalegraph.io.impl.SimpleTextReader;

public class SimpleText {
	
	/** Read a CSV File */
	public static def read[T](path :String, parser :(line :String) => Tuple3[Long, Long, T]) {
		return SimpleTextReader.read(Config.get().worldTeam(), path as SString, (line :SString) => parser(line.toString()));
	}
	
	/** Read a CSV File */
	public static def read[T](path :SString, parser :(line :SString) => Tuple3[Long, Long, T]) {
		return SimpleTextReader.read(Config.get().worldTeam(), path, parser);
	}
	
}