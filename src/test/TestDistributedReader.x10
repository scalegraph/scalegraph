package test;

import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import x10.util.Team;

public class TestDistributedReader {
	public static inputFormat_g1 = (s:String)=> {
		val elements = s.split(",");
		return Tuple3[Long, Long, Double](
				Long.parse(elements(0)),
				Long.parse(elements(1)),
				Double.parse(elements(3)));
	};
	public static inpurFormat_g2 = (s:String)=> {
		val elements = s.split(",");
		return Tuple3[Long, Long, Double](
				Long.parse(elements(0)),
				Long.parse(elements(1)),
				Double.parse(elements(2)));
	};
	
	public static def main(args: Array[String](1)) {
		val team = Team.WORLD;
		val format = args(0).endsWith(".txt") ? inputFormat_g1 : inpurFormat_g2;
		var time: Long = System.currentTimeMillis();
		val rawData = DistributedReader.read(team, [args(0) as String], format);
		time = System.currentTimeMillis() - time;
		Console.OUT.println("Load time: " + (time));
		Console.OUT.println("Complete!!!");
	}
}