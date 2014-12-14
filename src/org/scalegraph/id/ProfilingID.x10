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
package org.scalegraph.id;

public class ProfilingID {
	// ID for XPregel
	public static class XPregel {
		public static val MAIN_FRAME = 0n;
		
		public static val MAIN_INIT = 0n;
		public static val MAIN_COMPUTE = 1n;
		public static val MAIN_SQWEEZMES = 2n;
		public static val MAIN_UPDATE_OUT_EDGES_1 = 3n;
		public static val MAIN_UPDATE_OUT_EDGES_2 = 4n;
		public static val MAIN_AGGREGATE_COMPUTE = 5n;
		public static val MAIN_AGGREGATE_COMM = 6n;
		public static val MAIN_PRE_PROCESS = 7n;
		public static val MAIN_ALLGATHER_1 = 8n;
		public static val MAIN_PROCESS = 9n;
		public static val MAIN_ALLGATHER_2 = 10n;
		public static val MAIN_COMM_COUNT = 11n;
		public static val MAIN_UC_COMM = 12n;
		public static val MAIN_UC_SORT = 13n;
		public static val MAIN_UC_MAKE_OFFSET = 14n;
		public static val MAIN_BC_COMM_MES = 15n;
		public static val MAIN_BC_COMM_MASK = 16n;
		public static val MAIN_BC_MAKE_OFFSET = 17n;
		public static val MAIN_UPDATEINEDGE = 18n;
		public static val MAIN_OUTPUT = 19n;
		public static val MAIN_POINT_COUNT = 20n;
		
		public static val MAIN_TH_FRAME = 1n;
		
		public static val MAIN_TH_COMPUTE = 0n;
		public static val MAIN_TH_AGGREGATE = 1n;
		public static val MAIN_TH_COPY_OUT = 2n;
		public static val MAIN_TH_POINT_COUNT = 3n;
		
		public static val FRAME_VECTOR = [MAIN_POINT_COUNT as Int, MAIN_TH_POINT_COUNT];
		public static val DESCRIPTION = [
		                 "MAIN_INIT" as String,
		                 "MAIN_COMPUTE",
		                 "MAIN_SQWEEZMES",
		                 "MAIN_UPDATE_OUT_EDGES_1",
		                 "MAIN_UPDATE_OUT_EDGES_2",
		                 "MAIN_AGGREGATE_COMPUTE",
		                 "MAIN_AGGREGATE_COMM",
		                 "MAIN_PRE_PROCESS",
		                 "MAIN_ALLGATHER_1",
		                 "MAIN_PROCESS",
		                 "MAIN_ALLGATHER_2",
		                 "MAIN_COMM_COUNT",
		                 "MAIN_UC_COMM",
		                 "MAIN_UC_SORT",
		                 "MAIN_UC_MAKE_OFFSET",
		                 "MAIN_BC_COMM_MES",
		                 "MAIN_BC_COMM_MASK",
		                 "MAIN_BC_MAKE_OFFSET",
		                 "MAIN_UPDATEINEDGE",
		                 "MAIN_OUTPUT", // 19
  
  							"MAIN_TH_COMPUTE",
  							"MAIN_TH_AGGREGATE",
                   		"MAIN_TH_COPY_OUT"
		                                 ];
	}
	// ID for IO library
	public static class IO {
		public static val MAIN_FRAME = 0n;

		public static val MAIN_READ_HEADER = 0n;
		public static val MAIN_PREPARE = 1n;
		public static val MAIN_SPLIT_PLACE_DIST = 2n;
		public static val MAIN_SPLIT_THREAD_DIST = 3n;
		public static val MAIN_READ_FILE = 4n;
		public static val MAIN_WAIT_SUBTASK = 5n;
		public static val MAIN_WAIT_LASTTASK = 6n;
		public static val MAIN_MERGE_RESULT = 7n;
		public static val MAIN_MAKE_STRING = 8n;
		public static val MAIN_WRITE_WAIT = 9n;
		public static val MAIN_LAST_WRITE_WAIT = 10n;
		public static val MAIN_CLOSE = 11n;
		public static val MAIN_POINT_COUNT = 12n;
		
		public static val MAIN_TH_FRAME = 1n;
		
		public static val MAIN_TH_PARSE = 0n;
		public static val MAIN_TH_MAKE_STRING = 1n;
		public static val MAIN_TH_POINT_COUNT = 2n;
		
		public static val SUB_FRAME = 2n;
		
		public static val SUB_PARSE = 0n;
		public static val SUB_WRITE = 1n;
		public static val SUB_POINT_COUNT = 2n;
		
		public static val FRAME_VECTOR = [MAIN_POINT_COUNT as Int, MAIN_TH_POINT_COUNT, SUB_POINT_COUNT];
		public static val DESCRIPTION = [
			"MAIN_READ_HEADER",
			"MAIN_PREPARE",
			"MAIN_SPLIT_PLACE_DIST",
			"MAIN_SPLIT_THREAD_DIST",
			"MAIN_READ_FILE",
			"MAIN_WAIT_SUBTASK",
			"MAIN_WAIT_LASTTASK",
			"MAIN_MERGE_RESULT",
			"MAIN_MAKE_STRING",
			"MAIN_WRITE_WAIT",
			"MAIN_LAST_WRITE_WAIT",
			"MAIN_CLOSE", // 11
			
			"MAIN_TH_PARSE",
			"MAIN_TH_MAKE_STRING", // 1
			               
			"SUB_PARSE",
			"SUB_WRITE" // 1
		                                 ];
	}
}
