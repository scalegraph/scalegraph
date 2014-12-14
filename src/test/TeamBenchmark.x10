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

import x10.util.Team;
import x10.util.Timer;

import org.scalegraph.test.STest;

final class TeamBenchmark extends STest {
	public static def main(args: Rail[String]) {
		new TeamBenchmark().execute(args);
	}
	
    private static def message (str:String) : void {
        Console.OUT.println("" + Timer.milliTime() + ":tb: " + here + "(" + Runtime.workerId() + ")" + str);
        Console.OUT.flush();
    }

    static def testBarrier(comm: Team, size: Int, count: Int) : void{
        message("Barrier Test");
        val places = comm.size();
        val mapping = PlaceLocalHandle.make[Rail[Long]](PlaceGroup.WORLD, ()=>new Rail[Long](size));
        finish for (p in 0..(comm.size()-1)) at (comm.places()(p)) async {
        	try {
	            val role = p as Int as Int;
	            val root = 0n;
	            if (role == root) {
	                val vertices = new Rail[Long](places * size, (i:Long)=> i as Long);
	
	                message("Barrier start");
	                comm.barrier();
	                val time_start = Timer.nanoTime();
	                for (i in 1..count) finish {
	                    comm.barrier();
	                }
	                message("Barrier end");
	                val time_end = Timer.nanoTime();
	
	                message("Barrier: ellapsed time: each: " + (time_end - time_start) / (count as Double));
	                message("Barrier: ellapsed time: total: " + (time_end - time_start));
	            } else {
	                comm.barrier();
	                for (i in 1..count)
	                    comm.barrier();
	            }
        	} catch (e :CheckedThrowable) { printException(e); }
        }
    }

    static def testScatter(comm: Team, size: Int, count: Int) : void{
        message("Scatter Test");
        val places = comm.size();
        val mapping = PlaceLocalHandle.make[Rail[Long]](PlaceGroup.WORLD, ()=>new Rail[Long](size));
        finish for (p in 0..(comm.size()-1)) at (comm.places()(p)) async {
        	try {
	            val role = p as Int;
	            val root = 0n;
	            if (role == root) {
	                val vertices = new Rail[Long](places * size, (i:Long)=> i as Long);
	
	                message("scatter start");
	                comm.barrier();
	                val time_start = Timer.nanoTime();
	                for (i in 1..count) finish {
	                    val receivedArray = comm.scatter(role, root, vertices, size);
	                }
	                message("scatter end");
	                val time_end = Timer.nanoTime();
	
	                message("scatter: ellapsed time: each: " + (time_end - time_start) / (count as Double));
	                message("scatter: ellapsed time: total: " + (time_end - time_start));
	            } else {
	                message("scatter start");
	                comm.barrier();
	                message("scatter end");
	                for (i in 1..count) finish
	                comm.scatter[Long](role, root, null, size);
	            }
        	} catch (e :CheckedThrowable) { printException(e); }
        }
    }
    static def testScatterAuto(comm: Team, size: Int, count: Int) : void{
        message("ScatterAuto Test");
        val places = comm.size();
        val mapping = PlaceLocalHandle.make[Rail[Long]](PlaceGroup.WORLD, ()=>new Rail[Long](size));
        finish for (p in 0..(comm.size()-1)) at (comm.places()(p)) async {
        	try {
	            val role = p as Int;
	            val root = 0n;
	            if (role == root) {
	                val vertices = new Rail[Long](places * size, (i:Long)=> i as Long);
	
	                message("scatterAuto start");
	                comm.barrier();
	                val time_start = Timer.nanoTime();
	                for (i in 1..count) finish {
	                    val receivedArray = comm.scatter(role, root, vertices);
	                }
	                message("scatterAuto end");
	                val time_end = Timer.nanoTime();
	
	                message("scatterAuto: ellapsed time: each: " + (time_end - time_start) / (count as Double));
	                message("scatterAuto: ellapsed time: total: " + (time_end - time_start));
	            } else {
	                comm.barrier();
	                for (i in 1..count) finish
	                comm.scatter[Long](role, root, null);
	            }
        	} catch (e :CheckedThrowable) { printException(e); }
        }
    }
    static def testScattervAuto(comm: Team, size: Int, count: Int) : void{
        message("ScattervAuto Test");
        val places = comm.size();
        val mapping = PlaceLocalHandle.make[Rail[Long]](PlaceGroup.WORLD, ()=>new Rail[Long](size));
        finish for (p in 0..(comm.size()-1)) at (comm.places()(p)) async {
        	try {
	            val role = p as Int;
	            val root = 0n;
	            if (role == root) {
	                val vertices = new Rail[Long](size, (i:Long)=> i as Long);
	                val arrCounts = new Rail[Int](places, size);
	
	                message("ScattervAuto start");
	                comm.barrier();
	                val time_start = Timer.nanoTime();
	                for (i in 1..count) finish {
	                    val receivedArray = comm.scatterv(role, root, vertices, arrCounts);
	                }
	                message("ScattervAuto end");
	                val time_end = Timer.nanoTime();
	
	                message("scattervAuto: ellapsed time: each: " + (time_end - time_start) / (count as Double));
	                message("scattervAuto: ellapsed time: total: " + (time_end - time_start));
	            } else {
	                comm.barrier();
	                for (i in 1..count) finish
	                comm.scatterv[Long](role, root, null, null);
	            }
        	} catch (e :CheckedThrowable) { printException(e); }
        }
    }
    static def testGather(comm: Team, size: Int, count: Int) : void{
        message("Gather Test");
        val places = comm.size();
        val mapping = PlaceLocalHandle.make[Rail[Long]](PlaceGroup.WORLD, ()=>new Rail[Long](size));
        finish for (p in 0..(comm.size()-1)) at (comm.places()(p)) async {
        	try {
	            val role = p as Int;
	            val root = 0n;
	            if (role == root) {
	                val vertices = new Rail[Long](size, (i:Long)=> i as Long);
	
	                message("gather start");
	                comm.barrier();
	                val time_start = Timer.nanoTime();
	                for (i in 1..count) finish {
	                    val receivedArray = comm.gather(role, root, vertices, size);
	                }
	                message("gather end");
	                val time_end = Timer.nanoTime();
	
	                message("gather: ellapsed time: each: " + (time_end - time_start) / (count as Double));
	                message("gather: ellapsed time: total: " + (time_end - time_start));
	            } else {
	                val vertices = new Rail[Long](size, (i:Long)=> ((size * role) + i) as Long);
	                comm.barrier();
	                for (i in 1..count) finish
	                comm.gather(role, root, vertices, size);
	            }
        	} catch (e :CheckedThrowable) { printException(e); }
        }
    }
    static def testGathervAuto(comm: Team, size: Int, count: Int) : void{
        message("GathervAuto Test");
        val places = comm.size();
        val mapping = PlaceLocalHandle.make[Rail[Long]](PlaceGroup.WORLD, ()=>new Rail[Long](size));
        finish for (p in 0..(comm.size()-1)) at (comm.places()(p)) async {
        	try {
	            val role = p as Int;
	            val root = 0n;
	            if (role == root) {
	                val vertices = new Rail[Long](size, (i:Long)=> i as Long);
	
	                message("gathervAuto start");
	                comm.barrier();
	                val time_start = Timer.nanoTime();
	                for (i in 1..count) finish {
	                    val receivedArray = comm.gatherv(role, root, vertices);
	                }
	                message("gathervAuto end");
	                val time_end = Timer.nanoTime();
	
	                message("gathervAuto: ellapsed time: each: " + (time_end - time_start) / (count as Double));
	                message("gathervAuto: ellapsed time: total: " + (time_end - time_start));
	            } else {
	                val vertices = new Rail[Long](size, (i:Long)=> ((size * role) + i) as Long);
	                comm.barrier();
	                for (i in 1..count) finish
	                comm.gatherv(role, root, vertices);
	            }
        	} catch (e :CheckedThrowable) { printException(e); }
        }
    }
    static def testAlltoall(comm: Team, size: Int, count: Int) : void {
        message("Alltoall Test");
        val places = comm.size();
        finish for (p in 0..(comm.size()-1)) at (comm.places()(p)) async {
        	try {
	            val role = p as Int;
	            val root = 0n;
	            if (role == root) {
	                val vertices = new Rail[Long](places * size, (i:Long)=> places * size * (role as Long) + i);
	
	                message("alltoall start");
	                comm.barrier();
	                val time_start = Timer.nanoTime();
	                for (i in 1..count) finish {
	                    val receivedArray = comm.alltoall(role, vertices);
	                }
	                message("alltoall end");
	                val time_end = Timer.nanoTime();
	
	                message("alltoall: ellapsed time: each: " + (time_end - time_start) / (count as Double));
	                message("alltoall: ellapsed time: total: " + (time_end - time_start));
	            } else {
	                val vertices = new Rail[Long](places * size, (i:Long)=> places * size * (role as Long) + i);
	                comm.barrier();
	                for (i in 1..count) finish
	                comm.alltoall(role, vertices);
	            }
        	} catch (e :CheckedThrowable) { printException(e); }
        }
    }
    static def testAlltoallvAuto(comm: Team, size: Int, count: Int) : void {
        message("AlltoallvAuto Test");
        val places = comm.size();
        finish for (p in 0..(comm.size()-1)) at (comm.places()(p)) async {
        	try {
	            val role = p as Int;
	            val root = 0n;
	            if (role == root) {
	                val vertices = new Rail[Long](places * size, (i:Long)=> places * size * (role as Long) + i);
	                val arrCounts = new Rail[Int](places, size);
	
	                message("alltoallv start");
	                comm.barrier();
	                val time_start = Timer.nanoTime();
	                for (i in 1..count) finish {
	                    val receivedArray = comm.alltoallv(role, vertices, arrCounts);
	                }
	                message("alltoallv end");
	                val time_end = Timer.nanoTime();
	
	                message("alltoallv: ellapsed time: each: " + (time_end - time_start) / (count as Double));
	                message("alltoallv: ellapsed time: total: " + (time_end - time_start));
	            } else {
	                val vertices = new Rail[Long](places * size, (i:Long)=> places * size * (role as Long) + i);
	                val arrCounts = new Rail[Int](places, size);
	                comm.barrier();
	                for (i in 1..count) finish
	                comm.alltoallv(role, vertices, arrCounts);
	            }
        	} catch (e :CheckedThrowable) { printException(e); }
        }
    }
    static def testAllgather(comm: Team, size: Int, count: Int) : void{
        message("Allgather Test");
        val places = comm.size();
        finish for (p in 0..(comm.size()-1)) at (comm.places()(p)) async {
        	try {
	            val role = p as Int;
	            val root = 0n;
	            if (role == root) {
	                val vertices = new Rail[Long](size, (i:Long)=> size * (role as Long) + i);
	
	                message("allgather start");
	                comm.barrier();
	                val time_start = Timer.nanoTime();
	                for (i in 1..count) finish {
	                    val receivedArray = comm.allgather(role, vertices);
	                }
	                message("allgather end");
	                val time_end = Timer.nanoTime();
	
	                message("allgather: ellapsed time: each: " + (time_end - time_start) / (count as Double));
	                message("allgather: ellapsed time: total: " + (time_end - time_start));
	            } else {
	                val vertices = new Rail[Long](size, (i:Long)=> size * (role as Long) + i);
	                comm.barrier();
	                for (i in 1..count) finish
	                comm.allgather(role, vertices);
	            }
        	} catch (e :CheckedThrowable) { printException(e); }
        }
    }
    static def testAllgathervAuto(comm: Team, size: Int, count: Int) : void {
        message("AllgathervAuto Test");
        val places = comm.size();
        finish for (p in 0..(comm.size()-1)) at (comm.places()(p)) async {
        	try {
		        val role = p as Int;
		        val root = 0n;
		        if (role == root) {
		            val vertices = new Rail[Long](size, (i:Long)=> size * (role as Long) + i);
		
		            message("allgathervAuto start");
		            comm.barrier();
		            val time_start = Timer.nanoTime();
		            for (i in 1..count) finish {
		                val receivedArray = comm.allgatherv(role, vertices);
		            }
		            message("allgathervAuto end");
		            val time_end = Timer.nanoTime();
		
		            message("allgathervAuto: ellapsed time: each: " + (time_end - time_start) / (count as Double));
		            message("allgathervAuto: ellapsed time: total: " + (time_end - time_start));
		        } else {
		            val vertices = new Rail[Long](size, (i:Long)=> size * (role as Long) + i);
		            comm.barrier();
		            for (i in 1..count) finish
		            comm.allgatherv(role, vertices);
		        }
        	} catch (e :CheckedThrowable) { printException(e); }
        }
    }

    public def run(args :Rail[String]): Boolean {
 //       val args = ["1024", "10"];
        entry(args);
        
        return true;
    }
    public static def entry(args:Rail[String]) : void {
        val size = Int.parse(args(0));
        val count = Int.parse(args(1));
        var tests: Int = ~0n;
        if (args.size >= 3) {
            tests = Int.parse(args(2),2n);
        }
        val comm = Team.WORLD;
        message("Team.WORLD: " + Team.WORLD);
        message("members of Team(0): " + Team.WORLD.places());
        
        if ((tests & 1) == 1) testBarrier(comm, size, count);
        tests >>= 1;
        if ((tests & 1) == 1) testScatter(comm, size, count);
        tests >>= 1;
        if ((tests & 1) == 1) testScatterAuto(comm, size, count);
        tests >>= 1;
        if ((tests & 1) == 1) testScattervAuto(comm, size, count);
        tests >>= 1;
        if ((tests & 1) == 1) testGather(comm, size, count);
        tests >>= 1;
        if ((tests & 1) == 1) testGathervAuto(comm, size, count);
        tests >>= 1;
        if ((tests & 1) == 1) testAlltoall(comm, size, count);
        tests >>= 1;
        if ((tests & 1) == 1) testAlltoallvAuto(comm, size, count);
        tests >>= 1;
        if ((tests & 1) == 1) testAllgathervAuto(comm, size, count);
        tests >>= 1;
    }
}
