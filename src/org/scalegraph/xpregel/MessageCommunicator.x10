package org.scalegraph.xpregel;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.Bitmap;
import org.scalegraph.concurrent.Team2;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.util.MathAppend;
import org.scalegraph.graph.id.OnedC;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.util.Algorithm;

struct MessageBuffer[M] { M haszero } {
	val messages :GrowableMemory[M] = new GrowableMemory[M]();
	val dstIds :GrowableMemory[Long] = new GrowableMemory[Long]();
	
	def this() { }
}

class MessageCommunicator[M] { M haszero } {
	val mTeam :Team2;
	val mIds :IdStruct;
	val mNumThreads :Int;
	var mSuperstep :Int;

	val mDtoV :OnedC.DtoV;
	val mDtoS :OnedC.DtoS;

	var mInEdgesMask :Bitmap;
	var mInEdgesOffset :MemoryChunk[Long];
	var mInEdgesVertex :MemoryChunk[Long];
	
	val mEOSMessages :MemoryChunk[MessageBuffer[M]];
	var mEOSCombinedCount :MemoryChunk[Int];
	var mEOSCombinedOffset :MemoryChunk[Int];
	val mEOSCombinedMessages :MessageBuffer[M];
	
	var mVOSHasMessage :Bitmap;
	var mVOSMessages :MemoryChunk[M];
	var mVOSCount :MemoryChunk[Int];
	var mVOSOffset :MemoryChunk[Int];
	var mVOSTmpMask :Bitmap;

	var mEdgeOrientOrVertexOrientS :Boolean;
	var mEdgeOrientOrVertexOrientR :Boolean;
	
	val mEORMessages :MessageBuffer[M] = new MessageBuffer[M]();
	var mEOROffset :MemoryChunk[Long];
	
	var mVOREnabled :Bitmap;
	var mVOROffset :MemoryChunk[Long];
	val mVORMessages :GrowableMemory[M];
	val mVORTmpBuffer :GrowableMemory[M] = new GrowableMemory[M]();
	
	var mRecvCount :MemoryChunk[Int];
	var mRecvOffset :MemoryChunk[Int];
	
	def this(team :Team2, ids :IdStruct, numThreads :Int)
	{
		mTeam = team;
		mIds = ids;
		mNumThreads = numThreads;
		mSuperstep = 0;
		mDtoV = new OnedC.DtoV(ids);
		mDtoS = new OnedC.DtoS(ids);
		
		mEOSMessages = new MemoryChunk[MessageBuffer[M]](numThreads * team.size());
		for(i in mEOSMessages.range())
			mEOSMessages(i) = MessageBuffer[M]();
		
		// initialize for first step
		mEdgeOrientOrVertexOrientS = true;
		mEdgeOrientOrVertexOrientR = true;
		mEOROffset = new MemoryChunk[Long](ids.numberOfLocalVertexes() + 1);
		for(i in mEOROffset.range()) mEOROffset(i) = 0L;
	}
	
	def del() {
		// TODO:
	}
	
	def messageBuffer(tid :Long) = mEOSMessages.subpart(tid * mTeam.size(), mTeam.size());
	
	def setInEdge[E](inEdge :GraphEdge[E]) { E haszero } {
		mInEdgesOffset = inEdge.offsets;
		mInEdgesVertex = inEdge.vertexes;
	}
	
	def allocateVOSBuffer() {
		if(mVOSHasMessage != null)
			throw new Exception("Invalid program ...");
		mVOSHasMessage = new Bitmap(mIds.numberOfLocalVertexes(), false);
		mVOSMessages = new MemoryChunk[M](mIds.numberOfLocalVertexes());
		mEdgeOrientOrVertexOrientS = false;
	}
	
	def message(srcid :Long) {
		if(mEdgeOrientOrVertexOrientR) {
			// edge orient
			return mEORMessages.messages.data().subpart(
					mEOROffset(srcid), mEOROffset(srcid + 1) - mEOROffset(srcid));
		}
		else {
			// vertex orient
			val bmp = mVOREnabled;
			val offset = mVOROffset;
			val mes = mVORMessages;
			val start = mInEdgesOffset(srcid);
			val end = mInEdgesOffset(srcid + 1);
			val length = end - start;
			val buffer = mVORTmpBuffer;
			
			buffer.setSize(length);
			for(i in 0..(length-1)) {
				val dst = mInEdgesVertex(start + i);
				val wordOffset = Bitmap.offset(dst);
				val wordMask = Bitmap.mask(dst) - 1;
				
				assert bmp(dst) == true;
				
				val mesOffset = offset(wordOffset) +
					MathAppend.popcount(bmp.word(wordOffset) & wordMask);
				buffer(i) = mes(mesOffset);
				
				assert srcid == mDtoS(mInEdgesVertex(mesOffset));
			}
			
			return buffer.data();
		}
	}
	
	private def preProcessEdgeOrientMessages(combine : (MemoryChunk[M]) => M) {
		//
		val numPlaces = mTeam.size();
		val combineEnabled = (combine != null);
		
		if(mEOSCombinedOffset.size() == 0L) {
			mEOSCombinedCount = new MemoryChunk[Int](numPlaces);
			mEOSCombinedOffset = new MemoryChunk[Int](numPlaces + 1);
		}
		val mesCount :MemoryChunk[Int];
		val mesOffset :MemoryChunk[Int];
		if(combineEnabled) {
			mesCount = new MemoryChunk[Int](numPlaces);
			mesOffset = new MemoryChunk[Int](numPlaces + 1);
		}
		else {
			mesCount = mEOSCombinedCount;
			mesOffset = mEOSCombinedOffset;
		}
		mesOffset(0) = 0;
		for(p in 0..(numPlaces-1)) mesCount(p) = 0;

		// count number of messages
		for(th in 0..(mNumThreads-1)) {
			for(p in 0..(numPlaces-1)) {
				mesCount(p) += mEOSMessages(th * numPlaces + p).messages.size() as Int;
			}
		}
		for(p in 0..(numPlaces-1)) {
			mesOffset(p + 1) = mesOffset(p) + mesCount(p);
		}
		
		val numMessages = mesOffset(numPlaces);

		val mesTmp :MemoryChunk[M];
		val idsTmp :MemoryChunk[Long];
		if(combineEnabled) {
			mesTmp = new MemoryChunk[M](numMessages);
			idsTmp = new MemoryChunk[Long](numMessages);
		}
		else {
			mEOSCombinedMessages.messages.setSize(numMessages);
			mEOSCombinedMessages.dstIds.setSize(numMessages);
			mesTmp = mEOSCombinedMessages.messages.data();
			idsTmp = mEOSCombinedMessages.dstIds.data();
		}
		
		Parallel.iter(0L..(numPlaces-1), (p :Long) => {
			val pstart = mesOffset(p);
			val plength = mesOffset(p+1) - mesOffset(p);
			val mesLocal = mesTmp.subpart(pstart, plength);
			val idsLocal = idsTmp.subpart(pstart, plength);
			var offset :Long = 0;
			
			for(th in 0..(mNumThreads-1)) {
				val src = mEOSMessages(th * numPlaces + p);
				val size = src.messages.size();
				MemoryChunk.copy(src.messages.data(), 0L, mesLocal, offset, size);
				MemoryChunk.copy(src.dstIds.data(), 0L, idsLocal, offset, size);
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
				mEOSCombinedCount(p) = resultLength;
			}
		});

		val numCombinedMessages :Long;
		if(combine != null) {
			// compact
			for(p in 0..(numPlaces-1)) {
				mEOSCombinedOffset(p + 1) = mEOSCombinedOffset(p) + mEOSCombinedCount(p);
			}
			numCombinedMessages = mEOSCombinedOffset(numPlaces);
			
			mEOSCombinedMessages.messages.setSize(numCombinedMessages);
			mEOSCombinedMessages.dstIds.setSize(numCombinedMessages);
			val mesBuffer = mEOSCombinedMessages.messages.data();
			val idsBuffer = mEOSCombinedMessages.dstIds.data();
			
			for(p in 0..(numPlaces-1)) {
				val tmpOffset = mesOffset(p) as Long;
				val bufOffset = mEOSCombinedOffset(p) as Long;
				val length = mEOSCombinedCount(p) as Long;
				assert (mEOSCombinedOffset(p + 1) - bufOffset == length);
				MemoryChunk.copy(mesTmp, tmpOffset, mesBuffer, bufOffset, length);
				MemoryChunk.copy(idsTmp, tmpOffset, idsBuffer, bufOffset, length);
			}
		}
		else {
			numCombinedMessages = numMessages;
		}
		
		return [ numMessages as Long, numCombinedMessages as Long, 0L ];
	}
	
	private def createInEdgesMask() {
		val numVertexes2N = mIds.numberOfGlobalVertexes2N();
		if(mVOSTmpMask == null) mVOSTmpMask = new Bitmap(numVertexes2N, false);
		if(mInEdgesMask == null) mInEdgesMask = new Bitmap(numVertexes2N);
		
		Parallel.iter(mInEdgesVertex.range(), (tid :Long, r :LongRange) => {
			for(i in r) mVOSTmpMask.atomicSet(mInEdgesVertex(i));
		});
		
		mTeam.alltoall(mVOSTmpMask.data(), mInEdgesMask.data());
	}
	
	private def preProcessVertexOrientMessages(combine : (MemoryChunk[M]) => M) {
		val numLocalVertexes2N = mIds.numberOfLocalVertexes2N();
		val numPlaces = mTeam.size();
		
		if(mInEdgesMask == null) createInEdgesMask();
		if(mVOSTmpMask == null) mVOSTmpMask = new Bitmap(numLocalVertexes2N * numPlaces);
		if(mVOSOffset.size() == 0L) {
			mVOSCount = new MemoryChunk[Int](numPlaces);
			mVOSOffset = new MemoryChunk[Int](numPlaces + 1);
		}
		
		Parallel.iter(0L..(numPlaces-1), (p :Long) => {
			val startWordOffset = Bitmap.offset(numLocalVertexes2N * p);
			val lengthInWords = Bitmap.numWords(numLocalVertexes2N);
			val placeHasMessage = mVOSTmpMask.data().subpart(startWordOffset, lengthInWords);
			val placeInEdgeMask = mInEdgesMask.data().subpart(startWordOffset, lengthInWords);
			val rawHasMessage = mVOSHasMessage.data();
			
			var placeNumMessage :Int = 0;
			for(i in placeHasMessage.range()) {
				placeHasMessage(i) = rawHasMessage(i) & placeInEdgeMask(i);
				placeNumMessage += MathAppend.popcount(placeHasMessage(i));
			}
			mVOSCount(p) = placeNumMessage;
		});
		
		for(i in 0..(numPlaces-1)) {
			mVOSOffset(i + 1) = mVOSOffset(i) + mVOSCount(i);
		}
		
		mEOSCombinedMessages.messages.setSize(mVOSOffset(numPlaces));
		val mesBuffer = mEOSCombinedMessages.messages.data();

		Parallel.iter(0L..(numPlaces-1), (p :Long) => {
			val startWordOffset = Bitmap.offset(numLocalVertexes2N * p);
			val lengthInWords = Bitmap.numWords(numLocalVertexes2N);
			val placeHasMessage = new Bitmap(mVOSTmpMask.data().subpart(startWordOffset, lengthInWords));
			
			val start = mVOSOffset(p);
			val length = mVOSCount(p);
			val mesLocalBuffer = mesBuffer.subpart(start, length);
			
			var offset :Int = 0L;
			for(i in mVOSMessages.range()) {
				if(placeHasMessage(i)) {
					mesLocalBuffer(offset++) = mVOSMessages(i);
				}
			}
			assert (offset == length);
		});

		return [ 0L as Long, 0L, mVOSOffset(numPlaces) as Long ];
	}
	
	def preProcess(combine : (MemoryChunk[M]) => M) {
		if(mEdgeOrientOrVertexOrientS) {
			return preProcessEdgeOrientMessages(combine);
		}
		else {
			return preProcessVertexOrientMessages(combine);
		}
	}
	
	def exchangeMessages() :void {

		val numPlaces = mTeam.size();
		if(mRecvCount.size() == 0L) mRecvCount = new MemoryChunk[Int](numPlaces);
		if(mRecvOffset.size() == 0L) mRecvOffset = new MemoryChunk[Int](numPlaces + 1);
		
		if(mEdgeOrientOrVertexOrientS) {
			val recvCount = mRecvCount;
			val recvOffset = mRecvOffset;
			
			mTeam.alltoall(mEOSCombinedCount, recvCount);
			
			recvOffset(0) = 0;
			for(i in recvCount.range()) {
				recvOffset(i + 1) = recvOffset(i) + recvCount(i);
			}
			
			val recvSize = recvOffset(numPlaces);
			mEORMessages.messages.setSize(recvSize);
			mEORMessages.dstIds.setSize(recvSize);

			mTeam.alltoallv(mEOSCombinedMessages.messages.data(), mEOSCombinedOffset,
					mEOSCombinedCount, mEORMessages.messages.data(), recvOffset, recvCount);
			
			mTeam.alltoallv(mEOSCombinedMessages.dstIds.data(), mEOSCombinedOffset,
					mEOSCombinedCount, mEORMessages.dstIds.data(), recvOffset, recvCount);
			
			// TODO:
			Algorithm.sort(mEORMessages.dstIds.data(), mEORMessages.messages.data());
			val numLocalVertexes = mIds.numberOfLocalVertexes();
			if(mEOROffset.size() == 0L) mEOROffset = new MemoryChunk[Long](numLocalVertexes+1);
			Parallel.makeOffset(mEORMessages.dstIds.data(), mEOROffset);
		}
		else {
			val recvCount = mRecvCount;
			val recvOffset = mRecvOffset;
			
			mTeam.alltoall(mVOSCount, recvCount);
			
			recvOffset(0) = 0;
			for(i in recvCount.range()) {
				recvOffset(i + 1) = recvOffset(i) + recvCount(i);
			}

			val recvSize = recvOffset(numPlaces);
			mVORMessages.setSize(recvSize);

			mTeam.alltoallv(mVOSMessages, mVOSOffset,
					mVOSCount, mEORMessages.messages.data(), recvOffset, recvCount);
		}
		
		mEdgeOrientOrVertexOrientR = mEdgeOrientOrVertexOrientS;
		mEdgeOrientOrVertexOrientS = true;
	}
}

