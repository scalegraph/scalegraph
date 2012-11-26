package org.scalegraph.id;
import org.scalegraph.id.IdStruct;
import org.scalegraph.id.*;

public class LocalRIdConverter (ids: IdStruct) implements IdConverter[Long]  {
	public static def getR(ids: IdStruct, rr: Long) = (rr >> ids.lgl) as Int;
	public def getR(rr: Long) = getR(ids, rr);
	
	public static def getC(ids: IdStruct, rr: Long) = -1;
	public def getC(rr: Long) = getC(ids, rr);
	
	public static def getCR(ids: IdStruct, rr: Long) = (rr >> ids.lgl) as Int;
	public def getCR(rr: Long) = getCR(ids, rr);
	
	public static def getLocal(ids: IdStruct, rr: Long) = rr & ((1 << ids.lgl) - 1);
	public def getLocal(rr: Long) = getLocal(ids, rr);
	
	public static def make(ids: IdStruct, local: Long, CR: Int) = (CR << ids.lgl) + local;
	public def make(local: Long, CR: Int) = make(ids, local, CR);
	
	public static def make(ids: IdStruct, local: Long, C: Int, R: Int) = (R << ids.lgl) + local;;
	public def make(local: Long, C: Int, R: Int) = make(ids, local, C, R);
	
	public def toRoundRobin(lr:Long) : Long {
		return RoundRobinIdConverter.make(ids, getLocal(lr), getCR(lr));
	}
	public def toSwizzled(lr:Long) : Long {
		return SwizzledIdConverter.make(ids, getLocal(lr), getCR(lr));
	}
	public def toLocalR(lr:Long) : Long = lr;
	public def toLocalC(lr:Long) : Long {
		return LocalCIdConverter.make(ids, getLocal(lr), getC(lr));
	}
}
