package org.igraphx10.util;

import x10.util.Pair;

/**
 * This class represents a Matrix
 * The Matrix may have any positive Integer
 */
public class Matrix {
    
	private var matrix :DistArray[Int];
	private var nrows:Int;
	private var ncols:Int;
	
	/**
     * Default constructor 
     */
    public def this() {
    	
    }
   
    /**
     * This constructor creates a matrix initialized to 0s by providing the rows and columns count
     * 
     * @param nrows - number of rows
     * @param ncols - number of columns
     */
    public def this(var nrows:Int, var ncols:Int){
    	//While the user might provide nrows and ncols that are not the power values of two, the values need to be converted
    	//to such power of two
    	
    	var x:Int = 0;
    	var y:Int = 0;
    	var z:Int = 0;
    	
    	if(!Math.powerOf2(nrows)){
    		//Get the smallest large power of 2 for nrows
    		x = Math.ceil(Math.log10(nrows)/Math.log10(2)) as Int;
    		if(x == 31){
    			x = Math.pow2(x) - 2;
    		}else{
    			x = Math.pow2(x);
    		}

    	}else{
    		x = nrows;
    	}

    	if(!Math.powerOf2(ncols)){
    		//Get the smallest large power of 2 for ncols
    		y = Math.ceil(Math.log10(ncols)/Math.log10(2)) as Int;

    		if(y == 31){
    			y = Math.pow2(y) - 2;
    		}else{
    			y = Math.pow2(y);
    		}
    	}else{
    		y = ncols;
    	}
    	
    	z = x * y;
    	
    	if(z > Int.MAX_VALUE){
    		throw new IllegalOperationException("The matrix size cannot exceed 2^31 - 1.");
    	}
    	else{
    	   	this.nrows = x;
    		this.ncols = y;
    	} 
    		
    	var reg:Region = (1..x)*(1..y); 	
    	  	
    	var dst:Dist = Dist.makeBlock(reg);
    	   	
    	matrix = DistArray.make[Int](dst, 0);
    }
    
    /**
     * This method increases the size of the Matrix by 2. If the original Matrix had nxm number of elements,
     * the resulting matrix will have 4xnxm number of elements. The Enlarging will happen within the Matrix itself.
     *  
     */
    public def enlargebyTwo(){
    	var newMatrix :DistArray[Int];
    	this.nrows *= 2;//Enlarge the number of rows by two
    	this.ncols *= 2;//Enlarge the number of columns by two
    	
    	var reg:Region = (1..nrows)*(1..ncols);
    	var dst:Dist = Dist.makeBlock(reg);
    	newMatrix = DistArray.make[Int](dst, 0);
    	
    	//Copy all the existing values to new matrix
    	for(p:Point in matrix.region){
    		newMatrix(p) = matrix(p);
    	}
    	
    	this.matrix = newMatrix;
    }

    /**
     * This method decreases the size of the Matrix by 2. If the original Matrix had nxm number of elements,
     * the resulting matrix will have 0.25xnxm number of elements. The reduction will happen within the Matrix itself.
     *  
     */
    public def reduceByTwo(){
    	var newMatrix :DistArray[Int];
    	this.nrows /= 2;//Enlarge the number of rows by two
    	this.ncols /= 2;//Enlarge the number of columns by two
    	
    	if((this.nrows == 1) || (this.ncols == 1)){
    		throw new IllegalOperationException("The matrix size cannot be further reduced.");
    	}
    	
    	var reg:Region = (1..nrows)*(1..ncols);
    	var dst:Dist = Dist.makeBlock(reg);
    	newMatrix = DistArray.make[Int](dst, 0);
    	
    	//Copy all the existing values to new matrix.
    	for(p:Point in newMatrix.region){
    		newMatrix(p) = matrix(p);
    	}
    	
    	this.matrix = newMatrix;
    }
    
    /**
     * This method sets an element in the Array to 1.
     * 
     * @param rowId - The row index of the element that needs to be set
     * @param columnId - The column index of the element that needs to be set
     */
    public def setAt(rowId:Int, columnId:Int, value:Int){
    	matrix([rowId, columnId]) = value;
    }
    
    /**
     * This method resets an element in the Array to 0.
     * 
     * @param rowId - The row index of the element that needs to be reset
     * @param columnId - The column index of the element that needs to be reset
     */
    public def resetAt(rowId:Int, columnId:Int, value:Int){
    	matrix([rowId, columnId]) = value;
    }
    
    /**
     * This method returns the value at a particular location
     * 
     * @return an Int value representing the value at that particular cell.
     */
    public def getAt(rowId:Int, columnId:Int){
    	return matrix([rowId, columnId]);
    }
    
    /**
     * This method returns the size of the Matrix
     * 
     * @return a Pair[Int, Int] that encloses the number of rows and number of columns of the Matrix
     */
    public def getDimensions():Pair[Int, Int]{
    	return new Pair[Int, Int](nrows, ncols);
    }
    
}