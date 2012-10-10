package test.scalegraph.util;

import org.scalegraph.util.ShareEntry;
import org.scalegraph.util.Wrap;
import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.BigArray;


public class TestBigArray {
    
    public static def main(args: Array[String]) {
        
 
        val size: Long = 1L << 24L;
        Console.OUT.println("Size: " + size);
        val B =  BigArray.make[Long](size);
        val C =  BigArray.make[Long](size);
        
        Console.OUT.println("Fill");
        B.fill(5L);
        // C.fill(6L);
        
        // var x: Long = 0;
        // for (var i: Long = 0; i < size; ++i) {
        //     
        //     x = B(i);
        // }

        val w = new Wrap[Long]();
        val y = new Wrap[Long]();
        
        Console.OUT.println("Call async");
        val k = BigArray.getKey();
        B.getAsync(k, 0L, w);
        B.getAsync(k, size - 20, y);
        B.getAsync(k, size/3, y);
        BigArray.wait(k);
//         
//         Console.OUT.println(B.getKey());
//         Console.OUT.println(B.getKey());
//         Console.OUT.println(C.getKey());
//         Console.OUT.println("Share Entry");
        Console.OUT.println("Enter to Continue");
        Console.IN.readChar();
    }
}