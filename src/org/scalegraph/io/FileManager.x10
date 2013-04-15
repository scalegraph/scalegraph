package org.scalegraph.io;

import x10.io.File;
import x10.util.Team;


public abstract class FileManager {
	
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
		Common.debugprint("dir = " + dir);
		Common.debugprint("dir.list = " + dir.list());
		val nFiles = dir.list().size;
		this.fileOffset = new Array[Long](nFiles + 1, 0L);
		for(var i:Int = 0; i < nFiles; i++) {
			val file = new File(getFileName(i));
			this.fileOffset(i + 1) = this.fileOffset(i) + file.size();
		}
		Common.debugprint("fileOffset = " + fileOffset);
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