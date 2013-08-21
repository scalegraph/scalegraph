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
package org.scalegraph.util;

import x10.compiler.Ifdef;
import x10.util.Timer;
import org.scalegraph.Config;

// TODO: rename package name -> utils
public class Utils {
	
	public static def ensureOnFirst() {
		if(here.id != 0) {
			throw new BadPlaceException("Here is not the first place.");
		}
	}
	
	public static def debugPrintln(pkg:String, str: String) {
		@Ifdef("DEBUGPRINT") {
			Console.OUT.println("" + Timer.milliTime() + ":Place " + here.id + ":Worker " + Runtime.workerId() + ":" + pkg + ": " + str);
			Console.OUT.flush();
		}
	}
	
	public static def 
}
