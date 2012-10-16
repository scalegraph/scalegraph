package org.scalegraph.util;

import x10.util.*;
import org.scalegraph.util.BigArray;
import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.ReadRequestPayload;
import org.scalegraph.util.WriteRequestPayload;
import org.scalegraph.util.Pending;


protected class LocalPending[V] implements Pending {
    
    var obj: BigArray[V];
    
    // Data for read entry
    var readKeys: ArrayList[Key];
    var readIndices: ArrayList[Index];
    var wraps: ArrayList[Wrap[V]];
    
    // data for write entry
    var writeKeys: ArrayList[Key];
    var writeIndices: ArrayList[Index];
    var data: ArrayList[V];
    
    
    public def this(o: BigArray[V]) {
        
        this.obj = o;
        
        readKeys = new ArrayList[Key]();
        readIndices = new ArrayList[Long]();
        wraps = new ArrayList[Wrap[V]]();
        
        writeKeys = new ArrayList[Key]();
        writeIndices = new ArrayList[Long]();
        data = new ArrayList[V]();
    }
    
    public def addRead(key: Key, index: Index, wrap: Wrap[V]) {
        
        readKeys.add(key);
        readIndices.add(index);
        wraps.add(wrap);
    }
    
    public def createReadRequestPayload(list: ArrayList[ReadRequestPayload]) {
        
        val h = obj.hashCode();
        val readRequestPayload = new ReadRequestPayload(h, obj, readKeys.toArray(), readIndices.toArray());
        list.add(readRequestPayload);
    }
    
    public def createWriteRequestPayload(list: ArrayList[WriteRequestPayload]) {
        
        val h = obj.hashCode();
        val writeRequestPayload = new WriteRequestPayload(h, obj, writeKeys.toArray(), writeIndices.toArray(), data.toArray());
        list.add(writeRequestPayload);
    }
    
    public def addWrite(key: Key, index: Index, d: V) {
        
        writeKeys.add(key);
        writeIndices.add(index);
        data.add(d);
    }
    
    public def updateReadRequestData(d: Any) {
        
        val dataList = d as Array[V];
        
        for(var i: Int = 0; i < dataList.size; ++i) {
            
            wraps(i).value = dataList(i);
        }
    }
}
