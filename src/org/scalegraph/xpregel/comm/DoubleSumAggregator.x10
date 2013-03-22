package org.scalegraph.xpregel.comm;

public class DoubleSumAggregator implements AggregatorInterface[Double] {
	
	var _value : Double;
	
	public def this() {
		_value = 0.0;
	}
	
	public def setAggregatorValue(value:Double):void {
		_value = value;
	}
	
	public def getAggregatorValue():Double = _value;
	
	public def aggregate(value:Double) : void {
		_value += value;
	}
	
	public def clone() : AggregatorInterface[Double] {
		val copy = new DoubleSumAggregator();
		copy.setAggregatorValue(_value);
		return copy;
	}
	
	public def reset() : void {
		_value = 0.0;
	}
}