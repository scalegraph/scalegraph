package org.scalegraph.id;
import org.scalegraph.util.tuple.*;

public interface IdConverter[I] {
	public def getR(id: I): Int;
	
	public def getC(id: I): Int;
	
	public def getCR(id: I): Int;
	
	public def getLocal(id: I): I;
	
	public def make(local: I, CR: Int): I;
	
	public def make(local: I, C: Int, R: Int): I;
	
	public def toRoundRobin(id: I) : I;
	public def toSwizzled(id: I) : I;
	public def toLocalR(id: I) : I;
	public def toLocalC(id: I) : I;
}
