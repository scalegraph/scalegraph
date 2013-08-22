package test;

import org.scalegraph.harness.sx10Test;

final class HarnessTest extends sx10Test {
	public static def main(args: Array[String](1)) {
		new HarnessTest().execute(args);
	}

	public def run(args:Array[String](1)) :boolean {
		finish for(p in Place.places()) at(p) async {
			throw new NullPointerException("Exception for test");
		}
		return true;
	}
}