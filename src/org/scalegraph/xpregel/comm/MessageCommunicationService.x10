package org.scalegraph.xpregel.comm;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.tuple.Tuple2;
import x10.util.Team;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.xpregel.Vertex;
public class MessageCommunicationService[M] {
	var mSendBufferMessages:GrowableMemory[Tuple2[Long,M]];
	var mReceiveBufferMessages:GrowableMemory[Tuple2[Long,M]];
	val mTeam:Team;
	
	public def this(team:Team,capacity:Long) {
		mTeam = team;
		mSendBufferMessages = new GrowableMemory[Tuple2[Long,M]](capacity);
		mReceiveBufferMessages = new GrowableMemory[Tuple2[Long,M]](capacity);
	}
	
	public def addSendMessages(buffer:GrowableMemory[Tuple2[Long,M]]) {
		mSendBufferMessages.add(buffer.data());
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
		
	}
	
	/**
	 * TODO
	 * return real messages for particular vertex
	 * Now it just returns dummy
	 */
	public def getMessagesForVertex(vertex:Vertex):MemoryChunk[M] {
		return new MemoryChunk[M]();
	}
}
