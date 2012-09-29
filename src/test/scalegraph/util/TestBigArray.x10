package test.scalegraph.util;

import x10.util.Box;
import org.scalegraph.util.BigArray;
import org.scalegraph.util.Wrap;
import org.scalegraph.util.KeyGenerator;

public class TestBigArray {
    
    public static def main(args: Array[String]) {
        
 
        val size: Long = 1L << 32L;
        Console.OUT.println("Size: " + size);
        val B =  BigArray.make[Long](size);
        val C =  BigArray.make[Array[Long]](size);

        // B.fill(5L);
        // C.fill(6L);
        
        // var x: Long = 0;
        // for (var i: Long = 0; i < size; ++i) {
        //     
        //     x = B(i);
        // }
        var k: Long = 0;
        // B.pass(k);
        val w = new Wrap[Long]();
        val y = new Wrap[Array[Long]]();
        
        B.getAsync(B.getKey(), 0L, w);
        B.getAsync(B.getKey(), 1L << 31L, w);

        // k = w.value;
        Console.OUT.println("K: " + k);
        Console.OUT.println(B.getKey());
        Console.OUT.println(B.getKey());
        Console.OUT.println(C.getKey());
        Console.OUT.println("Enter to Continue");
        Console.IN.readChar();
    }
}