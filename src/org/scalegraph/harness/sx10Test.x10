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

import x10.util.*;
import x10.io.Console;

abstract public class sx10Test {
	private static val buffer = new StringBuilder();
	private static val prefix = "    "; // 4 space
	private static val postfix = "\n";

    abstract public def run() :boolean;

    public def execute() :void {
    	x10.io.Console.ERR.print("  " + typeName() + ": |\n");
       var b :boolean = false;
       try {
           finish b = this.run();
        }
       catch (e :CheckedThrowable) {
    	   printException(e);
        }
       flush();
       reportResult(b);
    }
    
    public static def printException(e :CheckedThrowable) {
    	printException(e, 0);
    }
    
    private atomic static def printException(e :CheckedThrowable, nested :Int) {
    	var nested_prefix :String = prefix;
    	for(n in 0..(nested-1)) nested_prefix += "| ";
    	
    	buffer.add(nested_prefix);
    	buffer.add(e.toString());
    	buffer.add(postfix);
    	
    	val stackTrace = e.getStackTrace();
    	for ([i] in stackTrace) {
    		buffer.add(nested_prefix);
    		buffer.add("        at ");
    		buffer.add(stackTrace(i));
    		buffer.add(postfix);
    	}
    	
    	if(e instanceof MultipleExceptions) {
    		val me = e as MultipleExceptions;
    		val excs = me.exceptions();
    		buffer.add(nested_prefix);
    		buffer.add("Caused by ");
    		buffer.add(postfix);
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
    	if(str.indexOf("\n") == -1) {
    		buffer.add("    "); // 4 space
    		buffer.add(str);
    	}
    	else {
    		val lines = str.split("\n");
    		for([i] in lines) {
    			buffer.add("    "); // 4 space
    			buffer.add(lines(i));
    			buffer.add("\n");
    		}
    	}
    }
    
    public atomic static def println(str :String) {
    	if(str.indexOf("\n") == -1) {
    		buffer.add("    "); // 4 space
    		buffer.add(str);
    		buffer.add("\n");
    	}
    	else {
    		val lines = str.split("\n");
	    	for([i] in lines) {
	    		buffer.add("    "); // 4 space
	    		buffer.add(lines(i));
	    		buffer.add("\n");
	    	}
    	}
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
