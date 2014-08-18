/*
 * This class provides a basic API that can be used to develop algorithms to analyze Twitter network
 */


//	package org.simulator.twitter;


import org.scalegraph.Config;
import org.scalegraph.id.Type;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.util.MemoryChunk;
import x10.lang.Iterator;
import org.scalegraph.util.random.Random;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.graph.Graph;
import org.simulator.twitter.TwitterUser;
import org.scalegraph.xpregel.*;




public class TwitterSimulator1{
	
	val directMessage : Double;
	val tweet : Double;
	val attribute : Double;
	val direction : Double;
	val mutual : Double;
	
	//default construction will initialize default values to message types
	def this(){
		
		directMessage =1;
		tweet =2;
		attribute = 3;
		direction = 4;
		mutual = 5;
		
	}
	//Parameterized constructor to enable user to set message values
	/*def this(directMessage : Double, tweet : Double, attribute : Double, direction : Double, mutual : Double){
		this.directMessage = directMessage;
		this.tweet = tweet;
		this.attribute = attribute;
		this.direction = direction;
		this.mutual = mutual;
	}*/
	
	//in Tweet, message is passed to all neighbors
	def tweet(ctx : VertexContext[TwitterUser, Double, Double, Double]){
		ctx.sendMessageToAllNeighbors(tweet);
	}
	
	//This method sends a direct message to the passed destId
	def directMessage(ctx : VertexContext[TwitterUser, Double, Double, Double], destId: Long){
		ctx.sendMessage(destId, directMessage);
	}
	
		
	
	
    
    	
}






