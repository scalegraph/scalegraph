package org.scalegraph.id;
import org.scalegraph.id.IdStruct;
import org.scalegraph.id.*;

public class LocalCIdConverter (ids: IdStruct) implements IdConverter[Long]  {
	public static def getR(ids: IdStruct, rr: Long) = -1;
	public def getR(rr: Long) = getR(ids, rr);
	
	public static def getC(ids: IdStruct, rr: Long) = (rr >> ids.lgl) as Int;
	public def getC(rr: Long) = getC(ids, rr);
	
	public static def getCR(ids: IdStruct, rr: Long) = (rr >> ids.lgl) as Int;
	public def getCR(rr: Long) = getCR(ids, rr);
	
	public static def getLocal(ids: IdStruct, rr: Long) = rr & ((1 << ids.lgl) - 1);
	public def getLocal(rr: Long) = getLocal(ids, rr);
	
	public static def make(ids: IdStruct, local: Long, CR: Int) = (CR << ids.lgl) + local;
	public def make(local: Long, CR: Int) = make(ids, local, CR);
	
	public static def make(ids: IdStruct, local: Long, C: Int, R: Int) = (C << ids.lgl) + local;;
	public def make(local: Long, C: Int, R: Int) = make(ids, local, C, R);
	
	public def toRoundRobin(lc:Long) : Long {
		return RoundRobinIdConverter.make(ids, getLocal(lc), getCR(lc));
	}
	public def toSwizzled(lc:Long) : Long {
		return SwizzledIdConverter.make(ids, getLocal(lc), getCR(lc));
	}
	public def toLocalR(lc:Long) : Long {
		return LocalRIdConverter.make(ids, getLocal(lc), getR(lc));
	}
	public def toLocalC(lc:Long) : Long = lc;
}
