package test;

import x10.io.File;
import x10.util.Team;
import x10.util.Timer;

import org.scalegraph.util.tuple.*;
import org.scalegraph.io.fbio.FBIOSupport;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.io.GraphHeader;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.io.Import;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;

public class TestBinaryIO {
	
	public static def main(args : Array[String]) {
		if(args(0).equals("read")) {
			read(args);
		} else if(args(0).equals("write")) {
			write(args);
		} else if(args(0).equals("writetest")) {
			writeTestData(args);
		} else if(args(0).equals("import")) {
			importFromEdgeList(args);
		} else {
			throw new IllegalArgumentException();
		}
	}
	
	
	public static def read(args : Array[String]) {
		val fileName = args(1);
		val numExec = Int.parse(args(2));
		val team = Team.WORLD;
		
		var acc : Long = 0L;
		for(var i:Int = 0; i < numExec; i++) {
			var time : Long = Timer.milliTime();
			val rawgraph = FBIOSupport.read(team, fileName);
			time = Timer.milliTime() - time;
			Console.OUT.printf("Test (%d) : %.3lf sec\n", i, time / 1000.0);
			acc += time;
		}
		/*
		val vAttrInfo = new Array[AttributeHandler](tuple4.get2().size, (i:Int) => AttributeHandler.makeFromAny(team, tuple4.get2()(i)));
		val eAttrInfo = new Array[AttributeHandler](tuple4.get4().size, (i:Int) => AttributeHandler.makeFromAny(team, tuple4.get4()(i)));
		for(var i:Int = 0; i < tuple4.get2().size; i++) {
			vAttrInfo(i).print(tuple4.get2()(i));
		}
		for(var i:Int = 0; i < tuple4.get4().size; i++) {
			eAttrInfo(i).print(tuple4.get4()(i));
		}
		*/
		Console.OUT.printf("Average : %.3lf sec\n", acc / numExec as Double / 1000.0);
	}
	
	public static def write(args : Array[String]) {
		val readFileName = args(1);
		val writeFileName = args(2);
		val blockSize = Long.parse(args(3));
		val scatter = Boolean.parse(args(4));
		val team = Team.WORLD;
		
		val fileList : Array[String];
		val file = new File(readFileName);
		if(file.isDirectory()) {
			fileList = file.list();
		} else {
			fileList = new Array[String](1, readFileName);
		}
		
		val tuple2 = DistributedReader.read(team, fileList, (line:String) => {
			val list = line.split(" ");
			Tuple3[Long, Long, Double](Long.parse(list(0)), Long.parse(list(1)), 1.0)
		});
		
		val edgelist = tuple2.get1().data(team.placeGroup());
		var numE : Long = 0L;
		for(p in team.places().values()) {
			numE += at(p) edgelist().size();
		}
		numE /= 2;
		
		var time : Long = Timer.milliTime();
		val header = new GraphHeader(-1, numE, 0, 0);
		val data = new NamedDistData(["edge" as String], [edgelist as Any], header);
		FBIOSupport.write(team, writeFileName, data, blockSize, scatter);
		time = Timer.milliTime() - time;
		Console.OUT.printf("FBIOSupport.write(): %ld msec\n", time);
	}
	
	public static def writeTestData(args : Array[String]) {
		val writeFileName = args(1);
		val blockSize = Long.parse(args(2));
		val scatter = Boolean.parse(args(3));
		val team = Team.WORLD;

		val data = makeTestData(team);
		var time : Long = Timer.milliTime();
		FBIOSupport.write(team, writeFileName, data, blockSize, scatter);
		time = Timer.milliTime() - time;
		Console.OUT.printf("FBIOSupport.write(): %ld msec\n", time);
	}
	
	private static def importFromEdgeList(args : Array[String]) {
		val readPath = args(1);
		val writePath = args(2);
		val separator = args(3);
		val blockSize = Long.parse(args(4));
		val scatter = Boolean.parse(args(5));
		val team = new Team(new Array[Place](1, here));
		
	//	val rawdata = Import.fromEdgeList(readPath, writePath, separator);
	//	BinaryWriter.write(team, writePath, rawdata, blockSize, scatter);
	}
	
	
	private static def makeTestData(team : Team) {
		val va_data = new DistMemoryChunk[Int](team.placeGroup(), () => {
			val mc = new MemoryChunk[Int](2);
			mc(0) = here.id * 2 + 1;
			mc(1) = here.id * 2 + 2;
			mc
		});
		val ea_data1 = new DistMemoryChunk[Short](team.placeGroup(), () => {
			val mc = new MemoryChunk[Short](2);
			mc(0) = (here.id * 2 + 1) as Short;
			mc(1) = (here.id * 2 + 2) as Short;
			mc
		});
		val ea_data2 = new DistMemoryChunk[Byte](team.placeGroup(), () => {
			val mc = new MemoryChunk[Byte](2);
			mc(0) = (here.id * 2 + 1) as Byte;
			mc(1) = (here.id * 2 + 2) as Byte;
			mc
		});
		return new NamedDistData(
				["hogee" as String, "hoge", "foobar"],
				[va_data as Any, ea_data1, ea_data2],
				new GraphHeader(-1, -1, 0, 0));
	}
}