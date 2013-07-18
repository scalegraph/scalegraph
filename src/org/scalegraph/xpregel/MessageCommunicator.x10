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

package org.scalegraph.xpregel;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.Bitmap;
import org.scalegraph.util.Algorithm;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.Team2;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.graph.id.OnedC;

struct MessageBuffer[M] { M haszero } {
	val messages :GrowableMemory[M] = new GrowableMemory[M]();
	val dstIds :GrowableMemory[Long] = new GrowableMemory[Long]();
	
	def this() { }
}

class MessageCommunicator[M] { M haszero } {
	/* Name form
	 * UC : UniCast message
	 * BC : BroadCast message
	 * xxC : buffer for Compute phase
	 * xxS : send buffer
	 * xxR : receive buffer
	 */
	val mTeam :Team2;
	val mIds :IdStruct;
	val mNumThreads :Int;
	var mSuperstep :Int;

	val mVtoD :OnedC.VtoD;
	val mDtoV :OnedC.DtoV;
	val mDtoS :OnedC.DtoS;
	val mStoD :OnedC.StoD;
	val mStoV :OnedC.StoV;

	var mInEdgesOffset :MemoryChunk[Long];
	var mInEdgesVertex :MemoryChunk[Long];
	var mInEdgesMask :Bitmap;

	var mUCREnabled :Boolean;
	var mBCREnabled :Boolean;
	
	var mUCCMessages :MemoryChunk[MessageBuffer[M]];
	
	var mBCCHasMessage :Bitmap;
	var mBCCMessages :MemoryChunk[M];
	
	var mUCSCount :MemoryChunk[Int];
	var mUCSOffset :MemoryChunk[Int];
	var mUCSIds :MemoryChunk[Long];
	var mUCSMessages :MemoryChunk[M];
	
	var mBCSInputCount :Long;
	var mBCSCount :MemoryChunk[Int];
	var mBCSOffset :MemoryChunk[Int];
	var mBCSMessages :MemoryChunk[M];
	var mBCSMask :Bitmap;
	
	var mUCRMessages :MemoryChunk[M];
	var mUCROffset :MemoryChunk[Long];
	
	var mBCRHasMessage :Bitmap;
	var mBCROffset :MemoryChunk[Long];
	var mBCRMessages :MemoryChunk[M];
	
	var mNumActiveVertexes :Long;
	
	def this(team :Team2, ids :IdStruct, numThreads :Int)
	{
		val rank_c = team.base.role()(0);
		mTeam = team;
		mIds = ids;
		mNumThreads = numThreads;
		mSuperstep = 0;
		mVtoD = new OnedC.VtoD(ids);
		mDtoV = new OnedC.DtoV(ids);
		mDtoS = new OnedC.DtoS(ids);
		mStoD = new OnedC.StoD(ids, rank_c);
		mStoV = new OnedC.StoV(ids, rank_c);

		// TODO: optimize
		mUCCMessages = new MemoryChunk[MessageBuffer[M]](mNumThreads * mTeam.size(),
				(i:Long) => new MessageBuffer[M]());
		mBCCHasMessage = new Bitmap(mIds.numberOfLocalVertexes(), false);
		mBCCMessages = new MemoryChunk[M](mIds.numberOfLocalVertexes());
	}
	
	def del() {
		// TODO:
	}
	
	def messageBuffer(tid :Long) = mUCCMessages.subpart(tid * mTeam.size(), mTeam.size());
	
	def message(srcid :Long, buffer :GrowableMemory[M]) {
		if(mUCREnabled) {
			// unicast messages
			if(mUCROffset.size() == 0L)
				return new MemoryChunk[M](0);
			
			val start = mUCROffset(srcid);
			val length = mUCROffset(srcid + 1) - start;
			return mUCRMessages.subpart(start, length);
		}
		else if(mBCREnabled) {
			// broadcast messages
			val bmp = mBCRHasMessage;
			val offset = mBCROffset;
			val mes = mBCRMessages;
			val start = mInEdgesOffset(srcid);
			val end = mInEdgesOffset(srcid + 1);
			val length = end - start;
			
			buffer.setSize(length);
			for(i in 0..(length-1)) {
				val dst = mInEdgesVertex(start + i);
				
				if(bmp(dst)) { // TODO: optimize
					val wordOffset = Bitmap.offset(dst);
					val wordMask = Bitmap.mask(dst) - 1;
					val mesOffset = offset(wordOffset) +
						MathAppend.popcount(bmp.word(wordOffset) & wordMask);
					buffer(i) = mes(mesOffset);
				}
				else {
					// TODO !!!!
				}
			}
			
			return buffer.raw();
		}
		return new MemoryChunk[M]();
	}
	
	def sqweezeMessage[V, E, A](ctx :VertexContext[V, E, M, A]) {V haszero, E haszero, A haszero } {
		mNumActiveVertexes += ctx.mNumActiveVertexes; ctx.mNumActiveVertexes = 0L;
		mBCSInputCount += ctx.mBCSInputCount; ctx.mBCSInputCount = 0L;
	}
	
	private def preProcessUnicastMessages(combine : (MemoryChunk[M]) => M) {
		val numPlaces = mTeam.size();
		val combineEnabled = (combine != null);
		val nullMessage = Zero.get[M]();
		
		val numMessages = Algorithm.reduce(mUCCMessages.range(),
				(i:Long) => mUCCMessages(i).messages.size()) as Int;
		if(numMessages == 0)
			return [ 0L as Long , 0L as Long ]; // short cut
		
		mUCSCount = new MemoryChunk[Int](numPlaces);
		mUCSOffset = new MemoryChunk[Int](numPlaces + 1);
		val mesCount :MemoryChunk[Int];
		val mesOffset :MemoryChunk[Int];
		if(combineEnabled) {
			mesCount = new MemoryChunk[Int](numPlaces);
			mesOffset = new MemoryChunk[Int](numPlaces + 1);
		}
		else {
			mesCount = mUCSCount;
			mesOffset = mUCSOffset;
		}
		mesOffset(0) = 0;
		for(p in 0..(numPlaces-1)) mesCount(p) = 0;

		// count number of messages
		for(th in 0..(mNumThreads-1)) {
			for(p in 0..(numPlaces-1)) {
				mesCount(p) += mUCCMessages(th * numPlaces + p).messages.size() as Int;
			}
		}
		for(p in 0..(numPlaces-1)) {
			mesOffset(p + 1) = mesOffset(p) + mesCount(p);
		}
		
		assert (numMessages == mesOffset(numPlaces));

		val mesTmp :MemoryChunk[M];
		val idsTmp :MemoryChunk[Long];
		if(combineEnabled) {
			mesTmp = new MemoryChunk[M](numMessages);
			idsTmp = new MemoryChunk[Long](numMessages);
		}
		else {
			mUCSIds = new MemoryChunk[Long](numMessages);
			mUCSMessages = new MemoryChunk[M](numMessages);
			idsTmp = mUCSIds;
			mesTmp = mUCSMessages;
		}
		
		Parallel.iter(0L..(numPlaces-1), (p :Long) => {
			val pstart = mesOffset(p);
			val plength = mesOffset(p+1) - pstart;
			val mesLocal = mesTmp.subpart(pstart, plength);
			val idsLocal = idsTmp.subpart(pstart, plength);
			var offset :Long = 0;
			
			for(th in 0..(mNumThreads-1)) {
				val src = mUCCMessages(th * numPlaces + p);
				val size = src.messages.size();
				MemoryChunk.copy(src.messages.raw(), 0L, mesLocal, offset, size);
				MemoryChunk.copy(src.dstIds.raw(), 0L, idsLocal, offset, size);
				
				// clear messages
				for(i in src.messages.range()) src.messages(i) = nullMessage;
				src.messages.setSize(0);
				src.dstIds.setSize(0);
				
				offset += size;
			}
			if(combine != null) {
				// sort
				Algorithm.sort(idsLocal, mesLocal);
				
				// combine
				var resultLength: Int = 0;
				var start: Long = 0;
				var length: Long = 0;
				var vid: Long = 0;
				for(i in mesLocal.range()) {
					if(vid != idsLocal(i)) {
						if(length > 0) {
							mesLocal(resultLength) = combine(mesLocal.subpart(start, length));
							idsLocal(resultLength) = vid;
							++resultLength;
						}
						start = i;
						length = 1;
						vid = idsLocal(i);
					}
				}
				if(length > 0) {
					mesLocal(resultLength) = combine(mesLocal.subpart(start, length));
					idsLocal(resultLength) = vid;
					++resultLength;
				}
				mUCSCount(p) = resultLength;
			}
		});

		val numCombinedMessages :Long;
		if(combine != null) {
			// compact
			for(p in 0..(numPlaces-1)) {
				mUCSOffset(p + 1) = mUCSOffset(p) + mUCSCount(p);
			}
			numCombinedMessages = mUCSOffset(numPlaces);

			mUCSIds = new MemoryChunk[Long](numCombinedMessages);
			mUCSMessages = new MemoryChunk[M](numCombinedMessages);
			val idsBuffer = mUCSIds;
			val mesBuffer = mUCSMessages;
			
			Parallel.iter(0..(numPlaces-1), (p :Int) => {
				val tmpOffset = mesOffset(p) as Long;
				val bufOffset = mUCSOffset(p) as Long;
				val length = mUCSCount(p) as Long;
				assert (mUCSOffset(p + 1) - bufOffset == length);
				MemoryChunk.copy(mesTmp, tmpOffset, mesBuffer, bufOffset, length);
				MemoryChunk.copy(idsTmp, tmpOffset, idsBuffer, bufOffset, length);
			});
			
			mesCount.del();
			mesOffset.del();
			mesTmp.del();
			idsTmp.del();
		}
		else {
			numCombinedMessages = numMessages;
		}
		
		return [ numMessages as Long, numCombinedMessages as Long ];
	}
	
	private def createInEdgesMask() {
		val numVertexes2N = mIds.numberOfGlobalVertexes2N();
		val tmpMask = new Bitmap(numVertexes2N, false);
		if(mInEdgesMask == null) mInEdgesMask = new Bitmap(numVertexes2N);
		
		Parallel.iter(mInEdgesVertex.range(), (tid :Long, r :LongRange) => {
			for(i in r) tmpMask.atomicSet(mInEdgesVertex(i));
		});
		
		mTeam.alltoall(tmpMask.raw(), mInEdgesMask.raw());
		tmpMask.del();
	}
	
	private def preProcessBroadcastMessages(combine : (MemoryChunk[M]) => M) :Long {
		val numLocalVertexes2N = mIds.numberOfLocalVertexes2N();
		val numPlaces = mTeam.size();
		val nullMessage = Zero.get[M]();
		
		if(mBCSInputCount == 0L) return 0L;
		
		if(mInEdgesMask == null) createInEdgesMask();
		
		mBCSMask = new Bitmap(numLocalVertexes2N * numPlaces);
		mBCSCount = new MemoryChunk[Int](numPlaces);
		mBCSOffset = new MemoryChunk[Int](numPlaces + 1);
		
		Parallel.iter(0L..(numPlaces-1), (p :Long) => {
			val startWordOffset = Bitmap.offset(numLocalVertexes2N * p);
			val lengthInWords = Bitmap.numWords(numLocalVertexes2N);
			val placeHasMessage = mBCSMask.raw().subpart(startWordOffset, lengthInWords);
			val placeInEdgeMask = mInEdgesMask.raw().subpart(startWordOffset, lengthInWords);
			val rawHasMessage = mBCCHasMessage.raw();
			
			var placeNumMessage :Int = 0;
			for(i in placeHasMessage.range()) {
				placeHasMessage(i) = rawHasMessage(i) & placeInEdgeMask(i);
				placeNumMessage += MathAppend.popcount(placeHasMessage(i));
				rawHasMessage(i) = 0UL; // clear bitmap
			}
			mBCSCount(p) = placeNumMessage;
		});
		
		mBCSOffset(0) = 0;
		for(i in 0..(numPlaces-1)) {
			mBCSOffset(i + 1) = mBCSOffset(i) + mBCSCount(i);
		}
		
		mBCSMessages = new MemoryChunk[M](mBCSOffset(numPlaces));

		Parallel.iter(0L..(numPlaces-1), (p :Long) => {
			val startWordOffset = Bitmap.offset(numLocalVertexes2N * p);
			val lengthInWords = Bitmap.numWords(numLocalVertexes2N);
			val placeHasMessage = new Bitmap(mBCSMask.raw().subpart(startWordOffset, lengthInWords));
			
			val start = mBCSOffset(p);
			val length = mBCSCount(p);
			val mesLocalBuffer = mBCSMessages.subpart(start, length);
			
			var offset :Int = 0L;
			for(i in mBCCMessages.range()) {
				if(placeHasMessage(i)) {
					mesLocalBuffer(offset++) = mBCCMessages(i);
			//		mBCCMessages(i) = nullMessage; // clear
				}
			}
			assert (offset == length);
		});

		return mBCSOffset(numPlaces);
	}
	
	def resetSRBuffer() {
		if(mUCRMessages.size() > 0) mUCRMessages.del();
		if(mUCROffset.size() > 0) mUCROffset.del();
		if(mBCRHasMessage != null) mBCRHasMessage.del();
		if(mBCROffset.size() > 0) mBCROffset.del();
		if(mBCRMessages.size() > 0) mBCRMessages.del();
	}
	
	def preProcess(combine : (MemoryChunk[M]) => M) {
		resetSRBuffer();

		val r0 = mNumActiveVertexes;
		val [ r1, r2 ] = preProcessUnicastMessages(combine);
		val r3 = preProcessBroadcastMessages(combine);

		mBCSInputCount = 0L;
		mNumActiveVertexes = 0L;
		
		return [ r0, r1, r2, r3 ];
	}
	
	def exchangeMessages(UCEnable :Boolean, BCEnable :Boolean) :void {
		val numLocalVertexes2N = mIds.numberOfLocalVertexes2N();
		val numPlaces = mTeam.size();
		val recvCount = new MemoryChunk[Int](numPlaces);
		val recvOffset = new MemoryChunk[Int](numPlaces + 1);

		mUCREnabled = UCEnable;
		mBCREnabled = BCEnable;
		
		if(UCEnable) {
			if(mUCSCount.size() == 0L) {
				// this place has no message to send but it must prepare for receiving messages
				mUCSCount = new MemoryChunk[Int](numPlaces, (i:Long) => 0);
				mUCSOffset = new MemoryChunk[Int](numPlaces + 1, (i:Long) => 0);
			}
			
			mTeam.alltoall(mUCSCount, recvCount);
			
			recvOffset(0) = 0;
			for(i in recvCount.range()) {
				recvOffset(i + 1) = recvOffset(i) + recvCount(i);
			}
			
			val recvSize = recvOffset(numPlaces);

			val UCRIdsTmp = new MemoryChunk[Long](recvSize);
			mTeam.alltoallv(mUCSIds, mUCSOffset, mUCSCount, UCRIdsTmp, recvOffset, recvCount);
			mUCSIds.del();

			val UCRMessagesTmp = new MemoryChunk[M](recvSize);
			mTeam.alltoallv(mUCSMessages, mUCSOffset, mUCSCount, UCRMessagesTmp, recvOffset, recvCount);
			mUCSMessages.del();
			
			mUCSCount.del();
			mUCSOffset.del();

			val UCRIds = new MemoryChunk[Long](recvSize);
			mUCRMessages = new MemoryChunk[M](recvSize);
			
			Parallel.sort(mIds.lgl, UCRIdsTmp, UCRMessagesTmp, UCRIds, mUCRMessages);

			UCRMessagesTmp.del();
			UCRIdsTmp.del();
			
			val numLocalVertexes = mIds.numberOfLocalVertexes();
			mUCROffset = new MemoryChunk[Long](numLocalVertexes+1);
			Parallel.makeOffset(UCRIds, mUCROffset);
			UCRIds.del();
		}
		
		if(BCEnable) {
			if(mBCSCount.size() == 0L) {
				// this place has no message to send but it must prepare for receiving messages
				mBCSMask = new Bitmap(numLocalVertexes2N * numPlaces, false);
				mBCSCount = new MemoryChunk[Int](numPlaces, (i:Long) => 0);
				mBCSOffset = new MemoryChunk[Int](numPlaces + 1, (i:Long) => 0);
			}
			
			mTeam.alltoall(mBCSCount, recvCount);
			
			recvOffset(0) = 0;
			for(i in recvCount.range()) {
				recvOffset(i + 1) = recvOffset(i) + recvCount(i);
			}

			val recvSize = recvOffset(numPlaces);
			
			mBCRMessages = new MemoryChunk[M](recvSize);
			mTeam.alltoallv(mBCSMessages, mBCSOffset, mBCSCount, mBCRMessages, recvOffset, recvCount);
			mBCSMessages.del();

			mBCRHasMessage = new Bitmap(numLocalVertexes2N * numPlaces);
			mTeam.alltoall(mBCSMask.raw(), mBCRHasMessage.raw());
			mBCSMask.del();
			
			mBCROffset = new MemoryChunk[Long](Bitmap.numWords(mBCRHasMessage.size()) + 1);
			Parallel.scan(mBCRHasMessage.raw().range(), mBCROffset, 0L,
					(i:Long, v:Long) => MathAppend.popcount(mBCRHasMessage.word(i)) + v,
					(v1:Long, v2:Long) => v1 + v2);
			
			assert recvOffset(numPlaces) as Long ==
				mBCROffset(Bitmap.numWords(numLocalVertexes2N * numPlaces));
		}

		recvCount.del();
		recvOffset.del();
	}
}

