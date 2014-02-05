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


package test;

import org.scalegraph.io.SimpleText;
import org.scalegraph.io.CSV;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.*;

public class TestTransToCSV {
	public static def main(args: Array[String](1)) {
		val st = new SimpleText();
		val csv = new CSV();
		

		val testFromA = "/data0/t2gsuzumuralab/kishimoto/data/snap/roadNet/roadNet-CA.txt";
		val testFromB = "./../../graph.txt";
		
		val testToA = "/data0/t2gsuzumuralab/kishimoto/csv/test%d";
		val testToB = "test%d.txt";
		
		val data = st.read[Long](testFromB, inputFormat);
		Console.OUT.println(data.get[Long](0)().size() );
		csv.write(testToB, data, false);
		
		
	}
	public static inputFormat = (s:String)=> {
		val elements = s.split("	");
		return Tuple3[Long, Long, Long](
				Long.parse(elements(0)),
				Long.parse(elements(1)),
				1L) ;
	};
}

