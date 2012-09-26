package org.scalegraph.clustering.psc;

import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.Set;
import x10.util.StringBuilder;

import org.scalegraph.clustering.ClusteringResult;
import org.scalegraph.util.VertexInfo;

public class DistClusteringResult(nVertices:Int, nClusters:Int) implements ClusteringResult {
	
	public val vertexInfo:VertexInfo;
	public val VtoC:PlaceLocalHandle[HashMap[Long, Int]];  // vertexID to cluster number
	public val CtoV:HashMap[Int, Array[Long]];             // cluster number to array of vertexID
	
	public def this(vertexInfo:VertexInfo, VtoC:PlaceLocalHandle[HashMap[Long, Int]], CtoV:HashMap[Int, Array[Long]]){
		property(vertexInfo.size(), CtoV.size());
		this.vertexInfo = vertexInfo;
		this.VtoC = VtoC;
		this.CtoV = CtoV;
	}
	
	public def getAllVertices(): Set[Long] {
		val set = VtoC().keySet().clone() as Set[Long];
		for(p in Place.places()) {
			if(p.id == here.id) continue;
			set.addAll(at(p)VtoC().keySet());
		}
		return set;
	}
	
	public def getAllClusters() = CtoV.keySet();
	
	public def getCluster(vertexID:Long): Int {
		val p = vertexInfo.getPlace(vertexID);
		return at(p) VtoC().get(vertexID)();
	}
	
	public def tryGetCluster(vertexID:Long){
		val p = vertexInfo.getPlace(vertexID);
		return at(p) VtoC().get(vertexID);
	}
	
	public def getVertices(clusterNum:Int) = CtoV.get(clusterNum)();
	
	public def tryGetVertices(clusterNum:Int) = CtoV.get(clusterNum);
	
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