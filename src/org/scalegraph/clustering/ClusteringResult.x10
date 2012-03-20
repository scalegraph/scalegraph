package org.scalegraph.clustering;

import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.StringBuilder;

public class ClusteringResult(nVertices:Int, nClusters:Int) {
	
	private var VtoC:HashMap[Long, Int];         // vertexID to cluster number
	private var CtoV:HashMap[Int, Array[Long]];  // cluster number to array of vertexID
	
	def this(VtoC:HashMap[Long, Int], CtoV:HashMap[Int, Array[Long]]){
		property(VtoC.size(), CtoV.size());
		this.VtoC = VtoC;
		this.CtoV = CtoV;
	}
	
	public def getAllVertices() = VtoC.keySet();
	
	public def getAllClusters() = CtoV.keySet();
	
	public def getCluster(vertexID:Long) = VtoC.get(vertexID)();
	
	public def getVertices(clusterNum:Int) = CtoV.get(clusterNum)();
	
	public def toString(): String {
		val sb = new StringBuilder();
		sb.add("-------- ClusteringResult("+nVertices+", "+nClusters+") --------\n");
		sb.add("[clusterNum] -> [vertexID]\n");
		for(clusterNum in getAllClusters()){
			sb.add("[" + clusterNum + "] -> " + getVertices(clusterNum) + "\n");
		}
		sb.add("----------------------------------------\n");
		return sb.result();
	}
}