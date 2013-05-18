package org.scalegraph.xpregel;

import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.tuple.Tuple2;
import x10.util.Team;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.xpregel.Vertex;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.xpregel.XpregelContext;
import org.scalegraph.concurrent.DistScatterGather;
import org.scalegraph.xpregel.XContext;
import org.scalegraph.concurrent.Team2;
import org.scalegraph.graph.id.IdStruct;

struct MessageBuffer[M] {
	val messages :GrowableMemory[M] = new GrowableMemory[M]();
	val dstIds :GrowableMemory[M] = new GrowableMemory[M]();
	
	def this() { }
}

class MessageCommunicationService[M,A] {
	val mTeam :Team2;
	val mIds :IdStruct;
	val mNumThreads :Int;
	
	val mEdgeOrientMessages :MemoryChunk[MessageBuffer[M]];
	val mVertexOrientMessages :GrowableMemory[M];
	
	/*
	var mSendBufferMessages:GrowableMemory[Tuple2[Long,M]];
	var mOffsets:GrowableMemory[Long];
	val mContext:XpregelContext;
	val sendOffsets : MemoryChunk[Int];
	val sendCounts : MemoryChunk[Int];
	 */

	public def this(team :Team2, ids :IdStruct, numThreads :Int) {
		mTeam = team;
		mIds = ids;
		mNumThreads = numThreads;
		
		mEdgeOrientMessages = new MemoryChunk[MessageBuffer[M]](numThreads * team.size());
		for(i in mEdgeOrientMessages.range())
			mEdgeOrientMessages(i) = MessageBuffer[M]();
		
		mVertexOrientMessages = new GrowableMemory[M]();
		
		/*
		mSendBufferMessages = new GrowableMemory[Tuple2[Long,M]]();
		mReceiveBufferMessages = new GrowableMemory[Tuple2[Long,M]]();
		mContext = context;
		mOffsets = new GrowableMemory[Long](mContext.ids().numberOfLocalVertexes);
		val range = (0..(mContext.ids().numberOfLocalVertexes-1));
		for(index in range) {
			mOffsets.add(-1L);
		}
		sendOffsets = new MemoryChunk[Int](mTeam.size()+1);
		sendCounts = new MemoryChunk[Int](mTeam.size());
		 */
	}

	public def addSendMessages(buffer:GrowableMemory[Tuple2[Long,M]]) {
		mSendBufferMessages.add(buffer.data());
	}

	public def addSendMessages(buffer:MemoryChunk[Tuple2[Long,M]]) {
		if (buffer.size() > 0)
			mSendBufferMessages.add(buffer);
	}

	public def addMessages(contexts:Array[XContext[M,A]]):Long {
		var sum:Long = 0L;
		val range = (0..(mTeam.size()-1));
		for (t in range) {
			sendCounts(t) = 0;
			for (index in contexts) {
				val _context = contexts(index);
				addSendMessages(_context.getBuffer(t as Int));
				sendCounts(t) += _context.getBuffer(t as Int).size() as Int;
			}
		}
		for (t in range) {
			sendOffsets(t+1) = sendOffsets(t)+sendCounts(t);
		}
		for (index in contexts) {
			val _context = contexts(index);
			sum += _context.bufferSize();
		}
		return sum;
	}

	public def del() {
		mSendBufferMessages.del();
		mReceiveBufferMessages.del();
	}

	public def clearSendBuffer() {
		mSendBufferMessages.clear();
	}

	public def clearReceiveBuffer() {
		mReceiveBufferMessages.clear();
	}

	public def exchangeMessages() {
		val raw = mSendBufferMessages.data();
		val _context = mContext;

		/*
		 * uncomment for combiner process
		 * for this moment, we dont implement
		 * combiner yet
		 *
		Parallel.sort(raw, (v1:Tuple2[Long,M],v2:Tuple2[Long,M]) => {
			return v1.get1() - v2.get1();
		});
		var start:Long = 0;
		var currentId:Long = raw(0).get1();
		for(index in raw.range()) {
			val m = raw(index);
			if (m.get1() != currentId) {
				currentId = m.get1();
				val end = index-1;
				val start_ = start;
				start = index;
				val subpart = raw.subpart(start,(end-start+1));
				Parallel.sort(subpart, (v1:Tuple2[Long,M],v2:Tuple2[Long,M]) => {
					return _context.getWorkerPlaceFromDstId(v1.get1()) - _context.getWorkerPlaceFromDstId(v2.get1());
				});
			}
		}
		 * */
		/*
		Parallel.sort(raw, (v1:Tuple2[Long,M],v2:Tuple2[Long,M]) => {
			return _context.getWorkerPlaceFromDstId(v1.get1()) - _context.getWorkerPlaceFromDstId(v2.get1());
		});
		 * */
		if (here.id == 0) {
			Console.OUT.println("Num of messages = " + raw.size());
		}
		/*
		val comm = new DistScatterGather(mTeam);
		Parallel.iter(0..(raw.size()-1),(tid:Long, r:LongRange) => {
			val counts = comm.getCounts(tid as Int);
			val offsets = comm.getOffsets(tid as Int);
			for(i in r) {
				val workerId = _context.getWorkerPlaceFromDstId(raw(i).get1());
				assert (workerId < mTeam.size());
				counts(workerId)++;
				offsets(workerId)++;
			}
		});
		comm.sum();
		if (here.id == 0) {
			Console.OUT.println("Send Count = " + comm.sendCount());
		}

		val receiveMessages = comm.scatter(raw);
		*/
		val receiveCounts = new MemoryChunk[Int](sendCounts.size());
		val receiveOffsets = new MemoryChunk[Int](sendCounts.size()+1);
		mTeam.alltoall(sendCounts,receiveCounts);
		Team2.countOffsets(receiveCounts, receiveOffsets, 0);
		val receiveMessages = new MemoryChunk[Tuple2[Long,M]](receiveOffsets(mTeam.size()));
		val start_send_time = System.currentTimeMillis();
		mTeam.alltoallv(raw, sendOffsets, sendCounts, receiveMessages, receiveOffsets, receiveCounts);
		val end_send_time = System.currentTimeMillis();
		if (here.id == 0) {
			Console.OUT.println("Sending messages takes " + (end_send_time-start_send_time));
		}
		mSendBufferMessages.clear();
		mReceiveBufferMessages.clear();

		// sort due to src id
		val start_sort = System.currentTimeMillis();
		Parallel.sort(receiveMessages,(v1:Tuple2[Long,M],v2:Tuple2[Long,M]) => {
			return _context.getSrcIdFromDstId(v1.get1()).compareTo(_context.getSrcIdFromDstId(v2.get1()));
		});
		val end_sort = System.currentTimeMillis();
		if (here.id == 0) {
			Console.OUT.println("Sort " + receiveMessages.size() + " messages takses " + (end_sort - start_sort)); 
		}

		/*
		 * uncomment to process combiner messages
		 *
		var start_re:Long = 0L;
		while(start_re < receiveMessages.size()-1L) {
			val range = start_re..(receiveMessages.size()-1L);
			val currentId = _context.getSrcIdFromDstId(receiveMessages(start_re).get1());
			val next = Parallel.binarySearch(range,(index:Long) => {
				val nextId = _context.getSrcIdFromDstId(receiveMessages(index).get1());
				if (index == (receiveMessages.size()-1L)) {
					return true;
				}
				if (nextId == currentId) {
					if (_context.getSrcIdFromDstId(receiveMessages(index+1L).get1()) != currentId) {
						return true;
					}
				}
				return false;
			}) as Long;
			val subpart = receiveMessages.subpart(start_re, (next-start_re+1));
			// combiner subpart here to get less messages
			start_re = next;
		}
		 * */
		val start_offset_cal = System.currentTimeMillis();
		val tmp = new MemoryChunk[Long](mOffsets.size(),0L,true);
		mOffsets(0) = 0L;
		Parallel.iter(receiveMessages.range(), (threadIndex : Long, range : LongRange) => {
			for (index in range) {
				if (index < receiveMessages.size()-1) {
					val src1 = _context.getSrcIdFromDstId(receiveMessages(index).get1());
					val src2 = _context.getSrcIdFromDstId(receiveMessages(index+1).get1());
					if (src2 != src1) {
						tmp(src2) = index+1;
					}
				}
			}
		});
		Parallel.iter(mOffsets.range(), (threadIndex : Long, range : LongRange) => {
			for(index in range) {
				if (tmp(index) == 0L && index > 0L) {
					if (index == range.min) {
						var i:Long = index;
						while(i > 0 && tmp(--i) == 0L);
						mOffsets(index) = tmp(i+1);
					}else {
						mOffsets(index) = mOffsets(index-1);
					}
				}else {
					mOffsets(index) = tmp(index);
				}
			}
		});
		val stop_offset_cal = System.currentTimeMillis();
		if (here.id == 0) {
			Console.OUT.println("Calculate Offset takes " + (stop_offset_cal-start_offset_cal));
		}
		/*
		if (mContext.getSuperStep() == 0L) {
			var srcId:Long = -1;
			var count:Long = 0;
			val counts = new GrowableMemory[Long](mContext.ids().numberOfLocalVertexes);
			for(index in mOffsets.range()) {
				counts.add(0L);
			}
			for (index in receiveMessages.range()) {
				val id = _context.getSrcIdFromDstId(receiveMessages(index).get1());
				counts(id)++;
			}
			mOffsets(0) = 0L;
			val r = 1..(mContext.ids().numberOfLocalVertexes-1);
			for (index in r) {
				mOffsets(index) = mOffsets(index-1) + counts(index-1);
			}
		}
		 * */
		mReceiveBufferMessages.add(receiveMessages);
	}

	/**
	 * TODO
	 * return real messages for particular vertex
	 * Now it just returns dummy
	 */
	public def getMessagesForVertex(vertexId:Long,messages:GrowableMemory[Tuple2[Long,M]]) {
		val raw = mReceiveBufferMessages.data();
		if (raw.size() > 0L) {
			assert (vertexId >= 0);
			assert (vertexId < mOffsets.size());
			var start_index : Long = mOffsets(vertexId);
			var end_index : Long = (vertexId == mOffsets.size()-1) ? raw.size() : mOffsets(vertexId+1);
			if (start_index >= 0 && end_index > start_index) {
				messages.add(raw.subpart(start_index,end_index-start_index));
			}
		}
	}
}
