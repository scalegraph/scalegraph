/**
 * This class provides an implementation of a twitter simulator.
 * The class defines methods to tweet, send direct message, replies, mentions
 * and constructors to have user defined message values.
 * 
 * This class can be accessed by creating objects of TwitterSimulator in the code or by extending this class.
 */

public class TwitterSimulator[V,M]{
    
    val directMessage : M;
    val tweet : M;
    val mentions : M;
    val reply : M;
    
   
    /**
    * The following is a parameterized constructor.
    * This can be used by a developer to initialize message values for each of the mes-
    * -sage types 
    */

    def this(directMessage : M, tweet : M, mentions : M, reply : M)

 {
        this.directMessage = directMessage;
        this.tweet = tweet;
       
 this.mentions = mentions;
        this.reply = reply;
    }
    
    /**
     * The following method simulates a Tweet.
     * The method requires the current vertex context as a parameter.
     */
    def tweet(ctx : VertexContext[V, M, Double, Double]){
        val sw = Config.get().stopWatch();
        for(idx in ctx.inEdgesId()) ctx.sendMessage(idx,tweet);
        sw.lap("Sent Tweet");
        @Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Sent Tweet");}  }
    
    /**
     * The following method simulates a direct message.
     * The method requires current vertex context and the destination vertex id for the 
     * message 
     */
    def directMessage(ctx : VertexContext[V, M, Double, Double], destId: Long){
        val sw = Config.get().stopWatch();
        ctx.sendMessage(destId, directMessage);
        sw.lap("Sent DirectMessage to "+ destId);
        @Ifdef("PROF_XP"){Config.get().dumpProfXPregel("Sent DirectMessage to" + destId);}}
    
    /**
     * The following method simulates a mentioned tweet in a twitter network
     * The method expects the current vertex context along with the Id of ver-tex being  
     * mentioned  
     */

    def mentions(ctx : VertexContext[V, M, Double, Double], toBeMentionedId: Long){
        val sw = Config.get().stopWatch();
        ctx.sendMessage(toBeMentionedId, mentions); //Message available on men-tioned        
                                                   //person page
        for(idx in ctx.inEdgesId()) ctx.sendMessage(idx,mentions);  //Mentions are seen on send-ers page 
                                                 //and seen by all followers
        sw.lap("Tweeted with a mention of " + toBeMentionedId);
        @Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Tweeted with a men-tion of " + toBeMentionedId);}
    }
    
    /**
     * The method simulates a reply in a twitter network
     * The method expects the current vertex context along with the Id of the user who 
     *is being replied to
     */
    def reply(ctx : VertexContext[V, M, Double, Double], replyingToId: Long){
        val sw = Config.get().stopWatch();
        ctx.sendMessage(replyingToId, reply);
        sw.lap("Tweeted with a mention of " + replyingToId);
        @Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Tweeted with a men-tion of " + replyingToId);}
    }
}
