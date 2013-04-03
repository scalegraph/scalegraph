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
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MemoryPointer;
import org.scalegraph.util.tuple.*;


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
	
	public static def write(team : Team, path : String, datatype : Byte,
			vAttrName : Array[String], vAttrData : Array[Any],
			eAttrName : Array[String], eAttrData : Array[Any],
			minBlockSize : Long, scatter : Boolean) {
		
		var fm:FileManager;
		if(scatter) {
			fm = new ScatteredFileManager(path);
		} else {
			fm = new SingleFileManager(path);
		}
		val filename = fm.getHeaderFileName();
		val nw = NativeWriter.make(filename);
		val vAttrInfo = new AttributeInfo(team, vAttrData);
		val eAttrInfo = new AttributeInfo(team, eAttrData);
		
		// make vertex property
		val vProp = makeProperty(nw, vAttrInfo, vAttrName, vAttrData);
		printProperty(vProp);
		
		// make edge property
		val eProp = makeProperty(nw, eAttrInfo, eAttrName, eAttrData);
		printProperty(eProp);
		
		
		// vertex block partitioning
		val vBlocks = getBlockPartitioning(team, vAttrInfo, vAttrData, minBlockSize);
		val vLocalDataSize = getLocalDataSize(team, vBlocks);
		
		// calculate vBlockInfo_n
		var vBlockInfo_n : Int = 0;
		for(var i:Int = 0; i < team.size(); i++) {
			vBlockInfo_n += vBlocks(i).size;
		}
		
		// edge block partitioning
		val eBlocks = getBlockPartitioning(team, eAttrInfo, eAttrData, minBlockSize);
		val eLocalDataSize = getLocalDataSize(team, eBlocks);
		
		// calculate eBlockInfo_n
		var eBlockInfo_n : Int = 0;
		for(var i:Int = 0; i < team.size(); i++) {
			eBlockInfo_n += eBlocks(i).size;
		}
		
		
		// calculate section sizes
		val nsec : Int = 4;
		val headerSize : Int = 16 + 8 * nsec;
		val seclen = new Array[Long](nsec, (i:Int) => (i + 1L) as Long);
		seclen(0) = 12;
		for(var i:Int = 0; i < vAttrData.size; i++) {
			seclen(0) = Common.align(seclen(0), 4) + (8 + vAttrName(i).length());
		}
		seclen(1) = 12;
		for(var i:Int = 0; i < eAttrData.size; i++) {
			seclen(1) = Common.align(seclen(1), 4) + (8 + eAttrName(i).length());
		}
		seclen(2) = 8 + 24 * vBlockInfo_n;
		seclen(3) = 8 + 24 * eBlockInfo_n;
		
		var metaSize:Long = headerSize;
		Console.OUT.println("headerSize = " + headerSize);
		for(var i:Int = 0; i < nsec; i++) {
			metaSize = Common.align(metaSize, 8) + seclen(i);
			Console.OUT.println("seclen(" + i + ") = " + seclen(i));
		}
		Console.OUT.println("metaSize = " + metaSize);
		
		
		// calculate vertex block offset
		val vDataSize:Long = getBlockOffset(team, fm, vBlocks, vLocalDataSize, metaSize);
		
		val vAllBlocks = new MemoryChunk[Block](vBlockInfo_n);
		var vCount : Int = 0;
		for(var i:Int = 0; i < team.size(); i++) {
			val blocks = vBlocks(i);
			for(var j:Int = 0; j < blocks.size; j++) {
				vAllBlocks(vCount) = nw.makeBlock(blocks(j).offset, blocks(j).size, blocks(j).n);
				vCount++;
			}
		}
		
		val vBlockInfo = nw.makeBlockInfo(vBlockInfo_n, vAllBlocks);
		printBlockInfo(vBlockInfo);
		
		// calculate edge block offset
		getBlockOffset(team, fm, eBlocks, eLocalDataSize, vDataSize);
		
		val eAllBlocks = new MemoryChunk[Block](eBlockInfo_n);
		var eCount : Int = 0;
		for(var i:Int = 0; i < team.size(); i++) {
			val blocks = eBlocks(i);
			for(var j:Int = 0; j < blocks.size; j++) {
				eAllBlocks(eCount) = nw.makeBlock(blocks(j).offset, blocks(j).size, blocks(j).n);
				eCount++;
			}
		}
		
		val eBlockInfo = nw.makeBlockInfo(eBlockInfo_n, eAllBlocks);
		printBlockInfo(eBlockInfo);
		
		
		// make header
		val version : Byte = ID.VERSION;
		val flags = new Array[Byte](3, 0);
		flags(0) = datatype;
		val header = nw.makeHeader(version, flags, headerSize, nsec, seclen);
		
		
		// write to file
		nw.writeMetaData(header, vProp, eProp, vBlockInfo, eBlockInfo);
		writeAttributeData(team, fm, 1,               vAttrInfo, vAttrData, vBlocks);
		writeAttributeData(team, fm, team.size() + 1, eAttrInfo, eAttrData, eBlocks);
		
		nw.del();
	}
	
	
	private static def makeProperty(nw : NativeWriter, attrInfo : AttributeInfo, attrName : Array[String], attrData : Array[Any]) : Property {
		val numVert = attrInfo(0).numElems(attrData(0));
		val numAttr = attrData.size;
		val id = new Array[Int](numAttr, (i:Int) => attrInfo(i).getId());
		return nw.makeProperty(numVert, numAttr, id, attrName);
	}
	
	
	private static def getBlockPartitioning(team : Team, attrInfo : AttributeInfo, attrData : Array[Any], minBlockSize : Long) : Array[Array[TmpBlock]] {
		val numAttr = attrData.size;
		
		val blocks = new Array[Array[TmpBlock]](team.size());
		finish for(var i:Int = 0; i < team.size(); i++) {
			val ii = i;
			async {
				blocks(ii) = at(team.places()(ii)) {
					
					val localNumVert = attrInfo(0).localNumElems(attrData(0));
					val blockBuilder = new ArrayBuilder[TmpBlock]();
					var blockSize:Long = 0L;
					var offset:Long = 0L;
					for(var j:Long = 0L; j < localNumVert; j++) {
						for(var k:Int = 0; k < numAttr; k++) {
							blockSize += attrInfo(k).sizeOfElem(attrData(k), j);
						}
						if(blockSize >= minBlockSize || j == localNumVert - 1L) {
							val tmpBlock = new TmpBlock();
							tmpBlock.n = j - offset + 1L;
							for(var k:Int = 0; k < numAttr; k++) {
								tmpBlock.size = Common.align(tmpBlock.size, 8);
								tmpBlock.size += attrInfo(k).sizeOfElems(attrData(k), offset, tmpBlock.n);
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
	
	
	private static def writeAttributeData(team : Team, fm : FileManager, startFile : Int, attrInfo : AttributeInfo, attrData : Array[Any], blocks : Array[Array[TmpBlock]]) {

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
						fileOffset = attrInfo(k).write(nw_, attrData(k), arrayOffset, fileOffset, num);
					}
					arrayOffset += num;
				}
				nw_.del();
			}
		}
	}
	
	
	/************************** test function ******************************/
	private static def printProperty(prop : Property) {
		Console.OUT.println("n = " + prop.n);
		Console.OUT.println("nattr = " + prop.nattr);
		for(var i:Int = 0; i < prop.nattr; i++) {
			val attr = prop.attr(i);
			Console.OUT.println("attr[" + i + "] = {" + attr.id + ", " + attr.namelen + ", " + attr.getName() + "}");
		}
	}
	private static def printBlockInfo(blockinfo : BlockInfo) {
		Console.OUT.println("nBlock = " + blockinfo.n);
		for(var i:Int = 0; i < blockinfo.n; i++) {
			val block = blockinfo.block(i);
			Console.OUT.println("block[" + i + "] : offset = " + block.offset + ", size = " + block.size + ", n = " + block.n);
		}
	}
	
	private static def makeTestData() {
		val team = Team.WORLD;
		
		val va_name = new Array[String](1);
		va_name(0) = "hogee";
		
		val va_data = new Array[Any](1);
		va_data(0) = new DistMemoryChunk[Int](team.placeGroup(), () => {
			val mc = new MemoryChunk[Int](2);
			mc(0) = here.id * 2 + 1;
			mc(1) = here.id * 2 + 2;
			mc
		});
		
		val ea_name = new Array[String](2);
		ea_name(0) = "hoge";
		ea_name(1) = "foobar";
		
		val ea_data = new Array[Any](2);
		ea_data(0) = new DistMemoryChunk[Short](team.placeGroup(), () => {
			val mc = new MemoryChunk[Short](2);
			mc(0) = (here.id * 2 + 1) as Short;
			mc(1) = (here.id * 2 + 2) as Short;
			mc
		});
		
		ea_data(1) = new DistMemoryChunk[Byte](team.placeGroup(), () => {
			val mc = new MemoryChunk[Byte](2);
			mc(0) = (here.id * 2 + 1) as Byte;
			mc(1) = (here.id * 2 + 2) as Byte;
			mc
		});
		
		return Tuple4[Array[String], Array[Any], Array[String], Array[Any]](va_name, va_data, ea_name, ea_data);
	}
	
	public static def main(args : Array[String]) : void {
		val team = Team.WORLD;
		val tuple4 = makeTestData();
		BinaryWriter.write(team, args(0), 0 as Byte, tuple4.get1(), tuple4.get2(), tuple4.get3(), tuple4.get4(), 4096, true);
	}
}