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
import org.scalegraph.util.MemoryPointer;

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
	@Native("c++", "(#this)->udf")
	public native def userDefinedHeader() : Any;
}

//////////////////////////////////////////////////////////////
// File name abstraction layer
//////////////////////////////////////////////////////////////

abstract class FileManager {
	protected val path : String;
	public def this(path : String) {
		this.path = path;
	}
	public abstract def isScattered() : Boolean;
	public abstract def headerFileName() :String;
	public abstract def fileName(i :Int) :String;
	public abstract def index(offset :Long) :Int;
	public abstract def offset(i :Int) :Long;
	public abstract def deleteFile() :void;
}


class SingleFileManager extends FileManager {
	public def this(path : String) {
		super(path);
	}
	public def isScattered() = false;
	public def headerFileName() = path;
	public def fileName(i:Int) = path;
	public def index(offset : Long) = 0;
	public def offset(i :Int) = 0L;
	public def deleteFile() : void {
		new File(path).delete();
	}
}

class ScatteredFileManager extends FileManager {
	private static val format = "%s" + File.SEPARATOR + "part-%05d";
	private var fileOffset:Array[Long] = null;
	private var count:Int;
	
	public def this(path : String) {
		super(path);
		this.count = 0;
	}
	public def isScattered() = true;
	private def makeFileOffset() {
		/*
		val dir = new File(path);
		FBIOSupport.debugprint("dir = " + dir);
		FBIOSupport.debugprint("dir.list = " + dir.list());
		val nFiles = dir.list().size;
		this.fileOffset = new Array[Long](nFiles + 1, 0L);
		for(var i:Int = 0; i < nFiles; i++) {
			val file = new File(fileName(i));
			this.fileOffset(i + 1) = this.fileOffset(i) + file.size();
		}
		FBIOSupport.debugprint("fileOffset = " + fileOffset);
		 */
		var idx :Int = 0;
		val fileSize = new ArrayList[Long]();
		while(true) {
			val file = new File(fileName(idx));
			if(file.isFile()) {
				fileSize.add(file.size());
			}
			else {
				break;
			}
		}
		fileOffset = new Array[Long](fileSize.size()+1, 0L);
		for(i in 0..(fileSize.size()-1)) {
			fileOffset(i + 1) = fileOffset(i) + fileSize(i);
		}
	}
	public def headerFileName() = fileName(0);
	public def fileName(i:Int) = String.format(format, [path, i]);
	public def index(offset : Long) : Int {
		if(fileOffset == null) makeFileOffset();
		for(i in 1..fileOffset.size) {
			if(offset < fileOffset(i)) return i - 1;
		}
		return -1;
	}
	public def offset(i :Int) = fileOffset(i);
	
	public def deleteFile() : void {
		val dir = new File(path);
		for(i in 0..(dir.list().size-1)) {
			new File(fileName(i)).delete();
		}
	}
}

//////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////

public class FBIOSupport {

	static @Inline def align(addr : Int, length : Int) : Int = (addr + (length - 1)) & ~(length - 1);
	
	static @Inline def align(addr : Long, length : Int) : Long = (addr + (length as Long - 1L)) & ~(length as Long - 1L);
	
	static def debugprint(str : String) {
		@Ifdef("DEBUG") {
			Console.OUT.println(str);
		}
	}
	
	public static def read(team : Team, path : String) : NamedDistData {
		// select FileManager
		val fm = (new File(path).isDirectory()) ? new ScatteredFileManager(path)
												     : new SingleFileManager(path);
		
		val headerFile = new NativeFile(fm.headerFileName(), false, false);  // assign a name of a file which includes meta data
		val headers = NativeHeaders.make(headerFile);
		val header = headers.header();
		val attrs = headers.attributes();
		val blocks = headers.blocks();
		headerFile.close();
		
		debugprint("datatype = " + header.datatype(0));
		printProperty(attrs);
		printBlockInfo(blocks);
		
		// read attribute data and make entities
		
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
				for(aid in 0..(numAttributes - 1)) {
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
		val attributes = new Array[Any](numAttributes, (i:Int) => 
				attrHandler(i).create((pid :Int) => localArraySize(pid)(i)));
		
		// assign closures to each place
		block_idx = 0;
		finish for(pid in 0..(team.size()-1)) {
			val tasks = new ArrayList[()=>void]();
			val attrOffset = new Array[Long](numAttributes, 0L);
			for(bid in 0..(blocksPerPlace + ((pid < extraBlocks) ? 1 : 0) - 1)) {
				val curBlock = blocks.block(block_idx++);
				
				val fileIndex = fm.index(curBlock.offset());
				val fileName = fm.fileName(fileIndex);
				val localBlockOffset = curBlock.offset() - fm.offset(fileIndex);
				val attrNumBytes = new Array[Long](numAttributes, (i :Int)=>curBlock.numBytes(i));
				val attrNumElements = new Array[Long](numAttributes, (i :Int)=>curBlock.numElements(i));
				val tmpAttrOffset = new Array[Long](numAttributes, (i :Int)=>attrOffset(i));
				for([i] in attrOffset) attrOffset(i) += attrNumElements(i);
				
				tasks.add( () => {
					debugprint("block_size = " + attrNumBytes + ", local_block_offset = " + localBlockOffset + ", block_n = " + attrNumElements);
					// read attribute data
					val nf = new NativeFile(fileName, false, false);
					nf.seek(localBlockOffset, NativeFile.BEGIN);
					for(aid in 0..(numAttributes - 1)) {
						attrHandler(aid).read(nf, attributes(aid), tmpAttrOffset(aid),
								attrNumElements(aid), align(attrNumBytes(aid), 8));
					}
					nf.close();
				});
			}
			at(team.places()(pid)) async {
				for(task in tasks) task();
			}
		}
		
		val result = new NamedDistData();
		for(aid in 0..(numAttributes - 1)) {
			attrHandler(aid).putResult(result,
					attrs.attribute(aid).name(), attributes(aid));
		}
		result.setHeader(headers.userDefinedHeader());
		return result;
	}
	
	public static def write(team : Team, path : String,
			data : NamedDistData, minBlockSize : Long, scatter : Boolean) {

		// select FileManager
		val fm = scatter ? new ScatteredFileManager(path)
							: new SingleFileManager(path);
		if(scatter) {
			new File(path).mkdir();
		}
		fm.deleteFile();
		
		val headerFile = new NativeFile(fm.headerFileName(), true, false);
		
		val attrNames = data.keys();
		val attrHandler = new Array[AttributeHandler](rattrNames.size,
						(j:Int) => AttributeHandler.makeFromAny(team, rawdata(i).data(j))));
		
		// make properties
		val prop = new MemoryChunk[Property](rawdata.size);
		for(var i:Int = 0; i < prop.size(); i++) {
			prop(i) = makeProperty(nw, attrHandler(i), rawdata(i).name, rawdata(i).data);
			printProperty(prop(i));
		}
		
		
		// block partitionings
		val blocks = new Array[Array[Array[TmpBlock]]](rawdata.size);
		val localDataSize = new Array[PlaceLocalHandle[Cell[Long]]](rawdata.size);
		val blockInfo_n = new Array[Int](rawdata.size, 0);
		for(var i:Int = 0; i < prop.size(); i++) {
			blocks(i) = getBlockPartitioning(team, attrHandler(i), rawdata(i).data, minBlockSize);
			localDataSize(i) = getLocalDataSize(team, blocks(i));
			
			// calculate blockInfo_n
			for(var j:Int = 0; j < team.size(); j++) {
				blockInfo_n(i) += blocks(i)(j).size;
			}
		}
		
		
		// calculate section sizes
		val nsec : Int = 2 * rawdata.size;
		val headerSize : Int = 16 + 8 * nsec;
		val seclen = new Array[Long](nsec);
		for(var i:Int = 0; i < rawdata.size; i++) {
			seclen(i) = 12;
			seclen(i + rawdata.size) = 8 + 24 * blockInfo_n(i);
			for(var j:Int = 0; j < rawdata(i).data.size; j++) {
				seclen(i) = Common.align(seclen(i), 4) + (8 + rawdata(i).name(j).length());
			}
		}
		
		var metaSize:Long = headerSize;
		Common.debugprint("headerSize = " + headerSize);
		for(var i:Int = 0; i < nsec; i++) {
			metaSize = Common.align(metaSize, 8) + seclen(i);
			Common.debugprint("seclen(" + i + ") = " + seclen(i));
		}
		Common.debugprint("metaSize = " + metaSize);
		
		
		// calculate block offsets
		val allBlocks = new MemoryChunk[MemoryChunk[Block]](rawdata.size);
		val blockInfo = new MemoryChunk[BlockInfo](rawdata.size);
		var globalOffset : Long = metaSize;
		for(var i:Int = 0; i < rawdata.size; i++) {
			globalOffset = getBlockOffset(team, fm, blocks(i), localDataSize(i), globalOffset);  // this overwrites blocks(i)(j).offset
			allBlocks(i) = new MemoryChunk[Block](blockInfo_n(i));
			var count : Int = 0;
			for(var j:Int = 0; j < team.size(); j++) {
				val localBlocks = blocks(i)(j);
				for(var k:Int = 0; k < localBlocks.size; k++) {
					allBlocks(i)(count) = nw.makeBlock(localBlocks(k).offset, localBlocks(k).size, localBlocks(k).n);
					count++;
				}
			}
			
			blockInfo(i) = nw.makeBlockInfo(blockInfo_n(i), allBlocks(i));
			printBlockInfo(blockInfo(i));
		}
		
		
		// make header
		val version : Byte = ID.VERSION;
		val flags = new Array[Byte](3, 0);
		flags(0) = datatype;
		val header = nw.makeHeader(version, flags, headerSize, nsec, seclen);
		
		
		// write to file
		nw.writeMetaData(header, prop, blockInfo, rawdata.size);
		for(var i:Int = 0; i < rawdata.size; i++) {
			writeAttributeData(team, fm, i * team.size() + 1, attrHandler(i), rawdata(i).data, blocks(i));
		}
		nw.del();
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





