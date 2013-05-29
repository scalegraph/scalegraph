package org.scalegraph.xpregel;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.Tuple2;

public class EdgesBuffer[E] {
	
	public static val hasChanged  :	 GrowableMemory[Boolean] = new GrowableMemory[Boolean]();
	public static val mOffset	  :  GrowableMemory[Tuple2[Long,Long]] = new GrowableMemory[Tuple2[Long,Long]]();
	var edgesId   : GrowableMemory[Long];
	var edgesValue : GrowableMemory[E];
	var count	:	Long;
	var hasModified : Boolean;
	var range	: LongRange;
	
	public static def initShareBuffer(numOfVertex : Long) : void{
		for(i in (0..(numOfVertex-1))) {
			hasChanged.add(false);
			mOffset.add(new Tuple2[Long,Long](0,0));
		}
	}
	
	public def this(numOfVertex:Long) {
		edgesId = new GrowableMemory[Long]();
		edgesValue  = new GrowableMemory[E]();
		hasModified = false;
		count = 0L;
	}
	
	public def setRange(_range : LongRange):void {
		range = _range;
	}
	
	public def reset() {
		hasModified = false;
		count = 0L;
		edgesValue.clear();
		edgesId.clear();
	}
	
	public def addEdges(vertexId : Long, edges : GrowableMemory[Tuple2[Long,E]]) {
		hasChanged(vertexId) = true;
		val tuple = new Tuple2[Long,Long](count,edges.size());
		mOffset(vertexId) = tuple;
		count += edges.size();
		for(index in edges.range()) {
			edgesId.add(edges(index).get1());
			edgesValue.add(edges(index).get2());
		}
	}
	
	public def inMyRange(index:Long):Boolean = ( index >= range.min && index <= range.max );

	public def addEdges(vertexId : Long, _edgesId : GrowableMemory[Long], _edgesValue : GrowableMemory[E]) {
		assert(_edgesId.size() == _edgesValue.size());
		hasChanged(vertexId) = true;
		val tuple = new Tuple2[Long,Long](count,edgesId.size());
		mOffset(vertexId) = tuple;
		count += edgesId.size();
		edgesId.add(_edgesId.raw());
		edgesValue.add(_edgesValue.raw());
	}
	
	public def modify(value:Boolean) {
		hasModified = value;
	}
	
	public def isModified():Boolean = hasModified;
	
	public static def merge[E](buffers : Array[EdgesBuffer[E]], targetOffset : GrowableMemory[Long], targetId : GrowableMemory[Long], targetValue : GrowableMemory[E],
		numOfVertex : Long) {
		val tmpId = new GrowableMemory[Long]();
		val tmpValues = new GrowableMemory[E]();
		val tmpOffset = new MemoryChunk[Long](targetOffset.size());
		tmpOffset(0) = 0L;
		val range = (0..(numOfVertex-1));
		for(index in range) {
			var modified:Boolean = false;
			if (hasChanged(index)) {
				for(bufIndex in buffers) {
					if (buffers(bufIndex).inMyRange(index)) {
						modified = true;
						val tuple = mOffset(index);
						val start = tuple.get1();
						val size =  tuple.get2();
						tmpId.add(buffers(bufIndex).edgesId.raw().subpart(start,size));
						tmpValues.add(buffers(bufIndex).edgesValue.raw().subpart(start,size));
						tmpOffset(index+1) = tmpOffset(index) + size;
					}
				}
				hasChanged(index) = false;
			}else {
				val start = targetOffset(index);
				val size = targetOffset(index+1) - targetOffset(index);
				tmpId.add(targetId.raw().subpart(start,size));
				tmpValues.add(targetValue.raw().subpart(start,size));
				tmpOffset(index+1) = tmpOffset(index) + size;
			}
		}
		
		targetOffset.setMemory(tmpOffset);
		targetId.setMemory(tmpId.raw());
		targetValue.setMemory(tmpValues.raw());
		
		for(index in buffers) {
			buffers(index).reset();
		}
	}
}