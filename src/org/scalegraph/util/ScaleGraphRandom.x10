package org.scalegraph.util;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

@NativeCPPInclude("RandomDriver.h")
@NativeCPPCompilationUnit("RandomDriver.cc")

public class ScaleGraphRandom {
	// @Native("c++", "(double)((rand()%100)/100.0)")
	// public static native def getRand(): Double;
	// 
	// @Native("c++", "srand(#value)")
	// public static native def init(val value:Double):void;
	// 
	// @Native("c++", "srand(time(NULL))")
	// public static native def init_To_time():void;
	
	@Native("c++", "RandomDriver::init()")
	public static native def init():void;
	
	@Native("c++", "RandomDriver::getRandom()")
	public native static def getRand(): Double;
	
}