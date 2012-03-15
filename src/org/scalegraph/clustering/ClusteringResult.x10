package org.scalegraph.clustering;

import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.StringBuilder;

public class ClusteringResult(size:Int) {
	
	private var d:Array[Int](1);
	private var IDtoIDX:HashMap[Long, Int];
	private var IDXtoID:HashMap[Int, Long];
	
	def this(d:Array[Int](1), IDtoIDX:HashMap[Long, Int], IDXtoID:HashMap[Int, Long]){
		property(d.size);
		this.d = d;
		this.IDtoIDX = IDtoIDX;
		this.IDXtoID = IDXtoID;
	}
	
	public def getCluster(vertexID:Long) = d(IDtoIDX.get(vertexID)());
	
	public def getVertices(clusterNum:Int): Array[Long] {
		val result:ArrayList[Long] = new ArrayList[Long]();
		for([i] in d){
			if(d(i) == clusterNum){
				result.add(IDXtoID.get(i)());
			}
		}
		return result.toArray();
	}
	
	public def toString(): String {
		val sb = new StringBuilder();
		sb.add("-------- ClusteringResult("+size+") --------\n");
		for([i] in d){
			sb.add("[" + IDXtoID.get(i)() + "] -> [" + d(i) + "]\n");
		}
		sb.add("----------------------------------------\n");
		return sb.result();
	}
}