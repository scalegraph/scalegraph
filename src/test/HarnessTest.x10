package test;

import org.scalegraph.harness.sx10Test;

public class HarnessTest extends sx10Test {

	public def run() :boolean {
		finish for(p in Place.places()) at(p) async {
			throw new NullPointerException("Exception for test");
		}
		return true;
	}
	
	public static def main(args:Array[String](1)) {
		val t = new HarnessTest();
		t.execute();
	}
}