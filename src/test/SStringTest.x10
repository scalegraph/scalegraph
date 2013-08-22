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
package test;

import org.scalegraph.harness.sx10Test;
import org.scalegraph.util.SString;

final class SStringTest extends sx10Test {
	public static def main(args: Array[String](1)) {
		new SStringTest().execute(args);
	}
	
	public static def print(ch :Char) {
		Console.OUT.println(ch);
	}

	public def run(args :Array[String](1)): Boolean {
		// X10 String literal to SString
		val s1 :SString = "X10 String is very slow on C++ backend.";
		Console.OUT.println(s1);
		
		// SString to X10 String
		val s2 :String = s1.toString();
		Console.OUT.println(s2);
		
		// Comparison
		val s3 :SString = "SString is very fast.";
		if(!s1.equals(s3)) {
			Console.OUT.println("Comparison OK 1");
		}
		
		// Comparison between X10 String and SString
		if(s1.equals(s2)) {
			Console.OUT.println("Comparison OK 2");
		}
		
		// HashCode
		Console.OUT.println("HashCode: " + s1.hashCode());
		
		// Size and CharsCount
		Console.OUT.println("Size: " + s1.size() + ", Characters Count: " + s1.charsCount());
		
		// indexOf(Char)
		val idx = s1.indexOf(' ');
		Console.OUT.println("s1.indexOf(space) = " + idx);
		
		// substring and c_str()
		val s4 = s1.substring(0, idx);
		Console.OUT.println("s1.substring(0, idx) = " + s4);
		
		// indexOf(SString) and substring
		val idx2 = s1.indexOf("very");
		val s5 = s1.substring(idx2);
		Console.OUT.println(s5);
		
		// lastIndexOf(Char)
		val idx3 = s1.lastIndexOf(' ');
		Console.OUT.println(idx3); // !!!!

		// startsWith
		Console.OUT.println(s1.startsWith("X10 String") +", " + s1.startsWith("SString") + " = (true,false)");
		
		// endsWith
		Console.OUT.println(s3.endsWith("fast.") +", " + s3.startsWith("slow.") + " = (true,false)");
		
		// CompareTo
		val s123 :SString = "123";
		val s1234 :SString = "1234";
		val s123_ :SString = "123";
		val s124 :SString = "124";

		Console.OUT.println(s123.compareTo(s124) + " < 0"); // < 0
		Console.OUT.println(s124.compareTo(s123) + " > 0"); // > 0
		Console.OUT.println(s123.compareTo(s1234) + " < 0"); // < 0
		Console.OUT.println(s123.compareTo(s123_) + " == 0"); // == 0
		Console.OUT.println(s124.compareTo(s1234) + " > 0"); // > 0
		
		// Trim
		val s6 :SString = "Hi Hello\r\n   \n";
		Console.OUT.println(s6.trim() + " = Hi Hello");
		
		// Split: result
		Console.OUT.println("s1.split = " + s1.split(' ').result());
		
		// Split: iterator
		for(word in s1.split(' ')) {
			Console.OUT.println(word);
		}
		
		// Replace: Char
		Console.OUT.println(s1.replace('n', '0'));
		
		// Replace: String
		Console.OUT.println(SString("zzzdogzzzdogzzz").replace("zzz", "cat"));
		
	//	print('d');
		
		Console.OUT.println(SString.format("arg1:%d" as SString, 65536));
		Console.OUT.println(SString.format("arg1:%d, arg2:%f" as SString, 123456789, 3.141592));
		Console.OUT.println(SString.format("arg1:%f, arg2:%u, arg3:%c" as SString, 98.765, -4321,'c'.ord()));
		Console.OUT.println(SString.format("arg1:%u, arg2:%ld, arg3:%d, arg4:%f" as SString, 0, 123456789098L, -1, -1234.567 ));
		Console.OUT.println(SString.format("arg1:%d, arg2:%f, arg3:%c, arg4:%f, arg5:%u" as SString, 123, 45.67, 'P'.ord(), 0.89, 999999999 ));
		Console.OUT.println(SString.format("arg1:%d, arg2:%f, arg3:%c, arg4:%f, arg5:%u, arg6:%c" as SString, 111, 111.11111, '1'.ord(), -0.111111, 1111111111, '0'.ord()));
		
		Console.OUT.println("complete !");
		return true;
	}
}
