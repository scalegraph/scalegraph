package org.scalegraph.io;

import x10.io.IOException;
import x10.io.File;

import x10.util.Team;
import x10.util.ArrayList;

import x10.compiler.Inline;
import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPOutputFile;

import org.scalegraph.util.tuple.*;
import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MemoryPointer;

import org.scalegraph.io.format.*;

@NativeCPPInclude("NativeReader.h")
@NativeCPPOutputFile("format/struct.h")

@NativeRep("c++", "org::scalegraph::io::NativeReader *", "org::scalegraph::io::NativeReader *", null)
struct NativeReader {
	
	@Native("c++", "(#this)->readHeader()")
	public native def readHeader() : Header;
	
	@Native("c++", "(#this)->readProperty(#size, #offset)")
	public native def readProperty(size : Long, offset : Long): Property;
	
	@Native("c++", "(#this)->readBlockInfo(#size, #offset)")
	public native def readBlockInfo(size : Long, offset : Long): BlockInfo;
	
	@Native("c++", "(#this)->readBlockData(#size, #offset)")
	public native def readBlockData(size : Long, offset : Long): MemoryPointer[Byte];
	
	@Native("c++", "(#this)->readAttribute<#T>((#array)->pointer(), #rawdata, #num)")
	public native def readAttribute[T](array : MemoryChunk[T], rawdata : MemoryPointer[Byte], num : Long) : Long;
	
	@Native("c++", "(#this)->readCharAttribute((#array)->pointer(), #rawdata, #num)")
	public native def readCharAttribute(array : MemoryChunk[Char], rawdata : MemoryPointer[Byte], num : Long) : Long;
	
	@Native("c++", "(#this)->readStringAttribute((#array)->pointer(), #rawdata, #num)")
	public native def readStringAttribute(array : MemoryChunk[String], rawdata : MemoryPointer[Byte], num : Long) : Long;
	
	@Native("c++", "(#this)->printProp(#prop)")
	public native def printProperty(prop : Property) : void;
	
	@Native("c++", "new (x10aux::alloc<org::scalegraph::io::NativeReader>()) org::scalegraph::io::NativeReader((#filename)->c_str())")
	public static native def make(filename : String) : NativeReader;
	
	@Native("c++", "(#this)->~NativeReader(); x10aux::dealloc(#this)")
	public native def del() :void;
}
