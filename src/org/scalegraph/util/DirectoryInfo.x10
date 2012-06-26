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
    
    //Check whether a directory exists or not
    @Native("c++", "DirectoryInfoDriver::exists(#path)")
    public native static def exists(var path:String) : Boolean;
    
    //Create a directory. If the directory already exists or an error, return false
    @Native("c++", "DirectoryInfoDriver::makedir(#path)")
    public native static def mkdir(var path:String) : Boolean;
    
    //Delete a directory. If the directory could not be found or an error, return false
    //This deletes the entire directory contents including its contents
    @Native("c++", "DirectoryInfoDriver::remdir(#path)")
    public native static def rmdir(var path:String) : Boolean;
}