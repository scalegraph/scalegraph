package org.scalegraph.io;

public interface FileMode {

	public static val Append		:Int = 0;
	public static val Create		:Int = 1;
	public static val CreateNew		:Int = 2;
	public static val Open			:Int = 3;
	public static val OpenOrCreate	:Int = 4;
	public static val Truncate		:Int = 5;
	
}
