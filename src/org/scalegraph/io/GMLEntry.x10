package org.scalegraph.io;

import x10.util.ArrayList;

/**
 * Represent paire between key and value (string/list) of GML data
 */
public class GMLEntry {
	
	protected var isList: Boolean;
	protected var key: String;
	protected var value: Any;
	protected var list:ArrayList[GMLEntry];
	
	private def this(){}
	
    protected def this(key: String, value: Any) {
    	this.key = key;
    	this.value = value;
    }
    
    protected def this(key: String, list: ArrayList[GMLEntry]) {
    	this.key = key;
    	this.list = list;
    	this.isList = true;
    }
    
    public def isList() {
    	return this.isList;
    }
    
    public def getKey() : String {
    	return key;
    }
    
    public def getValue() : Any {
    	return value;
    }
    
    public def getList() : ArrayList[GMLEntry]{
    	return list;
    }
}