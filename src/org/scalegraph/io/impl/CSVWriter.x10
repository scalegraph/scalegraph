/*
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */
package org.scalegraph.io.impl;
import x10.util.Team;
import org.scalegraph.util.SString;
import org.scalegraph.io.NamedDistData;

import org.scalegraph.util.SString;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MemoryPointer;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.io.FileReader;
import org.scalegraph.io.ID;
import org.scalegraph.io.NamedDistData;

import x10.compiler.NativeCPPCompilationUnit;
import x10.compiler.NativeCPPOutputFile;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeRep;
import x10.compiler.Native;
import x10.io.File;
import x10.io.IOException;
import x10.util.Team;
import org.scalegraph.io.NativeFile;
import org.scalegraph.io.FileMode;
import org.scalegraph.io.FileAccess;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.io.GraphHeader;
import org.scalegraph.io.MatrixHeader;
import org.scalegraph.io.VectorHeader;

@NativeCPPInclude("CSVHelper.h")
@NativeCPPCompilationUnit("CSVHelper.cc") 
public class CSVWriter {
	/*hedder 1 line
	 * string with double quotation 
	 * "name1 <int>","name2 <.... namex : NamedDistData.name
	 * path :directory (make a directory  (hogenameprovider
	 * file num = place num ( each place writes files)
	 * */
	

	


	public static def makeTypeStr( typeId :Int){
		val id = (typeId>=256) ? typeId/256 : typeId;
		switch(id) {
		case ID.TYPE_BOOLEAN:
			return "Boolean";
		case ID.TYPE_BYTE:
			return "Byte";
		case ID.TYPE_SHORT:
			return "Short";
		case ID.TYPE_INT:
			return "Int";
		case ID.TYPE_LONG:
			return "Long";
		case ID.TYPE_FLOAT:
			return "Float";
		case ID.TYPE_DOUBLE:
			return "Double";
		case ID.TYPE_UBYTE:
			return "UByte";
		case ID.TYPE_USHORT:
			return "UShort";
		case ID.TYPE_UINT:
			return "UInt";
		case ID.TYPE_ULONG:
			return "ULong";
		case ID.TYPE_CHAR:
			return "Char";
		case ID.TYPE_STRING:
			return "String";
		default:
			throw new Exception("invalid type id : " + id);
		}
	}

	public static def writeSafe(team :Team, path :SString, data :NamedDistData){//data: all data

		val fman = FileNameProvider.createForWrite(path,true);
		if(fman.isScattered() ){
			fman.mkdir();
		}

		var count :Int =0;
		finish for ( i in Place.places()){
			val countt=count;
			val tmppath = fman.fileName(count).toString();
			at(i) async write3(team, tmppath, data, (countt==0) );
			count++;
		}

	}


	

	/* header
	 * "Name1 <Int>" ,"Name2...
	 */
	
	public static def write(team :Team, path :SString, data :NamedDistData){//data: all data
		val nthreads = 2;//Runtime.NTHREADS?

		val fman = FileNameProvider.createForWrite(path,true);
		if(fman.isScattered() ){
			fman.mkdir();
		}

		var count :Int =0;
		finish for ( i in Place.places()){
			val countt=count;
			val tmppath = fman.fileName(count).toString();
			at(i) async write4(team, tmppath, data, nthreads, (countt==0) );
			count++;
		}

	}


	public static def dmcElemToString(dmcAny :Any, i :Long, typeId:Int) :String{
		val id = (typeId>=256) ? typeId/256 : typeId;
		if( id==ID.TYPE_BOOLEAN ){
			val dmc = dmcAny as DistMemoryChunk[Boolean];
			val mc = dmc();
			return mc.elemtoString(i);
		}else if( id==ID.TYPE_BYTE ){
			val dmc = dmcAny as DistMemoryChunk[Byte];
			val mc = dmc();
			return mc.elemtoString(i);
		}else if( id==ID.TYPE_SHORT ){
			val dmc = dmcAny as DistMemoryChunk[Short];
			val mc = dmc();
			return mc.elemtoString(i);
		}else if( id==ID.TYPE_INT ){
			val dmc = dmcAny as DistMemoryChunk[Int];
			val mc = dmc();
			return mc.elemtoString(i);
		}else if( id==ID.TYPE_LONG ){
			val dmc = dmcAny as DistMemoryChunk[Long];
			val mc = dmc();
			return mc.elemtoString(i);
		}else if( id==ID.TYPE_FLOAT ){
			val dmc = dmcAny as DistMemoryChunk[Float];
			val mc = dmc();
			return mc.elemtoString(i);
		}else if( id==ID.TYPE_DOUBLE ){
			val dmc = dmcAny as DistMemoryChunk[Double];
			val mc = dmc();
			return mc.elemtoString(i);
		}else if( id==ID.TYPE_UBYTE ){
			val dmc = dmcAny as DistMemoryChunk[UByte];
			val mc = dmc();
			return mc.elemtoString(i);
		}else if( id==ID.TYPE_USHORT ){
			val dmc = dmcAny as DistMemoryChunk[UShort];
			val mc = dmc();
			return mc.elemtoString(i);
		}else if( id==ID.TYPE_UINT ){
			val dmc = dmcAny as DistMemoryChunk[UInt];
			val mc = dmc();
			return mc.elemtoString(i);
		}else if( id==ID.TYPE_ULONG ){
			val dmc = dmcAny as DistMemoryChunk[ULong];
			val mc = dmc();
			return mc.elemtoString(i);
		}else if( id==ID.TYPE_CHAR ){
			val dmc = dmcAny as DistMemoryChunk[Char];
			val mc = dmc();
			return mc.elemtoString(i);
		}else if( id==ID.TYPE_STRING ){
			val dmc = dmcAny as DistMemoryChunk[String];
			val mc = dmc();
			return mc.elemtoString(i);
		}else{
			throw new Exception("invalid type id : " + id);
		}
	}

	public static def nddDataSize(data:NamedDistData){
		
		val typeId = data.typeId()(0);
		val id = (typeId>=256) ? typeId/256 : typeId;
		if( id==ID.TYPE_BOOLEAN ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Boolean];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==ID.TYPE_BYTE ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Byte];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==ID.TYPE_SHORT ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Short];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==ID.TYPE_INT ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Int];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==ID.TYPE_LONG ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Long];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==ID.TYPE_FLOAT ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Float];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==ID.TYPE_DOUBLE ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Double];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==ID.TYPE_UBYTE ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[UByte];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==ID.TYPE_USHORT ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[UShort];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==ID.TYPE_UINT ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[UInt];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==ID.TYPE_ULONG ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[ULong];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==ID.TYPE_CHAR ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Char];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==ID.TYPE_STRING ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[String];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else{
			throw new Exception("invalid type id : " + id);
		}
	}
	
	
	public static def write3(team :Team, path :String, data :NamedDistData, header :Boolean){
		val O  = new File(path);
		val P    = O.printer();
		//	var nddSize :Array[Long] = new Array[Long](1);
		val nddSize = nddDataSize(data);
		val dmcarr = data.data();
		val colSize = data.typeId().size;


		if (header){
			var headerStr :String = "";
			for ( i in 0..(colSize-1) ) {
				headerStr += "\"" + data.name()(i) + " <" + makeTypeStr(data.typeId()(i) ) + ">\"" + ( i != colSize-1 ?  " " : "\n");
			}
			P.print( headerStr);
		}

		
		for( i in 0..( nddSize -1) ){
			if(i==nddSize/2) Console.OUT.println("50%:"+path);

			var outputStr :String = "";
			for ( j in 0..(colSize-1) ) {
				val ss = dmcElemToString(dmcarr(j), i, data.typeId()(j) );
				val b = ss.bytes();
				P.write(b, 0, b.size);
				val ss2 = (( j == colSize-1 ) ? "\n" : ",");
				val b2 = ss2.bytes();
				P.write(b2, 0, b2.size);
			}
			P.flush();
			//			P.print( outputStr );

		}
	}


	public static def write4(team :Team, path :String, data :NamedDistData, nthreads :Int, header :Boolean){
		val O  = new File(path);
		val P    = O.printer();
		val nddSize = nddDataSize(data);

		Console.OUT.println("size:"+nddSize);
		
		val canUse :Array[Boolean] = new Array[Boolean](nthreads);
		val madeString :Array[String] = new Array[String](nthreads);

		val size=16;
		
		var start :Long = 0l;
		var endFlag :Boolean = false;
		var asyncNum :Long = 0;
		var printNum :Long = 0;
		var asyncEndFlag :Boolean = false;

		var headerStr :String = "";
		val colSize = data.typeId().size;
		if (header){
			for ( i in 0..(colSize-1) ) {
				headerStr += "\"" + data.name()(i) + " <" + makeTypeStr(data.typeId()(i) ) + ">\"" + ( i != colSize-1 ?  " " : "\n");
			}
			P.print( headerStr);
		}

		for( i in 0..(nthreads-1) ){
			canUse(i)=false;
		}

		while(endFlag==false){
			for( i in 0..(nthreads-1) ){
				if( start + size >= nddSize ){
					val tmpIndex = i;
					val tmpStart = start;
					val tmpSize = nddSize - start;
					async makeStrFromNdd(data, madeString, canUse, tmpIndex, tmpStart, tmpSize );
					asyncNum++;
					start+=size;
					endFlag = true;
					asyncEndFlag=true;
					break;
				}else{
					val tmpIndex = i;
					val tmpStart = start;
					async makeStrFromNdd(data, madeString, canUse, tmpIndex, tmpStart, size );
					asyncNum++;
					start+=size;
				}
			}

			var continueFlag :Boolean = true;
			while(continueFlag){
				var ready :Int;
				ready=-1;
				while(true){
					ready=-1;
					for( i in 0..(nthreads-1) ){
						atomic if( canUse(i) ){
							ready = i;
							break;
						}
					}
					if(ready!=-1) break;
					if(asyncEndFlag && (asyncNum == printNum ) ){
						continueFlag=false;
						ready=-2;
						break;
					}
				}
				if( ready!=-2){
					P.print( madeString(ready) );
					printNum++;
					canUse(ready)=false;
				}
				
				if(asyncEndFlag==false){
					if( start + size >= nddSize ){
						val tmpIndex = ready;
						val tmpStart = start;
						val tmpSize = nddSize - start;
						async makeStrFromNdd(data, madeString, canUse, tmpIndex, tmpStart, tmpSize );
						start+=size;
						asyncNum++;
						asyncEndFlag=true;
					}else{
						val tmpIndex = ready;
						val tmpStart = start;
						async makeStrFromNdd(data, madeString, canUse, tmpIndex, tmpStart, size );
						asyncNum++;
						start+=size;
					}
				}

			}
			
		}
	}

	
	public static def makeStrFromNdd(data :NamedDistData, madeString :Array[String], canUse :Array[Boolean], setIndex :Int, start :Long, size :Long){
		
		val typeId = data.typeId();
		val colNum :Int = typeId.size;
		val dmc = data.data();
		madeString(setIndex)="";
		for( i in (start)..(start+size-1) ){
			for( j in 0..(colNum-1) ){
				madeString(setIndex) += dmcElemToString(dmc(j), i, typeId(j) ) + ( j==colNum-1 ? "\n" : "," );
			}
		}

		atomic canUse(setIndex)=true;
	}

	

}



