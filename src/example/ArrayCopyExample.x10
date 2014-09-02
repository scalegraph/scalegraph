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


package example;

import x10.util.Team;

import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.Config;
import org.scalegraph.util.GlobalMemoryChunk;
import org.scalegraph.util.GrowableMemory;

public class ArrayCopyExample {
    
    public static def main(args:Array[String](1)) {
        val config = Config.get();
        val team = config.worldTeam();
        val ps = team.size();
        val sw = Config.get().stopWatch();
        sw.lap("start");
        val size = 1L<<20;
        for (t in 1..100) {
        	val mc = DistMemoryChunk.make[MemoryChunk[Long]](team.placeGroup(), 
        			()=>MemoryChunk.make[MemoryChunk[Long]](ps, 0, true));
        	finish for (pi in 0..(ps-1)) at(team.placeGroup()(pi)) async {
        		for (pp in 0..(ps-1)) {
        			mc()(pp) = MemoryChunk.make[Long](size);
        			for (i in 0..(size-1)) {
        				mc()(pp)(i) = i+pp+pi; //random number;
        			}
        		}
        	}
        	finish for (pi in 0..(ps-1)) at(team.placeGroup()(pi)) async {
        		for (pp in 0..(ps-1)) {
        			val pj = (pi+pp)%ps;
        			val eds = at(team.placeGroup()(pj)) {mc()(pi).size()};
        			val ed = MemoryChunk.make[Long](eds);
        			val refTB = at(team.placeGroup()(pj)) {
        				GlobalMemoryChunk.make[Long](mc()(pi))
        			};
        			MemoryChunk.syncCopyWithHash(refTB, 0L, ed);
        			at(team.placeGroup()(pj)) mc()(pi).del();
        			ed.del();
        		}
        	}
        	sw.lap("end#"+t);
        }
    }
}