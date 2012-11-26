package org.scalegraph.util;

import x10.compiler.Inline;
import x10.util.Timer;

public class Debug {
	public static @Inline def println(pkg:String, str: String) {
		Console.OUT.println("" + Timer.milliTime() + ":Place " + here.id + ":Worker " + Runtime.workerId() + ":" + pkg + ": " + str);
		Console.OUT.flush();
	}
}
