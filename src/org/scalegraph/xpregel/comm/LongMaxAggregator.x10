package org.scalegraph.xpregel.comm;

public class LongMaxAggregator implements AggregatorInterface[Long] {
	var _value : Long;
	
	public def setAggregatorValue(value:Long):void {
		_value = value;
	}
	
	public def getAggregatorValue():Long = _value;
	
	public def aggregate(value:Long):void {
		if (_value < value) {
			_value = value;
		}
	}
	
	public def clone():AggregatorInterface[Long] {
		val agg = new LongMaxAggregator();
		agg.setAggregatorValue(_value);
		return agg;
	}
	
	public def reset():void {
		
	}
}