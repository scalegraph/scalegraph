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
import x10.xrx.Runtime;

public class TestTeam {
	private static def message (str:String) : void {
		Console.OUT.println("" + Timer.milliTime() + ":te: " + here + "(" + Runtime.workerId() + ")" + str);
		Console.OUT.flush();
	}
	
	static def testbcast1() : void{
		message("Bcast Test");
		val comm = Team.WORLD;
                val counts = 1n;
                val root = 0n;
		finish for (p in Place.places()) async at (p) {
			val role = here.id as Int;
                        val src = (role == root) ? new Rail[Int](counts * comm.size(), (i:Long)=> i as Int) : new Rail[Int](1, (Long)=>0n);//[0];
                        val oracle = role;

                        //val recv : Int = comm.bcast1(root, src);
                        val recv : Int = comm.bcast1(root, 3n);
                        if (recv != oracle)
                          message(here + ": received: " + recv + ", expected: " + oracle);
		}
	}
	static def testscatter() : void{
		message("Scatter Test");
		val comm = Team.WORLD;
		val counts = 3n;
		val root = 0n;
		finish for (p in Place.places()) async at (p) {
			val role = here.id as Int;
			val src = (role == root) ? new Rail[Int](counts * comm.size(), (i:Long)=> i as Int) : [0 as Int];
			val oracle = new Rail[Int](counts, (i:Long)=> (role * counts + i) as Int);

			//val recv = comm.scatter(role, root, src);
			val recv = comm.scatter(root, src);
			if (recv.size != oracle.size)
				message(here + ": length mistatch: received: " + recv + ", expected: " + oracle);
			for (i in 0..(recv.size - 1)) {
				if (recv(i) != oracle(i))
					message(here + ": received: " + recv(i) + ", expected: " + oracle(i));
			}
		}
	}
	static def testscatterv() : void{
		message("Scatterv Test");
		val comm = Team.WORLD;
                val counts = 3n;
                val root = 0n;
		finish for (p in Place.places()) async at (p) {
			val role = here.id as Int;
                        val src = (role == root) ? new Rail[Double](counts * comm.size(), (i:Long)=> i as Double) : [0 as Double];
                        val src_offs = new Rail[Int](comm.size(), (i:Long)=> (i * counts) as Int);
                        val src_counts = new Rail[Int](comm.size(), (i:Long)=> counts as Int);

                        val recv = comm.scatterv(root, src, src_counts);
                        val oracle = comm.scatter(root, src);
                        if (recv.size != oracle.size)
                          message(here + ": alltoallv: length mistatch: received: " + recv + ", expected: " + oracle);
                        for (i in 0..(recv.size - 1)) {
                        if (recv(i) != oracle(i))
                          message(here + ": alltoallv: received: " + recv(i) + ", expected: " + oracle(i));
                      }
		}
	}
	static def testsplit() : void{
		message("Split Test");
		finish for (p in Place.places()) async at (p) {
			val old_role = here.id as Int;
			val new_team = Team.WORLD.split(old_role % 2n, old_role / 2);
			val new_role = old_role / 2;
			message(here + ": old role: " + old_role + ", new role: " + new_role + " new team: " + new_team);
		}
	}
	/*
	static def testmultisplit() : void{
		message("Multiple Split Test");
		val places = Place.places();
		val func = (old_team : Team)=> {
			val old_role = team.role()(0);
			if (team.size() <= 0) {
				message(here + ": role: " + old_role + ", team: " + new_team);
			}
			finish for (p in Place.places()) async at (p) {
				val new_team = Team.WORLD.split(old_role, old_role % 2, old_role / 2);
				val new_role_oracle = old_role / 2;
				val new_role = new_team.role()(0);
				message(here + ": old role: " + old_role + ", new role: " + new_role + "(" + new_role_oracle + ")" + " new team: " + new_team);
				func(new_team);
			}
		};
		func(Team.WORLD);
	}*/
	static def testallgather() : void{
		message("Allgather Test");
		val comm = Team.WORLD;
		finish for (p in Place.places()) async at (p) {
			val counts = 2n;
			val role = here.id as Int;
			val src = new Rail[Int](counts, (i:Long)=> (role * counts + i) as Int);
			for (q in Place.places())  {
				comm.barrier();
				if (p == q) {
					// message(here + ": input: " + src);
				}
			}
			val dst = comm.allgather(src);
			// message(here + ": allgather output: " + dst);
			val oracle = new Rail[Int](comm.size() * counts, (i:Long)=> i as Int);
            for (q in Place.places()) {
              comm.barrier();
              if (q == here) {
                  for (i in 0..(dst.size - 1)) {
                      if (dst(i) != oracle(i))
                          message(here + ": allgather: received: " + dst(i) + ", expected: " + oracle(i));
                  }
              }
            }
		}
	}
	static def testallgatherv() : void{
		message("Allgatherv Test");
		val comm = Team.WORLD;
		finish for (p in Place.places()) async at (p) {
			val role = here.id as Int;
			val src = new Rail[Int](role + 1, (i:Long)=> ((role + 1) * role / 2 + 1 + i) as Int);
			for (q in Place.places())  {
				comm.barrier();
				if (p == q) {
					// message(here + ": input: " + src);
				}
			}
			val dst = comm.allgatherv(src);
			message(here + ": allgatherv output: " + dst);
			val oracle = new Rail[Int](comm.size() * (comm.size() + 1) / 2, (i:Long)=> i as Int);
            for (q in Place.places()) {
                comm.barrier();
                if (q == here) {
                    for (i in 0..(dst.size - 1)) {
                        if (dst(i) != oracle(i))
                            message(here + ": allgatherv: received: " + dst(i) + ", expected: " + oracle(i));
                    }
                }
            }
		}
	}
	static def testalltoall() : void{
		message("Alltoall Test");
		finish for (p in Place.places()) async at (p) {
			val comm = Team.WORLD;
			val places = comm.size();
			val role = here.id as Int;
			val src = new Rail[Int](places, (i:Long)=> (role * places + i) as Int);
			for (q in Place.places())  {
				Team.WORLD.barrier();
				if (p == q) {
					// message(here + ": input: " + src);
				}
			}
			val dst = comm.alltoall(src);
			// message(here + ": alltoall output: " + dst);
			val oracle = new Rail[Int](places, (i:Long)=> (i * places + role) as Int);
            for (q in Place.places()) {
                comm.barrier();
                if (q == here) {
                    for (i in 0..(dst.size - 1)) {
                        if (dst(i) != oracle(i))
                            message(here + ": alltoall: received: " + dst(i) + ", expected: " + oracle(i));
                    }
                }
            }
		}
	}
	static def testalltoallv() : void{
		message("Alltoallv Test");
		finish for (p in Place.places()) async at (p) {
			val comm = Team.WORLD;
			val places = comm.size();
			val role = here.id as Int;
			{
				val src = new Rail[Rail[Int]](places, (i:Long)=>
				new Rail[Int](1, (role * places + i) as Int));
				for (q in Place.places())  {
					comm.barrier();
					if (p == q) {
						// message(here + ": input: " + src);
					}
				}
				message(here + " before alltoallv");
				val dst = comm.alltoallv(src);
				val oracle = new Rail[Int](places, (i:Long)=> (i * places + role) as Int);
				// message(here + ": alltoallv output: " + dst);
                for (q in Place.places()) {
                  comm.barrier();
                  if (q == here) {
                    for (i in 0..(dst.size - 1)) {
                      if (dst(i) != oracle(i))
                        message(here + ": alltoall: received: " + dst(i) + ", expected: " + oracle(i));
                    }
                  }
                }
			}
			{
				val src = new Rail[Rail[Int]](places, (i:Long)=>
				new Rail[Int](i, (role * places + i) as Int));
				for (q in Place.places())  {
					Team.WORLD.barrier();
					if (p == q) {
						// message(here + ": input: " + src);
					}
				}
				message(here + " before alltoallv");
				val dst = comm.alltoallv(src);
				// message(here + ": alltoallv output: " + dst);
				val oracle = new Rail[Int](role * places, (i:Long)=> ((i / role) * places + role) as Int);
                for (q in Place.places()) {
                  comm.barrier();
                  if (q == here) {
                    for (i in 0..(dst.size - 1)) {
                      if (dst(i) != oracle(i))
                        message(here + ": alltoall: received: " + dst(i) + ", expected: " + oracle(i));
                    }
                  }
                }
			}
			{
				val src = new Rail[Rail[Int]](places, (i:Long)=>
				new Rail[Int](places - i - 1, (role * places + i) as Int));
				for (q in Place.places())  {
					Team.WORLD.barrier();
					if (p == q) {
						//message(here + ": input: " + src);
					}
				}
				message(here + " before alltoallv");
				val dst = comm.alltoallv(src);
				message(here + ": alltoallv output: " + dst);
				val oracle = new Rail[Int]((places - role - 1) * places, (i:Long)=> ((i / (places - role - 1)) * places + role) as Int);
                for (q in Place.places()) {
                  comm.barrier();
                  if (q == here) {
                    for (i in 0..(dst.size - 1)) {
                      if (dst(i) != oracle(i))
                        message(here + ": alltoall: received: " + dst(i) + ", expected: " + oracle(i));
                    }
                  }
                }
			}
		}
	}
	public static def main(args:Rail[String]) : void{
		message("Team.WORLD: " + Team.WORLD);
		message("members of Team(0): " + Team.WORLD.places());
		
		testbcast1();
		testsplit();
		testscatter();
		//testscatterv();
		testallgather();
		testalltoall();
		//testalltoallv();
		message("Finish!");
	}
}
