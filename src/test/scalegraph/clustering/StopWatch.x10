package test.scalegraph.clustering;

import x10.util.Timer;

public class StopWatch {
	
	private var startTime:Long;
	
	public def start(){
		startTime = Timer.milliTime();
	}
	
	public def get(): Long {
		val result = Timer.milliTime() - startTime;
		startTime = Timer.milliTime();
		return result;
	}
	
	public def print(msg:String){
		Console.OUT.println(msg + ": " + get());
	}
}