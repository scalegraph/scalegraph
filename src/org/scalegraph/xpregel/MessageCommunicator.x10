package org.scalegraph.xpregel;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.Bitmap;
import org.scalegraph.util.Algorithm;
import org.scalegraph.util.MathAppend;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.concurrent.Team2;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.graph.id.OnedC;

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

	val mVtoD :OnedC.VtoD;
	val mDtoV :OnedC.DtoV;
	val mDtoS :OnedC.DtoS;
	val mStoD :OnedC.StoD;
	val mStoV :OnedC.StoV;

	var mInEdgesOffset :MemoryChunk[Long];
	var mInEdgesVertex :MemoryChunk[Long];
	var mInEdgesMask :Bitmap;

	var mEOREnabled :Boolean;
	var mVOREnabled :Boolean;
	
	var mEOCMessages :MemoryChunk[MessageBuffer[M]];
	
	var mVOCHasMessage :Bitmap;
	var mVOCMessages :MemoryChunk[M];
	
	var mEOSCount :MemoryChunk[Int];
	var mEOSOffset :MemoryChunk[Int];
	var mEOSIds :MemoryChunk[Long];
	var mEOSMessages :MemoryChunk[M];
	
	var mVOSInputCount :Long;
	var mVOSCount :MemoryChunk[Int];
	var mVOSOffset :MemoryChunk[Int];
	var mVOSMessages :MemoryChunk[M];
	var mVOSMask :Bitmap;
	
	var mEORMessages :MemoryChunk[M];
	var mEOROffset :MemoryChunk[Long];
	
	var mVORHasMessage :Bitmap;
	var mVOROffset :MemoryChunk[Long];
	var mVORMessages :MemoryChunk[M];
	
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
		mEOCMessages = new MemoryChunk[MessageBuffer[M]](mNumThreads * mTeam.size(),
				(i:Long) => new MessageBuffer[M]());
		mVOCHasMessage = new Bitmap(mIds.numberOfLocalVertexes(), false);
		mVOCMessages = new MemoryChunk[M](mIds.numberOfLocalVertexes());
	}
	
	def del() {
		// TODO:
	}
	
	def messageBuffer(tid :Long) = mEOCMessages.subpart(tid * mTeam.size(), mTeam.size());
	
	def message(srcid :Long, buffer :GrowableMemory[M]) {
		if(mEOREnabled) {
			// edge orient
			if(mEOROffset.size() == 0L)
				return new MemoryChunk[M](0);
			
			val start = mEOROffset(srcid);
			val length = mEOROffset(srcid + 1) - start;
			return mEORMessages.subpart(start, length);
		}
		else if(mVOREnabled) {
			// vertex orient
			val bmp = mVORHasMessage;
			val offset = mVOROffset;
			val mes = mVORMessages;
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
			}
			
			return buffer.raw();
		}
		return new MemoryChunk[M]();
	}
	
	def sqweezeMessage[V, E, A](ctx :VertexContext[V, E, M, A]) {V haszero, E haszero, A haszero } {
		mNumActiveVertexes += ctx.mNumActiveVertexes; ctx.mNumActiveVertexes = 0L;
		mVOSInputCount += ctx.mVOSInputCount; ctx.mVOSInputCount = 0L;
	}
	
	private def preProcessEdgeOrientMessages(combine : (MemoryChunk[M]) => M) {
		val numPlaces = mTeam.size();
		val combineEnabled = (combine != null);
		val nullMessage = Zero.get[M]();
		
		val numMessages = Algorithm.reduce(mEOCMessages.range(),
				(i:Long) => mEOCMessages(i).messages.size()) as Int;
		if(numMessages == 0)
			return [ 0L as Long , 0L as Long ]; // short cut
		
		mEOSCount = new MemoryChunk[Int](numPlaces);
		mEOSOffset = new MemoryChunk[Int](numPlaces + 1);
		val mesCount :MemoryChunk[Int];
		val mesOffset :MemoryChunk[Int];
		if(combineEnabled) {
			mesCount = new MemoryChunk[Int](numPlaces);
			mesOffset = new MemoryChunk[Int](numPlaces + 1);
		}
		else {
			mesCount = mEOSCount;
			mesOffset = mEOSOffset;
		}
		mesOffset(0) = 0;
		for(p in 0..(numPlaces-1)) mesCount(p) = 0;

		// count number of messages
		for(th in 0..(mNumThreads-1)) {
			for(p in 0..(numPlaces-1)) {
				mesCount(p) += mEOCMessages(th * numPlaces + p).messages.size() as Int;
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
			mEOSIds = new MemoryChunk[Long](numMessages);
			mEOSMessages = new MemoryChunk[M](numMessages);
			idsTmp = mEOSIds;
			mesTmp = mEOSMessages;
		}
		
		Parallel.iter(0L..(numPlaces-1), (p :Long) => {
			val pstart = mesOffset(p);
			val plength = mesOffset(p+1) - pstart;
			val mesLocal = mesTmp.subpart(pstart, plength);
			val idsLocal = idsTmp.subpart(pstart, plength);
			var offset :Long = 0;
			
			for(th in 0..(mNumThreads-1)) {
				val src = mEOCMessages(th * numPlaces + p);
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
				mEOSCount(p) = resultLength;
			}
		});

		val numCombinedMessages :Long;
		if(combine != null) {
			// compact
			for(p in 0..(numPlaces-1)) {
				mEOSOffset(p + 1) = mEOSOffset(p) + mEOSCount(p);
			}
			numCombinedMessages = mEOSOffset(numPlaces);

			mEOSIds = new MemoryChunk[Long](numCombinedMessages);
			mEOSMessages = new MemoryChunk[M](numCombinedMessages);
			val idsBuffer = mEOSIds;
			val mesBuffer = mEOSMessages;
			
			Parallel.iter(0..(numPlaces-1), (p :Int) => {
				val tmpOffset = mesOffset(p) as Long;
				val bufOffset = mEOSOffset(p) as Long;
				val length = mEOSCount(p) as Long;
				assert (mEOSOffset(p + 1) - bufOffset == length);
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
	
	private def preProcessVertexOrientMessages(combine : (MemoryChunk[M]) => M) :Long {
		val numLocalVertexes2N = mIds.numberOfLocalVertexes2N();
		val numPlaces = mTeam.size();
		val nullMessage = Zero.get[M]();
		
		if(mVOSInputCount == 0L) return 0L;
		
		if(mInEdgesMask == null) createInEdgesMask();
		
		mVOSMask = new Bitmap(numLocalVertexes2N * numPlaces);
		mVOSCount = new MemoryChunk[Int](numPlaces);
		mVOSOffset = new MemoryChunk[Int](numPlaces + 1);
		
		Parallel.iter(0L..(numPlaces-1), (p :Long) => {
			val startWordOffset = Bitmap.offset(numLocalVertexes2N * p);
			val lengthInWords = Bitmap.numWords(numLocalVertexes2N);
			val placeHasMessage = mVOSMask.raw().subpart(startWordOffset, lengthInWords);
			val placeInEdgeMask = mInEdgesMask.raw().subpart(startWordOffset, lengthInWords);
			val rawHasMessage = mVOCHasMessage.raw();
			
			var placeNumMessage :Int = 0;
			for(i in placeHasMessage.range()) {
				placeHasMessage(i) = rawHasMessage(i) & placeInEdgeMask(i);
				placeNumMessage += MathAppend.popcount(placeHasMessage(i));
				rawHasMessage(i) = 0UL; // clear bitmap
			}
			mVOSCount(p) = placeNumMessage;
		});
		
		mVOSOffset(0) = 0;
		for(i in 0..(numPlaces-1)) {
			mVOSOffset(i + 1) = mVOSOffset(i) + mVOSCount(i);
		}
		
		mVOSMessages = new MemoryChunk[M](mVOSOffset(numPlaces));

		Parallel.iter(0L..(numPlaces-1), (p :Long) => {
			val startWordOffset = Bitmap.offset(numLocalVertexes2N * p);
			val lengthInWords = Bitmap.numWords(numLocalVertexes2N);
			val placeHasMessage = new Bitmap(mVOSMask.raw().subpart(startWordOffset, lengthInWords));
			
			val start = mVOSOffset(p);
			val length = mVOSCount(p);
			val mesLocalBuffer = mVOSMessages.subpart(start, length);
			
			var offset :Int = 0L;
			for(i in mVOCMessages.range()) {
				if(placeHasMessage(i)) {
					mesLocalBuffer(offset++) = mVOCMessages(i);
					mVOCMessages(i) = nullMessage; // clear
				}
			}
			assert (offset == length);
		});

		return mVOSOffset(numPlaces);
	}
	
	def resetSRBuffer() {
		if(mEORMessages.size() > 0) mEORMessages.del();
		if(mEOROffset.size() > 0) mEOROffset.del();
		if(mVORHasMessage != null) mVORHasMessage.del();
		if(mVOROffset.size() > 0) mVOROffset.del();
		if(mVORMessages.size() > 0) mVORMessages.del();
	}
	
	def preProcess(combine : (MemoryChunk[M]) => M) {
		resetSRBuffer();

		val r0 = mNumActiveVertexes;
		val [ r1, r2 ] = preProcessEdgeOrientMessages(combine);
		val r3 = preProcessVertexOrientMessages(combine);

		mVOSInputCount = 0L;
		mNumActiveVertexes = 0L;
		
		return [ r0, r1, r2, r3 ];
	}
	
	def exchangeMessages(EOEnable :Boolean, VOEnable :Boolean) :void {
		val numLocalVertexes2N = mIds.numberOfLocalVertexes2N();
		val numPlaces = mTeam.size();
		val recvCount = new MemoryChunk[Int](numPlaces);
		val recvOffset = new MemoryChunk[Int](numPlaces + 1);

		mEOREnabled = EOEnable;
		mVOREnabled = VOEnable;
		
		if(EOEnable) {
			if(mEOSCount.size() == 0L) {
				// this place has no message to send but it must prepare for receiving messages
				mEOSCount = new MemoryChunk[Int](numPlaces, (i:Long) => 0);
				mEOSOffset = new MemoryChunk[Int](numPlaces + 1, (i:Long) => 0);
			}
			
			mTeam.alltoall(mEOSCount, recvCount);
			
			recvOffset(0) = 0;
			for(i in recvCount.range()) {
				recvOffset(i + 1) = recvOffset(i) + recvCount(i);
			}
			
			val recvSize = recvOffset(numPlaces);

			val EORIdsTmp = new MemoryChunk[Long](recvSize);
			mTeam.alltoallv(mEOSIds, mEOSOffset, mEOSCount, EORIdsTmp, recvOffset, recvCount);
			mEOSIds.del();

			val EORMessagesTmp = new MemoryChunk[M](recvSize);
			mTeam.alltoallv(mEOSMessages, mEOSOffset, mEOSCount, EORMessagesTmp, recvOffset, recvCount);
			mEOSMessages.del();
			
			mEOSCount.del();
			mEOSOffset.del();

			val EORIds = new MemoryChunk[Long](recvSize);
			mEORMessages = new MemoryChunk[M](recvSize);
			
			Parallel.sort(mIds.lgl, EORIdsTmp, EORMessagesTmp, EORIds, mEORMessages);

			EORMessagesTmp.del();
			EORIdsTmp.del();
			
			val numLocalVertexes = mIds.numberOfLocalVertexes();
			mEOROffset = new MemoryChunk[Long](numLocalVertexes+1);
			Parallel.makeOffset(EORIds, mEOROffset);
			EORIds.del();
		}
		
		if(VOEnable) {
			if(mVOSCount.size() == 0L) {
				// this place has no message to send but it must prepare for receiving messages
				mVOSMask = new Bitmap(numLocalVertexes2N * numPlaces, false);
				mVOSCount = new MemoryChunk[Int](numPlaces, (i:Long) => 0);
				mVOSOffset = new MemoryChunk[Int](numPlaces + 1, (i:Long) => 0);
			}
			
			mTeam.alltoall(mVOSCount, recvCount);
			
			recvOffset(0) = 0;
			for(i in recvCount.range()) {
				recvOffset(i + 1) = recvOffset(i) + recvCount(i);
			}

			val recvSize = recvOffset(numPlaces);
			
			mVORMessages = new MemoryChunk[M](recvSize);
			mTeam.alltoallv(mVOSMessages, mVOSOffset, mVOSCount, mVORMessages, recvOffset, recvCount);
			mVOSMessages.del();

			mVORHasMessage = new Bitmap(numLocalVertexes2N * numPlaces);
			mTeam.alltoall(mVOSMask.raw(), mVORHasMessage.raw());
			mVOSMask.del();
			
			mVOROffset = new MemoryChunk[Long](Bitmap.numWords(mVORHasMessage.size()) + 1);
			Parallel.scan(mVORHasMessage.raw().range(), mVOROffset, 0L,
					(i:Long, v:Long) => MathAppend.popcount(mVORHasMessage.word(i)) + v,
					(v1:Long, v2:Long) => v1 + v2);
			
			assert recvOffset(numPlaces) as Long ==
				mVOROffset(Bitmap.numWords(numLocalVertexes2N * numPlaces));
		}

		recvCount.del();
		recvOffset.del();
	}
}

