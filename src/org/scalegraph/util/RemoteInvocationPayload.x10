package org.scalegraph.util;

import org.scalegraph.util.KeyGenerator.*;
// import org.scalegraph.util.BigArray;

public type Param1 = Any;
public type Param2 = Any;
public type ArrayObject = Any;

public class RemoteInvocationPayload (obj: BigArrayOperation, 
                                         keys: Array[Key], 
                                         methods: Array[(ArrayObject, Param1, Param2) => void],
                                         params1: Array[Any],
                                         params2: Array[Any]) {
    
    public def this(obj: BigArrayOperation, 
                    keys: Array[Key], 
                    methods: Array[(ArrayObject, Param1, Param2) => void],
                    params1: Array[Any],
                    params2: Array[Any]) {
        
        property(obj, keys, methods, params1, params2);
    }
}