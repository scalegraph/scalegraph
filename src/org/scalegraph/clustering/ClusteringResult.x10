package org.scalegraph.clustering;

import x10.util.Box;
import x10.util.Set;

public interface ClusteringResult/*(nVertices:Int, nClusters:Int)*/ {
	
	abstract public def getAllVertices(): Set[Long];
	
	abstract public def getAllClusters(): Set[Int];
	
	abstract public def getCluster(vertexID:Long): Int;
	
	abstract public def tryGetCluster(vertexID:Long): Box[Int];
	
	abstract public def getVertices(clusterNum:Int): Array[Long];
	
	abstract public def tryGetVertices(clusterNum:Int): Box[Array[Long]];
	
	abstract public def toString(): String;
}