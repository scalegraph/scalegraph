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
	
	public abstract def getDataFileName(offset : Long) : String;
	
	public abstract def getOffsetAdjuster(offset : Long) : (Long) => Long;
	
	public def currentOffset() : Long {
		return offset;
	}
	
	public def addOffset(i:Long) : Long {
		offset += i;
		return offset;
	}
	
	public abstract def nextFile() : String;
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
	
	public def getDataFileName(offset : Long) : String {
		return path;
	}

	public def getOffsetAdjuster(offset : Long) : (Long) => Long {
		return (off:Long) => off;
	}
	
	public def nextFile() : String {
		return path;
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
		Console.OUT.println("dir = " + dir);
		Console.OUT.println("dir.list = " + dir.list());
		val nFiles = dir.list().size;
		this.fileOffset = new Array[Long](nFiles + 1, 0L);
		for(var i:Int = 0; i < nFiles; i++) {
			val file = new File(getFileName(i));
			this.fileOffset(i + 1) = this.fileOffset(i) + file.size();
		}
		Console.OUT.println("fileOffset = " + fileOffset);
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
	
	public def getDataFileName(offset : Long) : String {
		if(fileOffset == null) {
			makeFileOffset();
		}
		for(var i:Int = 1; i < fileOffset.size; i++) {
			if(offset < fileOffset(i)) {
				return getFileName(i - 1);
			}
		}
		return null;
	}

	public def getOffsetAdjuster(offset : Long) : (Long) => Long {
		return (off:Long) => off - offset;
	}
	
	public def nextFile() : String {
		count++;
		offset = 0;
		return getFileName(count);
	}
}