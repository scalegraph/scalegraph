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
import org.scalegraph.io.fbio.FBIOSupport;

/** Provides binary file IO routines. All methods are executed in parallel and distributed. */
public final class Binary {
	
	/** Read a binary file */
	public static def read(path :SString) {
		return FBIOSupport.read(Config.get().worldTeam(), path.toString());
	}
	
	/** Write data as a binary file */
	public static def write(path :SString, data :NamedDistData) {
		write(path, data, false);
	}
	
	/** Write data as a binary file */
	public static def write(path :SString, data :NamedDistData, scatter : Boolean) {
		FBIOSupport.write(Config.get().worldTeam(), path.toString(), data, scatter);
	}
	
}