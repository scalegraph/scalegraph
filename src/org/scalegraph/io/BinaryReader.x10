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

import org.scalegraph.io.format.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MemoryPointer;


@NativeCPPInclude("format/struct.h")
public class BinaryReader {
	
	
	public static def read(team : Team, path : String) : Array[Entity] {
		
		// select FileManager
		var fm:FileManager;
		if(new File(path).isDirectory()) {
			fm = new ScatteredFileManager(path);
		} else {
			fm = new SingleFileManager(path);
		}
		
		val headerFile : String = fm.getHeaderFileName();  // assign a name of a file which includes meta data
		val nr = NativeReader.make(headerFile);
		val header = nr.readHeader();
		Common.debugprint("datatype = " + header.datatype(0));
		
		val numEntity = header.datatype(0) as Int;
		var offset : Long = Common.align(header.size, 8);
		
		// read properties
		val prop : MemoryChunk[Property] = new MemoryChunk[Property](numEntity);
		for(var i:Int = 0; i < numEntity; i++) {
			Common.debugprint("property : size = " + header.seclen(i) + ", offset = " + offset);
			prop(i) = nr.readProperty(header.seclen(i), offset);
			Common.debugprint("property loaded");
			printProperty(prop(i));
			offset = Common.align(offset + header.seclen(i), 8);
		}
		
		// read block info
		val blockinfo : MemoryChunk[BlockInfo] = new MemoryChunk[BlockInfo](numEntity);
		for(var i:Int = 0; i < numEntity; i++) {
			Common.debugprint("blockinfo : size = " + header.seclen(i + numEntity) + ", offset = " + offset);
			blockinfo(i) = nr.readBlockInfo(header.seclen(i + numEntity), offset);
			Common.debugprint("blockinfo loaded");
			printBlockInfo(blockinfo(i));
			offset = Common.align(offset + header.seclen(i + numEntity), 8);
		}
		
		// read attribute data and make entities
		val entity = new Array[Entity](numEntity);
		for(var i:int = 0; i < numEntity; i++) {
			val nameList = new Array[String](prop(i).nattr);
			val attr = readAttributeData(team, fm, prop(i), blockinfo(i));
			for(var j:Int = 0; j < prop(i).nattr; j++) {
				nameList(j) = prop(i).attr(j).getName();
			}
			entity(i) = Entity(nameList, attr);
		}
		
		nr.del();
		
		return entity;
	}
	
	
	private static def readAttributeData(team : Team, fm : FileManager, prop : Property, blockinfo : BlockInfo) {
		
		// calculate local array size
		val localArraySize = new Array[Long](team.size());
		val blockAllocater = new BlockAllocater(team, blockinfo.n);
		for(var i:Int = 0; i < blockAllocater.numBlock(); i++) {
			val pid = blockAllocater.next();
			localArraySize(pid) += blockinfo.block(i).n;
		}
		Common.debugprint("localArraySize = " + localArraySize);
		printProperty(prop);
		
		// make return data structure
		val nattr = prop.nattr;
		val attrId = new Array[Int](nattr);
		for(var j:Int = 0; j < nattr; j++) {
			attrId(j) = prop.attr(j).id;
		}
		val attrHandler = new Array[AttributeHandler](nattr, (i:Int) => AttributeHandler.makeFromId(team, attrId(i)));
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
		
		return attributes;
	}
	
	
	/************************** test function ******************************/
	private @Inline static def printProperty(prop : Property) {
		Common.debugprint("n = " + prop.n);
		Common.debugprint("nattr = " + prop.nattr);
		for(var i:Int = 0; i < prop.nattr; i++) {
			val attr = prop.attr(i);
			Common.debugprint("attr[" + i + "] = {" + attr.id + ", " + attr.namelen + ", " + attr.getName() + "}");
		}
	}
	
	private @Inline static def printBlockInfo(blockinfo : BlockInfo) {
		Common.debugprint("nBlock = " + blockinfo.n);
		for(var i:Int = 0; i < blockinfo.n; i++) {
			val block = blockinfo.block(i);
			Common.debugprint("block[" + i + "] : offset = " + block.offset + ", size = " + block.size + ", n = " + block.n);
		}
	}
}