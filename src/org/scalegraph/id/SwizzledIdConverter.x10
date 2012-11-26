package org.scalegraph.id;
import org.scalegraph.id.IdStruct;
import org.scalegraph.id.*;
import org.scalegraph.util.tuple.Tuple3;

public class SwizzledIdConverter (ids: IdStruct) implements IdConverter[Long]  {
	public static def getR(ids: IdStruct, rr: Long) = (rr >> ids.lgl) as Int & ((1 << ids.lgr) - 1);
	public def getR(rr: Long) = getR(ids, rr);
	
	public static def getC(ids: IdStruct, rr: Long) = (rr >> (ids.lgr + ids.lgl)) as Int;
	public def getC(rr: Long) = getC(ids, rr);
	
	public static def getCR(ids: IdStruct, rr: Long) = (rr >> ids.lgl) as Int;
	public def getCR(rr: Long) = getCR(ids, rr);
	
	public static def getLocal(ids: IdStruct, rr: Long) = rr & ((1 << ids.lgl) - 1);
	public def getLocal(rr: Long) = getLocal(ids, rr);
	
	public static def make(ids: IdStruct, local: Long, CR: Int) = (CR << ids.lgl) + local;
	public def make(local: Long, CR: Int) = make(ids, local, CR);
	
	public static def make(ids: IdStruct, local: Long, C: Int, R: Int) = (((C<< ids.lgr) + R) << ids.lgl) + local;;
	public def make(local: Long, C: Int, R: Int) = make(ids, local, C, R);
	
	public def toRoundRobin(sl:Long) : Long {
		return RoundRobinIdConverter.make(ids, getLocal(sl), getCR(sl));
	}
	public def toSwizzled(sl:Long) : Long = sl;
	public def toLocalR(sl:Long) : Long {
		return LocalRIdConverter.make(ids, getLocal(sl), getR(sl));
	}
	public def toLocalC(sl:Long) : Long {
		return LocalCIdConverter.make(ids, getLocal(sl), getC(sl));
	}
	
	public static def destruct(ids: IdStruct, id: Long) : Tuple3[Long, Int, Int] = Tuple3(getLocal(ids, id), getC(ids, id), getR(ids, id));
	public def destruct(id: Long) : Tuple3[Long, Int, Int] = destruct(ids, id);
}
