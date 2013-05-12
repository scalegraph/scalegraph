package org.scalegraph.xpregel;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.xpregel.comm.AggregatorInterface;

/** 
 * a context for 
 * xpregel.
 * it has type parameter 
 * of message and aggregator
 * 
 */
public class XContext[V, M, A] {
	var mContext : XpregelContext;
	var mBufferSendMessages : Array[GrowableMemory[Tuple2[Long,M]]];
	var aggregator : AggregatorInterface[A];
	val BUFFER_SIZE = 1024L;
	
	public def this(context:XpregelContext) {
		mContext = context;
		mBufferSendMessages = new Array[GrowableMemory[Tuple2[Long,M]]](mContext.getNumWorkers());
		for(i in (0..(mContext.getNumWorkers()-1))) {
			mBufferSendMessages(i) = new GrowableMemory[Tuple2[Long,M]](BUFFER_SIZE);
		}
	}
	
	public def del() {
		for (i in (0..(mContext.getNumWorkers()-1))) {
			mBufferSendMessages(i).del();
		}
	}
	
	public def clearBuff() {
		for (i in (0..(mContext.getNumWorkers()-1))) {
			mBufferSendMessages(i).clear();
		}
	}
	
	public def bufferSize():Long {
		var sum:Long = 0L;
		for (i in mBufferSendMessages) {
			sum += mBufferSendMessages(i).size();
		}
		return sum;
	}
	
	public def getBuffer(workerId:Int) {
		assert (workerId >= 0);
		assert (workerId < mBufferSendMessages.size);
		return mBufferSendMessages(workerId);
	}
	
	/**
	 * put messages using dst id of 
	 * vertex
	 */
	public def putMessage(dstId:Long,message:M) {
		val workerId = mContext.getWorkerPlaceFromDstId(dstId) as Int;
		mBufferSendMessages(workerId).add(new Tuple2[Long,M](dstId,message));
	}
	
	/**
	 * put messages using src id of vertex 
	 * send the messages. User must explicitly
	 * specify the destination id node
	 */
	public def putMessageForWorker(srcId:Long,message:M,workerId:Int) {
		
	}
	
	/**
	 * get aggregator value
	 */
	public def getAggregatorValue():A {
		if (aggregator == null) {
			throw new UnsupportedOperationException();
		}
		return aggregator.getAggregatorValue();
	}
	
	/**
	 * this method shoud be called by the framework
	 * user does not need to call this method
	 */
	public def setAggregatorValue(value:A) {
		if (aggregator != null) {
			aggregator.setAggregatorValue(value);
		}
	}
	
	public def resetAggregatorValue() {
		if (aggregator != null) {
			aggregator.reset();
		}
	}
	
	/**
	 * aggregate the value
	 */
	public def aggregate(value:A) {
		if (aggregator == null) {
			throw new UnsupportedOperationException();
		}
		aggregator.aggregate(value);
	}
	
	/**
	 * aggregator is setted or not
	 */
	public def hasAggregator():Boolean = (aggregator != null);
	
	/**
	 * this method should be called by the framework
	 * user does not need to call this method
	 */
	public def setAggregator(_aggregator : AggregatorInterface[A]) {
		aggregator = _aggregator;
	}
}