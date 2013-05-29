package org.scalegraph.io;

import x10.io.File;
import x10.io.Reader;
import x10.io.FileReader;
import x10.io.BufferedReader;
import x10.io.IOException;

import x10.util.HashSet;
import x10.util.Team;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.DistMemoryChunk;


public class Import {
	
	public static def fromEdgeList(readPath : String, writePath : String, separator : String) {
		val singleTeam = new Team(new Array[Place](1, here));
		
		val reader = new BufferedReader(new FileReader(new File(readPath)));
		
		val vertexSet = new HashSet[Long]();
		val srcBuilder = new GrowableMemory[Long]();
		val dstBuilder = new GrowableMemory[Long]();
		
		try {
			while(true) {
				val line = reader.readLine();
				val list = line.split(separator);
				if(list.size < 2) continue;
				val srcId = Long.parse(list(0));
				val dstId = Long.parse(list(1));
				vertexSet.add(srcId);
				vertexSet.add(dstId);
				srcBuilder.add(srcId);
				dstBuilder.add(dstId);
			}
		} catch(e:IOException) {
		}
		
		val vertexList = new MemoryChunk[Long](vertexSet.size());
		val it = vertexSet.iterator();
		for(var i:Int = 0; it.hasNext(); i++) {
			vertexList(i) = it.next();
		}
		val vid = new DistMemoryChunk[Long](singleTeam.placeGroup(), () => vertexList);
		val src = new DistMemoryChunk[Long](singleTeam.placeGroup(), () => srcBuilder.raw());
		val dst = new DistMemoryChunk[Long](singleTeam.placeGroup(), () => dstBuilder.raw());
		
		val vaName = new Array[String](1, ID.NAME_VERTEX_ID);
		val vaData = new Array[Any](1, vid);
		val eaName = new Array[String](2);
		eaName(0) = ID.NAME_SRC_ID;
		eaName(1) = ID.NAME_DST_ID;
		val eaData = new Array[Any](2);
		eaData(0) = src;
		eaData(1) = dst;
		
		val rawdata = new Array[Entity](2);
		rawdata(0) = Entity(vaName, vaData);
		rawdata(1) = Entity(eaName, eaData);
		return rawdata;
	}
}