package org.scalegraph.io.impl;

import x10.io.File;

import org.scalegraph.util.SString;
import org.scalegraph.io.FileReader;
import org.scalegraph.io.FileWriter;
import org.scalegraph.io.FileMode;

public abstract class FileManager {
	protected val path : SString;
	public def this(path : SString) {
		this.path = path;
	}
	public abstract def isScattered() : Boolean;
	public abstract def fileName(index :Int) :SString;
	public def mkdir() {
		// default method assumes the path pointing to the normal file
		val last_sep = path.lastIndexOf(File.SEPARATOR);
		if(last_sep > 0) {
			(new File(path.substring(0, last_sep).toString())).mkdirs();
		}
	}
	public abstract def deleteFile() :void;
	public abstract def openRead(index :Int) :FileReader;
	public abstract def openWrite(index :Int) :FileWriter;
	
	/**
	 * Creates appropriate file manager instance.
	 * @param path filename passed by user
	 * @param scattered hint to choose file manager
	 */
	public static def createFileManager(path :SString, scattered :Boolean) {
		val num_pos = path.indexOf("%d");
		if(num_pos != -1) {
			val last_sep = path.lastIndexOf(File.SEPARATOR);
			if(last_sep > num_pos) {
				throw new IllegalArgumentException("Number position may not be on a directory name.");
			}
			return new NumberScatteredFileManager(path);
		}
		if(scattered) {
			return new DirectoryScatteredFileManage(path);
		}
		return new SingleFileManager(path);
	}
}

class SingleFileManager extends FileManager {
	public def this(path : SString) {
		super(path);
	}
	public def isScattered() = false;
	public def fileName(index :Int) = path;
	public def deleteFile() {
		(new File(path.toString())).delete();
	}
	public def openRead(index :Int) = new FileReader(path);
	public def openWrite(index :Int) = new FileWriter(path, FileMode.Create);
}

class NumberScatteredFileManager extends FileManager {
	public def this(path : SString) {
		super(path);
	}
	public def isScattered() = true;
	public def fileName(index :Int) = SString(String.Format(path.toString(), [index as Any]));
	public def deleteFile() {
		(new File(path.toString())).delete();
	}
	public def openRead(index :Int) = new FileReader(path);
	public def openWrite(index :Int) = new FileWriter(path, FileMode.Create);
	
}

class DirectoryScatteredFileManage extends FileManager {
	public def this(path : SString) {
		super(path);
	}
	public def isScattered() = true;
	public def fileName(index :Int) = path;
	public def mkdir() {
		val last_sep = path.lastIndexOf(File.SEPARATOR);
		if(last_sep > 0) {
			(new File(path.substring(0, last_sep).toString())).mkdirs();
		}
	}
	public def deleteFile() {
		(new File(path.toString())).delete();
	}
	public def openRead(index :Int) = new FileReader(path);
	public def openWrite(index :Int) = new FileWriter(path, FileMode.Create);
	
}
