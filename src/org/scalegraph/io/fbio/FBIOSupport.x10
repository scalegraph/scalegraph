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

package org.scalegraph.io.fbio;

import x10.io.File;
import x10.util.Team;
import x10.util.ArrayList;
import x10.util.StringBuilder;

import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPOutputFile;
import x10.compiler.NativeCPPCompilationUnit;
import x10.compiler.Ifdef;
import x10.compiler.Inline;

import org.scalegraph.util.tuple.*;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.io.NativeFile;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.io.FileMode;
import org.scalegraph.io.FileAccess;

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
	@Native("c++", "((#this)->chunks.size()/2)")
	public native def numAttributes() : Int;
	@Native("c++", "(#this)->chunks[(#i) * 2 + 0]")
	public native def numBytes(i:Int) : Long;
	@Native("c++", "(#this)->chunks[(#i) * 2 + 1]")
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
@NativeRep("c++", "std::vector<org::scalegraph::io::fbio::NativeBlock>*",
					"std::vector<org::scalegraph::io::fbio::NativeBlock>*", null)
struct BlockInfo {
	@Native("c++", "(#this)->size()")
	public native def numBlocks() : Int;
	@Native("c++", "&(*(#this))[#i]")
	public native def block(i:Int) : Block;
}


@NativeCPPInclude("NativeSupport.h")
@NativeCPPOutputFile("Attributes.h")
@NativeRep("c++", "::scalegraph::gc_std<org::scalegraph::io::fbio::NativeAttribute>::vector*",
					"::scalegraph::gc_std<org::scalegraph::io::fbio::NativeAttribute>::vector*", null)
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
	@Native("c++", "new (x10aux::alloc<org::scalegraph::io::fbio::NativeHeaders>()) org::scalegraph::io::fbio::NativeHeaders(#file)")
	public static native def make(file : NativeFile) : NativeHeaders;
	@Native("c++", "(#this)->~NativeHeaders(); x10aux::dealloc(#this)")
	public native def del() :void;
	
	@Native("c++", "&((#this)->header)")
	public native def header() : Header;
	@Native("c++", "&((#this)->attributes)")
	public native def attributes() : Attributes;
	@Native("c++", "&((#this)->blocks)")
	public native def blocks() : BlockInfo;
	@Native("c++", "(#this)->udh")
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
	public abstract def readFileOffset() :void;
	public abstract def setFileOffset(blockOffsets :MemoryChunk[Long], blockDist :MemoryChunk[Int]) :void;
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
	public def readFileOffset() :void { };
	public def setFileOffset(blockOffsets :MemoryChunk[Long], blockDist :MemoryChunk[Int]) :void { };
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
	private var fileOffset:Array[Long](1) = null;
	private var count:Int;
	
	public def this(path : String) {
		super(path);
		this.count = 0;
	}
	public def isScattered() = true;
	public def readFileOffset() {
		/*
		 * val dir = new File(path);
		 * FBIOSupport.debugprint("dir = " + dir);
		 * FBIOSupport.debugprint("dir.list = " + dir.list());
		 * val nFiles = dir.list().size;
		 * this.fileOffset = new Array[Long](nFiles + 1, 0L);
		 * for(var i:Int = 0; i < nFiles; i++) {
		 * val file = new File(fileName(i));
		 * this.fileOffset(i + 1) = this.fileOffset(i) + file.size();
		 * }
		 * FBIOSupport.debugprint("fileOffset = " + fileOffset);
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
			idx++;
		}
		fileOffset = new Array[Long](fileSize.size()+1, 0L);
		for(i in 0..(fileSize.size()-1)) {
			fileOffset(i + 1) = fileOffset(i) + fileSize(i);
		}
	}
	public def setFileOffset(blockOffsets :MemoryChunk[Long], blockDist :MemoryChunk[Int]) {
		fileOffset = new Array[Long]((blockDist.size() + 2) as Int);
		fileOffset(0) = 0;
		var blockIdx :Int = 0;
		for(pid in blockDist.range()) {
			fileOffset(pid as Int + 1) = blockOffsets(blockIdx);
			blockIdx += blockDist(pid);
		}
		assert (blockIdx == blockOffsets.size() as Int -1);
		fileOffset((blockDist.size() + 1) as Int) = blockOffsets(blockIdx);
	}
	public def headerFileName() = fileName(0);
	public def fileName(i:Int) = String.format(format, [path, i]);
	public def index(offset : Long) : Int {
		for(i in 1..(fileOffset.size-1)) {
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

@NativeCPPInclude("NativeSupport.h")
@NativeCPPCompilationUnit("NativeSupport.cc") 
public class FBIOSupport {

	private static class BlockConfig {
		var numBlocksPerPlace :Int = 4;
		var minNumBlocks :Int = 16;
		var minBlockSize :Long = 1L << 10;
		var maxBlockSize :Long = 4L << 20;
	}
	
	static val blockConfig = new BlockConfig();
	
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
		fm.readFileOffset();
		val headerFile = new NativeFile(fm.headerFileName(), FileMode.Open, FileAccess.Read);
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
		val localArraySize = new Array[Array[Long](1)](team.size(),
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
		val attrIds = new Array[Int](numAttributes);
		val attrNames = new Array[String](numAttributes);
		for(i in 0..(numAttributes-1)) {
			attrIds(i) = attrs.attribute(i).id();
			attrNames(i) = attrs.attribute(i).name();
		}
		val attrHandler = new Array[AttributeHandler](attrs.numAttributes(),
				(i:Int) => AttributeHandler.make(team, attrIds(i)));
		val attributes = new Array[Any](numAttributes, (i:Int) => 
				attrHandler(i).allocate((pid :Int) => localArraySize(pid)(i)));
		
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
				val attrNumBytes = new Array[Long](numAttributes);
				val attrNumElements = new Array[Long](numAttributes);
				for(i in 0..(numAttributes-1)) {
					attrNumBytes(i) = curBlock.numBytes(i);
					attrNumElements(i) = curBlock.numElements(i);
				}
				val tmpAttrOffset = new Array[Long](numAttributes, (i :Int)=>attrOffset(i));
				for([i] in attrOffset) attrOffset(i) += attrNumElements(i);
				
				tasks.add( () => {
					debugprint("block_size = " + attrNumBytes + ", local_block_offset = " + localBlockOffset + ", block_n = " + attrNumElements);
					// read attribute data
					val nf = new NativeFile(fileName, FileMode.Open, FileAccess.Read);
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
		
		val udh = headers.userDefinedHeader();
		headers.del();
		return new NamedDistData(attrNames, attrIds, attributes, udh);
	}
	
	public static def write(team : Team, path : String,
			data : NamedDistData, scatter : Boolean)
	{
		val numAttributes = data.size();
		val attrNames = data.name();
		val attrData = data.data();
		val attrTypeIds = data.typeId();
		val attrHandler = new Array[AttributeHandler](numAttributes,
						(i:Int) => AttributeHandler.make(team, attrTypeIds(i)));
		
		val blocks = getBlockPartitioning(team, attrHandler, attrData);

		// select FileManager
		val fm = scatter ? new ScatteredFileManager(path)
							: new SingleFileManager(path);
		if(scatter) {
			new File(path).mkdir();
		}
		fm.deleteFile();
		
		val headerFile = new NativeFile(fm.headerFileName(), FileMode.OpenOrCreate, FileAccess.Write);
		writeHeaders(headerFile, data.datatype(), numAttributes, blocks.numBlocks,
				attrTypeIds, attrNames, blocks.offsets, blocks.chunkSizes, data.header());
		headerFile.close();
		
		fm.setFileOffset(blocks.offsets, blocks.numLocalBlocks);
		debugprint(blocks.toString());

		// assign closures to each place
		var blockIdx :Int = 0;
		finish for(pid in 0..(team.size()-1)) {
			val numLocalBlocks = blocks.numLocalBlocks(pid);
			val tasks = new Array[(NativeFile)=>void](numLocalBlocks);
			val attrOffset = new Array[Long](numAttributes, 0L);
			val fileOffset = fm.offset(pid + 1);
			for(bid in 0..(numLocalBlocks - 1)) {
				val localBlockOffset = blocks.offsets(blockIdx) - fileOffset;
				val chunkSize = blocks.chunkSizes(blockIdx);
				val attrNumBytes = new Array[Long](numAttributes, (i :Int)=>chunkSize(i * 2 + 0));
				val attrNumElements = new Array[Long](numAttributes, (i :Int)=>chunkSize(i * 2 + 1));
				val tmpAttrOffset = new Array[Long](numAttributes, (i :Int)=>attrOffset(i));
				for([i] in attrOffset) attrOffset(i) += attrNumElements(i);
				
				tasks(bid) = (nf :NativeFile) => {
					debugprint("block_size = " + attrNumBytes + ", local_block_offset = " + localBlockOffset + ", block_n = " + attrNumElements);
					// write attribute data
					nf.seek(localBlockOffset, NativeFile.BEGIN);
				//	assert (nf.getpos() == localBlockOffset);
					for(aid in 0..(numAttributes - 1)) {
						attrHandler(aid).write(nf, attrData(aid), tmpAttrOffset(aid),
								attrNumElements(aid), align(attrNumBytes(aid), 8));
					}
				};
				++blockIdx;
			}
			val fileName = fm.fileName(pid + 1);
			at(team.places()(pid)) async {
				@Ifdef("DEBUG") {
					for(aid in 0..(numAttributes - 1)) {
						assert (attrOffset(aid) == attrHandler(aid).numElements(attrData(aid)));
					}
				}
				val nf = new NativeFile(fileName, FileMode.OpenOrCreate, FileAccess.Write);
				for([i] in tasks) tasks(i)(nf);
				nf.close();
			}
		}
	}
	
	@Native("c++", "org::scalegraph::io::fbio::writeHeaders(#nf, #datatype, #numAttributes, #numBlocks, (#typeIds)->raw()->raw(), (#attrNames)->raw()->raw(), (#blockOffsets)->pointer(), (#chunkSizes)->raw()->raw(), #udf)")
	private static native def writeHeaders(
			nf :NativeFile,
			datatype :Int, numAttributes :Int, numBlocks :Int,
			typeIds :Array[Int](1),
			attrNames :Array[String](1),
			blockOffsets :MemoryChunk[Long],
			chunkSizes :Array[MemoryChunk[Long]](1),
			udf :Any) :void;
	
	private static class PartitionedBlocks {
		public val numBlocks :Int;
		public val offsets :MemoryChunk[Long];
		// This has two components: 2*N + 0: number of bytes, 2*N + 1: number of elements
		public val chunkSizes :Array[MemoryChunk[Long]](1);
		public val numLocalBlocks :MemoryChunk[Int];
		
		public def this(numAttributes :Int, numBlocks :Int) {
			this.numBlocks = numBlocks;
			offsets = new MemoryChunk[Long](numBlocks + 1);
			chunkSizes = new Array[MemoryChunk[Long]](numBlocks,
					(i:Int)=>new MemoryChunk[Long](numAttributes * 2));
			numLocalBlocks = new MemoryChunk[Int](0);
		}

		public def this(team :Team, numBlocks :Int) {
			this.numBlocks = numBlocks;
			offsets = new MemoryChunk[Long](numBlocks + 1);
			chunkSizes = new Array[MemoryChunk[Long]](numBlocks);
			numLocalBlocks = new MemoryChunk[Int](team.size());
		}
		
		public def toString() {
			val sb = new StringBuilder();
			sb.add("NumBlocks = ").add(numBlocks).add("\nOffsets = ").add(offsets).add("\nChunkSizeList:\n");
			for([i] in chunkSizes) {
				sb.add("Block").add(i).add(": ").add(chunkSizes(i)).add("\n");
			}
			sb.add("Block distribution: ").add(numLocalBlocks);
			return sb.result();
		}
	}
	
	/**
	 * blockOffsets, chunkSize
	 */
	private static def getBlockPartitioning(team :Team, attrHandler :Array[AttributeHandler](1),
			attrData :Array[Any](1)) : PartitionedBlocks
	{
		val numAttr = attrData.size;
		val teamSize = team.size();
		val results = new Array[PartitionedBlocks](teamSize);
		val ref_results = new GlobalRef[Array[PartitionedBlocks](1)](results);
		
		val pg = team.placeGroup();
		finish for(pid in 0..(teamSize-1)) at (pg(pid)) async {
			// calculate total number of bytes then determine the number of blocks
			var numTotalBytes :Long = 0;
			for(aid in 0..(numAttr-1)) {
				numTotalBytes += attrHandler(aid).numBytes(attrData(aid));
			}
			val numBlocks = getAppropriateNumBlocks(numTotalBytes);
			val blocks = new PartitionedBlocks(numAttr, numBlocks);
			
			// calculate the length of each chunks
			for(aid in 0..(numAttr-1)) {
				val elementsHere = attrHandler(aid).numElements(attrData(aid));
				val elementsPerChunk = elementsHere / numBlocks;
				val extraElements = elementsHere % numBlocks;
				var elementsOffset :Long = 0L;
				for(bid in 0..(numBlocks-1)) {
					val numElements = elementsPerChunk + ((bid < extraElements) ? 1 : 0);
					val numBytes = attrHandler(aid).numBytes(attrData(aid), elementsOffset, numElements);
					blocks.chunkSizes(bid)(aid * 2 + 0) = numBytes;
					blocks.chunkSizes(bid)(aid * 2 + 1) = numElements;
					elementsOffset += numElements;
				}
			}
			
			// calculate block length
			for(bid in 0..(numBlocks-1)) {
				var bytesOffset :Long = 0L;
				for(aid in 0..(numAttr-1)) {
					bytesOffset += align(blocks.chunkSizes(bid)(aid * 2 + 0), 8);
				}
				// Actually, this is the size of the block, not the offset.
				blocks.offsets(bid) = bytesOffset;
			}
			
			// send the result
			at(ref_results.home) async {
				ref_results()(pid) = blocks;
			}
		}
		
		// merge the results
		var numBlocks :Int = 0;
		for(pid in 0..(teamSize-1)) {
			numBlocks += results(pid).numBlocks;
		}
		val ret = new PartitionedBlocks(team, numBlocks);
		var blockIdx :Int = 0;
		ret.offsets(0) = 0L;
		for(pid in 0..(teamSize-1)) {
			ret.numLocalBlocks(pid) = results(pid).numBlocks;
			for(bid in 0..(results(pid).numBlocks - 1)) {
				ret.offsets(blockIdx + 1) = ret.offsets(blockIdx) + results(pid).offsets(bid);
				ret.chunkSizes(blockIdx) = results(pid).chunkSizes(bid);
				++blockIdx;
			}
		}
		
		return ret;
	}
	
	
	private static def getAppropriateNumBlocks(numTotalBytes : Long) : Int {
		val numPlaces = Place.MAX_PLACES;
		val numBlocksPerPlace = blockConfig.numBlocksPerPlace;
		val minNumBlocks = blockConfig.minNumBlocks;
		val minBlockSize = blockConfig.minBlockSize;
		val maxBlockSize = blockConfig.maxBlockSize;
		val guideNumBlocks = Math.max(numBlocksPerPlace, (minNumBlocks + numPlaces - 1) / numPlaces);
		
		var numBlocks:Int = 0;
		if(numTotalBytes < guideNumBlocks * minBlockSize) {
			numBlocks = ((numTotalBytes + minBlockSize - 1L) / minBlockSize) as Int;
		} else if(numTotalBytes > guideNumBlocks * maxBlockSize) {
			numBlocks = ((numTotalBytes + maxBlockSize - 1L) / maxBlockSize) as Int;
		} else {
			numBlocks = guideNumBlocks;
		}
		debugprint("guideNumBlocks = " + guideNumBlocks);
		debugprint("numBlocks = " + numBlocks);
		return numBlocks;
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
