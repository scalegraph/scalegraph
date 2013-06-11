package org.scalegraph.harness;

import x10.util.*;
import x10.io.Console;

abstract public class sx10Test {

    abstract public def run(): boolean;

    public def execute(): void = {
        var b: boolean = false;
        try {
            finish b = this.run();
        } catch (e: CheckedThrowable) {
            printStackTrace(e);
        }
        reportResult(b);
    }
    

    private static def printStackTrace(e: CheckedThrowable) {
            val errors = e.getStackTrace();
            println("Error:");
            println("    Message: " + " \"\\");
            println("        " + e + " \\n\\");
            for (i in 0..(errors.size-1)) {
                println("            at " + errors(i) + " \\n\\");
            }
            println("        " + "\"");

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

    protected static def println(s:String) { x10.io.Console.ERR.println(s); }

}
