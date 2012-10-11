package org.scalegraph.util;

import org.scalegraph.util.BigArray;

public interface BigArrayOperation {
    
    def getData(indices: Array[Index]): Any;
}