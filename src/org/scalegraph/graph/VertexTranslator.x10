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

package org.scalegraph.graph;

import x10.xrx.Runtime;
import x10.util.concurrent.AtomicLong;
import x10.util.Team;
import x10.util.Timer;

import x10.compiler.Pinned;
import x10.compiler.Pragma;
import x10.compiler.Inline;
import x10.compiler.Native;

import org.scalegraph.util.Parallel;
import org.scalegraph.util.DistScatterGather;
import org.scalegraph.util.HashMap;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistMemoryChunk;

/** Vertex ID translator. The purpose of this class is assigning the small integer number for each vertex.
 * The instances of this class are pinned to a particular place because moving the instance to another place is not worth.
 */
@Pinned abstract class VertexTranslator[T] {T haszero} extends VertexTranslatorBase {

	static val debug = true;
	@Inline static def debugln (str:String) : void {
		if (debug) {
			Console.OUT.println("" + Timer.milliTime() + ":VertexTranslator: " + here + "(" + Runtime.workerId() + ")" + str);
			Console.OUT.flush();
		}
	}

	def this(team__:Team){ super(team__); }
	
	/** Translates vertex IDs. All place of the team must call this method in parallel.
	 * @param edges The vertices which will be translated
	 * @param translated The storage for translated edge list
	 * @param withPut true: Assigning new number, false: only translation
	 */
	public abstract def translateWithAll(edges: MemoryChunk[T], withPut :Boolean) :MemoryChunk[Long];

	/** Translates vertex IDs.
	 * @param translator Translator object
	 * @param vertices The vertices which will be translated
	 * @param translated The storage for translated edge list
	 * @param withPut true: Assigning new number, false: only translation
	 */
	public static def translate[T](translator :PlaceLocalHandle[VertexTranslatorBase],
			vertices :DistMemoryChunk[T], withPut :Boolean){T haszero}
	{
		return DistMemoryChunk.make[Long](translator().team.placeGroup(), () => {
			try {
				return (translator() as VertexTranslator[T])
					.translateWithAll(vertices(), withPut);
			}
			catch (e : CheckedThrowable) {
				e.printStackTrace();
				throw new Exception(e);
			}
		});
	}
	
	/** Translates vertex IDs without assigning new vertex number.
	 * @returns A DistMemoryChunk that contains translated vertex IDs.
	 * @param translator Translator object
	 * @param vertices The vertices which will be translated
	 */
	public static def translate[T](translator :PlaceLocalHandle[VertexTranslatorBase],
		vertices :DistMemoryChunk[T]){T haszero} :DistMemoryChunk[Long]
		= translate[T](translator, vertices, false);

	/** Translates vertex IDs with assigning new vertex number.
	 * @returns A DistMemoryChunk that contains translated vertex IDs.
	 * @param translator Translator object
	 * @param vertices The vertices which will be translated
	 */
	public static def putAndTranslate[T](translator :PlaceLocalHandle[VertexTranslatorBase],
		vertices :DistMemoryChunk[T]) {T haszero} :DistMemoryChunk[Long]
		= translate[T](translator, vertices, true);
		
	////////////////////////
		
	public static class HashTranslator[T] { T haszero } extends VertexTranslator[T] {
	
		private count = new AtomicLong(0);
		private hashFunc: (T)=>Int;
		private table = new HashMap[T, Long]();
		private vertexNamesAtt :DistMemoryChunk[T];
		private vertexNames :GrowableMemory[T];
		private var maxLocalId : Int = 0n;
		
		public def isTranslator() = true;
		public def sizeOfDictionary() = table.size() as Long;
	
		/** Creates vertex translator.
		 * @param team The same team with the graph.
		 * @param vertexNames This object builds vertex ID mapping to the growable memory.
		 * In the most case, vertexNames is the backing storage for the name attribute of the graph.
		 */
		public def this(team__:Team, vertexNamesAtt__ :DistMemoryChunk[T]){
			this(team__, vertexNamesAtt__, (x:T)=>x.hashCode());
		}
	
		/** Creates vertex translator.
		 * @param team The same team with the graph.
		 * @param vertexNames This object builds vertex ID mapping to the growable memory.
		 * In the most case, vertexNames is the backing storage for the name attribute of the graph.
		 * @param hashFunc Hashing function for distributing vertex IDs.
		 */
		public def this(team__:Team, vertexNamesAtt__ :DistMemoryChunk[T], hashFunc__:(T)=>Int){
			super(team__);
			hashFunc = hashFunc__;
			vertexNamesAtt = vertexNamesAtt__;
			vertexNames = new GrowableMemory[T]();
		}
	
		private def countToId(count:Long) {
			return count * teamSize + teamRank;
		}
	
		private def putLocalAndTranslate(vertices: MemoryChunk[T], translated :MemoryChunk[Long]) {
			//		val count_origin = count.getAndAdd(vertices.size);
	
			// TODO: parallelize
			// TODO: manage the hash bias due to the place distribution
			// 1. create hashmap for adding elements only in parallel
			// 2. numbering adding elements
			// 3. consolidate hashmaps
			// 4. create translations
	
			for (i in vertices.range()) {
				val key = vertices(i);
				if (table.containsKey(key)) {
					translated(i) = table.getOrThrow(key);
				} else {
					val count = count.getAndAdd(1);
					val id = countToId(count);
					table.put(key, id);
					vertexNames.add(key);
					assert (((vertexNames.size() - 1) as Long) == count);
					translated(i) = id;
				}
			}
			return translated;
		}
	
	    private def parallelPutLocalAndTranslate(vertices: MemoryChunk[T], translated :MemoryChunk[Long]) {
	        val newKeys = table.newKeys(vertices, -1L);
	        val newIds = MemoryChunk.make[Long](newKeys.size());
	        Parallel.iter(newIds.range(), (tid : Long, r : LongRange)=> {
	            for (i in r) {
	                newIds(i) = count.get() + i;
	            }
	        });
	        table.put(newKeys, newIds);
	        count.getAndAdd(newKeys.size());
	        val _translated = table.get(vertices, -1L);
	        MemoryChunk.copy(_translated, 0L, translated, 0L, _translated.size());
	        return translated;
	    }
	
		private def putLocal(vertices: MemoryChunk[T]) {
			//		val count_origin = count.getAndAdd(vertices.size);
			for (i in vertices.range()) {
				val key = vertices(i);
				val count = count.getAndAdd(vertices.size());
				val id = countToId(count);
				table.put(key, id);
				vertexNames.add(key);
				assert (vertexNames.size() as Long == count);
			}
		}
	
		private def translateLocal(vertices: MemoryChunk[T], translated :MemoryChunk[Long]) {
			try {
				Parallel.iter(vertices.range(), (i:Long)=> {
					translated(i) = table.getOrThrow(vertices(i));
				});
			}
			catch (e :x10.util.NoSuchElementException) {
				Console.OUT.println("Invalid vertex ID");
			//	e.printStackTrace();
				throw e;
			}
		}
	
		private def innerPutWithAllAndTranslate(scatterGather :DistScatterGather,
				edges: MemoryChunk[T], translated :MemoryChunk[Long], withPut :Boolean) {
			val sizeMask = teamSize - 1;
			Parallel.iter(edges.range(), (tid: Long, r :LongRange)=> {
				val counts = scatterGather.getCounts(tid as Int);
				for(i in r)
					counts(hashFunc(edges(i)) & sizeMask) += 1n;
			});
			scatterGather.sum();
			val partitioned = MemoryChunk.make[T](edges.size());
			val indexes = MemoryChunk.make[Int](edges.size());
			Parallel.iter(edges.range(), (tid: Long, r :LongRange)=> {
				val offsets = scatterGather.getOffsets(tid as Int);
				for(i in r) {
					val e = edges(i);
					val idx = offsets( hashFunc(e) & sizeMask )++;
					indexes(i) = idx;
					partitioned(idx) = e;
				}
			});
			val remoteData = scatterGather.scatter(partitioned);
			partitioned.del();
			val remoteTranslated = MemoryChunk.make[Long](remoteData.size());
	
			if(withPut)
				putLocalAndTranslate(remoteData, remoteTranslated);
			else
				translateLocal(remoteData, remoteTranslated);
	
			val recvTranslated = MemoryChunk.make[Long](edges.size());
			scatterGather.gather(remoteTranslated, recvTranslated);
			remoteTranslated.del();
			Parallel.iter(edges.range(), (tid: Long, r :LongRange)=> {
				for(i in r)
					translated(i) = recvTranslated(indexes(i));
			});
			indexes.del();
			recvTranslated.del();
		}
	
		/** Translates vertex IDs. All place of the team must call this method in parallel.
		 * @param edges The vertices which will be translated
		 * @param translated The storage for translated edge list
		 * @param withPut true: Assigning new number, false: only translation
		 */
		public def translateWithAll(edges: MemoryChunk[T], withPut :Boolean) {
			val CHUNK_SIZE = 1L << 22;
			//val iterations = team.allreduce(teamRank,
			val iterations = team.allreduce(
					(edges.size() + CHUNK_SIZE - 1n) / CHUNK_SIZE, Team.MAX);
			val scatterGather = new DistScatterGather(team);
			val translated = MemoryChunk.make[Long](edges.size());
			val edgesDist = edges.distributor();
			val translatedDist = translated.distributor();
			for(it in 0..(iterations-1)) {
				val size = Math.min(CHUNK_SIZE, edgesDist.remain());
				innerPutWithAllAndTranslate(scatterGather,
						edgesDist.next(size), translatedDist.next(size), withPut);
			}
			if(withPut) {
				// update max vertex ID if assigning new number is enabled
				//maxVertexID = team.reduce(teamRank, 0n, table.size() as Long * teamSize + teamRank, Team.MAX);
				maxVertexID = team.reduce(0n, table.size() as Long * teamSize + teamRank, Team.MAX);
				// update name attribute
				vertexNamesAtt() = vertexNames.raw();
			}
			edgesDist.checkFinish();
			translatedDist.checkFinish();
			return translated;
		}
	}
	
	public static class ArithmeticTranslator[T] {T haszero} extends VertexTranslator[T] {
		
		public def this(team__ :Team) { super(team__); }
		
		public def isTranslator() = false;
		public def sizeOfDictionary() = 0L;

		@Native("c++", "x10_long(#v)")
		private native def toLong(v :T) :Long;
		
		/** Translates vertex IDs. All place of the team must call this method in parallel.
		 * @param edges The vertices which will be translated
		 * @param translated The storage for translated edge list
		 * @param withPut true: Assigning new number, false: only translation
		 */
		public def translateWithAll(vertexes: MemoryChunk[T], withPut :Boolean) {
			val translated = MemoryChunk.make[Long](vertexes.size());
			val localMaxId = Parallel.reduce(vertexes.range(), (tid :Long, r :LongRange) => {
				var tmpMaxId :Long = 0L;
				for(i in r) {
					val v = toLong(vertexes(i));
					translated(i) = v;
					if(tmpMaxId < v) tmpMaxId = v;
				}
				return tmpMaxId;
			},
			(a:Long, b:Long) => Math.max(a,b));
			if(withPut) {
				maxVertexID = Math.max(
						//team.reduce(teamRank, 0n, localMaxId, Team.MAX), maxVertexID);
						team.reduce(0n, localMaxId, Team.MAX), maxVertexID);
			}
			return translated;
		}
	}
	
	public static class NoTraslator extends VertexTranslator[Long] {
		public def this(team__ :Team) { super(team__); }
		
		public def isTranslator() = false;
		public def sizeOfDictionary() = 0L;
		
		public def translateWithAll(vertexes: MemoryChunk[Long], withPut :Boolean) {
			val localMaxId = Parallel.reduce(vertexes.range(), (tid :Long, r :LongRange) => {
				var tmpMaxId :Long = 0L;
				for(i in r) {
					val v = vertexes(i);
					if(tmpMaxId < v) tmpMaxId = v;
				}
				return tmpMaxId;
			},
			(a:Long, b:Long) => Math.max(a,b));
			if(withPut) {
				maxVertexID = Math.max(
						//team.reduce(teamRank, 0n, localMaxId, Team.MAX), maxVertexID);
						team.reduce(0n, localMaxId, Team.MAX), maxVertexID);
			}
			return vertexes;
		}
	}
}
