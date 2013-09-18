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
package org.scalegraph.io.impl;

import x10.util.Team;
import x10.util.concurrent.Monitor; 
import x10.io.File;
import x10.io.IOException;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.SString;
import org.scalegraph.io.FileReader;
import org.scalegraph.test.STest;

public abstract class InputSplitter {
	
	public static T_CHUNK_SIZE = 1*1024;
	
	/**
	 * Returns the position of the next line start from the specified offset.
	 * @param data The target which contains string.
	 * @param offset Search from this offset.
	 * @return offset + n where n >= 0
	 */
	public abstract def nextBreak(data :MemoryChunk[Byte], offset :Long) :Long;
	
	/**
	 * Progress the position of reader by the next line start and
	 * returns the data at the region between the current position and
	 * the next line start.
	 * @param reader The FileReader whose target contains string.
	 * @return MemoryChunk[Byte] that contains data  at the region between the current position and
	  * the next line start.
	 */
	public abstract def nextBreak(reader :FileReader) :MemoryChunk[Byte];
	
	// End of InputSplitter definition //
	
	public static struct InputSplit {
		public val path : SString;
		public val start : Long;
		public val end : Long;
		
		public def this(path : SString, start : Long, end : Long) {
			this.path = path;
			this.start = start;
			this.end = end;
		}
		
		public def size() = end - start;
		
		public def open() {
			STest.println(here.id + " => (" + start + ", " + end + ")");
			val reader = new FileReader(path);
			reader.skip(start);
			return reader;
		}
	}
	
	private class SplitterContext {
		private val nthreads :Int;
		private val splits :MemoryChunk[InputSplit];
		private val parse :(Int, MemoryChunk[Byte]) => void;
		private val monitor = new Monitor();
		private var numLauchTasks :Int = 0;
		private var frontBuffer :GrowableMemory[Byte] = new GrowableMemory[Byte]();
		private var backBuffer :GrowableMemory[Byte] = new GrowableMemory[Byte]();
		
		public def this(splits :MemoryChunk[InputSplit], parse :(Int, MemoryChunk[Byte]) => void, nthreads :Int) {
			this.splits = splits;
			this.parse = parse;
			this.nthreads = nthreads;
		}
		
		private def cycleBuffers(numTasksToLaunch :Int) {
			// wait for completion of sub tasks
			monitor.lock();
			while(numLauchTasks > 0) {
				monitor.await();
			}
			numLauchTasks = numTasksToLaunch;
			monitor.unlock();
			val tmp = backBuffer;
			backBuffer = frontBuffer;
			frontBuffer = tmp;
		}
		
		private def notifySubtaskCompletion() {
			monitor.lock();
			if(--numLauchTasks == 0)
				monitor.release();
			else
				monitor.unlock();
		}
		
		private def subtask() {
			try {
				val data = frontBuffer.raw();
				val size = data.size();
				val t_chunk_size = (size + nthreads - 1) / nthreads;
				var offset :Long = 0;
				
				// split S_CHUNK into T_CHUNK
				finish for(tid in 0..(nthreads-1)) {
					val start = Math.min(offset, size);
					val end = nextBreak(data, Math.min(offset + t_chunk_size, size));
					// We must call the parse closure even if the data length is zero
					// so that the parse closure can count the number of chunks.
					async parse(tid, data.subpart(start, end - start));
					offset = end;
				}
				
				notifySubtaskCompletion();
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		}
		
		public def split() {
			val s_chunk_size = T_CHUNK_SIZE * nthreads;
			
			// split P_CHUNK into S_CHUNK
			finish for(sidx in splits.range()) {
				val split = splits(sidx);
				val reader = split.open();
				while(true) {
					val start = reader.currentOffset();
					val remain = split.end - start;
					if(remain < s_chunk_size * 3 / 2) {
						backBuffer.setSize(remain);
						reader.read(backBuffer.raw());
						backBuffer.grow(remain + 1); // for null teminate
						cycleBuffers(1);
						async subtask();
						break;
					}
					backBuffer.setSize(s_chunk_size);
					reader.read(backBuffer.raw());
					backBuffer.add(nextBreak(reader));
					backBuffer.grow(backBuffer.size() + 1); // for null teminate
					cycleBuffers(1);
					async subtask();
				}
				reader.close();
			}
		}
	}
	
	public def split(team :Team, fman :FileNameProvider, offset :Long,
			nthreads :Int, parse :(Int, MemoryChunk[Byte]) => void)
	{
		val splits = new GrowableMemory[InputSplit]();

		val places = team.places();
		val teamSize = team.size();
		val numSplit = teamSize as Long;

		var allSize: Long = 0;
		var numFiles: Long = 0;
		for(path in fman) {
			val fileSize :Long;
			if(numFiles == 0L) {
				fileSize = new File(path.toString()).size() - offset;
				if(fileSize < 0) {
					throw new IOException("The first file must include whole header.");
				}
			}
			else {
				fileSize = new File(path.toString()).size();
			}
			allSize += fileSize;
			++numFiles;
		}
		val p_chunk_size = (allSize + numSplit - 1) / numSplit;
		var headerFile :Boolean = true;

		for(path in fman) {
			val file = new File(path.toString());
			val fileOffset :Long;
			if(headerFile) {
				fileOffset = offset;
				headerFile = false;
			}
			else {
				fileOffset = 0;
			}
			
			if(numFiles == numSplit) {
				// When the number of files match the number of split,
				// we create split for each file.
				// In this case, the file size for each files are ignored.
				splits.add(new InputSplit(path, fileOffset, file.size()));
			}
			else {
				val reader = new FileReader(path);
				val size :Long = file.size();
				var start :Long = fileOffset;
				if(size == 0L) continue;
				while(true) {
					val remain = size - start;
					if(remain < p_chunk_size * 3 / 2) {
						splits.add(new InputSplit(path, start, size));
						break;
					}
					reader.skip(p_chunk_size);
					nextBreak(reader);
					val next = reader.currentOffset();
					splits.add(new InputSplit(path, start, next));
					start = next;
				}
				reader.close();
			}
		}

		val splits_per_place = (splits.size()+teamSize-1) / teamSize;
		team.placeGroup().broadcastFlat(() => {
			try {
				val role = team.role()(0);
				val splits_begin = Math.min(role * splits_per_place, splits.size());
				val splits_end = Math.min((role + 1) * splits_per_place, splits.size());
				val splits_here = splits.raw().subpart(splits_begin, splits_end - splits_begin);
				
				new SplitterContext(splits_here, parse, nthreads).split();
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
			
		});
	}
}
