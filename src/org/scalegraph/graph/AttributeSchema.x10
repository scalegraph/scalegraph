package org.scalegraph.graph;

import x10.util.HashMap;

/**
 * This class represents attribute schema for vertices and edges
 */
public class AttributeSchema {
	
	/**
	 * Attribute type constant
	 */
	public static val ByteAttribute = 0;
	public static val ShortAttribute = 1;
	public static val IntAttribute = 2;
	public static val LongAttribute = 3;
	public static val FloatAttribute = 4;
	public static val DoubleAttribute = 5;
	public static val CharAttribute = 6;
	public static val StringAttribute = 7;
	public static val DateAttribute = 8;
	public static val BooleanAttribute = 9;
	
	protected var nameAndTypeMap: HashMap[String, String]; // Map between attribute name and runtime name of attribute instance
	
	/**
	 * The default constructor just creates hash map
	 */
	public def this() {
		nameAndTypeMap = new HashMap[String, String]();
	}
	
	/**
	 * This methods adds schema rule which allows any objects following this schema 
	 * having an attribute with given name and given attribute type
	 * @param attributeName - attribute name
	 * @param attributeType - attribute type constant defined above
	 */
	public def add(attributeName: String, attributeType: Int) {
		
		// Check whehter the atribute already exists or not
		if(nameAndTypeMap.containsKey(attributeName)) {
			throw new Exception("Attribute already exists");
		}
		
		var typeName: String = "";
		
		// Get class name from input attribute type (integer)
		switch(attributeType) {
			case ByteAttribute:
				typeName = (new ByteAttribute("dummy")).typeName();
				break;
			
			case ShortAttribute:
				typeName = (new ShortAttribute("dummy")).typeName();
				break;
				
			case IntAttribute:
				typeName = (new IntAttribute("dummy")).typeName();
				break;
				
			case LongAttribute:
				typeName = (new LongAttribute("dummy")).typeName();
				break;
				
			case FloatAttribute:
				typeName = (new FloatAttribute("dummy")).typeName();
				break;
				
			case DoubleAttribute:
				typeName = (new DoubleAttribute("dummy")).typeName();
				break;
				
			case CharAttribute:
				typeName = (new CharAttribute("dummy")).typeName();
				break;
				
			case StringAttribute:
				typeName = (new StringAttribute("dummy")).typeName();
				break;
				
			case DateAttribute:
				typeName = (new DateAttribute("dummy")).typeName();
				break;
			
			case BooleanAttribute:
				typeName = (new BooleanAttribute("dummy")).typeName();
				break;
				
			default:
				// Invalid input
				throw new Exception("Invalid input number for 'attributeType'");
		}
		
		nameAndTypeMap.put(attributeName, typeName);

	}
	
	/**
	 * This methods adds schema rule which allows any objects following this schema 
	 * having an attribute with given name and given attribute type
	 * @param attributeName - attribute name
	 * @param attribute - an instance of children of Attribute class
	 */
	protected def add(attributeName: String, attribute: Attribute)  {
		
		// Check whehter the atribute already exists or not
		if(nameAndTypeMap.containsKey(attributeName)) {
			throw new Exception("Attribute already exists");
		}
		nameAndTypeMap.put(attributeName, attribute.typeName());
	}
	
	/**
	 * This method determines that given attributes follow schema rule or not
	 * @return true if all given attributes follow schema, false if otherwise
	 */
	public def validateAttribute(attributes: Array[Attribute]): Boolean {
		
		// Incase of empty schema
		if(nameAndTypeMap.size() == 0) {
			if(attributes == null) {
				return true;
			} else {
				if(attributes.size == 0) {
					return true;
				}
				return false;
			}
		}
		
		// It is not empty schema, but attributes is null
		if(attributes == null) {
			return false;
		}
		
		val schemaIterator: Iterator[String] = nameAndTypeMap.keySet().iterator();
		var schemaAttributeKey: String;
		var schemaAttributeType: String;
		var isFound: Boolean;
		while(schemaIterator.hasNext()) {
			schemaAttributeKey = schemaIterator.next();
			schemaAttributeType = nameAndTypeMap(schemaAttributeKey).value;
			isFound = false;
			
			for(i in attributes) {
				if(attributes(i).getName().equals(schemaAttributeKey)) {
					if(attributes(i).typeName().equals(schemaAttributeType)) {
						isFound = true;
						break;
					}
				}
			}
			
			// Did not found schema key in given attribute array
			if(isFound == false) {
				return false;
			}
		}
		
		return true;
	}
	
	/**
	 * This method deeply clone itself
	 */
	public def clone(): AttributeSchema {
		
		cloneSchema: AttributeSchema = new AttributeSchema();
		for( k in this.nameAndTypeMap.keySet()) {
			cloneSchema.nameAndTypeMap.put(k, this.nameAndTypeMap.get(k).value);
		}
		return cloneSchema;
	}
}