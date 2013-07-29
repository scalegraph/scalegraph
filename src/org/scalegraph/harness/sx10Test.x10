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

package org.scalegraph.harness;

import x10.util.StringBuilder;
import x10.io.Console;
import org.scalegraph.util.SString;

abstract public class sx10Test {
	private static val buffer = new StringBuilder();
	private static val linebreak = "\n    "; // 4 space

    abstract public def run(args: Array[String](1)) :boolean;

    public def execute(args: Array[String](1)) {
    	x10.io.Console.ERR.print("  " + typeName() + ": |" + linebreak);
       var b :boolean = false;
       try {
           finish b = this.run(args);
        }
       catch (e :CheckedThrowable) {
    	   printException(e);
        }
       buffer.add("\n");
       flush();
       reportResult(b);
    }
    
    public static def printException(e :CheckedThrowable) {
    	printException(e, 0);
    }
    
    private atomic static def printException(e :CheckedThrowable, nested :Int) {
    	var nested_prefix :String = "";
    	for(n in 0..(nested-1)) nested_prefix += "| ";

    	buffer.add(nested_prefix);
    	buffer.add(escapeString(e.toString()));
    	buffer.add(linebreak);
    	
    	val stackTrace = e.getStackTrace();
    	for ([i] in stackTrace) {
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
    		for([i] in excs) {
    			printException(excs(i), nested + 1);
    		}
    	}
    }
    
    public atomic static def flush() {
    	val out = buffer.toString();
    	if(here != Place.FIRST_PLACE) {
    		at(Place.FIRST_PLACE) {
    			x10.io.Console.ERR.print(out);
    		}
    	}
    	else {
    		x10.io.Console.ERR.print(out);
    	}
    }
    
    public atomic static def print(str :String) {
    	buffer.add(escapeString(str));
    }
    
    private static def escapeString(str :String) =
    	SString(str).replace("\n", linebreak).toString(); // 4 space
    
    public atomic static def println(str :String) {
    	buffer.add(escapeString(str));
    	buffer.add(linebreak);
    }

    public static def success(): void = {
	   at (Place.FIRST_PLACE) 
	     System.setExitCode(0);
    }

    public static def failure(): void = {
        at (Place.FIRST_PLACE)
           System.setExitCode(1);
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
