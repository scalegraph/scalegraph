package org.scalegraph.io;

import x10.compiler.Inline;
import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPOutputFile;

import x10.io.File;

import x10.util.ArrayBuilder;
import x10.util.Team;

import org.scalegraph.io.format.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MemoryPointer;


class TmpBlock {
	var offset : Long;
	var size : Long;
	var n : Long;
	
	def this() {
		offset = size = n = 0L;
	}
	
	def this(offset : Long, size : Long, n : Long) {
		this.offset = offset;
		this.size = size;
		this.n = n;
	}
}


@NativeCPPInclude("format/struct.h")
public class BinaryWriter {
	
	public static def write(team : Team, path : String, rawdata : Array[Entity],
			minBlockSize : Long, scatter : Boolean) {
		
		val datatype : Byte = rawdata.size as Byte;
		
		var fm:FileManager;
		if(scatter) {
			val dir = new File(path);
			dir.mkdir();
			fm = new ScatteredFileManager(path);
		} else {
			fm = new SingleFileManager(path);
		}
		fm.clear();
		val filename = fm.getHeaderFileName();
		val nw = NativeWriter.make(filename);
		
		val attrHandler = new Array[Array[AttributeHandler]](rawdata.size,
				(i:Int) => new Array[AttributeHandler](rawdata(i).data.size,
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
	
	
	private static def makeProperty(nw : NativeWriter, attrHandler : Array[AttributeHandler], attrName : Array[String], attrData : Array[Any]) : Property {
		val numVert = attrHandler(0).numElems(attrData(0));
		val numAttr = attrData.size;
		val id = new Array[Int](numAttr, (i:Int) => attrHandler(i).getId());
		return nw.makeProperty(numVert, numAttr, id, attrName);
	}
	
	
	private static def getBlockPartitioning(team : Team, attrHandler : Array[AttributeHandler], attrData : Array[Any], minBlockSize : Long) : Array[Array[TmpBlock]] {
		val numAttr = attrData.size;
		
		val blocks = new Array[Array[TmpBlock]](team.size());
		finish for(var i:Int = 0; i < team.size(); i++) {
			val ii = i;
			async {
				blocks(ii) = at(team.places()(ii)) {
					
					val localNumVert = attrHandler(0).localNumElems(attrData(0));
					val blockBuilder = new ArrayBuilder[TmpBlock]();
					var blockSize:Long = 0L;
					var offset:Long = 0L;
					for(var j:Long = 0L; j < localNumVert; j++) {
						for(var k:Int = 0; k < numAttr; k++) {
							blockSize += attrHandler(k).sizeOfElem(attrData(k), j);
						}
						if(blockSize >= minBlockSize || j == localNumVert - 1L) {
							val tmpBlock = new TmpBlock();
							tmpBlock.n = j - offset + 1L;
							for(var k:Int = 0; k < numAttr; k++) {
								tmpBlock.size = Common.align(tmpBlock.size, 8);
								tmpBlock.size += attrHandler(k).sizeOfElems(attrData(k), offset, tmpBlock.n);
							}
							blockBuilder.add(tmpBlock);
							blockSize = 0L;
							offset = j + 1L;
						}
					}
					blockBuilder.result()
				};
			}
		}
		return blocks;
	}
	
	
	private static def getLocalDataSize(team : Team, blocks : Array[Array[TmpBlock]]) : PlaceLocalHandle[Cell[Long]] {
		return PlaceLocalHandle.make[Cell[Long]](team.placeGroup(), () => {
			val block = blocks(here.id);
			var size:Long = 0L;
			for(var j:Int = 0; j < block.size; j++) {
				size = Common.align(size, 8);
				size += block(j).size;
			}
			new Cell[Long](size)
		});
	}
	
	
	private static def getBlockOffset(team : Team, fm : FileManager, blocks : Array[Array[TmpBlock]], localDataSize : PlaceLocalHandle[Cell[Long]], var globalOffset : Long) : Long {
		finish for(var i:Int = 0; i < team.size(); i++) {
			if(!fm.isScattered()) {
				globalOffset = Common.align(globalOffset, 8);
			}
			val ii = i;
			val globalOffset_ = globalOffset;
			async {
				var localOffset:Long = 0L;
				for(var j:Int = 0; j < blocks(ii).size; j++) {
					localOffset = Common.align(localOffset, 8);
					blocks(ii)(j).offset = globalOffset_ + localOffset;
					localOffset += blocks(ii)(j).size;
				}
			}
			globalOffset += at(team.places()(i)) localDataSize()();
		}
		return globalOffset;
	}
	
	
	private static def writeAttributeData(team : Team, fm : FileManager, startFile : Int, attrHandler : Array[AttributeHandler], attrData : Array[Any], blocks : Array[Array[TmpBlock]]) {

		finish for(var i:Int = 0; i < team.size(); i++) {
			val ii = i;
			val localBlocks = blocks(i);
			
			at(team.places()(i)) async {
				
				val filename = fm.getFileName(ii + startFile);
				val nw_ = NativeWriter.make(filename);
				var arrayOffset:Long = 0L;
				val adjust = fm.getOffsetAdjuster(localBlocks(0).offset);
				
				for(var j:Int = 0; j < localBlocks.size; j++) {
					var fileOffset:Long = adjust(localBlocks(j).offset);
					val num = localBlocks(j).n;
					for(var k:Int = 0; k < attrData.size; k++) {
						fileOffset = attrHandler(k).write(nw_, attrData(k), arrayOffset, fileOffset, num);
					}
					arrayOffset += num;
				}
				nw_.del();
			}
		}
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