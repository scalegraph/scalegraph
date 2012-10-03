package org.scalegraph.util;

import x10.util.*;
import org.scalegraph.util.BigArray;
import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.SendPayload;
import org.scalegraph.util.RemoteCopyable;


public class ShareEntry[V] implements RemoteCopyable {
    
    var obj: BigArray[V];
    var keys: ArrayList[Key];
    var indices: ArrayList[Index];
    var wraps: ArrayList[Wrap[V]];
    
    public def this(o: BigArray[V]) {
        
        this.obj = o;
        keys = new ArrayList[Key]();
        indices = new ArrayList[Long]();
        wraps = new ArrayList[Wrap[V]]();
    }
    
    public def add(key: Key, index: Index, wrap: Wrap[V]) {
        
        keys.add(key);
        indices.add(index);
        wraps.add(wrap);
    }
    
    public def createSendPayload(list: ArrayList[SendPayload]) {
        
        val h = obj.hashCode();
        val sendPayload = new SendPayload(h, obj, indices.toArray());
        list.add(sendPayload);
    }
}
