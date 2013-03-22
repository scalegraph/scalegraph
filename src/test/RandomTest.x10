package test;

import org.scalegraph.util.random.Random;

public class RandomTest {

	public static def main(args: Array[String](1)) {
		var t1 :Random = new Random(1, 2);

		Console.OUT.println(t1.nextInt());
		Console.OUT.println(t1.nextInt());
		Console.OUT.println(t1.nextInt());
		Console.OUT.println(t1.nextInt());
		Console.OUT.println(t1.nextInt());
		Console.OUT.println(t1.nextInt());
		Console.OUT.println(t1.nextInt());
		Console.OUT.println(t1.nextInt());
	}
}
