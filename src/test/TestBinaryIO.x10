package test;

import x10.io.File;
import x10.util.Team;
import x10.util.Timer;

import org.scalegraph.fileread.*;
import org.scalegraph.graph.*;
import org.scalegraph.io.*;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;

public class TestBinaryIO {
	
	public static def main(args : Array[String]) {
		if(args(0).equals("read")) {
			read(args);
		} else if(args(0).equals("write")) {
			write(args);
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
			val tuple4 = BinaryReader.read(team, fileName);
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
		val blockSize = Int.parse(args(3));
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
		
		val graph = new Graph(team, Graph.VertexType.Long, false);
		graph.addEdges(edgelist);
		val numV = graph.numberOfVertices();
		Console.OUT.println("numV = " + numV);
		val numE = graph.numberOfEdges();
		Console.OUT.println("numE = " + numE);
		val numP = team.size();
		val splittedEdgeList = Common.split[Long](team, edgelist);
		
		val vaName = new Array[String](1, "vertexId");
		val vaData = new Array[Any](1, new DistMemoryChunk[Long](team.placeGroup(), () => new MemoryChunk[Long](numV / numP + ((numV % numP) > team.role()(0) ? 1L : 0L))));
		val eaName = new Array[String](2);
		eaName(0) = "srcId";
		eaName(1) = "dstId";
		val eaData = new Array[Any](2);
		eaData(0) = splittedEdgeList.get1();
		eaData(1) = splittedEdgeList.get2();
		
		var time : Long = Timer.milliTime();
		BinaryWriter.write(team, writeFileName, 0 as Byte, vaName, vaData, eaName, eaData, blockSize, scatter);
		time = Timer.milliTime() - time;
		Console.OUT.printf("BinaryWriter.write(): %ld msec\n", time);
	}
	
	
	private static def makeTestData(team : Team) {
		val va_name = new Array[String](1);
		va_name(0) = "hogee";
		
		val va_data = new Array[Any](1);
		va_data(0) = new DistMemoryChunk[Int](team.placeGroup(), () => {
			val mc = new MemoryChunk[Int](2);
			mc(0) = here.id * 2 + 1;
			mc(1) = here.id * 2 + 2;
			mc
		});
		
		val ea_name = new Array[String](2);
		ea_name(0) = "hoge";
		ea_name(1) = "foobar";
		
		val ea_data = new Array[Any](2);
		ea_data(0) = new DistMemoryChunk[Short](team.placeGroup(), () => {
			val mc = new MemoryChunk[Short](2);
			mc(0) = (here.id * 2 + 1) as Short;
			mc(1) = (here.id * 2 + 2) as Short;
			mc
		});
		
		ea_data(1) = new DistMemoryChunk[Byte](team.placeGroup(), () => {
			val mc = new MemoryChunk[Byte](2);
			mc(0) = (here.id * 2 + 1) as Byte;
			mc(1) = (here.id * 2 + 2) as Byte;
			mc
		});
		
		return Tuple4[Array[String], Array[Any], Array[String], Array[Any]](va_name, va_data, ea_name, ea_data);
	}
}