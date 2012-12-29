/* this is a study version
 * simple distributed file reader
 */
 
package org.scalegraph.fileread; 

import x10.util.ArrayList;
import x10.lang.Exception;
import x10.io.File;
import x10.io.FileReader;
import x10.io.BufferedReader;
import x10.compiler.Inline;
import x10.util.Team;

import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.util.tuple.*;
import org.scalegraph.graph.Attribute;
import x10.io.FileWriter;
 
public class DistributedReader {
 
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
				reader.skip(chunk_size as Int);
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
				try {
					while(split.getEnd() != reader.getFilePointer()) {
						val line = reader.readLine();
						val elt = inputFormat(line);
						edgelist_.add(elt.get1());
						edgelist_.add(elt.get2());
						weight_.add(elt.get3());
					}
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
 			val role = team.getRole(here);
 			val filename = String.format(filenamefmt, [role as Any]);
 			val values_ = values.values()().data();
 			val writer = new FileWriter(new File(filename));

 			if(names != null) {
	 			val names_ = names.values()().data();
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
 
 }
 