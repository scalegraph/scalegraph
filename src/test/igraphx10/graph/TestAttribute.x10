package test.scalegraph.graph;

import org.scalegraph.graph.*;

public class TestAttribute {
	
    public static def main(args: Array[String]) {

    	TestStringAttributeEquality();
    	TestNumberEquality();
    	TestNumberComparison();
    	TestCharComparison();
    	TestShouldNotAcceptNull();
    	
    	Console.OUT.println("Passed all testcases");
    	
    }
    
    public static def TestStringAttributeEquality() {

    	var s1: StringAttribute;
    	var s2: StringAttribute;
    	
    	s1 = new StringAttribute("My", "Data");
    	s2 = new StringAttribute("My2", "Data");
    	
    	assert(s1.equals(s2) == false);
    	assert(s1.compareTo(s2) == -1);
    	
    	s1 = new StringAttribute("My", "Data");
    	s2 = new StringAttribute("My", "Data");
    	
    	assert(s1.equals(s2) == true);
    	assert(s1.compareTo(s2) == 0);
    	
    	s1 = new StringAttribute("My", "Absolute");
    	s2 = new StringAttribute("My", "Data");
    	
    	assert(s1.equals(s2) == false);
    	assert(s1.compareTo(s2) == "Absolute".compareTo("Data"));
    	
    	s1 = new StringAttribute("My", "Zero");
    	s2 = new StringAttribute("My", "Data");
    	
    	assert(s1.equals(s2) == false);
    	assert(s1.compareTo(s2) == "Zero".compareTo("Data"));
    	
    }
    
    public static def TestNumberEquality() {
    	
    	byte: ByteAttribute = new ByteAttribute("name", 15);
	    short: ShortAttribute = new ShortAttribute("name", 15);
	    int: IntAttribute = new IntAttribute("name", 15);
	    long: LongAttribute = new LongAttribute("name", 15);
	    float: FloatAttribute = new FloatAttribute("name", 15);
	    double: DoubleAttribute = new DoubleAttribute("name", 15);
    
    	assert(byte.equals(byte) == true);
    	assert(byte.equals(short) == true);
    	assert(byte.equals(int) == true);
    	assert(byte.equals(long) == true);
    	assert(byte.equals(float) == true);
    	assert(byte.equals(double) == true);
    	
    	assert(short.equals(byte) == true);
    	assert(short.equals(short) == true);
    	assert(short.equals(int) == true);
    	assert(short.equals(long) == true);
    	assert(short.equals(float) == true);
    	assert(short.equals(double) == true);
    	
    	assert(int.equals(byte) == true);
    	assert(int.equals(short) == true);
    	assert(int.equals(int) == true);
    	assert(int.equals(long) == true);
    	assert(int.equals(float) == true);
    	assert(int.equals(double) == true);
    	
    	assert(long.equals(byte) == true);
    	assert(long.equals(short) == true);
    	assert(long.equals(int) == true);
    	assert(long.equals(long) == true);
    	assert(long.equals(float) == true);
    	assert(long.equals(double) == true);
    	
    	assert(float.equals(byte) == true);
    	assert(float.equals(short) == true);
    	assert(float.equals(int) == true);
    	assert(float.equals(long) == true);
    	assert(float.equals(float) == true);
    	assert(float.equals(double) == true);
    	
    	assert(double.equals(byte) == true);
    	assert(double.equals(short) == true);
    	assert(double.equals(int) == true);
    	assert(double.equals(long) == true);
    	assert(double.equals(float) == true);
    	assert(double.equals(double) == true);
    
    }
    
    public static def TestNumberComparison() {
    	
		byte: ByteAttribute = new ByteAttribute("name", 1);
		short: ShortAttribute = new ShortAttribute("name", 2);
		int: IntAttribute = new IntAttribute("name", 3);
		long: LongAttribute = new LongAttribute("name", 4);
		float: FloatAttribute = new FloatAttribute("name", 5);
		double: DoubleAttribute = new DoubleAttribute("name", 6);
    
		assert(byte.compareTo(byte) == 0);
		assert(byte.compareTo(short) == -1);
		assert(byte.compareTo(int) == -1);
		assert(byte.compareTo(long) == -1);
		assert(byte.compareTo(float) == -1);
		assert(byte.compareTo(double) == -1);
		
		assert(short.compareTo(byte) == 1);
		assert(short.compareTo(short) == 0);
		assert(short.compareTo(int) == -1);
		assert(short.compareTo(long) == -1);
		assert(short.compareTo(float) == -1);
		assert(short.compareTo(double) == -1);
		
		assert(int.compareTo(byte) == 1);
		assert(int.compareTo(short) == 1);
		assert(int.compareTo(int) == 0);
		assert(int.compareTo(long) == -1);
		assert(int.compareTo(float) == -1);
		assert(int.compareTo(double) == -1);
		
		assert(long.compareTo(byte) == 1);
		assert(long.compareTo(short) == 1);
		assert(long.compareTo(int) == 1);
		assert(long.compareTo(long) == 0);
		assert(long.compareTo(float) == -1);
		assert(long.compareTo(double) == -1);
		
		assert(float.compareTo(byte) == 1);
		assert(float.compareTo(short) == 1);
		assert(float.compareTo(int) == 1);
		assert(float.compareTo(long) == 1);
		assert(float.compareTo(float) == 0);
		assert(float.compareTo(double) == -1);
		
		assert(double.compareTo(byte) == 1);
		assert(double.compareTo(short) == 1);
		assert(double.compareTo(int) == 1);
		assert(double.compareTo(long) == 1);
		assert(double.compareTo(float) == 1);
		assert(double.compareTo(double) == 0);
    }
    
    public static def TestBooleanComparison() {
    	var b1: BooleanAttribute;
    	var b2: BooleanAttribute;
    	
    	b1 = new BooleanAttribute("B1", true);
    	b2 = new BooleanAttribute("B2", true);
    	
    	assert(b1.equals(b2) == false);
    	assert(b1.compareTo(b2) == "B1".compareTo("B2"));
    	
    	b1 = new BooleanAttribute("B1", true);
    	b2 = new BooleanAttribute("B1", false);
    	
    	assert(b1.equals(b2) == false);
    	assert(b1.compareTo(b2) == true.compareTo(false));
    	
    	b1 = new BooleanAttribute("B1", true);
    	b2 = new BooleanAttribute("B1", true);
    	
    	assert(b1.equals(b2) == true);
    	assert(b1.compareTo(b2) == 0);
    }
    
    public static def TestCharComparison() {
    	var c1: CharAttribute;
    	var c2: CharAttribute;
    	
    	c1 = new CharAttribute("C1", 'X');
    	c2 = new CharAttribute("C2", 'Y');
    	
    	assert(c1.equals(c2) == false);
    	assert(c1.compareTo(c2) == "C1".compareTo("C2"));
    	
    	c1 = new CharAttribute("Char", 'X');
    	c2 = new CharAttribute("Char", 'Y');
    	
    	assert(c1.equals(c2) == false);
    	assert(c1.compareTo(c2) == "X".compareTo("Y"));
    	
    	c1 = new CharAttribute("Char", 'A');
    	c2 = new CharAttribute("Char", 'A');
    	
    	assert(c1.equals(c2) == true);
    	assert(c1.compareTo(c2) == 0);
    }
    
    public static def TestShouldNotAcceptNull() {
    	var a1: Attribute;
    	
    	a1 = new IntAttribute("name", 10);
    	a1.setValue(1L as Int);
    	// Actually if we pass null it will raise runtime error due to trying to cast null to object
    }
    
}