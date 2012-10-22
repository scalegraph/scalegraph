package org.scalegraph.graph;

import x10.util.*;
import org.scalegraph.util.*;
import org.scalegraph.util.BigArray;
import org.scalegraph.util.KeyGenerator;
import x10.io.FileReader;
import x10.io.File;
import x10.io.IOException;

public type VertexId = Long;
public type VertexList = ArrayList[Index];

public class BigGraph {
    

    protected var storage: BigArray[VertexList];
    
    
    protected def this(nodes: long, isDirect: boolean) {
        
        // val init = (index: Index) => {
        //     
        //     Console.OUT.println("Init index: " + index);
        //     return new VertexList();
        // };
        
        // storage = BigArray.make[VertexList](nodes, init);
        
        storage = BigArray.make[VertexList](nodes);
    }
    
    public static def make(nodes: Long, isDirect: boolean): BigGraph {
        
        return new BigGraph(nodes, isDirect);
    }
    
   // public def insertEdgeAsync(src: Index, dst: Index) {
   //     
   //     
   // }
   
   protected def internalInsertEdgeAsynch(key: Key, src: Index, dst: Index) {
       
       val addEdgeOp = (obj: Any, index: Index, param: Any) => {
           
           val o = obj as BigArray[VertexList];
           var vertices: VertexList = o(index);
           
           if (vertices == null) {
               
               vertices = new VertexList();
               o(index) = vertices;
           }
           
           vertices.add(dst);
       };
       
       storage.invokeRemoteWithNoReturn(key, src, addEdgeOp, dst);
   }
    
   
   public static def loadFromFile(filePath: String, isDirected: Boolean): BigGraph {
       
       val reader = new FileReader(new File(filePath));
       
       var line:String = null;
       
       var key:Key = BigArray.getKey();
       
       
       
       reader.readLine();		// skip DL
       
       // Get number of vertices, Format: "n = XXXX"
       val numVertices = Long.parse(reader.readLine().split("=")(1).trim());
       
       reader.readLine();		// skip 
       reader.readLine();		// skip label
       reader.readLine();		// skip data:
       
       val bigGraph = BigGraph.make(numVertices,isDirected);
       var addEdgeCount: int = 0;
       val numbeOfEdgesPerkey = 400;
       
       finish {
           
           while(true) {
               
               // Get line and remove white space
               try {
                   
                   line = reader.readLine().trim();
                   val temp = line.split(" ");
                   val src = Long.parse(temp(0));
                   val dst = Long.parse(temp(1));
                   
                   if (line.length() == 0) {
                       
                       // Blank line skip
                       line = null;
                       continue;
                   }
                   
                   bigGraph.internalInsertEdgeAsynch(key, src, dst);
                   ++addEdgeCount;
                   
                   if(addEdgeCount >= numbeOfEdgesPerkey) {
                       
                       addEdgeCount = 0;
                       BigArray.synch(key);
                       key = BigArray.getKey();  
                   }
                   
               } catch (e: IOException) {
                   
                   // No more line left
                   // As reader.available() is not reliable
                   // so use catching exception
                   break;
               }
           }
           
           if(addEdgeCount > 0) {
               
               // We still have some edges in buffer
               BigArray.synch(key);
           }
       }
       
       return bigGraph;
   }
   
    public def getOutNeighbours(index: Index) {
        
    }
    
    public def print() {
        
        storage.print();
    }
}