package test.scalegraph.util;

import org.scalegraph.util.Date;

public class TestDate {
	
	public static def main(args: Array[String]) {
		d: Date = new Date(2011, 12, 30, 21, 59, 0);
	
		Console.OUT.println("Timestamp: " + d.getTime());
		Console.OUT.println("Day of Week: " + d.getDay());
		Console.OUT.println("Date: " + d);
	}
}