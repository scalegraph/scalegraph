package org.scalegraph.graph;

import x10.util.*;
import org.scalegraph.util.*;
import org.scalegraph.util.BigArray;
import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.RemoteInvocationPayload;
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
   
   protected def internalInsertEdgeAsynch(placeId: Int, key: Key, src: Array[Index], dst: Array[Index]) {
       
       val addEdgeOp = (obj: ArrayObject, param1: Param1, param2: Param2) => {
           
           val o = obj as BigArray[VertexList];
           val srcList = param1 as Array[Index];
           val dstList = param2 as Array[Index];
           
           for(var i: int = 0; i < src.size; ++i) {
               
               var v: VertexList = o(srcList(i));
               
               if(v == null) {
                   
                   v = new  VertexList();
                   o(srcList(i)) = v;
               }
               
               v.add(dstList(i));
           }
       };
       
       storage.invokeRemoteWithNoReturn(key, placeId, addEdgeOp, src, dst);
   }
    
   
   public static def loadFromFile(filePath: String, isDirected: Boolean): BigGraph {
       
       val reader = new FileReader(new File(filePath));
       var line:String = null;
       var numVertices: Long = 0;
       var key:Key = BigArray.getKey();
       
       if (filePath.indexOf("twitter_rv.net") != -1) {
           
           // Work around for twitter kaist on tsubame
           numVertices = 61578170;
           
       } else {
           
           reader.readLine();		// skip DL
           
           // Get number of vertices, Format: "n = XXXX"
           numVertices = Long.parse(reader.readLine().split("=")(1).trim());
           
           reader.readLine();		// skip 
           reader.readLine();		// skip label
           reader.readLine();		// skip data:
       }
       
       val bigGraph = BigGraph.make(numVertices,isDirected);
       var addEdgeCount: int = 0;
       val numbeOfEdgesPerkey = 100000;
       
       val srcList = new Array[ArrayList[VertexId]](Place.MAX_PLACES, 
               (Int) => new ArrayList[VertexId](numbeOfEdgesPerkey));
       
       val dstList = new Array[ArrayList[VertexId]](Place.MAX_PLACES, 
               (Int) => new ArrayList[VertexId](numbeOfEdgesPerkey));
       
       finish {
           
           while(true) {
               
               // Get line and remove white space
               try {
                   
                   line = reader.readLine().trim();

                   if (line.length() == 0) {
                       
                       // Blank line skip
                       line = null;
                       continue;
                   }
                   
                   val temp = line.split(" ");
                   val src = Long.parse(temp(0));
                   val dst = Long.parse(temp(1));
                   
                   val pid = bigGraph.storage.getPlaceId(src);
                   
                   srcList(pid).add(src);
                   dstList(pid).add(dst);
                   
                   ++addEdgeCount;
                   
                   if(addEdgeCount >= numbeOfEdgesPerkey) {
                       
                       for (var i: Int = 0; i < srcList.size; ++i) {
                           
                           bigGraph.internalInsertEdgeAsynch(i, key, srcList(i).toArray(), dstList(i).toArray());
                       }
                      
                       addEdgeCount = 0;
                       BigArray.synch(key, false);
                       key = BigArray.getKey();
                       
                       for (var i: Int = 0; i < srcList.size; ++i) {
                           
                           srcList(i).clear();
                           dstList(i).clear();
                       }
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
               BigArray.synch(key, false);
           }
       }
       
       return bigGraph;
   }
   
    public def getOutNeighboursAsync(key: Key, index: Index, wrap: Wrap[VertexList]) {
        
        storage.getAsync(key, index, wrap);
    }
    
    public def print() {
        
        storage.print();
    }
}