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
import org.scalegraph.util.SStringBuilder;
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
import org.scalegraph.id.Type;
import x10.util.concurrent.Monitor;

//@NativeCPPInclude("CSVHelper.h")
//@NativeCPPCompilationUnit("CSVHelper.cc") 
public class CSVWriter {
	/*hedder 1 line
	 * string with double quotation 
	 * "name1 <int>","name2 <.... namex : NamedDistData.name
	 * path :directory (make a directory  (hogenameprovider
	 * file num = place num ( each place writes files)
	 * */

	private static val monitor=new Monitor();

	/* header
	 * "Name1 <Int>" ,"Name2...
	 */
	
	//data: all data
	public static def write(team :Team, path :SString, data :NamedDistData, setNumFlag :Boolean){
		val nthreads = Runtime.NTHREADS-1;
		if(nthreads<=0){
			writeSafe(team,path,data,setNumFlag);
			return;
		}

		val fman = FileNameProvider.createForWrite(path,true);
		// create directory if it is not exists.
		fman.mkdir();
		
		Console.OUT.println( data.get[Long](0)().size()   );
		
		val startLine = new Array[Long](team.size() );
		var count :Int =0;
		for( i in Place.places()){
			count++;
			if(count==team.size() ) break;
			val tmp = at(i) nddDataSize(data);
			for ( j in count..(team.size()-1 )){
				startLine(j)+=tmp;
			}
		}

		count=0;
		finish for ( i in Place.places()){
			val countt=count;
			val tmppath = fman.fileName(count).toString();
			val dataSize = at(i) nddDataSize(data);
			at(i) async write4(team, tmppath, data, nthreads, (countt==0), dataSize, setNumFlag, startLine(countt) );
			count++;
		}

	}

	public static def write4(team :Team, path :String, data :NamedDistData, nthreads :Int, header :Boolean, nddSize :Long, setNumFlag :Boolean, startLine :Long){
		val dump = new File(path);
		dump.openWrite();
		val file = new NativeFile(path, FileMode.Open, FileAccess.Write);


		val size=16;
		
		
		val canUse :Array[Boolean] = new Array[Boolean](nthreads);
		val madeSString :Array[SString] = new Array[SString](nthreads);
		val sbbs : Array[SStringBuilder] =new Array[SStringBuilder](nthreads);

		var start :Long = 0l;
		var asyncNum :Long = 0;
		var printNum :Long = 0;
		var asyncEndFlag :Boolean = false;
		
		val typeId = data.typeId();
		val colNum :Int = typeId.size;
		val dmc = data.data();
		val atts = new Array[CSVAttributeHandler](colNum);
		for(i in 0..(colNum-1)){
			atts(i)=CSVAttributeHandler.create(typeId(i),false);
			makeAttChunkFromDmc(dmc(i), 10, typeId(i), atts(i) );
			atts(i).setChunk2();
		}

		var cnt : Int =0;
		if (header){
			val ssb = new SStringBuilder();
			if(setNumFlag){
				ssb.add("\"ID <Long>\" , ");
			}
			for ( i in 0..(colNum-1) ) {
				ssb.add("\"" + data.name()(i) + " <" + Type.typeNameStr(data.typeId()(i) ) + ">\"" + ( i != colNum-1 ?  " , " : "\n"));
			}
			file.write(ssb.result().bytes() );
		}

		for( i in 0..(nthreads-1) ){
			canUse(i)=false;
			sbbs(i) = new SStringBuilder();
		}
		
//		var totalAsyncNum :Long = (nddSize-1)/size + 1;

		
		for( i in 0..(nthreads-1) ){
			val tmpIndex = i;
			val tmpStart = start;
			if( start + size >= nddSize ){
				val tmpSize = nddSize - start;
				async makeStrFromAtt(atts, sbbs, typeId, madeSString, canUse, tmpIndex, tmpStart, tmpSize, setNumFlag, startLine );
				asyncEndFlag=true;
				break;
			}else{
				async makeStrFromAtt(atts, sbbs, typeId, madeSString, canUse, tmpIndex, tmpStart, size, setNumFlag, startLine );

			}
			asyncNum++;
			start+=size;
		}


		var preUse :Int=nthreads-1;
		while( !(asyncEndFlag && (asyncNum == printNum)) ){

			val nextUse = ( preUse==(nthreads-1) ? 0 : preUse+1) ;
			when(canUse(nextUse) ){
					preUse = nextUse;
			}
			
//			monitor.lock();
//			while( canUse(nextUse) || (asyncEndFlag && (asyncNum == printNum)) ) monitor.await();
//			monitor.unlock();

			file.write( madeSString(nextUse).bytes() );
			printNum++;
			canUse(nextUse)=false;
		
			if( !asyncEndFlag ){
				val tmpStart = start;
				val tmpAsync = asyncNum;
				if( start + size >= nddSize ){
					val tmpSize = nddSize - start;
					async makeStrFromAtt(atts, sbbs, typeId, madeSString, canUse, nextUse, tmpStart, tmpSize, setNumFlag, startLine );
					asyncEndFlag=true;
				}else{
					async makeStrFromAtt(atts, sbbs, typeId, madeSString, canUse, nextUse, tmpStart, size, setNumFlag, startLine );
				}
				start+=size;
				asyncNum++;
			}

		}
		
	}

	
	public static def makeStrFromAtt(atts :Array[CSVAttributeHandler],sbbs : Array[SStringBuilder], typeId :Array[Int], madeSString :Array[SString], canUse :Array[Boolean], setIndex :Int, start :Long, size :Long, setNumFlag :Boolean, startLine :Long){
		val colNum :Int = typeId.size;
		
		sbbs(setIndex).clear();

		for( i in (start)..(start+size-1) ){
			if(setNumFlag){
				sbbs(setIndex).add(startLine+i+1);
				sbbs(setIndex).add( " " );
			}
			for( j in 0..(colNum-1) ){
				sbbs(setIndex).add( atts(j).chunkMcElemToString(i) );
				sbbs(setIndex).add(( j==colNum-1 ? "\n" : "," ));
			}
		}
		madeSString(setIndex)=sbbs(setIndex).result();

		atomic canUse(setIndex)=true;
//		monitor.lock();
//		monitor.release();
		//monitor.unlock();
	}

	
	public static def writeSafe(team :Team, path :SString, data :NamedDistData, setNumFlag :Boolean){

		val fman = FileNameProvider.createForWrite(path,true);
		// create directory if it is not exists.
		fman.mkdir();

		val startLine = new Array[Long](team.size() );
		var count :Int =0;
		for( i in Place.places()){
			count++;
			if(count==team.size() ) break;
			val tmp = at(i) nddDataSize(data);
			for ( j in count..(team.size()-1 )){
				startLine(j)+=tmp;
			}
			
		}

		count=0;
		finish for ( i in Place.places()){
			val countt=count;
			val tmppath = fman.fileName(count).toString();
			at(i) async write3(team, tmppath, data, (countt==0), setNumFlag, startLine(countt) );
			count++;
		}

	}

	public static def write3(team :Team, path :String, data :NamedDistData, header :Boolean, setNumFlag :Boolean, startLine :Long){
		val dump = new File(path);
		dump.openWrite();
		val file = new NativeFile(path, FileMode.Open, FileAccess.Write);
		val nddSize = nddDataSize(data);
		val dmcarr = data.data();
		val att = CSVAttributeHandler.create(Type.Long,false); 
		val typeId = data.typeId();
		val colNum :Int = typeId.size;
		val atts = new Array[CSVAttributeHandler](colNum);
		val dmc = data.data();
		for(i in 0..(colNum-1)){
			atts(i)=CSVAttributeHandler.create(typeId(i),false);
			makeAttChunkFromDmc(dmc(i), 10, typeId(i), atts(i) );
			atts(i).setChunk2();
		}
		val ssb = new SStringBuilder();


		if (header){
			ssb.clear();
			if(setNumFlag){
				ssb.add("\"ID <Long>\" , ");
			}
			for ( i in 0..(colNum-1) ) {
				ssb.add("\"" + data.name()(i) + " <" + Type.typeNameStr(data.typeId()(i) ) + ">\"" + ( i != colNum-1 ?  " , " : "\n"));
			}
			file.write(ssb.result().bytes() );
		}

		
		for( i in 0..( nddSize -1) ){
			if(i==nddSize/2) Console.OUT.println("50%:"+path);

			ssb.clear();
			if(setNumFlag){
				ssb.add(i+startLine+1);
				ssb.add(" ");
			}
			for ( j in 0..(colNum-1) ) {
				ssb.add(atts(j).chunkMcElemToString(i));
				ssb.add(( j == colNum-1 ) ? "\n" : ",");
			}
			file.write(ssb.result().bytes());

		}
	}

	public static def makeAttChunkFromDmc(dmcAny :Any, i :Long, typeId:Int, att :CSVAttributeHandler){
		val id = (typeId>=256) ? typeId/256 : typeId;
		if( id==Type.Boolean ){
			val dmc = dmcAny as DistMemoryChunk[Boolean];
			att.setChunk( dmc() );
		}else if( id==Type.Byte ){
			val dmc = dmcAny as DistMemoryChunk[Byte];
			att.setChunk( dmc() );
		}else if( id==Type.Short ){
			val dmc = dmcAny as DistMemoryChunk[Short];
			att.setChunk( dmc() );
		}else if( id==Type.Int ){
			val dmc = dmcAny as DistMemoryChunk[Int];
			att.setChunk( dmc() );
		}else if( id==Type.Long ){
			val dmc = dmcAny as DistMemoryChunk[Long];
			att.setChunk( dmc() );
		}else if( id==Type.Float ){
			val dmc = dmcAny as DistMemoryChunk[Float];
			att.setChunk( dmc() );
		}else if( id==Type.Double ){
			val dmc = dmcAny as DistMemoryChunk[Double];
			att.setChunk( dmc() );
		}else if( id==Type.UByte ){
			val dmc = dmcAny as DistMemoryChunk[UByte];
			att.setChunk( dmc() );
		}else if( id==Type.UShort ){
			val dmc = dmcAny as DistMemoryChunk[UShort];
			att.setChunk( dmc() );
		}else if( id==Type.UInt ){
			val dmc = dmcAny as DistMemoryChunk[UInt];
			att.setChunk( dmc() );
		}else if( id==Type.ULong ){
			val dmc = dmcAny as DistMemoryChunk[ULong];
			att.setChunk( dmc() );
		}else if( id==Type.Char ){
			val dmc = dmcAny as DistMemoryChunk[Char];
			att.setChunk( dmc() );
		}else if( id==Type.String ){
			val dmc = dmcAny as DistMemoryChunk[String];
			att.setChunk( dmc() );
		}else{
			throw new Exception("invalid type id : " + id);
		}
	}

	public static def nddDataSize(data:NamedDistData){
		
		val typeId = data.typeId()(0);
		val id = (typeId>=256) ? typeId/256 : typeId;
		if( id==Type.Boolean ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Boolean];
			return tmpdmc().size();
		}else if( id==Type.Byte ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Byte];
			return tmpdmc().size();
		}else if( id==Type.Short ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Short];
			return tmpdmc().size();
		}else if( id==Type.Int ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Int];
			return tmpdmc().size();
		}else if( id==Type.Long ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Long];
			return tmpdmc().size();
		}else if( id==Type.Float ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Float];
			return tmpdmc().size();
		}else if( id==Type.Double ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Double];
			return tmpdmc().size();
		}else if( id==Type.UByte ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[UByte];
			return tmpdmc().size();
		}else if( id==Type.UShort ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[UShort];
			return tmpdmc().size();
		}else if( id==Type.UInt ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[UInt];
			return tmpdmc().size();
		}else if( id==Type.ULong ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[ULong];
			return tmpdmc().size();
		}else if( id==Type.Char ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Char];
			return tmpdmc().size();
		}else if( id==Type.String ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[String];
			return tmpdmc().size();
		}else{
			throw new Exception("invalid type id : " + id);
		}
	}
	
}	


	


