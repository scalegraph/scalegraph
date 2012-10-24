package test.scalegraph.util;

import org.scalegraph.util.Wrap;
import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.BigArray;
import org.scalegraph.util.BigArrayQueueManager;
import org.scalegraph.util.RemoteInvocationPayload;
import org.scalegraph.util.BigQueue;

public type Index = Long;

public class TestBigQueue {
    
    public static def main(args: Array[String]) {
        
        // BigArrayQueueManager.init();
 
        val size: Long = 1L << 20L;
        Console.OUT.println("Size: " + size);
        val B: BigQueue[Long] =  BigQueue.make[Long](size);
        val k = B.getKey();
        
        // for (var i: Long = 0; i < 10000; ++i) {
        //     
        //     B.addAsync(k, i);
        // }

        Console.OUT.println("Test Big Queue Completed");
    }
}