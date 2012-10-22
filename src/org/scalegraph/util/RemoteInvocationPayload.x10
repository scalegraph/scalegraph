package org.scalegraph.util;

import org.scalegraph.util.BigArray;
import org.scalegraph.util.KeyGenerator;

protected class RemoteInvocationPayload (hash: Int,
                                         obj: BigArrayOperation, 
                                         keys: Array[Key], 
                                         indices: Array[Index], 
                                         methods: Array[(Any, Index, Any) => void],
                                         params: Array[Any]) {
    
    public def this(hash: Int,
                    obj: BigArrayOperation, 
                    keys: Array[Key], 
                    indices: Array[Index], 
                    methods: Array[(Any, Index, Any) => void],
                    params: Array[Any]) {
        
        property(hash, obj, keys, indices, methods, params);
    }
}