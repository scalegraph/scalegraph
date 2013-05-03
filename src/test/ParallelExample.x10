package test;
import x10.util.ArrayUtils;
import x10.util.Team;
import x10.util.Random;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.util.MemoryChunk;

public final class ParallelExample {
  //Sort example method
  static def sortExample(): void{
    Console.OUT.println("Sort Test");
    val len = 20;
    val rand = new Random();
    val randomInput = new MemoryChunk[Int](len);
    for ( j in randomInput.range()) {
      randomInput(j) = rand.nextInt();
    }
    val result = randomInput.clone();

    Parallel.sort[Int](result);
    var inputs:String = "";
    var outs:String = "";
    for(x in result){
      outs += x + ",";
    }
    for(x in randomInput){
      inputs = x + ",";
    }
    Console.OUT.println("Input :" + inputs);
    Console.OUT.println("Sorted:" + outs);
  }
  
  static def partitionExample(): void{
    Console.OUT.println("Partite Test");
    val n = 15;
    val input = new Array[Int](n + 1, (i:Int)=> i );

    finish for (i in 1..n) {
      Console.OUT.println("n: " + i + ", input: " + input);
      val result = Parallel.partition[Int](input, (x:Int)=> x % i, i);
      Console.OUT.println("n: " + i + ", result: " + result);
    }
  }
 
 static def scanExample(): void{
    Console.OUT.println("Scan Exapmle");
    val n = 1;
    val m = 30;
    val result = new Array[Array[Int](1)](n, new Array[Int](m+1));
    val retval = new Array[Int](n);

    for ( count in 0..(n-1)) {
      val c = count + 1;
      val d = count + 2;
      val input = new Array[Int](n, (i:Int)=> c *(i%d == (d - 1) ? 1 : 0) );
      retval(count) = Parallel.scan(1..n, result(count), 0, (i:Int,x:Int)=> input(i-1) + x, (x:Int, y:Int)=> x+y);

      Console.OUT.println("count: " + count + ", n: " + n + ", input: " + input);
      Console.OUT.println("count: " + count + ", n: " + n + ", result: " + result(count));
    }
  }

  public static def main(args:Array[String](1)) : void{
    Console.OUT.println("Team.WORLD: " + Team.WORLD);
    Console.OUT.println("members of Team(0): " + Team.WORLD.places());
    
    scanExample();
    sortExample();
    partitionExample();
  }
}
