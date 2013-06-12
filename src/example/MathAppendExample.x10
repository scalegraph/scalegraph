package test;
import org.scalegraph.util.*;
import org.scalegraph.util.Debug;
import x10.util.Random;

public class MathAppendExample {
	private static def message (str:String) : void {
		Debug.println("IdConvEx: ", str);
	}
	
	static def testCeilLog2() {
		val n = 10;
		for (i in 0..n) {
			message("i: " + i + ", ceilLog2(i): " + MathAppend.ceilLog2(i));
		}
	}
	public static def main(argv: Array[String](1)) {
		testCeilLog2();
	}
}
