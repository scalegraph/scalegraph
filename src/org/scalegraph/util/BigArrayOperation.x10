package org.scalegraph.util;

import org.scalegraph.util.BigArray;

public interface BigArrayOperation {
    
    def readData(indices: Array[Index]): Any;
    def writeData(indices: Array[Index], data: Any): void;
}