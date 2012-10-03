package org.scalegraph.util;

import org.scalegraph.util.BigArray;

protected class SendPayload(hash: Int, obj: BigArrayOperation, indices: Array[Index]) {
    
    public def this(hash: Int, obj: BigArrayOperation, indices: Array[Index]) {
        
        property(hash, obj, indices);
    }
    
}