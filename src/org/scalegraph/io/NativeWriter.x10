package org.scalegraph.io;

import x10.compiler.Inline;
import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPOutputFile;

import x10.io.File;

import x10.util.Team;

import org.scalegraph.io.format.*;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MemoryPointer;
import org.scalegraph.util.tuple.*;


@NativeCPPInclude("NativeWriter.h")
@NativeCPPOutputFile("format/struct.h")

@NativeRep("c++", "org::scalegraph::io::NativeWriter *", "org::scalegraph::io::NativeWriter *", null)
struct NativeWriter {
	
	@Native("c++", "(#this)->writeMetaData(#header, #v_prop, #e_prop, #v_blockinfo, #e_blockinfo)")
	public native def writeMetaData(header : Header, v_prop : Property, e_prop : Property,
			v_blockinfo : BlockInfo, e_blockinfo : BlockInfo) : void;
	
	@Native("c++", "(#this)->writeMetaData(#header, #v_prop)")
	public native def writeMetaData(header : Header, v_prop : Property) : void;
	
	@Native("c++", "(#this)->makeHeader(#version, (#datatype)->raw()->raw(), #size, #nsec, (#seclen)->raw()->raw())")
	public native def makeHeader(version : Byte, datatype : Array[Byte], size : Int, nsec : Int, seclen : Array[Long]) : Header;
	
	@Native("c++", "(#this)->makeProperty(#nvert, #nattr, (#id)->raw()->raw(), (#name)->raw()->raw())")
	public native def makeProperty(nvert : Long, nattr : Int, id : Array[Int], name : Array[String]) : Property;
	
	@Native("c++", "(#this)->makeBlock()")
	public native def makeBlock() : Block;
	
	@Native("c++", "(#this)->makeBlock(#offset, #size, #n)")
	public native def makeBlock(offset : Long, size : Long, n : Long) : Block;
	
	@Native("c++", "(#this)->makeBlockInfo(#nBlock, (#offset)->raw()->raw(), (#size)->raw()->raw(), (#n)->raw()->raw())")
	public native def makeBlockInfo(nBlock : Int, offset : Array[Long], size : Array[Long], n : Array[Long]) : BlockInfo;
	
	@Native("c++", "(#this)->makeBlockInfo(#nBlock, (#allBlocks)->pointer())")
	public native def makeBlockInfo(nBlock : Int, allBlocks : MemoryChunk[Block]) : BlockInfo;
	
	@Native("c++", "(#this)->writeAttribute<#T>((#array)->pointer(), #file_offset, #num)")
	public native def writeAttribute[T](array : MemoryChunk[T], file_offset : Long, num : Long) : Long;
	
	@Native("c++", "(#this)->writeCharAttribute((#array)->pointer(), #file_offset, #num)")
	public native def writeCharAttribute(array : MemoryChunk[Char], file_offset : Long, num : Long) : Long;
	
	@Native("c++", "(#this)->writeStringAttribute((#array)->pointer(), #file_offset, #num)")
	public native def writeStringAttribute(array : MemoryChunk[String], file_offset : Long, num : Long) : Long;
	
	@Native("c++", "new org::scalegraph::io::NativeWriter((#filename)->c_str())")
	public static native def make(filename : String) : NativeWriter;
	
	@Native("c++", "new org::scalegraph::io::NativeWriter((#filename)->c_str(), #filesize)")
	public static native def make(filename : String, filesize : Long) : NativeWriter;
	
	@Native("c++", "delete (#this)")
	public native def del() :void;
}
