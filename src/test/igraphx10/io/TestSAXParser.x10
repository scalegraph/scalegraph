package test.scalegraph.io;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

import org.scalegraph.io.SAXParser; 
import org.scalegraph.io.SAXHandler;

public class TestSAXParser implements SAXHandler {
	
	public static def main(args: Array[String]) {
		
		SAXParser.parse("/nfs/home/charuwat/Desktop/temp", new TestSAXParser());
		Console.OUT.println("---------------------");
	}
	
	public def startElement(name: String, attributeCount: Int, attributeKey: Array[String], 
			attributeValue: Array[String], attributeType: Array[String]) {
		
		Console.OUT.println("start >>> " + name);
		for (var i: Int = 0; i < attributeCount; i++) {
			Console.OUT.println("\t\tAttr = " + attributeKey(i) + " : " + attributeValue(i) + " : " + attributeType(i) );
		}
	}
	
	public def endElement(name: String): void {
		Console.OUT.println("End  >> " + name);
	}
	
	public def fatalError(message: String): void {
		Console.OUT.println(message);
	}
	
	public def error(message: String): void {
		Console.OUT.println(message);
	}
	
	public def warning(message: String): void {
		Console.OUT.println(message);
	}
	
	
}
