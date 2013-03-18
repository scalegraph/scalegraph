package org.scalegraph.xpregel.comm;

import x10.util.Team;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.xpregel.Vertex;
import org.scalegraph.xpregel.ComputationInterface;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.xpregel.comm.MessageCommunicationService;
import org.scalegraph.xpregel.PregelUtils;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.graph.DistSparseMatrix;
import x10.util.concurrent.AtomicLong;
import org.scalegraph.graph.id.IdStruct;

public class WorkerPlaceGraph[I,V,E]{I haszero, V haszero, E haszero} {
	val mTeam:Team;
	var mVertices:GrowableMemory[Vertex];
	var mMatrix:DistSparseMatrix;
	val mIds : IdStruct;
	
	public def this(team:Team,matrix:DistSparseMatrix) {
		mTeam = team;
		mMatrix = matrix;
		mIds = matrix.ids();
		mVertices = new GrowableMemory[Vertex]();
		initData();
	}
	
	private def initData() {
		val matrix = mMatrix();
		if (here.id == 2) {
			Console.OUT.println(here.id + " vertex index = " + matrix.vertexes.size());
			Console.OUT.println(here.id + " offset index = " + matrix.offsets.size());
			Console.OUT.println(here.id + " edges index = " + matrix.edgeIndexes.size());
		}
		val r1 = 0..(matrix.offsets.size()-2);
		for(vertexId in r1) {
			val vertex = new Vertex(vertexId);
			val length = matrix.offsets(vertexId+1L)-matrix.offsets(vertexId);
			val start = matrix.offsets(vertexId);
			val range = (start..(start+length-1));
			for (edgeIndex in range) {
				val dstId = matrix.vertexes(edgeIndex);
				vertex.addEdges(dstId,1.0,true);
			}
			mVertices.add(vertex);
		}	
		
		//Console.OUT.println(here.id + ":num of vertices = " + mVertices.size());
	}
	
	public def run[M](computation:ComputationInterface[M],service:MessageCommunicationService[M]) {
		val role = mTeam.role()(0);
		val [nthreads,chunkSize] = PregelUtils.splitChunk(0..(mVertices.size()-1));
		val messagesPerThread = new Array[GrowableMemory[Tuple2[Long,M]]](nthreads as Int);
		for(index in messagesPerThread) {
			messagesPerThread(index) = new GrowableMemory[Tuple2[Long,M]](1000);
		}
		val numActiveVertices = new Array[Long](nthreads as Int);
		val numSendMessages = new Array[Long](nthreads as Int);
		do {	
			/* process computation for each vertex in parallel */
			val range = (0..(mVertices.size()-1));
			Parallel.iter(range,(tIndex:Long,range:LongRange) => {
				val i = tIndex as Int;
				numSendMessages([i]) = 0L;
				numActiveVertices([i]) = 0L;
				for (index in range) {
					val vertex = mVertices(index);
					vertex.preComputation();
					val threadId = (range.min / (range.max-range.min+1)) as Int;
					val messages = service.getMessagesForVertex(vertex);
					if (messages.size() > 0) {
						vertex.setAlive();
					}
					if (!vertex.isHalted()) {
						val sendMessages = computation.do_computation(vertex,messages);
						messagesPerThread([i]).add(sendMessages);
						numSendMessages([i]) = numSendMessages([i]) + sendMessages.size();
					}
					if (!vertex.isHalted()) {
						numActiveVertices([i])++;
					}
					vertex.postComputation();
				}
			});
			for (index in messagesPerThread) {
				val m = messagesPerThread(index);
				service.addSendMessages(m);
				m.clear();
			}
			
			/* get number of active vertices and the number of messages */
			var sumActiveVertices:Long = 0L;
			var sumSendMessages:Long = 0L;
			for(index in numActiveVertices) {
				sumActiveVertices += numActiveVertices(index);
			}
			for(index in numSendMessages) {
				sumSendMessages += numSendMessages(index);
			}
			
			/* 
			 * get the total number of active vertices and the number of messages
			 * if the total number of active vertices and the number of messages are 0
			 * then the process is finished 
			 */
			val sumAllActiveVertices = mTeam.allreduce(role,sumActiveVertices,Team.ADD);
			val sumAllSendMessages = mTeam.allreduce(role,sumSendMessages,Team.ADD);
			if (sumAllActiveVertices == 0L && sumAllSendMessages == 0L) {
				break;
			}
			
			/* synchronize all workers here before exchanging messages */
			mTeam.barrier(role);
			
			/* exchanging messages */
			service.exchangeMessages();
		}while(true);
	}
	
	public def updateInEdge() {
		
	}
	
	public def getVerticesNumber() = mVertices.size();
	
	public def getEdgesNumber(outerOrIn:Boolean) {
		var length:Long = 0L;
		for (index in mVertices.range()) {
			length += mVertices(index).getEdgesNum(outerOrIn);
		}
		return length;
	}
}
