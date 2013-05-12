package org.scalegraph.xpregel.comm;

import x10.util.Team;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.xpregel.Vertex;
import org.scalegraph.xpregel.ComputationInterface;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.xpregel.comm.MessageCommunicationService;
import org.scalegraph.xpregel.PregelUtils;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.graph.DistSparseMatrix;
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

public class WorkerPlaceGraph[V,E]{V haszero, E haszero} implements WorkerInterface[V,E]{
	val mTeam :Team2;
	val mIds :IdStruct;
	
	//var mMatrix:SparseMatrix;
	var mVertexValue :MemoryChunk[V];
	val mVertexHalt :Bitmap;
	val mVertexShouldBeActive :Bitmap;
	
	var mOutEdgesOffset :MemoryChunk[Long];
	var mOutEdgesVertex :MemoryChunk[Long];
	var mOutEdgesValue : MemoryChunk[E];
	val mEdgesModified :Bitmap;

	var mInEdgesOffset :MemoryChunk[Long];
	var mInEdgesVertex :MemoryChunk[Long];
	var mInEdgesValue : MemoryChunk[E];
	
	//val mContext : XpregelContext;
	
	public def this(team :Team2, matrix :DistSparseMatrix) {
		mTeam = team;
		mIds = matrix.ids();
		
		val m = matrix();
		val numVertexes = mIds.numberOfLocalVertexes();
		val numEdges = m.vertexes.size();
		
		mVertexValue = new MemoryChunk[V](numVertexes);
		mVertexHalt = new Bitmap(numVertexes, false);
		mVertexShouldBeActive = new Bitmap(numVertexes, true);
		
		mOutEdgesOffset = m.offsets;
		mOutEdgesVertex = m.vertexes;
		mOutEdgesValue = new MemoryChunk[E](numEdges);
		mEdgesModified = new Bitmap(numVertexes, false);
		
		mInEdgesOffset = new MemoryChunk[Long](0);
		mInEdgesVertex = new MemoryChunk[Long](0);
		mInEdgesValue = new MemoryChunk[E](0);
		
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
	
	public def initDefaultVertexValue(value : V) {
		Parallel.iter(mVertexValue.range(), (tid :Long, r :LongRange) => {
			for(i in r) mVertexValue(i) = value;
		});
	}
	
	public def zipVertexValue[T](a:MemoryChunk[T], compute : (v:T) => V) {
		Parallel.iter(mVertexValue.range(), (tid :Long, r :LongRange) => {
			for(i in r) mVertexValue(i) = compute(a(i));
		});
	}
	
	public def zipVertexValue[T1,T2](a1:MemoryChunk[T1],
			a2:GrowableMemory[T2], compute : (v1:T1,v2:T2) => V) {
		assert(a1.size() == a2.size());
		Parallel.iter(mVertexValue.range(), (tid :Long, r :LongRange) => {
			for(i in r) mVertexValue(i) = compute(a1(i), a2(i));
		});
	}
	
	public def zipVertexValue[T1,T2,T3](a1:MemoryChunk[T1],a2:MemoryChunk[T2],a3:MemoryChunk[T3], 
			compute : (v1:T1,v2:T2,v3:T3) => V) {
		assert(a1.size() == a2.size() && a2.size() == a3.size());
		Parallel.iter(mVertexValue.range(), (tid :Long, r :LongRange) => {
			for(i in r) mVertexValue(i) = compute(a1(i), a2(i), a3(i));
		});
	}
	
	public def initDefaultEdgeValue(value : E) {
		Parallel.iter(mOutEdgesValue.range(), (tid :Long, r :LongRange) => {
			for(i in r) mOutEdgesValue(i) = value;
		});
	}
	
	public def zipEdgeValue[T](a:MemoryChunk[T], compute : (v:T) => E) {
		if (here.id == 0) {
			Console.OUT.println("a.size = " + a.size());
		}
		Parallel.iter(mOutEdgesValue.range(), (tid :Long, r :LongRange) => {
			for(i in r) mOutEdgesValue(i) = compute(a(i));
		});
		if (here.id == 0) {
			Console.OUT.println("edges value size = " + mOutEdgesValue.size());
			Console.OUT.println("edges id size = " + mVertexValue.size());
			Console.OUT.println("edges size = " + mOutEdgesVertex.size());
		}
	}
	
	public def zipEdgeValue[T1,T2](a1:MemoryChunk[T1], 
			a2: MemoryChunk[T2], compute : (v1:T1,v2:T2) => E) {
		assert(a1.size() == a2.size());
		Parallel.iter(mOutEdgesValue.range(), (tid :Long, r :LongRange) => {
			for(i in r) mOutEdgesValue(i) = compute(a1(i), a2(i));
		});
	}
	
	public def zipEdgeValue[T1,T2,T3](a1:MemoryChunk[T1], a2: MemoryChunk[T2], 
			a3 : MemoryChunk[T3], compute : (v1:T1,v2:T2,v3:T3) => E) {
		assert(a1.size() == a2.size() && a2.size() == a3.size());
		Parallel.iter(mOutEdgesValue.range(), (tid :Long, r :LongRange) => {
			for(i in r) mOutEdgesValue(i) = compute(a1(i), a2(i), a3(i));
		});
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
