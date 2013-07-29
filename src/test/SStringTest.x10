package test;

import org.scalegraph.util.SString;

public class SStringTest {
	public static def main(args: Array[String](1)) {
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
		
		Console.OUT.println("complete !");
	}
}
