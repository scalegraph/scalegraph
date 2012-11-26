package org.scalegraph.id;
import org.scalegraph.id.IdStruct;
import org.scalegraph.id.*;
import org.scalegraph.util.tuple.Tuple3;

public class RoundRobinIdConverter (ids: IdStruct) implements IdConverter[Long]  {
	public static def getR(ids: IdStruct, rr: Long) = (rr & ((1 << ids.lgr) - 1)) as Int;
	public def getR(rr: Long) = getR(ids, rr);
	
	public static def getC(ids: IdStruct, rr: Long) = ((rr & ((1 << (ids.lgr + ids.lgc)) - 1)) >> ids.lgr) as Int;
	public def getC(rr: Long) = getC(ids, rr);
	
	public static def getCR(ids: IdStruct, rr: Long) = (rr & ((1 << (ids.lgr + ids.lgc)) - 1)) as Int;
	public def getCR(rr: Long) = getCR(ids, rr);
	
	public static def getLocal(ids: IdStruct, rr: Long) = rr >> (ids.lgr + ids.lgc);
	public def getLocal(rr: Long) = getLocal(ids, rr);
	
	public static def make(ids: IdStruct, local: Long, CR: Int) = (local << (ids.lgc + ids.lgr)) + CR;
	public def make(local: Long, CR: Int) = make(ids, local, CR);
	
	public static def make(ids: IdStruct, local: Long, C: Int, R: Int) = (((local << ids.lgc) + C) << ids.lgr) + R;
	public def make(local: Long, C: Int, R: Int) = make(ids, local, C, R);
	
//	public def toRoundRobin(rr:Long) : Long = rr;
	public def toRoundRobin(rr:Long) : Long {
		return RoundRobinIdConverter.make(ids, getLocal(rr), getCR(rr));
	}
	public def toSwizzled(rr:Long) : Long {
		return SwizzledIdConverter.make(ids, getLocal(rr), getCR(rr));
	}
	public def toLocalR(rr:Long) : Long {
		return LocalRIdConverter.make(ids, getLocal(rr), getR(rr));
	}
	public def toLocalC(rr:Long) : Long {
		return LocalCIdConverter.make(ids, getLocal(rr), getC(rr));
	}

	public static def destruct(ids: IdStruct, id: Long) : Tuple3[Long, Int, Int] = Tuple3(getLocal(ids, id), getC(ids, id), getR(ids, id));
	public def destruct(id: Long) : Tuple3[Long, Int, Int] = destruct(ids, id);
}
