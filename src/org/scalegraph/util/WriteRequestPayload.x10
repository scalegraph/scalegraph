package org.scalegraph.util;

import org.scalegraph.util.BigArray;
import org.scalegraph.util.KeyGenerator;

protected class WriteRequestPayload(hash: Int, obj: BigArrayOperation, keys: Array[Key], indices: Array[Index], data: Array[Object]) {
    
    public def this(hash: Int, obj: BigArrayOperation, keys: Array[Key], indices: Array[Index], data: Array[Object]) {
        
        property(hash, obj, keys, indices, data);
    }
}