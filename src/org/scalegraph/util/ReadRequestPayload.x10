package org.scalegraph.util;

import org.scalegraph.util.KeyGenerator.*;
import org.scalegraph.util.BigArray.*;
import org.scalegraph.util.RemoteInvocationPayload.*;

public struct ReadRequestPayload(hash: Int, obj: ArrayObject, keys: Array[Key], indices: Array[Index]) {
    
    public def this(hash: Int, obj: ArrayObject, keys: Array[Key], indices: Array[Index]) {
        
        property(hash, obj, keys, indices);
    }
}