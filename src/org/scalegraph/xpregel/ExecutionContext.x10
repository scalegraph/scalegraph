package org.scalegraph.xpregel;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.Bitmap;
import org.scalegraph.concurrent.Team2;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.util.MathAppend;
import org.scalegraph.graph.id.OnedC;

struct MessageBuffer[M] { M haszero } {
	val messages :GrowableMemory[M] = new GrowableMemory[M]();
	val dstIds :GrowableMemory[Long] = new GrowableMemory[Long]();
	
	def this() { }
}

class ExecutionContext[M, A] { M haszero, A haszero } {
	val mTeam :Team2;
	val mIds :IdStruct;
	val mNumThreads :Int;
	var mSuperstep :Int;
	
	val mDtoS :OnedC.DtoS; // for debug only

	var mInEdgesOffset :MemoryChunk[Long];
	var mInEdgesVertex :MemoryChunk[Long]; // for debug only
	
	val mEOSMessages :MemoryChunk[MessageBuffer[M]];
	
	var mVOSEnabled :Bitmap;
	var mVOSMessages :MemoryChunk[M];

	var mEdgeOrientOrVertexOrient :Boolean;
	
	val mEORMessages :MessageBuffer[M] = new MessageBuffer[M]();
	var mEOROffset :MemoryChunk[Long];
	
	var mVOREnabled :Bitmap;
	var mVOROffset :MemoryChunk[Long];
	var mVORMessages :MemoryChunk[M];
	val mVORTmpBuffer :GrowableMemory[M] = new GrowableMemory[M]();
	
	var mAggregatedValue :A;
	
	def this(team :Team2, ids :IdStruct, numThreads :Int)
	{
		mTeam = team;
		mIds = ids;
		mNumThreads = numThreads;
		mSuperstep = 0;
		mDtoS = new OnedC.DtoS(ids);
		
		mEOSMessages = new MemoryChunk[MessageBuffer[M]](numThreads * team.size());
		for(i in mEOSMessages.range())
			mEOSMessages(i) = MessageBuffer[M]();
		
		// initialize for first step
		mEdgeOrientOrVertexOrient = true;
		mEOROffset = new MemoryChunk[Long](ids.numberOfLocalVertexes() + 1);
		for(i in mEOROffset.range()) mEOROffset(i) = 0L;
	}
	
	def del() {
		// TODO:
	}
	
	def setInEdge[E](inEdge :GraphEdge[E]) {
		mInEdgesOffset = inEdge.offsets;
		mInEdgesVertex = inEdge.vertexes;
	}
	
	def allocateVOSBuffer() {
		if(mVOSEnabled != null)
			throw new Exception("Invalid program ...");
		mVOSEnabled = new Bitmap(mIds.numberOfLocalVertexes(), false);
		mVOSMessages = new MemoryChunk[M](mIds.numberOfLocalVertexes());
	}
	
	def message(srcid :Long) {
		if(mEdgeOrientOrVertexOrient) {
			// edge orient
			return mEORMessages.messages.data().subpart(
					mEOROffset(srcid), mEOROffset(srcid + 1) - mEOROffset(srcid));
		}
		else {
			// vertex orient
			val inEdgeOffset = mInEdgesOffset();
			val inEdgeVertex = mInEdgesVertex();
			val bmp = mVOREnabled;
			val offset = mVOROffset;
			val mes = mVORMessages;
			val start = inEdgeOffset(srcid);
			val end = inEdgeOffset(srcid + 1);
			val length = end - start;
			val buffer = mVORTmpBuffer;
			
			buffer.setSize(length);
			for(i in 0..(length-1)) {
				val dst = inEdgeVertex(start + i);
				val wordOffset = Bitmap.offset(dst);
				val wordMask = Bitmap.mask(dst) - 1;
				
				assert bmp(dst) == true;
				
				val mesOffset = offset(wordOffset) +
					MathAppend.popcount(bmp.word(wordOffset) & wordMask);
				buffer(i) = mes(mesOffset);
				
				assert srcid == mDtoS(inEdgeVertex(mesOffset));
			}
			
			return buffer.data();
		}
	}
}

