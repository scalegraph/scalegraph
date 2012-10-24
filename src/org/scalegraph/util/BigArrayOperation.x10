package org.scalegraph.util;

// import org.scalegraph.util.BigArray.*;

public interface BigArrayOperation {
    
    def readAll(indices: Array[Index]): Any;
    def writeData(indices: Array[Index], data: Any): void;
    def readOne(index: Index): Any;
}