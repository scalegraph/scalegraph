package test;
import org.scalegraph.concurrent.Dist2D;

public class Dist2DExample {
	public static def main(argv:Array[String](1)) {
		val n = 12;
		val minarg = new Array[Int](2,0);
		val R= Math.floor(Math.sqrt(Place.MAX_PLACES)) as Int;
		Console.OUT.println(new Dist2D(R));
		Console.OUT.println(new Dist2D(1));
	}
}
