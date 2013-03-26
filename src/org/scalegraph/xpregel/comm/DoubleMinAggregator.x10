package org.scalegraph.xpregel.comm;

public class DoubleMinAggregator implements AggregatorInterface[Double] {
	var _value : Double;
	
	public def this() {
		_value = Double.MAX_VALUE;
	}
	
	public def setAggregatorValue(value:Double) : void {
		_value = value;
	}
	
	public def getAggregatorValue():Double = _value;
	
	public def aggregate(value:Double) {
		if (_value > value) _value = value;
	}
	
	public def clone() : AggregatorInterface[Double] {
		val copy = new DoubleMinAggregator();
		copy.setAggregatorValue(_value);
		return copy;
	}
	
	public def reset():void {
		_value = Double.MAX_VALUE;
	}
}