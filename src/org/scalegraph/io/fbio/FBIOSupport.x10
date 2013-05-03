package org.scalegraph.io.fbio;

import x10.io.IOException;
import x10.io.File;
import x10.util.Team;
import x10.util.ArrayList;

import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPOutputFile;
import x10.compiler.Ifdef;
import x10.compiler.Inline;

import org.scalegraph.util.tuple.*;
import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.io.NativeFile;
import org.scalegraph.io.NamedDistData;

@NativeCPPInclude("NativeSupport.h")
@NativeCPPOutputFile("Attribute.h")
@NativeRep("c++", "org::scalegraph::io::fbio::NativeAttribute*",
					"org::scalegraph::io::fbio::NativeAttribute*", null)
struct Attribute {
	@Native("c++", "(#this)->id")
	public native def id() : Int;
	@Native("c++", "(#this)->name")
	public native def name() : String;
}

@NativeCPPInclude("NativeSupport.h")
@NativeCPPOutputFile("Block.h")
@NativeRep("c++", "org::scalegraph::io::fbio::NativeBlock*",
					"org::scalegraph::io::fbio::NativeBlock*", null)
struct Block {
	@Native("c++", "(#this)->offset")
	public native def offset() : Long;
	@Native("c++", "(#this)->chunks.size()")
	public native def numAttributes() : Int;
	@Native("c++", "(#this)->chunks(#i).numBytes")
	public native def numBytes(i:Int) : Long;
	@Native("c++", "(#this)->chunks(#i).numElements")
	public native def numElements(i:Int) : Long;
}

@NativeCPPInclude("NativeSupport.h")
@NativeCPPOutputFile("Header.h")
@NativeRep("c++", "org::scalegraph::io::fbio::NativeHeader*",
					"org::scalegraph::io::fbio::NativeHeader*", null)
struct Header {
	@Native("c++", "(#this)->magic[#i]")
	public native def magic(i:Int) : Byte;
	@Native("c++", "(#this)->version")
	public val version : Byte;
	@Native("c++", "(#this)->datatype[#i]")
	public native def datatype(i:Int) : Byte;
	@Native("c++", "(#this)->seclen[#i]")
	public native def seclen(i:Int) : Long;
	public def this(version:Byte) {
		this.version = version;
	}
}

@NativeCPPInclude("NativeSupport.h")
@NativeCPPOutputFile("BlockInfo.h")
@NativeRep("c++", "std::vector<org::scalegraph::io::NativeBlock>*",
					"std::vector<org::scalegraph::io::NativeBlock>*", null)
struct BlockInfo {
	@Native("c++", "(#this)->size()")
	public native def numBlocks() : Int;
	@Native("c++", "&(*(#this))[#i]")
	public native def block(i:Int) : Block;
}


@NativeCPPInclude("NativeSupport.h")
@NativeCPPOutputFile("Attributes.h")
@NativeRep("c++", "std::vector<org::scalegraph::io::NativeAttribute>*",
					"std::vector<org::scalegraph::io::NativeAttribute>*", null)
struct Attributes {
	@Native("c++", "(#this)->size()")
	public native def numAttributes() : Int;
	@Native("c++", "&(*(#this))[#i]")
	public native def attribute(i:Int) : Attribute;
}

@NativeCPPInclude("NativeSupport.h")
@NativeCPPOutputFile("NativeHeaders.h")
@NativeRep("c++", "org::scalegraph::io::fbio::NativeHeaders*",
					"org::scalegraph::io::fbio::NativeHeaders*", null)
struct NativeHeaders {
	@Native("c++", "new (x10aux::alloc<org::scalegraph::io::NativeHeaders>()) org::scalegraph::io::NativeHeaders(#file)")
	public static native def make(file : NativeFile) : NativeHeaders;
	@Native("c++", "(#this)->~NativeHeaders(); x10aux::dealloc(#this)")
	public native def del() :void;
	
	@Native("c++", "(#this)->header")
	public native def header() : Header;
	@Native("c++", "(#this)->attributes")
	public native def attributes() : Attributes;
	@Native("c++", "(#this)->blocks")
	public native def blocks() : BlockInfo;
}

//////////////////////////////////////////////////////////////
// File name abstraction layer
//////////////////////////////////////////////////////////////

abstract class FileManager {
	
	protected val path : String;
	protected var offset : Long;
	
	public def this(path : String) {
		this.path = path;
	}
	
	public abstract def isScattered() : Boolean;
	
	public abstract def getFileName(i:Int) : String;
	
	public abstract def getHeaderFileName() : String;
	
	public abstract def getDataFileId(offset : Long) : Int;
	
	public abstract def getDataFileName(offset : Long) : String;
	
	public abstract def getFileLocalOffset(id : Int, offset : Long) : Long;
	
	public abstract def getOffsetAdjuster(offset : Long) : (Long) => Long;
	
	public abstract def nextFile() : String;
	
	public abstract def clear() : void;
}


class SingleFileManager extends FileManager {
	
	public def this(path : String) {
		super(path);
	}
	
	public def isScattered() = false;
	
	public def getFileName(i:Int) : String {
		return path;
	}
	
	public def getHeaderFileName() : String {
		return path;
	}
	
	public def getDataFileId(offset : Long) : Int {
		return 0;
	}
	
	public def getDataFileName(offset : Long) : String {
		return path;
	}

	public def getFileLocalOffset(id : Int, offset : Long) : Long {
		return offset;
	}
	
	public def getOffsetAdjuster(offset : Long) : (Long) => Long {
		return (off:Long) => off;
	}
	
	public def nextFile() : String {
		return path;
	}
	
	public def clear() : void {
		new File(path).delete();
	}
}


class ScatteredFileManager extends FileManager {
	
	private val length:Int = 5;
	private val format:String;
	private var fileOffset:Array[Long] = null;
	private var count:Int;
	
	public def this(path : String) {
		super(path);
		this.format = "%s" + File.SEPARATOR + "%0" + this.length + "d";
		this.count = 0;
	}
	
	public def isScattered() = true;
	
	private def makeFileOffset() {
		val dir = new File(path);
		FBIOSupport.debugprint("dir = " + dir);
		FBIOSupport.debugprint("dir.list = " + dir.list());
		val nFiles = dir.list().size;
		this.fileOffset = new Array[Long](nFiles + 1, 0L);
		for(var i:Int = 0; i < nFiles; i++) {
			val file = new File(getFileName(i));
			this.fileOffset(i + 1) = this.fileOffset(i) + file.size();
		}
		FBIOSupport.debugprint("fileOffset = " + fileOffset);
	}
	
	public def getFileName(i:Int) : String {
		val args = new Array[Any](2);
		args(0) = path;
		args(1) = i;
		return String.format(format, args);
	}
	
	public def getHeaderFileName() : String {
		return getFileName(0);
	}
	
	public def getDataFileId(offset : Long) : Int {
		if(fileOffset == null) {
			makeFileOffset();
		}
		for(var i:Int = 1; i < fileOffset.size; i++) {
			if(offset < fileOffset(i)) {
				return i - 1;
			}
		}
		return -1;
	}

	public def getDataFileName(offset : Long) : String {
		val id = getDataFileId(offset);
		if(id == -1) {
			return null;
		}
		return getFileName(id);
	}

	public def getFileLocalOffset(id : Int, offset : Long) : Long {
		return offset - fileOffset(id);
	}
	
	public def getOffsetAdjuster(offset : Long) : (Long) => Long {
		return (off:Long) => off - offset;
	}
	
	public def nextFile() : String {
		count++;
		offset = 0;
		return getFileName(count);
	}
	
	public def clear() : void {
		val dir = new File(path);
		val nFiles = dir.list().size;
		for(var i:Int = 0; i < nFiles; i++) {
			val file = new File(getFileName(i));
			file.delete();
		}
	}
}

//////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////

public class FBIOSupport {

	static def debugprint(str : String) {
		@Ifdef("DEBUG") {
			Console.OUT.println(str);
		}
	}
	
	public static def read(team : Team, path : String) : NamedDistData {
		
		// select FileManager
		val fm = (new File(path).isDirectory()) ? new ScatteredFileManager(path)
												     : new SingleFileManager(path);
		
		val headerFile = new NativeFile(fm.getHeaderFileName(), false, false);  // assign a name of a file which includes meta data
		val headers = NativeHeaders.make(headerFile);
		val header = headers.header();
		val attrs = headers.attributes();
		val blocks = headers.blocks();
		
		debugprint("datatype = " + header.datatype(0));
		printProperty(attrs);
		printBlockInfo(blocks);
		
		// read attribute data and make entities
		val result = new NamedDistData();
		
		// calculate local array size
		val blocksPerPlace = blocks.numBlocks() / team.size();
		val extraBlocks = blocks.numBlocks() % team.size();
		// local array size for each place and attribute
		val numAttributes = attrs.numAttributes();
		val localArraySize = new Array[Array[Long]](team.size(),
				(i:Int) => new Array[Long](numAttributes, 0));
		var block_idx :Int = 0;
		for(pid in 0..(team.size()-1)) {
			for(bid in 0..(blocksPerPlace + ((pid < extraBlocks) ? 1 : 0) - 1)) {
				val curBlock = blocks.block(block_idx++);
				for(aid in 0..(attrs.numAttributes() - 1)) {
					localArraySize(pid)(aid) += curBlock.numElements(aid);
				}
			}
		}
		debugprint("localArraySize = " + localArraySize);
		
		// make return data structure
		val tmpAttrId = new Array[Int](numAttributes);
		for(i in 0..(numAttributes-1)) tmpAttrId(i) = attrs.attribute(i).id();
		val attrHandler = new Array[AttributeHandler](attrs.numAttributes(),
				(i:Int) => AttributeHandler.makeFromId(team, tmpAttrId(i)));
		val attributes = new Array[Any]( nattr, (i:Int) => attrHandler(i).create( () => localArraySize(here.id) ) );
		
		// assign closures to each place
		blockAllocater.reset();
		val localArrayOffset = new Array[Long](team.size());
		val queue = new Array[ArrayList[() => void]](team.size(), (Int) => new ArrayList[() => void]());
		
		for(var i:Int = 0; i < blockAllocater.numBlock(); i++) {
			
			val pid = blockAllocater.next();
			val block = blockinfo.block(i);
			val block_offset = block.offset;
			val block_size = block.size;
			val block_n = block.n;
			
			val fileId = fm.getDataFileId(block_offset);
			val filename : String = fm.getFileName(fileId);
			val local_block_offset = fm.getFileLocalOffset(fileId, block_offset);
			
			Common.debugprint("blockdata : size = " + block.size + ", offset = " + block.offset);
			
			val arrayOffset = localArrayOffset(pid);
			localArrayOffset(pid) += block_n;
			
			queue(pid).add( () => {
				Common.debugprint("block_size = " + block_size + ", local_block_offset = " + local_block_offset + ", block_n = " + block_n);
				
				// read attribute data
				val nr_ = NativeReader.make(filename);
				val blockdata : MemoryPointer[Byte] = nr_.readBlockData(block_size, local_block_offset);
				var dataOffset:Long = 0L;
				val num = block_n;
				for(var j:Int = 0; j < nattr; j++) {
					
					val array = attributes(j);
					dataOffset = Common.align(dataOffset, 8);
					dataOffset += attrHandler(j).read(nr_, array, arrayOffset, blockdata + dataOffset, num);
				}
				nr_.del();
			});
		}
		
		// execute closures in parallel
		finish for(var i:Int = 0; i < team.size(); i++) {
			val q = queue(i);
			at(team.places()(i)) async {
				for(closure in q) {
					closure();
				}
			}
		}
		
		for(var j:Int = 0; j < attrs.numAttributes(); ++j) {
			result.put(attrs.attribute(j).name(), attr(j));
		}
		
		nr.del();
		
		
		return entity;
	}
	
	
	/************************** test function ******************************/
	private static def printProperty(attrs : Attributes) {
		debugprint("nattr = " + attrs.numAttributes());
		for(var i:Int = 0; i < attrs.numAttributes(); i++) {
			val attr = attrs.attribute(i);
			debugprint("attr[" + i + "] = {" + attr.id() + ", " + attr.name() + "}");
		}
	}
	
	private static def printBlockInfo(blocks : BlockInfo) {
		debugprint("nBlock = " + blocks.numBlocks());
		for(var i:Int = 0; i < blocks.numBlocks(); i++) {
			val block = blocks.block(i);
			debugprint("block[" + i + "] : offset = " + block.offset());
			for(var j:Int = 0; j < block.numAttributes(); j++) {
				debugprint("     :[" + i + "," + j + "] size = " + block.numBytes(j) + ", n = " + block.numElements(j));
			}
		}
	}
}





