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
import org.scalegraph.io.impl.CSVReader;
import org.scalegraph.io.impl.CSVWriter;
import org.scalegraph.util.SString;

/** Provides CSV File IO routines. All methods are executed in parallel and distributed. */
public final class CSV {

	/** Read a CSV File */
	public static def read(path :SString, columnDef :Rail[Int], includeHeader :Boolean) {
		return CSVReader.read(Config.get().worldTeam(), path, columnDef, null, includeHeader);
	}
	
	/** Read a CSV File */
	public static def read(path :SString, columnDef :Rail[Int], columnNames :Rail[String]) {
		return CSVReader.read(Config.get().worldTeam(), path, columnDef, columnNames, false);
	}
	
	/** Write data as a CSV File */
	public static def write(path :SString, data :NamedDistData, setNumFlag :Boolean) {
		CSVWriter.write(Config.get().worldTeam(), path, data,setNumFlag);
	}
	
}
