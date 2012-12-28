package test;
import org.scalegraph.id.*;
import org.scalegraph.util.Debug;
import x10.util.Random;

public class IdConverterExample {
	
	private static def message (str:String) : void {
		Debug.println("IdConvEx: ", str);
	}
	
	private static def make(name: String, conv: IdConverter[Long], local: Long, C: Int, R: Int) : void {
		val id = conv.make(local, C, R);
		message("make: " + name + ": " + id + "(" + id.toBinaryString() + ")");
		message("make: " + name + ": " + "reverse: " + "local=" + conv.getLocal(id) + ", C=" + conv.getC(id) + ", R=" + conv.getR(id));
	}
	
	private static def make(ids: IdStruct, local: Long, C: Int, R: Int) : void {
		val RRConv = new RoundRobinIdConverter(ids);
		val SzConv = new SwizzledIdConverter(ids);
		val LRConv = new LocalRIdConverter(ids);
		val LCConv = new LocalCIdConverter(ids);
		
		message("make: " + "local=" + local + ", C=" + C + ", R=" + R);
		
		message("make: " + local.toBinaryString() + " " + C.toBinaryString() + " " + R.toBinaryString());
		make("RR", RRConv, local, C, R);
		
		message("make: " + C.toBinaryString() + " " + R.toBinaryString() + " " + local.toBinaryString());
		make("Sz", SzConv, local, C, R);
		
		message("make: " + C.toBinaryString() + " " + local.toBinaryString());
		make("LC", LCConv, local, C, R);
		
		message("make: " + R.toBinaryString() + " " + local.toBinaryString());
		make("LR", LRConv, local, C, R);
	}
	
	private static def make(ids: IdStruct, iter: Int) : void {
		val rand = new Random();
		for (i in 0..(iter-1)) {
			val local = rand.nextLong(1L << ids.lgl);
			val C = rand.nextInt(1 << ids.lgc);
			val R = rand.nextInt(1 << ids.lgr);
			
			make(ids, local, C, R);
		}
	}
	
	private static def destruct(name: String, conv: IdConverter[Long], id: Long) : void {
		val local = conv.getLocal(id);
		val C = conv.getC(id);
		val R = conv.getR(id);
		
		message("destruct: " + name + ": " + "local=" + local + ", C=" + C + ", R=" + R);
		message("destruct: " + name + ": " + "local=" + local.toBinaryString() + ", C=" + C.toBinaryString() + ", R=" + R.toBinaryString());
		message("destruct: " + "reverse: " + name + ": " + conv.make(local, C, R));
	}
	
	private static def destruct(ids: IdStruct, id: Long) : void {
		val RRConv = new RoundRobinIdConverter(ids);
		val SzConv = new SwizzledIdConverter(ids);
		val LRConv = new LocalRIdConverter(ids);
		val LCConv = new LocalCIdConverter(ids);
		
		message("Id: " + id + "(" + id.toBinaryString() + ")");
		destruct("RR", RRConv, id);
		destruct("Sz", SzConv, id);
		destruct("LC", LCConv, id);
		destruct("LR", LRConv, id);
	}
	
	private static def destruct(ids: IdStruct, iter: Int) : void {
		val rand = new Random();
		for (i in 0..(iter-1)) {
			val id = rand.nextLong(1L << (ids.lgl + ids.lgc + ids.lgr));
			destruct(ids, id);
		}
	}
	
	public static def main(argv: Array[String](1)) {
		val ids = new IdStruct(3, 4, 10, 1023);
		make(ids, 10);
		destruct(ids, 10);
	}
}
