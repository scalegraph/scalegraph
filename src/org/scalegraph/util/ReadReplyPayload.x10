package org.scalegraph.util;

import org.scalegraph.util.BigArray.*;
// import org.scalegraph.util.BigArrayOperation;
import org.scalegraph.util.KeyGenerator.*;

public class ReadReplyPayload(hash: Int, obj: BigArrayOperation, keys: Array[Key], indices: Array[Index], data: Any) {
    
    public def this(hash: Int, obj: BigArrayOperation, keys: Array[Key], indices: Array[Index], data: Any) {
        
        property(hash, obj, keys, indices,data);
    }
}