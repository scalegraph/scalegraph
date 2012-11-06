package org.scalegraph.graph;

import x10.util.*;
import org.scalegraph.util.*;
import org.scalegraph.util.BigArray;
import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.RemoteInvocationPayload;
import x10.io.FileReader;
import x10.io.File;
import x10.io.IOException;
import x10.io.SerialData;

public type VertexId = Long;
public type VertexList = ArrayList[Index];

public class BigGraph implements x10.io.CustomSerialization {
    

    protected var storage: BigArray[VertexList];
    protected var isDirected: Boolean;
    protected var numVertices: Long;
    protected var localHandle: PlaceLocalHandle[LocalState];
    
    protected static class LocalState(lcStorage: BigArray[VertexList],
                                      lcIsDirected: Boolean,
                                      lcNumVertices: Long) {
        
        public def this(storage: BigArray[VertexList],
                        isDirected: Boolean,
                        numVertices: Long) {
            
            property(storage, isDirected, numVertices);
        }
        
    }
    
    protected def this(lch: PlaceLocalHandle[LocalState]) {
        
        localHandle = lch;
        storage = lch().lcStorage;
        isDirected = lch().lcIsDirected;
        numVertices = lch().lcNumVertices;
    }
    
    protected def this(serialData: SerialData) {
        
        localHandle = serialData.data as PlaceLocalHandle[LocalState];
    }
    
    public def serialize(): SerialData {
        
        return new SerialData(localHandle, null);
    }
    
    public static def make(nodes: Long, isDirect: boolean): BigGraph {
        
        val dist = Dist.makeUnique();
        val storage = BigArray.make[VertexList](nodes);
        
        val initGraph = () =>{
            return new LocalState(storage, isDirect, nodes);
        };
        val lch = PlaceLocalHandle.make[LocalState](dist, initGraph);
        return new BigGraph(lch);
    }
    
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
       var lineCount: Long = 0;
       var splitter: String;
       
       if (filePath.indexOf("twitter_rv.net") != -1) {
           
           // Work around for twitter kaist on tsubame
           numVertices = 61578170;
           Console.OUT.println("Load Twiiter data with nodes = " + numVertices);
           splitter = "\t";
           
       } else {
           
           reader.readLine();		// skip DL
           
           // Get number of vertices, Format: "n = XXXX"
           numVertices = Long.parse(reader.readLine().split("=")(1).trim());
           
           reader.readLine();		// skip 
           reader.readLine();		// skip label
           reader.readLine();		// skip data:
           splitter = " ";
       }
       
       val bigGraph = BigGraph.make(numVertices, isDirected);
       var addEdgeCount: int = 0;
       val numbeOfEdgesPerKey = 500000;
       
       val srcList = new Array[ArrayList[VertexId]](Place.MAX_PLACES, 
               (Int) => new ArrayList[VertexId](numbeOfEdgesPerKey));
       
       val dstList = new Array[ArrayList[VertexId]](Place.MAX_PLACES, 
               (Int) => new ArrayList[VertexId](numbeOfEdgesPerKey));
       
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
                   
                   val temp = line.split(splitter);
                   val src = Long.parse(temp(0));
                   val dst = Long.parse(temp(1));
                   
                   val pid = bigGraph.storage.getPlaceId(src);
                   
                   srcList(pid).add(src);
                   dstList(pid).add(dst);
                   
                   ++addEdgeCount;
                   
                   if(addEdgeCount >= numbeOfEdgesPerKey) {
                       
                       for (var i: Int = 0; i < srcList.size; ++i) {
                           
                           bigGraph.internalInsertEdgeAsynch(i, key, srcList(i).toArray(), dstList(i).toArray());
                       }
                      
                       addEdgeCount = 0;
                       BigArray.sync(key, false);
                       key = BigArray.getKey();
                       
                       for (var i: Int = 0; i < srcList.size; ++i) {
                           
                           srcList(i).clear();
                           dstList(i).clear();
                       }
                       
                 	lineCount += numbeOfEdgesPerKey;
                 	Console.OUT.println(lineCount);
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
               BigArray.sync(key, false);
           }
       }
       
       return bigGraph;
   }
   
   public def getVerticesCount(): Long { return numVertices; }
 
   public static def getKey() = BigArray.getKey();
   
   public def getOutNeigbours(vid: VertexId): VertexList {
       
       return storage(vid);
   }
   
   public def getOutNeighboursAsync(key: Key, vid: VertexId, wrap: Wrap[VertexList]) {
       
       storage.getAsync(key, vid, wrap);
   }
   
   public static def sync(key: Key) {
       
       BigArray.sync(key, false);
   }
   
   public def print() {
       
       storage.print();
   }
}