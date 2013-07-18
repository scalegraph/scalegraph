package test;

import x10.util.ParallelSerialization;

public class TeamSerializationTest {

	public static def main(args:Array[String](1)) {
		val arr1 = new Array[Cell[Int]](10, (i:Int)=>new Cell[Int](i));
		val count = [3 as Int, 2, 2, 3].raw();
		val offset = [0 as Int, 3, 5, 7, 10].raw();
		val ser_buffer = ParallelSerialization.serialize(arr1, count, offset, 2);
		Contole.OUT.println(ser_buffer);
	}
	
}
