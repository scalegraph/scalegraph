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
		val edgeBuilder = new GrowableMemory[Long]();
		
		try {
			while(true) {
				val line = reader.readLine();
				val list = line.split(separator);
				if(list.size < 2) continue;
				val srcId = Long.parse(list(0));
				val dstId = Long.parse(list(1));
				vertexSet.add(srcId);
				vertexSet.add(dstId);
				edgeBuilder.add(srcId);
				edgeBuilder.add(dstId);
			}
		} catch(e:IOException) {
		}
		
		val vertexList = MemoryChunk.make[Long](vertexSet.size());
		val it = vertexSet.iterator();
		for(var i:Int = 0; it.hasNext(); i++) {
			vertexList(i) = it.next();
		}
		val vid = new DistMemoryChunk[Long](singleTeam.placeGroup(), () => vertexList);
		val src = new DistMemoryChunk[Long](singleTeam.placeGroup(), () => edgeBuilder.raw());
		
		val ret = new NamedDistData(["vertex" as String, "edgelist"], [vid as Any, src], null);
		return ret;
	}
}