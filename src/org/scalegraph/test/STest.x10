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

package org.scalegraph.test;

import x10.util.StringBuilder;
import x10.io.Console;
import x10.util.Team;
import org.scalegraph.util.SString;

abstract public class STest {
	private static val buffer = new StringBuilder();
	//private static val linebreak = "\n    "; // 4 space
	private static val linebreak = "\n";

    abstract public def run(args: Rail[String]) :boolean;

    public def execute(args: Rail[String]) {
    	x10.io.Console.ERR.print("  " + typeName() + ": |" + linebreak);
       var b :boolean = false;
       try {
           finish b = this.run(args);
           if(b) bufferedPrintln("Pass");
        }
       catch (e :CheckedThrowable) {
    	   printException(e);
        }
       buffer.add("\n");
       finish for(p in Team.WORLD.placeGroup()) at(p) async STest.flush();
       reportResult(b);
    }
    
    private static def escapeString(str :String) = str;
    	//SString(str).replace("\n", linebreak).toString(); // 4 space
    
    private atomic static def printException(e :CheckedThrowable, nested :Int) {
    	var nested_prefix :String = "";
    	for(n in 0..(nested-1)) nested_prefix += "| ";

    	buffer.add(nested_prefix);
    	buffer.add(escapeString(e.toString()));
    	buffer.add(linebreak);
    	
    	val stackTrace = e.getStackTrace();
    	for (i in stackTrace.range()) {
    		buffer.add(nested_prefix);
    		buffer.add("        at ");
    		buffer.add(escapeString(stackTrace(i)));
    		buffer.add(linebreak);
    	}
    	
    	if(e instanceof MultipleExceptions) {
    		val me = e as MultipleExceptions;
    		val excs = me.exceptions();
    		buffer.add(nested_prefix);
    		buffer.add("Caused by ");
    		buffer.add(linebreak);
    		for(i in excs.range()) {
    			printException(excs(i), nested + 1n);
    		}
    	}
    }
    
    public static def flush() {
    	val out :String;
    	atomic {
	    	out = buffer.toString();
	    	buffer.clear();
    	}
    	if(here != Place.FIRST_PLACE) {
    		finish at(Place.FIRST_PLACE) {
    			x10.io.Console.ERR.print(out);
    		}
    	}
    	else {
    		x10.io.Console.ERR.print(out);
    	}
    }
    
    public static def printException(e :CheckedThrowable) {
    	printException(e, 0n);
    }
    
    public static def print(obj :Any) {
    	bufferedPrint(obj);
    	flush();
    }
    
    public static def println(obj :Any) {
    	bufferedPrintln(obj);
    	flush();
    }
    
    public atomic static def bufferedPrint(obj :Any) {
    	buffer.add(escapeString(obj.toString()));
    }
    
    public atomic static def bufferedPrintln(obj :Any) {
    	buffer.add(escapeString(obj.toString()));
    	buffer.add(linebreak);
    }

    public static def success(): void = {
	   at (Place.FIRST_PLACE) 
	     System.setExitCode(0n);
    }

    public static def failure(): void = {
        at (Place.FIRST_PLACE)
           System.setExitCode(1n);
    }

    protected static def reportResult(b: boolean): void = {
        if (b) success(); else failure();
    }

    public static class TestException extends Exception {

        public def this() { super(); }

        public def this(cause: CheckedThrowable) { super(cause); }

        public def this(message: String) { super(message); }

        public def this(message: String, cause: CheckedThrowable) { super(message, cause); }

    }

    public static def chk(b: boolean): void = {
        if (!b) throw new TestException();
    }

    public static def chk(b: boolean, s: String): void = {
        if (!b) throw new TestException(s);
    }

}
