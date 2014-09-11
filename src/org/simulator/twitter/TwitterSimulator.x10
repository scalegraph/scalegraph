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
import org.scalegraph.xpregel.*;
import org.scalegraph.io.CSV;
import x10.compiler.Ifdef;

/**
 * This class provides an implementation of a twitter simulator.
 * The class defines methods to tweet, send direct message, replies, mentions and constructors to 
 * have user defined message values.
 * 
 * This class can be accessed by creating objects of TwitterSimulator in the code or by extending this class.
 */

public class TwitterSimulator{
	
	val directMessage : Double;
	val tweet : Double;
	val mentions : Double;
	val reply : Double;
	
	/**
 	* The following is the implementation of a default constructor
 	* A call to new TwitterSimulator() will initialize message types with the default values 
 	*/
	def this(){
		
		directMessage =1;
		tweet =2;
        mentions = 3;
        reply = 4;
		
	}
	/**
 	* The following is a parameterized constructor.
 	* This can be used by a developer to initialize message values for each of the message types 
 	*/
	def this(directMessage : Double, tweet : Double, mentions : Double, reply : Double){
		this.directMessage = directMessage;
		this.tweet = tweet;
		this.mentions = mentions;
		this.reply = reply;
	}
	
	/**
	 * The following method simulates a Tweet.
 	 * The method requires the current vertex context as a parameter.
	 */
	def tweet(ctx : VertexContext[TwitterUser, Double, Double, Double]){
		val sw = Config.get().stopWatch();
		ctx.sendMessageToAllNeighbors(tweet);
		sw.lap("Sent Tweet");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Sent Tweet");}
	}
	
	/**
	 * The following method simulates a direct message.
 	 * The method requires current vertex context and the destination vertex id for the message 
	 */
	def directMessage(ctx : VertexContext[TwitterUser, Double, Double, Double], destId: Long){
		val sw = Config.get().stopWatch();
		ctx.sendMessage(destId, directMessage);
		sw.lap("Sent DirectMessage to "+ destId);
		@Ifdef("PROF_XP"){Config.get().dumpProfXPregel("Sent DirectMessage to" + destId);}
	}
	
    /**
     * The following method simulates a mentioned tweet in a twitter network
 	 * The method expects the current vertex context along with the Id of vertex being mentioned  
     */

    def mentions(ctx : VertexContext[TwitterUser, Double, Double, Double], toBeMentionedId: Long){
	    val sw = Config.get().stopWatch();
	    ctx.sendMessage(toBeMentionedId, mentions); //Message available on mentioned person page
	    ctx.sendMessageToAllNeighbors(mentions); //Mentions are seen on senders page and seen by all followers
	    sw.lap("Tweeted with a mention of " + toBeMentionedId);
	    @Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Tweeted with a mention of " + toBeMentionedId);}
    }
    
    /**
     * The method simulates a reply in a twitter network
     * The method expects the current vertex context along with the Id of the user who is being replied to
     */
    def reply(ctx : VertexContext[TwitterUser, Double, Double, Double], replyingToId: Long){
	    val sw = Config.get().stopWatch();
	    ctx.sendMessage(replyingToId, reply);
	    sw.lap("Tweeted with a mention of " + replyingToId);
	    @Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Tweeted with a mention of " + replyingToId);}
    }
}
