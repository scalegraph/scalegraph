/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package test;

import x10.io.File;
import x10.util.Team;
import x10.util.Timer;
import x10.array.OrderedPlaceGroup;

import org.scalegraph.test.STest;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.io.GraphHeader;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.io.fbio.FBIOSupport;
import org.scalegraph.io.fbio.AttributeHandler;

final class TestBinaryIO extends STest {
	public static def main(args: Rail[String]) {
		new TestBinaryIO().execute(args);
	}
	
    public static def entry(args : Rail[String]) {
        if(args(0).equals("read")) {
            read(args, false);
        } else if(args(0).equals("readtest")) {
            read(args, true);
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
    
    public def run(args :Rail[String]): Boolean {
	    Console.OUT.println("\nTest Reading");
	    val p1 = ["read","/nfs/data1/ogata/scalegraph/kronecker", "4"];
	    entry(p1);
	    
	    Console.OUT.println("\nTest Writing");
	    val p2 = ["write","/nfs/data0/testdata/RMAT_SCALE_20", "/nfs/data0/testdata/write_temp/f1", "true"];
	    entry(p2);
	    
	    Console.OUT.println("\nTest importing");
	    val p3 = ["import","/nfs/data0/testdata/RMAT_SCALE_20", "/nfs/data0/testdata/write_temp/", " ", "2097152", "true"];
	    entry(p3);
	    	    
	    return true;
	}
	
	
	public static def read(args : Rail[String], printResult :Boolean) {
		val fileName = args(1);
		val numExec = Int.parse(args(2));
		val team = Team.WORLD;
		
		var acc : Long = 0L;
		for(i in 0..(numExec-1)) {
			var time : Long = Timer.milliTime();
			val rawgraph = FBIOSupport.read(team, fileName);
			time = Timer.milliTime() - time;
			Console.OUT.printf("Test (%d) : %.3lf sec\n", i, time / 1000.0);
			acc += time;
			if(printResult && i == 0) {
				val attrHandler = new Rail[AttributeHandler](rawgraph.size(), (i:Long) => AttributeHandler.make(team, rawgraph.typeId()(i)));
				for(aid in 0..(rawgraph.size()-1)) {
					attrHandler(aid).print(rawgraph.data()(aid));
				}
			}
		}
		Console.OUT.printf("Average : %.3lf sec\n", acc / numExec as Double / 1000.0);
	}
	
	public static def write(args : Rail[String]) {
		val readFileName = args(1);
		val writeFileName = args(2);
		val scatter = Boolean.parse(args(3));
		val team = Team.WORLD;
		
		val fileList : Rail[String];
		val file = new File(readFileName);
		if(file.isDirectory()) {
			fileList = file.list();
		} else {
			fileList = new Rail[String](1, readFileName);
		}
		
		val tuple2 = DistributedReader.read(fileList, (line:String) => {
			val list = line.split(" ");
			Tuple3[Long, Long, Double](Long.parse(list(0)), Long.parse(list(1)), 1.0)
		});
		
		val edgelist = tuple2.get1().raw(team.placeGroup());
		var numE : Long = 0L;
		val tmpint = 0n;
		for(p in team.places()){
			numE += at(p) edgelist().size();
		}
		numE /= 2;
		
		var time : Long = Timer.milliTime();
		val header = new GraphHeader(-1, numE, 0n, 0n);
		val data = new NamedDistData(["edge" as String], [edgelist as Any], header);
		FBIOSupport.write(team, writeFileName, data, scatter);
		time = Timer.milliTime() - time;
		Console.OUT.printf("FBIOSupport.write(): %ld msec\n", time);
	}
	
	public static def writeTestData(args : Rail[String]) {
		val writeFileName = args(1);
		val blockSize = Long.parse(args(2));
		val scatter = Boolean.parse(args(3));
		val team = Team.WORLD;

		val data = makeTestData(team);
		var time : Long = Timer.milliTime();
		FBIOSupport.write(team, writeFileName, data, scatter);
		time = Timer.milliTime() - time;
		Console.OUT.printf("FBIOSupport.write(): %ld msec\n", time);
	}
	
	private static def importFromEdgeList(args : Rail[String]) {
		val readPath = args(1);
		val writePath = args(2);
		val separator = args(3);
		val blockSize = Long.parse(args(4));
		val scatter = Boolean.parse(args(5));
		val team = new Team(new OrderedPlaceGroup(new Rail[Place](1n, here)));
		
	//	val rawdata = Import.fromEdgeList(readPath, writePath, separator);
	//	BinaryWriter.write(team, writePath, rawdata, blockSize, scatter);
	}
	
	
	private static def makeTestData(team : Team) {
		val va_data = new DistMemoryChunk[Int](team.placeGroup(), () => {
			val mc = MemoryChunk.make[Int](2);
			mc(0) = here.id as Int * 2n + 1n;
			mc(1) = here.id as Int * 2n + 2n;
			mc
		});
		val ea_data1 = new DistMemoryChunk[Short](team.placeGroup(), () => {
			val mc = MemoryChunk.make[Short](2);
			mc(0) = (here.id * 2 + 1) as Short;
			mc(1) = (here.id * 2 + 2) as Short;
			mc
		});
		val ea_data2 = new DistMemoryChunk[Byte](team.placeGroup(), () => {
			val mc = MemoryChunk.make[Byte](2);
			mc(0) = (here.id * 2 + 1) as Byte;
			mc(1) = (here.id * 2 + 2) as Byte;
			mc
		});
		return new NamedDistData(
				["hogee" as String, "hoge", "foobar"],
				[va_data as Any, ea_data1, ea_data2],
				new GraphHeader(-1n, -1n, 0n, 0n));
	}
}
