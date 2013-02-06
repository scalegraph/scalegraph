package org.scalegraph.visitor;


abstract public class LsBfsHandler {
    
    abstract public def initialize(): void;
    abstract public def examine(isFirstVisit: Boolean, pred: Long, v: Long, dist: Long): void;
    abstract public def terminate(): void;
}