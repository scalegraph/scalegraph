/*
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */
package org.scalegraph.util;

import x10.compiler.Native;

import x10.compiler.Ifdef;
import x10.util.Timer;
import org.scalegraph.Config;

// TODO: rename package name -> utils
public class Utils {
	
	public static def ensureOnFirst() {
		if(here.id != 0) {
			throw new BadPlaceException("Here is not the first place.");
		}
	}
	
	public static def debugPrintln(pkg:String, str: String) {
		@Ifdef("DEBUGPRINT") {
			Console.OUT.println("" + Timer.milliTime() + ":Place " + here.id + ":Worker " + Runtime.workerId() + ":" + pkg + ": " + str);
			Console.OUT.flush();
		}
	}
	
	public static def debugPrintSparseMatrix[T](offset:MemoryChunk[Long], value:MemoryChunk[T], identity:Long){
		@Ifdef("DEBUGPRINT") {
			debugPrintln("debugPrintSparseMatrix", ""+identity);
			if(value.size()==0L){
				Console.OUT.println("\t<empty>");
				Console.OUT.flush();
				return;
			}
			Console.OUT.print("\t{");
			for(i in offset.range())
				Console.OUT.print("("+i+","+offset(i)+"),");
			Console.OUT.println("\b}");
			
			Console.OUT.print("\t{");
			for(i in value.range())
				Console.OUT.print("("+i+","+value(i)+"),");
			Console.OUT.println("\b}");
			
			/*var offsetIndex :Long = 0L;
			var vstartIndex :Long = 0L;
			for(valueIndex in 0L..(value.size()-1L)){
				while(offsetIndex < offset.size()-1 && 
						valueIndex >= offset(offsetIndex+1L)){
					++offsetIndex;
					vstartIndex = offset(offsetIndex);
				}
				Console.OUT.println("\t("+offsetIndex+","+(valueIndex-vstartIndex)+")\t= "+value(valueIndex));
			}*/
			
			/*for(offsetIndex in 0L..(offset.size()-2L)){
				val vstartIndex:Long = offset(offsetIndex);
				var valueIndex:Long = vstartIndex;
				do{
					Console.OUT.println("\t("+offsetIndex+","+(valueIndex-vstartIndex)+")\t= "+value(valueIndex));
				}while(++valueIndex < offset(offsetIndex+1L));
			}*/
			Console.OUT.flush();
		}
	}
	
	@Native("c++", "(#T )(0)")
	public static native def getDummyZeroValue[T]():T;

//	@Native("c++", "reinterpret_cast<<#T >>(#v)")
//	public static native def forceCastTo[T](v:Any):T;
}
