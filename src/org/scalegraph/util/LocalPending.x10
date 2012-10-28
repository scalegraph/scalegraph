package org.scalegraph.util;

import x10.util.ArrayList;

// import org.scalegraph.util.BigArray;
// import org.scalegraph.util.Pending;
import org.scalegraph.util.KeyGenerator.*;
// import org.scalegraph.util.ReadRequestPayload;
// import org.scalegraph.util.WriteRequestPayload;
// import org.scalegraph.util.RemoteInvocationPayload.*;

public struct LocalPending[V] implements Pending {
    
    val obj: BigArray[V];
    
    // Data for read entry
    val readKeys: ArrayList[Key];
    val readIndices: ArrayList[Index];
    val wraps: ArrayList[Wrap[V]];
    
    // data for write entry
    val writeKeys: ArrayList[Key];
    val writeIndices: ArrayList[Index];
    val data: ArrayList[V];
    
    // data for remote invocation with no return
    val riKeys: ArrayList[Key];
    val riMethods: ArrayList[(ArrayObject, Param1, Param2)=> void];
    val riParams1: ArrayList[Param1];
    val riParams2: ArrayList[Param2];
    
    public def this(o: BigArray[V]) {
        
        this.obj = o;
        
        readKeys = new ArrayList[Key]();
        readIndices = new ArrayList[Long]();
        wraps = new ArrayList[Wrap[V]]();
        
        writeKeys = new ArrayList[Key]();
        writeIndices = new ArrayList[Long]();
        data = new ArrayList[V]();
        
        riKeys = new ArrayList[Key]();
        // riIndices = new ArrayList[Long]();
        riMethods = new ArrayList[(ArrayObject, Param1, Param2)=> void]();
        riParams1 = new ArrayList[Param1]();
        riParams2 = new ArrayList[Param2]();
    }
    
    public def addRead(key: Key, index: Index, wrap: Wrap[V]) {
        
        readKeys.add(key);
        readIndices.add(index);
        wraps.add(wrap);
    }
    
    public def addWrite(key: Key, index: Index, d: V) {
        
        writeKeys.add(key);
        writeIndices.add(index);
        data.add(d);
    }
    
    public def addRemoteInvocation(key: Key, 
                                   method: (ArrayObject, Param1, Param2) => void, 
                                   param1: Any,
                                   param2: Any) {
        
        riKeys.add(key);
        riMethods.add(method);
        riParams1.add(param1);
        riParams2.add(param2);
    }
    
    
    public def createReadRequestPayload(list: ArrayList[ReadRequestPayload], 
                                        localPendingList: ArrayList[Pending]) {
        
        if(readKeys.size() > 0) {
            
            val h = obj.hashCode();
            val readRequestPayload =
                new ReadRequestPayload(h,
                                       obj,
                                       readKeys.toArray(),
                                       readIndices.toArray());
            
            list.add(readRequestPayload);
            localPendingList.add(this);
        }
    }
    
    public def createWriteRequestPayload(list: ArrayList[WriteRequestPayload]) {
        
        if (writeKeys.size() > 0) {
            
            val h = obj.hashCode();
            val writeRequestPayload = 
                new WriteRequestPayload(obj, 
                                        writeKeys.toArray(),
                                        writeIndices.toArray(),
                                        data.toArray());
            
            list.add(writeRequestPayload);
        }
    }
    
    public def createRemoteInvocationPayload(list: ArrayList[RemoteInvocationPayload]) {
        
        if(riKeys.size() > 0) {
            
            val h = obj.hashCode();
            
            val remoteInvocationPayload =
                new RemoteInvocationPayload(obj as Any, 
                                            riKeys.toArray(), 
                                            riMethods.toArray(),
                                            riParams1.toArray(),
                                            riParams2.toArray());
            
            list.add(remoteInvocationPayload);
        }
    }
    
    public def updateReadRequestData(d: Any) {
        
        val dataList = d as Array[V];
        
        for(var i: Int = 0; i < dataList.size; ++i) {
            
            wraps(i).value = dataList(i);
        }
    }
}
