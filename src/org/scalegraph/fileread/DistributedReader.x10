/* this is a study version
 * simple distributed file reader
 */
 
package org.scalegraph.fileread; 

import x10.util.ArrayList;
import x10.lang.Exception;
import x10.io.File;
import x10.io.Reader;
import x10.io.FileReader;
import x10.io.BufferedReader;
import x10.compiler.Inline;
import x10.util.Team;

import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.util.tuple.*;
import org.scalegraph.graph.Attribute;
import x10.io.FileWriter;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.util.DistMemoryChunk;
 
public class DistributedReader {
    
    static def ReaderSkip(reader :Reader, var length :Long) {
        while(length > 0) {
            reader.skip(Math.min(0x40000000L, length) as Int);
            length -= 0x40000000;
        }
    }
 
 	public static def read(
 		team : Team,
 		fileList : Array[String],
 		inputFormat : (String) => Tuple3[Long, Long, Double]) {
 		
 		val places = team.places();
 		val teamSize = team.size();
		val splits = new ArrayList[InputSplit]();
		val edgelist = new DistGrowableMemory[Long](team.placeGroup());
		val weight = new DistGrowableMemory[Double](team.placeGroup());
		
		var all_size: Long= 0;
		for(path in fileList.values()) {
			val file = new File(path);
			all_size += file.size();
		}
		val chunk_size = all_size / (teamSize as Long);
		
		//majide seek ga hoshii, nannde kon na koto shinaito ikenainda
		//sonnakoto sinakute iindayo!!

		for(path in fileList.values()) {
			val file = new File(path);
			val reader = new BufferedReader(new FileReader(file));
			val size :Long = file.size();
			var start :Long = 0L;
			if(size == 0L) continue;
			while(true) {
				val remain = size - start;
				if(remain < chunk_size * 3 / 2) {
					splits.add(new InputSplit(path, start, size));
					break;
				}
				ReaderSkip(reader, chunk_size);
				reader.readLine();
				val next = reader.getFilePointer();
				splits.add(new InputSplit(path, start, next));
				start = next;
			}
			reader.close();
		}
		
		finish for(i in 0..(splits.size()-1)) {
			val split = splits(i);
			at(places(i % teamSize)) async {
				val reader = split.open();
				val edgelist_ = edgelist();
				val weight_ = weight();
				val linelist = new ArrayList[String]();
				try {
					while(split.getEnd() != reader.getFilePointer()) {
						val line = reader.readLine();
						linelist.add(line);
					}
					
					// for debug
					//team.barrier(team.role());
					//if(team.role() == 0) Console.OUT.println("finish reading lines");
					
					val numEdges = linelist.size();
					edgelist_.setSize(numEdges*2);
					weight_.setSize(numEdges);
					
					Parallel.iter(0..((linelist.size()-1) as Long), (tid :Long, r :LongRange) => {
						for(i in r) {
							val line = linelist(i as Int); linelist(i as Int) = null;
							val elt = inputFormat(line);
							edgelist_(i*2+0) = elt.get1();
							edgelist_(i*2+1) = elt.get2();
							weight_(i) = elt.get3();
						}
					});
				} catch(eof: x10.io.EOFException) {
					Console.OUT.println("Done!"); 
					// Console.OUT.println(m); 
				} catch(ioe: x10.io.IOException) {
					Console.ERR.println(ioe);
				}
				reader.close();
			}
		}
		
		return Tuple2[DistGrowableMemory[Long], DistGrowableMemory[Double]](edgelist, weight);
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
 
