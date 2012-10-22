package test.scalegraph.util;

import org.scalegraph.util.Wrap;
import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.BigArray;
import org.scalegraph.util.BigArrayQueueManager;

public type Index = Long;

public class TestBigArray {
    
    public static def main(args: Array[String]) {
        
        // BigArrayQueueManager.init();
 
        val size: Long = 1L << 20L;
        Console.OUT.println("Size: " + size);
        val B =  BigArray.make[Long](size);
        val C =  BigArray.make[Long](size);
        
        Console.OUT.println("Fill");
        B.fill(2L);
        // C.fill(6L);
        
        // var x: Long = 0;
        // for (var i: Long = 0; i < size; ++i) {
        //     
        //     x = B(i);
        // }
        val remoteOp = (obj: Any, index: Index, param: Any) => {
            
            val o = obj as BigArray[Long];

            o.setLocal(index, index * index);
        };

        finish {
            // for (var t: Int = 0; t < 100; ++t) { 
            
            for (var it: Int = 0; it < 1000; ++it) {
                
                val i = it;
                
                async {  
                    
                    val w = new Wrap[Long]();
                    val y = new Wrap[Long]();
                    val k = BigArray.getKey();
                    
                    val index: Long = size - i - 1;
                    
                    // Console.OUT.println("Key = " +  k );
                    
                    // B.writeAsync(k, 0, 1024);
                    // B.getAsync(k, 0L, w);
                    
                    // B.getAsync(k, size - 20, y);
                    // B.getAsync(k, size - 30, y);
                    // B.getAsync(k, size - 40, y);
                    
                    
                    // B.writeAsync(k, index, index);
                    B.invokeRemoteWithNoReturn(k, index, remoteOp, index);
                    B.getAsync(k, index, y);
                    BigArray.synch(k);
                    
                    // Console.OUT.println("Exit from sync: " + k);
                    // Console.OUT.println("W = " + w() );
                    Console.OUT.println("Y("+ index +") = " + y() );
                }
                // }
            }
        }
        
        BigArrayQueueManager.printWaitingList();
        Console.OUT.println("Enter of testing");
        // Console.IN.readChar();
    }
}