package org.scalegraph.util;

import org.scalegraph.util.BigArray;
import org.scalegraph.util.KeyGenerator;

protected class RequestPayload(hash: Int, obj: BigArrayOperation, keys: Array[Key], indices: Array[Index]) {
    
    public def this(hash: Int, obj: BigArrayOperation, keys: Array[Key], indices: Array[Index]) {
        
        property(hash, obj, keys, indices);
    }
}