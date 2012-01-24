package org.scalegraph.util;

import x10.compiler.Native;

/**
 * This class defines bespoke methods for Igraph math calculations. Since Math calculations of current X10 does not
 * support large values greater than 2^30, this class should be used when needed.
 */

public class ScaleGraphMath{
    /**
     * Default constructor 
     */
    public def this() {
        
    }
    
    
    @Native("c++", "pow(#base, #radi)")
    public static native def pow(val base:Int, val radi:Int): Long;
    
    @Native("c++", "floor(#value)")
    public static native def round(val value:Double): Long;
}