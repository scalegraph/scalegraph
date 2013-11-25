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
package test;

import x10.util.Team;

import org.scalegraph.test.STest;
import org.scalegraph.io.ID;
import org.scalegraph.io.CSV;
import org.scalegraph.id.Type;
import x10.io.File;

final class CSVReaderTest extends STest {
	public static def main(args: Array[String](1)) {
		new CSVReaderTest().execute(args);
	}
	
	public def run(args: Array[String](1)): Boolean {
		val mode = 0;
		if(mode==0){
			val colTypes = [Type.Boolean, Type.Byte, Type.Short, Type.Int, Type.Long, Type.Float, Type.Double, Type.UByte, Type.UShort, Type.UInt, Type.ULong, Type.Char, Type.String, Type.String];
			val nd = CSV.read(args(0), colTypes, true);
			
			CSV.write("csvwTest", nd, false);
		}else if(mode==1){
		
			val colTypes = [Type.Long as Int, Type.Long, Type.None, Type.Double];
			val nd = CSV.read(args(0), colTypes, false);
		
			// print result
			Console.OUT.println(nd.name());
		
			CSV.write("csvwTest", nd, true);
			//CSVWriter.writeSafe(team,"csvwTest",nd);
			
		}else if(mode==2){
			val colTypes = [Type.Long as Int, Type.Long];
			val nd = CSV.read(args(0), colTypes, false);
			Console.OUT.println("twitest");
			Console.OUT.println(nd.name());
			
			CSV.write("csvwTest", nd, true);
			
		}else if(mode==3){
			val colTypes = [Type.Long as Int, Type.Long];
			val nd = CSV.read(args(0), colTypes, false);
			Console.OUT.println("twitest");
			Console.OUT.println(nd.name());
			
	//		CSV.write("csvwTest", nd, true);
			
		}else if(mode==4){
			val O  = new File("fileouttest");
			val P    = O.printer();
			for( i in 0..2090000){
				P.print("hoge,hoga\n");
			}
		}else if(mode==5){
			val hoge=Console.IN.readChar();
			if(hoge=='1'){
				val colTypes = [Type.Long as Int, Type.Long, Type.None, Type.Double];
				val nd = CSV.read(args(0), colTypes, false);
				Console.OUT.println(nd.name());
				CSV.write("csvwTest", nd, true);
			}else if(hoge=='2'){
				val colTypes = [Type.Long as Int, Type.Long];
				val nd = CSV.read(args(0), colTypes, false);
				Console.OUT.println("twitest");
				Console.OUT.println(nd.name());
				CSV.write("csvwTest", nd, true);
			}else if(hoge=='3'){
				val colTypes = [Type.Boolean as Int, Type.Short, Type.Long, Type.Float, Type.Double, Type.Char, Type.String];
				val nd = CSV.read(args(0), colTypes, false);
				Console.OUT.println(nd.name());
				CSV.write("csvwTest", nd, true);
			}else if(hoge=='4'){
				val colTypes = [Type.Int as Int, Type.Double, Type.String, Type.String, Type.Boolean];
				val nd = CSV.read(args(0), colTypes, false);
				Console.OUT.println(nd.name());
				CSV.write("csvwTest", nd, true);
			}else if(hoge=='5'){
				val colTypes = [Type.Int as Int, Type.Double, Type.String, Type.String, Type.Boolean];
				val nd = CSV.read(args(0), colTypes, true);
				Console.OUT.println(nd.name());
				CSV.write("csvwTest", nd, true);
			}else if(hoge=='6'){
				val colTypes = [Type.Boolean as Int, Type.Int];
				val nd = CSV.read(args(0), colTypes, false);
				Console.OUT.println(nd.name());
				CSV.write("csvwTest", nd, true);
			}else if(hoge=='7'){
				val colTypes = [Type.Int as Int, Type.Float];
				val nd = CSV.read(args(0), colTypes, false);
				Console.OUT.println(nd.name());
				CSV.write("csvwTest", nd, true);
			}else if(hoge=='8'){
				val colTypes = [Type.Char as Int, Type.Int];
				val nd = CSV.read(args(0), colTypes, false);
				Console.OUT.println(nd.name());
				CSV.write("csvwTest", nd, true);
			}else if(hoge=='9'){
				val colTypes = [Type.String as Int, Type.Int];
				val nd = CSV.read(args(0), colTypes, false);
				Console.OUT.println(nd.name());
				CSV.write("csvwTest", nd, true);
			}else if(hoge=='a'){
				val colTypes = [Type.Int as Int, Type.Boolean];
				val nd = CSV.read(args(0), colTypes, true);
				Console.OUT.println(nd.name());
				CSV.write("csvwTest", nd, true);
			}

		}
		
		return true;
	}
}
