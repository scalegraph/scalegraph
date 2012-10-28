package org.scalegraph.util;

import org.scalegraph.util.BigArray;
import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.RemoteInvocationPayload.*;


public struct WriteRequestPayload(obj: ArrayObject, keys: Array[Key], indices: Array[Index], data: Any) {
    
    public def this(obj: ArrayObject, keys: Array[Key], indices: Array[Index], data: Any) {
        
        property(obj, keys, indices, data);
    }
}