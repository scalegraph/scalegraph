package org.scalegraph.clustering;

import x10.util.StringBuilder;

public class ClusteringResult(size:Int) implements Iterable[Point{self.rank==1}] {
	
	public var d:Array[Int](1);
	
	public def this(n:Int){
		property(n);
		d = new Array[Int](n);
	}
	
	public operator this(i:Int) = d(i);
	public operator this(i:Point{self.rank==1}) = d(i);
	
	public operator this(i:Int)=(v:Int): Int {
		d(i) = v;
		return v;
	}
	public operator this(i:Point{self.rank==1})=(v:Int): Int {
		d(i) = v;
		return v;
	}
	
	public def iterator(): Iterator[Point{self.rank==1}] {
		return d.iterator();
	}
	
	public def toString(): String {
		val sb = new StringBuilder();
		sb.add("-------- ClusteringResult("+size+") --------\n");
		for(i in d){
			sb.add(i + " -> [" + d(i) + "]\n");
		}
		sb.add("----------------------------------------\n");
		return sb.result();
	}
}