package org.scalegraph.xpregel.comm;

public interface AggregatorInterface[A] {
	public def setAggregatorValue(value:A):void;
	public def getAggregatorValue():A;
	public def aggregate(value:A):void;
	public def clone():AggregatorInterface[A];
	public def reset():void;
}