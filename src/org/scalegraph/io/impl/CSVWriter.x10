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
import org.scalegraph.id.Type;
import x10.util.concurrent.Monitor;

@NativeCPPInclude("CSVHelper.h")
@NativeCPPCompilationUnit("CSVHelper.cc") 
public class CSVWriter {
	/*hedder 1 line
	 * string with double quotation 
	 * "name1 <int>","name2 <.... namex : NamedDistData.name
	 * path :directory (make a directory  (hogenameprovider
	 * file num = place num ( each place writes files)
	 * */

	public static def writeSafe(team :Team, path :SString, data :NamedDistData){//data: all data

		val setNumFlag = true;
		
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

	/* header
	 * "Name1 <Int>" ,"Name2...
	 */
	
	public static def write(team :Team, path :SString, data :NamedDistData){//data: all data
		val nthreads = 3;//Runtime.NTHREADS-1?

		val setNumFlag =true;

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
			val dataSize = at(i) nddDataSize(data);
			at(i) async write4(team, tmppath, data, nthreads, (countt==0), dataSize, setNumFlag, startLine(countt) );
			count++;
		}

	}



	public static def makeAttChunkFromDmc(dmcAny :Any, i :Long, typeId:Int, att :CSVAttributeHandler){
		val id = (typeId>=256) ? typeId/256 : typeId;
		if( id==Type.Boolean ){
			val dmc = dmcAny as DistMemoryChunk[Boolean];
			val mc = dmc();
			att.setChunk(mc);
			 mc(i).toString();
		}else if( id==Type.Byte ){
			val dmc = dmcAny as DistMemoryChunk[Byte];
			val mc = dmc();
			att.setChunk(mc);
			 mc(i).toString();
		}else if( id==Type.Short ){
			val dmc = dmcAny as DistMemoryChunk[Short];
			val mc = dmc();
			att.setChunk(mc);
			 mc(i).toString();
		}else if( id==Type.Int ){
			val dmc = dmcAny as DistMemoryChunk[Int];
			val mc = dmc();
			att.setChunk(mc);
			 mc(i).toString();
		}else if( id==Type.Long ){
			val dmc = dmcAny as DistMemoryChunk[Long];
			val mc = dmc();
			att.setChunk(mc);
			 mc(i).toString();
		}else if( id==Type.Float ){
			val dmc = dmcAny as DistMemoryChunk[Float];
			val mc = dmc();
			att.setChunk(mc);
			 mc(i).toString();
		}else if( id==Type.Double ){
			val dmc = dmcAny as DistMemoryChunk[Double];
			val mc = dmc();
			att.setChunk(mc);
			 mc(i).toString();
		}else if( id==Type.UByte ){
			val dmc = dmcAny as DistMemoryChunk[UByte];
			val mc = dmc();
			att.setChunk(mc);
			 mc(i).toString();
		}else if( id==Type.UShort ){
			val dmc = dmcAny as DistMemoryChunk[UShort];
			val mc = dmc();
			att.setChunk(mc);
			 mc(i).toString();
		}else if( id==Type.UInt ){
			val dmc = dmcAny as DistMemoryChunk[UInt];
			val mc = dmc();
			att.setChunk(mc);
			 mc(i).toString();
		}else if( id==Type.ULong ){
			val dmc = dmcAny as DistMemoryChunk[ULong];
			val mc = dmc();
			att.setChunk(mc);
			 mc(i).toString();
		}else if( id==Type.Char ){
			val dmc = dmcAny as DistMemoryChunk[Char];
			val mc = dmc();
			att.setChunk(mc);
			 mc(i).toString();
		}else if( id==Type.String ){
			val dmc = dmcAny as DistMemoryChunk[String];
			val mc = dmc();
			att.setChunk(mc);
			 mc(i).toString();
		}else{
			throw new Exception("invalid type id : " + id);
		}
	}

	public static def nddDataSize(data:NamedDistData){
		
		val typeId = data.typeId()(0);
		val id = (typeId>=256) ? typeId/256 : typeId;
		if( id==Type.Boolean ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Boolean];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==Type.Byte ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Byte];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==Type.Short ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Short];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==Type.Int ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Int];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==Type.Long ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Long];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==Type.Float ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Float];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==Type.Double ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Double];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==Type.UByte ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[UByte];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==Type.UShort ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[UShort];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==Type.UInt ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[UInt];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==Type.ULong ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[ULong];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==Type.Char ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[Char];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else if( id==Type.String ){
			val tmpdmc = data.data()(0) as DistMemoryChunk[String];
			val tmpmc = tmpdmc();
			return tmpmc.size();
		}else{
			throw new Exception("invalid type id : " + id);
		}
	}
	
	
	public static def write3(team :Team, path :String, data :NamedDistData, header :Boolean, setNumFlag :Boolean, startLine :Long){
		val O  = new File(path);
		val P    = O.printer();
		//	var nddSize :Array[Long] = new Array[Long](1);
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


		if (header){
			var headerStr :String = "";
			for ( i in 0..(colNum-1) ) {
				headerStr += "\"" + data.name()(i) + " <" + Type.typeNameStr(data.typeId()(i)) + ">\"" + ( i != colNum-1 ?  " , " : "\n");
			}
			P.print( headerStr);
		}

		
		for( i in 0..( nddSize -1) ){
			if(i==nddSize/2) Console.OUT.println("50%:"+path);

			if(setNumFlag){
				val ss = (i+startLine+1).toString();
				val b = ss.bytes();
				P.write(b, 0, b.size);
				val sss = " ";
				val bb = sss.bytes();
				P.write(bb, 0, bb.size);
			}
			for ( j in 0..(colNum-1) ) {
				//val ss = dmcElemToString(dmcarr(j), i, data.typeId()(j) );
				val ss2 = atts(j).chunkMcElemToString(i);
				val b2 = ss2.bytes();
				P.write(b2, 0, b2.size);
				val ss3 = (( j == colNum-1 ) ? "\n" : ",");
				val b3 = ss3.bytes();
				P.write(b3, 0, b3.size);
			}
			P.flush();
			//			P.print( outputStr );

		}
	}

	private static val monitor=new Monitor();
	
	public static def write4(team :Team, path :String, data :NamedDistData, nthreads :Int, header :Boolean, nddSize :Long, setNumFlag :Boolean, startLine :Long){
		val O  = new File(path);
		val P    = O.printer();

		Console.OUT.println("size:"+nddSize);
		
		val canUse :Array[Boolean] = new Array[Boolean](nthreads);
		val madeString :Array[String] = new Array[String](nthreads);
		val sbs : Array[x10.util.StringBuilder] =new Array[x10.util.StringBuilder](nthreads);

		val size=16;
		
		var start :Long = 0l;
		var endFlag :Boolean = false;
		var asyncNum :Long = 0;
		var printNum :Long = 0;
		var asyncEndFlag :Boolean = false;
		
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

		var cnt : Int =0;
		var headerStr :String = "";
		if (header){
			for ( i in 0..(colNum-1) ) {
				headerStr += "\"" + data.name()(i) + " <" + Type.typeNameStr(data.typeId()(i) ) + ">\"" + ( i != colNum-1 ?  " , " : "\n");
			}
			P.print( headerStr);
		}

		for( i in 0..(nthreads-1) ){
			canUse(i)=false;
			sbs(i) = new x10.util.StringBuilder();
		}
		
		var totalAsyncNum :Long = (nddSize-1)/size + 1;

		
			for( i in 0..(nthreads-1) ){
				val tmpIndex = i;
				val tmpStart = start;
				if( start + size >= nddSize ){
					val tmpSize = nddSize - start;
					async makeStrFromAtt(atts, sbs, typeId, madeString, canUse, tmpIndex, tmpStart, tmpSize, setNumFlag, startLine );
					endFlag = true;
					asyncEndFlag=true;
					break;
				}else{
					async makeStrFromAtt(atts, sbs, typeId, madeString, canUse, tmpIndex, tmpStart, size, setNumFlag, startLine );

				}
				asyncNum++;
				start+=size;
			}


			//var continueFlag :Boolean = true;
			var preUse :Int=nthreads-1;
			while( !(asyncEndFlag && (asyncNum == printNum)) ){
				cnt=0;
				Console.OUT.println(cnt++);


					val nextUse = ( preUse==(nthreads-1) ? 0 : preUse+1) ;
					when(canUse(nextUse) ){
							preUse = nextUse;
					}
					
					if(cnt<10 || cnt%50==0) Console.OUT.println("cnt:"+cnt++ +" next:"+nextUse+" canUse:"+canUse(0) +","+ canUse(1) +","+ canUse(2) );
					else cnt++;
					if(cnt>=1000) return;


	//				monitor.lock();
	//				while( canUse(nextUse) || (asyncEndFlag && (asyncNum == printNum)) ) monitor.await();
	//				monitor.unlock();

					P.print( madeString(nextUse) );
					Console.OUT.println("num:"+nextUse);
					Console.OUT.println(cnt++);

					printNum++;
					canUse(nextUse)=false;
					Console.OUT.println(cnt++);
				
					if(asyncEndFlag==false){
						val tmpStart = start;
						val tmpAsync = asyncNum;
						if( start + size >= nddSize ){
							val tmpSize = nddSize - start;
							Console.OUT.println("async:"+nextUse);
							async makeStrFromAtt(atts, sbs, typeId, madeString, canUse, nextUse, tmpStart, tmpSize, setNumFlag, startLine );
							asyncEndFlag=true;
						}else{
							Console.OUT.println("async:"+nextUse);
							async makeStrFromAtt(atts, sbs, typeId, madeString, canUse, nextUse, tmpStart, size, setNumFlag, startLine );
							Console.OUT.println(cnt++);

						}
						start+=size;
						asyncNum++;
					}
				

			}
			
		
	}


	
	public static def makeStrFromAtt(atts :Array[CSVAttributeHandler],sbs : Array[x10.util.StringBuilder], typeId :Array[Int], madeString :Array[String], canUse :Array[Boolean], setIndex :Int, start :Long, size :Long, setNumFlag :Boolean, startLine :Long){
//		public static def makeStrFromAtt(atts :Array[CSVAttributeHandler], typeId :Array[Int], madeString :Array[SString], canUse :Array[Boolean], setIndex :Int, start :Long, size :Long, setNumFlag :Boolean, startLine :Long){
		val colNum :Int = typeId.size;
		Console.OUT.println("start:"+setIndex);
		
		sbs(setIndex).clear();

		for( i in (start)..(start+size-1) ){
			if(setNumFlag){
				sbs(setIndex).add(startLine+i+1);
				sbs(setIndex).add( " " );
			}
			for( j in 0..(colNum-1) ){
				sbs(setIndex).add( atts(j).chunkMcElemToString(i) );
				sbs(setIndex).add(( j==colNum-1 ? "\n" : "," ));
				//madeString(setIndex)=atts(j).chunkMcElemToSString(i) + ( j==colNum-1 ? "\n" : "," );
			}
		}
		madeString(setIndex)=sbs(setIndex).toString();

		atomic canUse(setIndex)=true;
		Console.OUT.println(setIndex + " can be used");
//		monitor.lock();
//		monitor.release();
		//monitor.unlock();
	}

	

}



