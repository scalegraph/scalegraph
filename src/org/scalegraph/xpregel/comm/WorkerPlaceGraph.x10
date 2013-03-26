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

public class WorkerPlaceGraph[V,E]{V haszero, E haszero} implements WorkerInterface[V,E]{
	val mTeam:Team;
	
	var mMatrix:SparseMatrix;
	var mVertexValue:GrowableMemory[V];
	var mVertexHalt:GrowableMemory[Boolean];
	var mOutEdgesValue : GrowableMemory[E];
	
	/* for in edge */
	var mInEdgesValue : GrowableMemory[E];
	var mInEdgesId : GrowableMemory[Long];
	var mInEdgesOffset : GrowableMemory[Long];
	
	/* vertex should be alive */
	var mVertexShouldBeAlive : GrowableMemory[Boolean];
	
	/* edges active flag */
	private var mEdgesActive : GrowableMemory[Boolean];

	var mVertexAttribute : HashMap[String,Any];
	var mEdgeAttribute : HashMap[String,Any];
	val mContext : XpregelContext;
	
	public def this(team:Team,matrix:SparseMatrix, context:XpregelContext) {
		mTeam = team;
		mMatrix = matrix;
		mContext = context;
		initData();
		if (here.id == 0) {
			Console.OUT.println("lgl = " + mContext.ids().lgl);
			Console.OUT.println("lgc = " + mContext.ids().lgc);
			Console.OUT.println("lgr = " + mContext.ids().lgr);	
		}
	}
	
	private def initData() {
		val matrix = mMatrix;
		mVertexValue = new GrowableMemory[V](matrix.offsets.size()-1);
		mVertexHalt = new GrowableMemory[Boolean](matrix.offsets.size()-1);
		mEdgesActive = new GrowableMemory[Boolean](matrix.offsets.size()-1);
		mOutEdgesValue = new GrowableMemory[E](matrix.vertexes.size()-1);
		mVertexShouldBeAlive = new GrowableMemory[Boolean](matrix.offsets.size()-1);
		mInEdgesValue = new GrowableMemory[E]();
		mInEdgesId = new GrowableMemory[Long]();
		mInEdgesOffset = new GrowableMemory[Long]();
		
		val r = 0..(matrix.offsets.size()-1);
		for(index in r) {
			mVertexValue.add(Zero.get[V]());
			mVertexHalt.add(false);
			mVertexShouldBeAlive.add(true);
			mEdgesActive.add(true);
		}
	}
	
	public def initInEdge(service : MessageCommunicationService[Tuple2[Long,E],Double]) {
		val tmp1 = service.mReceiveBufferMessages;
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
	
	public def zipVertexValue[T](a:GrowableMemory[T], compute : (v:T) => V){T haszero} {
		assert (a.size() <= mVertexValue.size());
		val tmp = new MemoryChunk[V](a.size());
		Parallel.iter(a.range(),(index:Long) => {
			val v = a(index);
			tmp(index) = compute(v);
		});
		mVertexValue.setMemory(tmp);
	}
	
	public def zipVertexValue[T1,T2](a1:GrowableMemory[T1],
			a2:GrowableMemory[T2], compute : (v1:T1,v2:T2) => V){T1 haszero, T2 haszero} {
		assert(a1.size() == a2.size());
		assert(a1.size() <= mVertexValue.size());
		val tmp = new MemoryChunk[V](a1.size());
		Parallel.iter(a1.range(),(index : Long) => {
			tmp(index) = compute(a1(index),a2(index));
		});
		mVertexValue.setMemory(tmp);
	}
	
	public def zipVertexValue[T1,T2,T3](a1:GrowableMemory[T1],a2:GrowableMemory[T2],a3:GrowableMemory[T3], 
			compute : (v1:T1,v2:T2,v3:T3) => V){T1 haszero, T2 haszero, T3 haszero} {
		assert(a1.size() == a2.size() && a2.size() == a3.size());
		assert(a1.size() <= mVertexValue.size());
		val tmp = new MemoryChunk[V](a1.size());
		Parallel.iter(a1.range(),(index : Long) => {
			tmp(index) = compute(a1(index),a2(index),a3(index));
		});
		mVertexValue.setMemory(tmp);
	}
	
	public def zipEdgeValue[T](a:GrowableMemory[T], compute : (v:T) => E){T haszero} {
		assert(a.size() <= mOutEdgesValue.size());
		val tmp = new MemoryChunk[E](a.size());
		Parallel.iter(a.range(),(index:Long) => {
			tmp(index) = compute(a(index));
		});
		mOutEdgesValue.setMemory(tmp);
	}
	
	public def zipEdgeValue[T1,T2](a1:GrowableMemory[T1], 
			a2: GrowableMemory[T2], compute : (v1:T1,v2:T2) => E){T1 haszero, T2 haszero} {
		assert(a1.size() == a2.size());
		assert(a1.size() <= mOutEdgesValue.size());
		val tmp = new MemoryChunk[E](a1.size());
		Parallel.iter(a1.range(),(index:Long) => {
			tmp(index) = compute(a1(index),a2(index));
		});
		mOutEdgesValue.setMemory(tmp);
	}
	
	public def zipEdgeValue[T1,T2,T3](a1:GrowableMemory[T1], a2: GrowableMemory[T2], 
			a3 : GrowableMemory[T3], compute : (v1:T1,v2:T2,v3:T3) => E){T1 haszero, T2 haszero, T3 haszero} {
		assert(a1.size() == a2.size() && a2.size() == a3.size());
		assert(a1.size() <= mOutEdgesValue.size());
		val tmp = new MemoryChunk[E](a1.size());
		Parallel.iter(a1.range(),(index:Long) => {
			tmp(index) = compute(a1(index),a2(index),a3(index));
		});
		mOutEdgesValue.setMemory(tmp);
	}
	
	public def run[M,A](computation:ComputationInterface[V,E,M,A], aggregator : AggregatorInterface[A], 
			service:MessageCommunicationService[M,A]){M haszero, A haszero} {
		val role = mTeam.role()(0);
		val vertexSize = mMatrix.offsets.size()-1;
		val [nthreads,chunkSize] = PregelUtils.splitChunk(0..(vertexSize-1));
		
		val contextPerThreads = new Array[XContext[M,A]](nthreads as Int);
		val outEdgesBufferPerThreads = new Array[EdgesBuffer[E]](nthreads as Int);
		val inEdgesBufferPerThreads = new Array[EdgesBuffer[E]](nthreads as Int);
		for ( i in (0..(nthreads-1))) {
			val _cont = new XContext[M,A](mContext);
			_cont.setAggregator(aggregator.clone());
			contextPerThreads(i as Int) = _cont;
			val outedge = new EdgesBuffer[E](vertexSize);
			outEdgesBufferPerThreads(i as Int) = outedge;
			val inedge = new EdgesBuffer[E](vertexSize);
			inEdgesBufferPerThreads(i as Int) = inedge;
		}
		
		val numActiveVertices = new Array[Long](nthreads as Int);
		if (here.id == 0) {
			Console.OUT.println("Start Processing SuperStep");
		}
		val _service = service;
		val range = 0..(mMatrix.offsets.size()-2);
		try {
		do {
			val start_time = System.currentTimeMillis();
			preComputation();
			
			/* process computation for each vertex in parallel */
			Parallel.iter(range,(tIndex:Long,r:LongRange) => {
				try {
				val i = tIndex as Int;
				val ra = r;
				val _appContext = contextPerThreads(i);
				_appContext.clearBuff();
				_appContext.setAggregatorValue(aggregator.getAggregatorValue());
				val _outEdgeBuffer = outEdgesBufferPerThreads(i);
				_outEdgeBuffer.setRange(r);
				val _inEdgeBuffer = inEdgesBufferPerThreads(i);
				_inEdgeBuffer.setRange(r);

				val messages = new GrowableMemory[Tuple2[Long,M]](1000);
				numActiveVertices([i]) = 0L;
				val vertex = new Vertex[V,E](0);
				vertex.setEdgesBuffer(_outEdgeBuffer,true);
				vertex.setEdgesBuffer(_inEdgeBuffer,false);
				for (index in ra) {
					vertex.preComputation();
					vertex.updateContext(mContext);
					vertex.setVertexId(index);
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
						computation.do_computation(vertex,messages.data(),_appContext);
					}
					if (!vertex.isHalted()) {
						numActiveVertices([i])++;
					}
					
					vertex.postComputation();
				}
				}catch(e:CheckedThrowable) {
					Console.OUT.println(e);
				}
			});
			Console.OUT.println("End Process ...at "+here.id);
			
			/* modify edges */
			var checkModified : Boolean = false;
			for (index in outEdgesBufferPerThreads) {
				if (outEdgesBufferPerThreads(index).isModified()) {
					checkModified = true;
					break;
				}                                        
			}
			if (checkModified) {
				val offsets = new GrowableMemory[Long]();
				offsets.setMemory(mMatrix.offsets);
				val vertexes = new GrowableMemory[Long]();
				vertexes.setMemory(mMatrix.vertexes);
				EdgesBuffer.merge(outEdgesBufferPerThreads, offsets, vertexes, mOutEdgesValue, vertexSize);
			}
			/* end */
			
			/* get number of active vertices and the number of messages */
			val sumSendMessages = _service.addMessages(contextPerThreads);
			var sumActiveVertices:Long = 0L;
			for(index in numActiveVertices) {
				sumActiveVertices += numActiveVertices(index);
			}
			
			
			/* 
			 * get the total number of active vertices and the number of messages
			 * if the total number of active vertices and the number of messages are 0
			 * then the process is finished 
			 */
			val sumAllActiveVertices = mTeam.allreduce(role,sumActiveVertices,Team.ADD);
			val sumAllSendMessages = mTeam.allreduce(role,sumSendMessages,Team.ADD);
			Console.OUT.println("active vertices: " + sumAllActiveVertices + ", send messages = " + sumAllSendMessages);
			if (sumAllActiveVertices == 0L && sumAllSendMessages == 0L) {
				break;
			}
			
			/* synchronize all workers here before exchanging messages */
			mTeam.barrier(role);
			
			/* exchanging messages */
			_service.exchangeMessages();
			
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
			Console.OUT.println(e);
		}
		
	}
	
	public def run[M,A](do_computation:(vertex:Vertex[V,E],messages:MemoryChunk[Tuple2[Long,M]],context:XContext[M,A]) => void,
			aggregator : AggregatorInterface[A], service:MessageCommunicationService[M,A]){M haszero, A haszero} {
		val role = mTeam.role()(0);
		val vertexSize = mMatrix.offsets.size()-1;
		val [nthreads,chunkSize] = PregelUtils.splitChunk(0..(vertexSize-1));
		if (here.id == 0){
			Console.OUT.println(here.id+":num threads = " + nthreads + ", chunkSize = " + chunkSize);
		}
		val contextPerThreads = new Array[XContext[M,A]](nthreads as Int);
		val outEdgesBufferPerThreads = new Array[EdgesBuffer[E]](nthreads as Int);
		val inEdgesBufferPerThreads = new Array[EdgesBuffer[E]](nthreads as Int);
		for ( i in (0..(nthreads-1))) {
			val _cont = new XContext[M,A](mContext);
			_cont.setAggregator(aggregator.clone());
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
						_context.setAggregatorValue(aggregator.getAggregatorValue());
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
		mContext.increaseSuperStep();
	}
	
	public def postComputation() {
		
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
			
		}
	}
	
	public def getEdgesValue(index:Long, outOrIn:Boolean, edges:GrowableMemory[E]):void {
		if (outOrIn) {
			if (mEdgesActive(index)) {
				val _offsets = mMatrix.offsets;
				assert(index < _offsets.size()-1);
				assert(index >= 0);
				val start = _offsets(index);
				val end = _offsets(index+1);
				if (end-start > 0) {
					edges.add(mOutEdgesValue.data().subpart(start,end-start));
				}
			}
		}else {
			
		}
	}
	
	public def getEdgesNum(index:Long,outOrIn:Boolean):Long {
		val _offsets = mMatrix.offsets;
		assert(index < _offsets.size()-1);
		assert(index >= 0);
		return _offsets(index+1) - _offsets(index);
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
