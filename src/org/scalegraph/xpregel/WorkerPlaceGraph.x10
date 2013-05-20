package org.scalegraph.xpregel;

import x10.util.Team;
import x10.util.concurrent.AtomicLong;

import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.xpregel.Vertex;
import org.scalegraph.xpregel.ComputationInterface;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.xpregel.PregelUtils;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.graph.DistSparseMatrix;
import org.scalegraph.graph.id.OnedC;
import x10.util.concurrent.AtomicLong;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.xpregel.XpregelContext;
import org.scalegraph.graph.SparseMatrix;
import x10.util.ArrayList;
import org.scalegraph.xpregel.XContext;
import x10.util.HashMap;
import org.scalegraph.xpregel.EdgesBuffer;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.concurrent.Team2;
import org.scalegraph.util.Bitmap;

class WorkerPlaceGraph[V,E] {V haszero, E haszero} {
	val mTeam :Team2;
	val mIds :IdStruct;
	val mVtoD :OnedC.VtoD;
	
	//var mMatrix:SparseMatrix;
	var mVertexValue :MemoryChunk[V];
	val mVertexActive :Bitmap;
	val mVertexShouldBeActive :Bitmap;
	
	val mOutEdge :GraphEdge[E];
	val mInEdge :GraphEdge[E];
	var mInEdgesMask :Bitmap;
	
	//val mContext : XpregelContext;
	
	public def this(team :Team, matrix :DistSparseMatrix) {
		mTeam = new Team2(team);
		mIds = matrix.ids();
		mVtoD = new OnedC.VtoD(matrix.ids());
		
		val numVertexes = mIds.numberOfLocalVertexes();
		
		mVertexValue = new MemoryChunk[V](numVertexes);
		mVertexActive = new Bitmap(numVertexes, true);
		mVertexShouldBeActive = new Bitmap(numVertexes, true);

		mOutEdge = new GraphEdge[E](matrix());
		mInEdge = new GraphEdge[E]();
		mEdgesModified = new Bitmap(numVertexes, false);
		
		if (here.id == 0) {
			Console.OUT.println("lgl = " + mIds.lgl);
			Console.OUT.println("lgc = " + mIds.lgc);
			Console.OUT.println("lgr = " + mIds.lgr);	
		}
	}
	
	public def initInEdge(service : MessageCommunicationService[Tuple2[Long,E],Double]) {
		val tmp1 = service.mReceiveBufferMessages;
		if (here.id == 0) {
			Console.OUT.println("Worker 0: " + tmp1.size() + " in edges");
		}
		val tmp2 = service.mOffsets;
		val tmpEdgeId = new MemoryChunk[Long](tmp1.size());
		val tmpEdgeValues = new MemoryChunk[E](tmp1.size());
		Parallel.iter(tmp1.range(),(index : Long) => {
			tmpEdgeId(index) = tmp1(index).get2().get1();
			tmpEdgeValues(index) = tmp1(index).get2().get2();
		});
		mInEdgesValue.clear();
		mInEdgesId.clear();
		mInEdgesOffset.clear();
		
		mInEdgesId.add(tmpEdgeId);
		mInEdgesValue.add(tmpEdgeValues);
		mInEdgesOffset.add(tmp2.data());
	}
	
	// src will be destroyed
	private static def computeAggregate[A](team :Team2, src :MemoryChunk[A], buffer :MemoryChunk[A],
			aggregator :(MemoryChunk[A])=>A) :A
	{
		val root = (team.base.role()(0) == 0);
		src(0) = aggregator(src);
		team.gather(0, src.subpart(0, 1), buffer);
		if(root) buffer(0) = aggregator(buffer);
		team.bcast(0, buffer.subpart(0, 1), src.subpart(0, 1));
		return src(0);
	}
	
	public def run[M, A](compute :(ctx:VertexContext[V,E,M,A],messages:MemoryChunk[M]) => void, 
			aggregator :(MemoryChunk[A])=>A,
			end :(Int,A)=>Boolean) { M haszero, A haszero }
	{
		val root = (mTeam.base.role()(0) == 0);
		val numThreads = Runtime.NTHREADS;
		val numLocalVertexes = mIds.numberOfLocalVertexes();
		val ectx :MessageCommunicator[M] =
			new MessageCommunicator[M](mTeam, mIds, numThreads);
		val vctxs = new Array[VertexContext[V, E, M, A]](numThreads,
				(i :Int) => new VertexContext[V, E, M, A](this, ectx, i));
		val edgeProviderList = new Array[EdgeProvider[E]](numThreads,
				(i:Int) => vctxs(i).mEdgeProvider);
		val intermedAggregateValue = new MemoryChunk[A](numThreads);
		val aggregateBuffer = new MemoryChunk[A](root ? mTeam.size() : 0);
		
		/* Statistics
		 * 0 : Active vertexes
		 * 1 : Sent messages
		 */
		val statistics = new MemoryChunk[Long](2*2);
		
		for(ss in 0..10000) {
			ectx.mSuperstep = ss;
			
			// initialize halt flag
			val vertexActvieBitmap = mVertexActive.data();
			MemoryChunk.copy(mVertexShouldBeActive.data(), 0L,
					vertexActvieBitmap, 0L, vertexActvieBitmap.size());
			
			statistics(0) = 0L;
			
			Parallel.iter(0..(numLocalVertexes-1), (tid :Long, r :LongRange) => {
				val vc = vctxs(tid as Int);
				val ep = vc.mEdgeProvider;
				var numProcessed :Long = 0L;
				for(srcid in r) {
					vc.mSrcid = srcid;
					val mes = ectx.message(srcid);
					if(mes.size() > 0 || mVertexActive(srcid)) {
						
						compute(vc, mes);

						if(ep.mEdgeChanged) ep.fixModifiedEdges(srcid);
						if(mVertexActive(srcid)) ++numProcessed;
					}
				}
				intermedAggregateValue(tid) = aggregator(vc.mAggregateValue.data());
				vc.mAggregateValue.clear();
				statistics.atomicAdd(0, numProcessed);
			});
			
			// update out edges
			EdgeProvider.updateOutEdge[E](mOutEdge, edgeProviderList, mIds);
			
			// aggregate
			val aggVal = computeAggregate[A](mTeam, intermedAggregateValue, aggregateBuffer, aggregator);
			for([i] in vctxs) vctxs(i).mAggregatedValue = aggVal;
			/*
			 * if(end(ectx.mAggregatedValue)) {
			 * // terminate
			 * break;
			 * }
			 */
			
			// merge messages and combine if combiner is provided
			val [ numRawMessages, numCombinedMessages, numVertexMessages ] = ectx.preProcess(null);
			statistics(1) = numRawMessages + numVertexMessages;
			
			// check termination
			val recvStatistics = statistics.subpart(2, 2);
			mTeam.allreduce(statistics.subpart(0, 2), recvStatistics, Team.ADD);
			// if there are no active vertex nor messages, we terminate computation.
			if(recvStatistics(0) == 0L && recvStatistics(1) == 0L) {
				break;
			}
			
			// transfer messages
			ectx.exchangeMessages();
		}
		
		ectx.del();
	}
	
	public def run[M,A](compute:(ctx:VertexContext[V,E,M,A],messages:MemoryChunk[M]) => void, 
			aggregator : (MemoryChunk[A])=>A, service:MessageCommunicationService[M,A]){M haszero, A haszero}
	{
		val vertexSize = mMatrix.offsets.size()-1;
		val [nthreads,chunkSize] = PregelUtils.splitChunk(0..(vertexSize-1));
		if (here.id == 0){
			Console.OUT.println(here.id+":num threads = " + nthreads + ", chunkSize = " + chunkSize);
		}
		//val contextPerThreads = new Array[XContext[M,A]](nthreads as Int);
		val outEdgesBufferPerThreads = new Array[EdgesBuffer[E]](nthreads as Int);
		//val inEdgesBufferPerThreads = new Array[EdgesBuffer[E]](nthreads as Int);
		for ( i in (0..(nthreads-1))) {
			val _cont = new XContext[M,A](mContext);
			if (aggregator != null) {
				_cont.setAggregator(aggregator.clone());
			}
			contextPerThreads(i as Int) = _cont;
			val outedge = new EdgesBuffer[E](vertexSize);
			outEdgesBufferPerThreads(i as Int) = outedge;
			val inedge = new EdgesBuffer[E](vertexSize);
			inEdgesBufferPerThreads(i as Int) = inedge;
		}
		
		val numActiveVertices = new Array[Long](nthreads as Int);
		val numSendMessages = new Array[Long](nthreads as Int);
		if (here.id == 0) {
			Console.OUT.println("Start Processing SuperStep");
		}
		val _service = service;
		val range = 0..(mMatrix.offsets.size()-2);
		mContext.resetSuperStep();
		try {
			do {
				val start_time = System.currentTimeMillis();
				preComputation();
				/* process computation for each vertex in parallel */
				Parallel.iter(range,(tIndex:Long,r:LongRange) => {
					try {
						val i = tIndex as Int;
						assert(i < nthreads);
						val _context = contextPerThreads([i]);
						_context.clearBuff();
						if (aggregator != null) {
							_context.setAggregatorValue(aggregator.getAggregatorValue());
						}
						val _outEdgeBuffer = outEdgesBufferPerThreads(i);
						_outEdgeBuffer.setRange(r);
						val _inEdgeBuffer = inEdgesBufferPerThreads(i);
						_inEdgeBuffer.setRange(r);
						val ra = r;
						val vertex = new Vertex[V,E](0);
						val messages = new GrowableMemory[Tuple2[Long,M]](1000);
						vertex.setWorkerInterface(this);
						numSendMessages([i]) = 0L;
						numActiveVertices([i]) = 0L;
						vertex.setEdgesBuffer(_outEdgeBuffer,true);
						vertex.setEdgesBuffer(_inEdgeBuffer,false);
						for (index in ra) {
							vertex.setVertexId(index);
							vertex.preComputation();
							vertex.updateContext(mContext);
							vertex.preComputation();
							if (mContext.getSuperStep() == 0L) {
								if (mVertexShouldBeAlive(index)) {
									vertex.setAlive();
								}
							}
							messages.clear();
							service.getMessagesForVertex(vertex.getVertexId(),messages);
							if (messages.size() > 0) {
								vertex.setAlive();
							}
							if (!vertex.isHalted()) {
								do_computation(vertex,messages.data(),_context);
							}
							if (!vertex.isHalted()) {
								numActiveVertices([i])++;
							}
							vertex.postComputation();
						}						
						messages.del();
					
					}catch(e:CheckedThrowable) {
						e.printStackTrace();
					}
				});
				
				val sumSendMessages = _service.addMessages(contextPerThreads);				
				var sumActiveVertices:Long = 0L;
				for(index in numActiveVertices) {
					sumActiveVertices += numActiveVertices(index);
				}
				val end_process_time = System.currentTimeMillis();
				if (here.id == 0) {
					Console.OUT.println("Process computations at superstep " + mContext.getSuperStep() + ":"+(end_process_time-start_time));
				}
				/* 
				 * get the total number of active vertices and the number of messages
				 * if the total number of active vertices and the number of messages are 0
				 * then the process is finished 
				 */
				if (here.id == 0) {
					Console.OUT.println("sumsendmessages:"+sumSendMessages);
					Console.OUT.println("sumactivevertices:"+sumActiveVertices);
				}
				mTeam.barrier(role);
				val sumAllActiveVertices = mTeam.allreduce(role,sumActiveVertices,Team.ADD);
				val sumAllSendMessages = mTeam.allreduce(role,sumSendMessages,Team.ADD);
				
				if (sumAllActiveVertices == 0L && sumAllSendMessages == 0L) {
					break;
				}
				
				/* synchronize all workers here before exchanging messages */
				mTeam.barrier(role);
				
				/* exchanging messages */
				val start_sending_time = System.currentTimeMillis();
				_service.exchangeMessages();
				val end_sending_time = System.currentTimeMillis();
				if (here.id == 0) {
					Console.OUT.println("Sending Time at superstep " + mContext.getSuperStep() + ":" + (end_sending_time-start_sending_time));
				}
				
				/* aggregator value here */
				if (aggregator != null) {
					aggregator.reset();
					for(index in contextPerThreads) {
						val _context = contextPerThreads(index);
						aggregator.aggregate(_context.getAggregatorValue());
					}
					val sendArray = new Array[A](mTeam.size());
					for(index in sendArray) {
						sendArray(index) = aggregator.getAggregatorValue();
					}
					val recvArray = mTeam.alltoall(role,sendArray);
					for(index in recvArray) {
						if (index(0) != role) {
							aggregator.aggregate(recvArray(index));
						}
					}
				}
				postComputation();
				val end_time = System.currentTimeMillis();
				if (here.id == 0) {
					Console.OUT.println("Process Superstep " + mContext.getSuperStep() + " : " + (end_time-start_time));
				}
			}while(true);
			if (here.id == 0 && aggregator != null) {
				Console.OUT.println("Aggregator value = " + aggregator.getAggregatorValue());
			}
		}catch (e:CheckedThrowable) {
			e.printStackTrace();
		}
		
	}
	
	public def preComputation() {
	}
	
	public def postComputation() {
		mContext.increaseSuperStep();
	}
	
	/* method of worker interface */
	public def getVertexId(index:Long):Long = index;
	public def getEdges(index:Long,outOrIn:Boolean,edges:GrowableMemory[Long]):void {
		if (outOrIn) {
			val _offsets = mMatrix.offsets;
			assert(index < _offsets.size()-1);
			assert(index >= 0);
			val _vertexes = mMatrix.vertexes;
			val start = _offsets(index);
			val end = _offsets(index+1);
			if (end-start > 0L) {
				edges.add(_vertexes.subpart(start,end-start));
			}
		}else {
			assert(index < mInEdgesOffset.size());
			assert(index >= 0);
			val start = mInEdgesOffset(index);
			val end = (index == mInEdgesOffset.size()-1) ? mInEdgesOffset.size() : mInEdgesOffset(index+1);
			if (end-start > 0L) {
				edges.add(mInEdgesId.data().subpart(start,end-start));
			}
		}
	}
	
	public def getEdgesValue(index:Long, outOrIn:Boolean, edges:GrowableMemory[E]):void {
		try {
		if (outOrIn) {
			if (mEdgesActive(index)) {
				val _offsets = mMatrix.offsets;
				assert(index <= _offsets.size()-1);
				assert(index >= 0);
				val start = _offsets(index);
				val end = _offsets(index+1);
				if (end-start > 0) {
					edges.add(mOutEdgesValue.data().subpart(start,end-start));
				}
			}
		}else {
			assert(index < mInEdgesOffset.size());
			assert(index >= 0);
			val start = mInEdgesOffset(index);
			val end = (index == mInEdgesOffset.size()-1) ? mInEdgesOffset.size() : mInEdgesOffset(index+1);
			if (end-start > 0L) {
				edges.add(mInEdgesValue.data().subpart(start,end-start));
			}
		}
		}catch (e:CheckedThrowable) {
			e.printStackTrace();
		}
	}
	
	public def getEdgesNum(index:Long,outOrIn:Boolean):Long {
		if (outOrIn) {
			val _offsets = mMatrix.offsets;
			assert(index < _offsets.size()-1);
			assert(index >= 0);
			return _offsets(index+1) - _offsets(index);
		}else {
			assert(index < mInEdgesOffset.size());
			assert(index >= 0);
			return mInEdgesOffset(index+1) - mInEdgesOffset(index);
		}
	}
	
	public def getVertexValue(index:Long):V {
		assert (index < mVertexValue.size());
		assert (index >= 0);
		return mVertexValue(index);
	}
	
	public def setVertexValue(index:Long,value:V):void {
		assert (index < mVertexValue.size());
		assert (index >= 0);
		mVertexValue(index) = value;
	}
	
	public def voteToHalt(index:Long) {
		assert (index < mVertexHalt.size());
		assert (index >= 0);
		mVertexHalt(index) = true;
	}
	
	public def setActive(index:Long) {
		assert (index < mVertexHalt.size());
		assert (index >= 0);
		mVertexHalt(index) = false;
	}
	
	public def isHalt(index:Long):Boolean {
		assert (index < mVertexHalt.size());
		assert (index >= 0);
		return mVertexHalt(index);
	}
	
	public def setVertexShouldBeAlive(index : Long, value : Boolean):void {
		assert(index < mVertexShouldBeAlive.size());
		mVertexShouldBeAlive(index) = value;
	}
	
	public def clearAllEdges(outOrIn:Boolean, vertexId:Long) :void { 
		assert(vertexId < mEdgesActive.size());
		if (outOrIn) {
			mEdgesActive(vertexId) = false;
		}
	}
}
