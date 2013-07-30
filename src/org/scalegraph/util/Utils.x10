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
