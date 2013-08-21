/* 
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

/* this is a study version
 * simple distributed file reader
 */
 
package org.scalegraph.fileread; 

import x10.util.ArrayList;
import x10.io.File;
import x10.compiler.Inline;
import x10.util.Team;
import x10.io.FileWriter;

import org.scalegraph.graph.Attribute;
import org.scalegraph.io.FileReader;
import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.SString;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.tuple.Tuple3;
 
public final class DistributedReader {
	
	private static struct InputSplit {
		private val path : String;
		private val start : Long;
		private val end : Long;
		
		public def this(path : String, start : Long, end : Long) {
			this.path = path;
			this.start = start;
			this.end = end;
		}
		
		public def open() {
			val reader = new FileReader(new File(path));
			reader.skip(start);
			return reader;
		}
		
		public def getPath() : String {
			return path;
		}
		
		public def getStart() : Long{
			return start;
		}
		
		public def getEnd() : Long {
			return end;
		}
	}
    
    public static def read[T](
    		team : Team,
    		fileList : Array[String],
    		inputFormat : (SString) => Tuple3[Long, Long, T]) {
    	
    	val places = team.places();
    	val teamSize = team.size();
    	val splits = new ArrayList[InputSplit]();
    	val edgelist = new DistGrowableMemory[Long](team.placeGroup());
    	val weight = new DistGrowableMemory[T](team.placeGroup());
    	val chunks_per_place = Runtime.NTHREADS;
    	
    	var all_size: Long= 0;
    	for(path in fileList.values()) {
    		val file = new File(path);
    		all_size += file.size();
    	}
    	val chunk_size = all_size / (teamSize * chunks_per_place as Long);
    	
    	for(path in fileList.values()) {
    		val file = new File(path);
    		val reader = new FileReader(file);
    		val size :Long = file.size();
    		var start :Long = 0L;
    		if(size == 0L) continue;
    		while(true) {
    			val remain = size - start;
    			if(remain < chunk_size * 3 / 2) {
    				splits.add(new InputSplit(path, start, size));
    				break;
    			}
    			reader.skip(chunk_size);
    			reader.fastReadLine();
    			val next = reader.currentOffset();
    			splits.add(new InputSplit(path, start, next));
    			start = next;
    		}
    		reader.close();
    	}
    	
    	Console.OUT.println("chunks_per_place = " + chunks_per_place + ", splits.size() = " + splits.size());
    	
    	val splits_per_place = (splits.size()+teamSize-1) / teamSize;
    	team.placeGroup().broadcastFlat(() => {
    		val role = team.role()(0);
    		val splits_begin = Math.min(role * splits_per_place, splits.size());
    		val splits_end = Math.min((role + 1) * splits_per_place, splits.size());
    		
    		finish for(s in splits_begin..(splits_end-1)) {
    			val split = splits(s);
    			async {
    				Console.OUT.println(here.id + " => (" + s + ", " + split.getStart() + ", " + split.getEnd() + ")");
    				Console.OUT.flush();
    				val reader = split.open();
    				val edgelist_ = new GrowableMemory[Long]();
    				val weight_ = new GrowableMemory[T]();

    				try {
    					while(split.getEnd() != reader.currentOffset()) {
    						val line = reader.fastReadLine();
    						val elt = inputFormat(line);
    						edgelist_.add(elt.val1);
    						edgelist_.add(elt.val2);
    						weight_.add(elt.val3);
    					}
    				} catch(eof: x10.io.EOFException) {
    					Console.OUT.println("Done!"); 
    					// Console.OUT.println(m); 
    				} catch(ioe: x10.io.IOException) {
    					Console.ERR.println(ioe);
    				}
    				reader.close();
    				
    				atomic {
    					edgelist().add(edgelist_.raw());
    					weight().add(weight_.raw());
    				}
    			}
    		}
    	});
    	
    	return Tuple2[DistGrowableMemory[Long], DistGrowableMemory[T]](edgelist, weight);
    }
 	
 	public static def write(
 			filenamefmt : String,
 			team : Team,
 			names : Attribute[Long],
 			values : Attribute[Double])
 	{
 		team.placeGroup().broadcastFlat(() => {
 			val role = team.role()(0);
 			val filename = String.format(filenamefmt, [role as Any]);
 			val values_ = values.values()().raw();
 			val writer = new FileWriter(new File(filename));

 			if(names != null) {
	 			val names_ = names.values()().raw();
	 			for(i in values_.range()) {
	 				writer.write(String.format("%d,%f\n", [names_(i), values_(i)]).bytes());
	 			}
 			}
 			else {
 				val size = team.size();
 				for(i in values_.range()) {
 					writer.write(String.format("%d,%f\n", [i * size + role, values_(i)]).bytes());
 				}
 			}
 			
 			writer.close();
 		});
 	}
 	
 	public static def write[T](
 			filenamefmt : String,
 			team : Team,
 			values : DistMemoryChunk[T])
 	{
 		team.placeGroup().broadcastFlat(() => {
 			val role = team.role()(0);
 			val filename = String.format(filenamefmt, [role as Any]);
 			val values_ = values();
 			val writer = new FileWriter(new File(filename));
			val size = team.size();
			for(i in values_.range()) {
				writer.write(((i * size + role).toString() + "," + values_(i).toString() + "\n").bytes());
			}
 			writer.close();
 		});
 	}
 	
 	public static def write[T](
 			filenamefmt : String,
 			team : Team,
 			names : DistMemoryChunk[T],
 			values : DistMemoryChunk[T])
 	{
 		team.placeGroup().broadcastFlat(() => {
 			val role = team.role()(0);
 			val filename = String.format(filenamefmt, [role as Any]);
 			val values_ = values();
 			val writer = new FileWriter(new File(filename));
			val names_ = names();
			for(i in values_.range()) {
				writer.write((names_(i).toString() + "," + values_(i).toString() + "\n").bytes());
			}
 			writer.close();
 		});
 	}
 
 }
 
