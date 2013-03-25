package org.scalegraph.xpregel;
import org.scalegraph.util.GrowableMemory;

public class EdgesBuffer[E] {
	
	var hasChanged : GrowableMemory[Boolean];
	var mOffset	  : GrowableMemory[Tuple2[Long,Long]];
	var edgesId   : GrowableMemory[Long];
	var edgesValue : GrowableMemory[E];
	var count	:	Long;
	
	var hasModified : Boolean;
	
	public def this(numOfVertex:Long) {
		hasChanged = new GrowableMemory[Boolean](numOfVertex);
		mOffset	= new GrowableMemory[Long](numOfVertex);
		for (i in (0..(numOfVertex-1))) {
			hasChanged.add(false);
			mOffset.add(0);
		}
		edgesId = new GrowableMemory[Long]();
		edgesValue  = new GrowableMemory[E]();
		hasModified = false;
		count = 0L;
	}
	
	public def reset() {
		hasModified = false;
		count = 0L;
		for(index in hasChanged.range()) {
			hasChanged(index) = false;
		}
	}
	
	public def addEdges(vertexId : Long, edges : GrowableMemory[Tuple2[Long,E]]) {
		hasChanged(vertexId) = true;
		val tuple = new Tuple2[Long,Long](count,edges.size());
		mOffset(vertexId) = tuple;
		count += edges.size();
		for(index in edges.range()) {
			edgesId.add(edges(index).get1();
			edgesValue.add(edges(index).get2();
		}
	}
	
	public def modifiedAt(index:Long):Boolean = hasChanged(index);
	
	public def addEdges(vertexId : Long, _edgesId : GrowableMemory[Long], _edgesValue : GrowableMemory[E]) {
		assert(_edgesId.size() == _edgesValue.size());
		hasChanged(vertexId) = true;
		val tuple = new Tuple2[Long,Long](count,edgesId.size());
		mOffset(vertexId) = tuple;
		count + = edgesId.size();
		edgesId.add(_edgesId.data());
		edgesValue.add(_edgesValue.data());
	}
	
	public def modify(value:Boolean) {
		hasModified = value;
	}
	
	public def isModified():Boolean = hasModified;
	
	public static def merge(buffers : Array[EdgesBuffer[E]], targetOffset : GrowableMemory[Long], targetId : GrowableMemory[Long]; targetValue : GrowableMemory[E],
		numOfVertex : Long) {
		val tmpId = new GrowableMemory[Long]();
		val tmpValues = new GrowableMemory[E]();
		val tmpOffset = new MemoryChunk[Long](targetOffset.size());
		tmpOffset(0) = 0L;
		range = (0..(numOfVertex-1));
		for(index in range) {
			var modified:Boolean = false;
			for(bufIndex in buffers) {
				if (buffers(bufIndex).modifiedAt(index)) {
					modified = true;
					val tuple = buffers(bufIndex).mOffset(index);
					val start = tuple.get1();
					val size =  tuple.get2();
					tmpId.add(buffers(bufIndex).edgesId.data().subpart(start,size));
					tmpValues.add(buffers(bufIndex).edgesValue.data().subpart(start,size));
					tmpOffset(index+1) = tmpOffset(index) + size;
					break;
				}
			}
			if (!modified) {
				val start = targetOffset(index);
				val size = targetOffset(index+1) - targetOffset(index);
				tmpId.add(targetId.data().subpart(start,size));
				tmpValues.add(targetValue.data().subpart(start,size));
				tmpOffset(index+1) = tmpOffset(index) + size;
			}
		}
		
		targetOffset.setMemory(tmpOffset);
		targetId.setMemory(tmpId.data());
		targetValue.setMemory(tmpValues.data());		
	}
	
	
}