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
		
		var fm:FileManager;
		if(new File(path).isDirectory()) {
			fm = new ScatteredFileManager(path);
		} else {
			fm = new SingleFileManager(path);
		}
		val filename : String = fm.getHeaderFileName();  // assign a name of a file which includes meta data
		val nr = NativeReader.make(filename);
		val header = nr.readHeader();
		Common.debugprint("datatype = " + header.datatype(0));
		
		var rawdata : Array[Entity];
		
		if(header.datatype(0) == ID.TYPE_GRAPH) {
			rawdata = readGraph(team, fm, nr, header);
		} else if(header.datatype(0) == ID.TYPE_MATRIX) {
			throw new IOException("BinaryReader.readMatrix() is not implemented");
		} else if(header.datatype(0) == ID.TYPE_VECTOR) {
			throw new IOException("BinaryReader.readVector() is not implemented");
  		} else  {
			throw new IOException("invalid data type");
		}
		
		nr.del();
		
		return rawdata;
	}
	
	
	private static def readGraph(team : Team, fm : FileManager, nr : NativeReader, header : Header) {
		// read vertex property
		var offset : Long = Common.align(header.size as Long, 8);
		Common.debugprint("vProp : size = " + header.seclen(0) + ", offset = " + offset);
		val vProp : Property = nr.readProperty(header.seclen(0), offset);
		Common.debugprint("vProp loaded");
		printProperty(vProp);
		
		assert(vProp.nattr >= 1);  // vertex ID
		
		// read edge property
		offset = Common.align(offset + header.seclen(0), 8);
		Common.debugprint("eProp : size = " + header.seclen(1) + ", offset = " + offset);
		val eProp : Property = nr.readProperty(header.seclen(1), offset);
		Common.debugprint("eProp loaded");
		printProperty(eProp);
		
		assert(eProp.nattr >= 2);  // src ID, dst ID
		
		// read vertex block info
		offset = Common.align(offset + header.seclen(1), 8);
		Common.debugprint("vBlockinfo : size = " + header.seclen(2) + ", offset = " + offset);
		val vBlockinfo : BlockInfo = nr.readBlockInfo(header.seclen(2), offset);
		Common.debugprint("vBlockinfo loaded");
		printBlockInfo(vBlockinfo);
		
		// read edge block info
		offset = Common.align(offset + header.seclen(2), 8);
		Common.debugprint("eBlockinfo : size = " + header.seclen(3) + ", offset = " + offset);
		val eBlockinfo : BlockInfo = nr.readBlockInfo(header.seclen(3), offset);
		Common.debugprint("eBlockinfo loaded");
		printBlockInfo(eBlockinfo);
		
		// read vertex attribute data
		val vAttr = readAttributeData(team, fm, vProp, vBlockinfo);
		//printAttributeData(vAttr);
		
		// read edge attribute data
		val eAttr = readAttributeData(team, fm, eProp, eBlockinfo);
		//printAttributeData(eAttr);
		
		// make vertex attributes' name list
		val vNameList = new Array[String](vProp.nattr);
		for(var i:Int = 0; i < vProp.nattr; i++) {
			vNameList(i) = vProp.attr(i).getName();
		}
		
		// make edge attributes' name list
		val eNameList = new Array[String](eProp.nattr);
		for(var i:Int = 0; i < eProp.nattr; i++) {
			eNameList(i) = eProp.attr(i).getName();
		}
		
		val entity = new Array[Entity](2);
		entity(0) = Entity(vNameList, vAttr);
		entity(1) = Entity(eNameList, eAttr);
		return entity;
	}
	
	
	private static def readMatrix(team : Team, fm : FileManager, nr : NativeReader, header : Header) {
	}
	
	
	private static def readVector(team : Team, fm : FileManager, nr : NativeReader, header : Header) {
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