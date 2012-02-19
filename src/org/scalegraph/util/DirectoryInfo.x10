package org.scalegraph.util;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

/**
 * Class DirectoryInfo
 */
@NativeCPPInclude("DirectoryInfoDriver.h")
@NativeCPPCompilationUnit("DirectoryInfoDriver.cc")
public class DirectoryInfo {
	@Native("c++", "DirectoryInfoDriver::listdir(#path)")
    public native static def listDirContents(var path:String) : Array[String];
}