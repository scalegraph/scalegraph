package test.scalegraph.util;

import org.scalegraph.util.BigArray;

public class TestBigArray {
    
    public static def main(args: Array[String]) {
        
        val size = 1L << 32;
        val B =  BigArray.make[Long](size);
        val C =  BigArray.make[Long](size);
        B.fill(5L);
        C.fill(6L);
        
        var x: Long = 0;
        for (var i: Long = 0; i < size; ++i) {
            
            x = B(i);
        }
        
        Console.OUT.println("Enter to Continue");
        Console.IN.readChar();
    }
}