import x10.util.Team;
import x10.util.Timer;

public class TeamExample {
	private static def message (str:String) : void {
		Console.OUT.println("" + Timer.milliTime() + ":te: " + here + "(" + Runtime.workerId() + ")" + str);
		Console.OUT.flush();
	}
	
	static def testbcast1() : void{
		message("Bcast Test");
		val comm = Team.WORLD;
                val counts = 1;
                val root = 0;
		finish for (p in Place.places()) async at (p) {
			val role = here.id;
                        val src = (role == root) ? new Array[Int](counts * comm.size(), (i:Int)=> i) : [0];
                        val oracle = role;

                        val recv = comm.bcast1(role, root, src);
                        if (recv != oracle)
                          message(here + ": received: " + recv + ", expected: " + oracle);
		}
	}
	static def testscatter() : void{
		message("Scatter Test");
		val comm = Team.WORLD;
                val counts = 3;
                val root = 0;
		finish for (p in Place.places()) async at (p) {
			val role = here.id;
                        val src = (role == root) ? new Array[Int](counts * comm.size(), (i:Int)=> i) : [0 as Int];
                        val oracle = new Array[Int](counts, (i:Int)=> role * counts + i);

                        val recv = comm.scatter(role, root, src);
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
                val counts = 3;
                val root = 0;
		finish for (p in Place.places()) async at (p) {
			val role = here.id;
                        val src = (role == root) ? new Array[Double](counts * comm.size(), (i:Int)=> i as Double) : [0 as Double];
                        val src_offs = new Array[Int](comm.size(), (i:Int)=> i * counts);
                        val src_counts = new Array[Int](comm.size(), (i:Int)=> counts);

                        val recv = comm.scatterv(role, root, src, src_counts);
                        val oracle = comm.scatter(role, root, src);
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
			val old_role = here.id;
			val new_team = Team.WORLD.split(old_role, old_role % 2, old_role / 2);
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
			val counts = 2;
			val role = here.id;
			val src = new Array[Int](counts, (i:Int)=> role * counts + i);
			for (q in Place.places())  {
				comm.barrier(role);
				if (p == q) {
					// message(here + ": input: " + src);
				}
			}
			val dst = comm.allgather(role, src);
			// message(here + ": allgather output: " + dst);
			val oracle = new Array[Int](comm.size() * counts, (i:Int)=> i);
            for (q in Place.places()) {
              comm.barrier(role);
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
			val role = here.id;
			val src = new Array[Int](role + 1, (i:Int)=> (role + 1) * role / 2 + 1 + i);
			for (q in Place.places())  {
				comm.barrier(role);
				if (p == q) {
					// message(here + ": input: " + src);
				}
			}
			val dst = comm.allgatherv(role, src);
			message(here + ": allgatherv output: " + dst);
			val oracle = new Array[Int](comm.size() * (comm.size() + 1) / 2, (i:Int)=> i);
            for (q in Place.places()) {
                comm.barrier(role);
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
			val role = here.id;
			val src = new Array[Int](places, (i:Int)=> role * places + i);
			for (q in Place.places())  {
				Team.WORLD.barrier(role);
				if (p == q) {
					// message(here + ": input: " + src);
				}
			}
			val dst = comm.alltoall(role, src);
			// message(here + ": alltoall output: " + dst);
			val oracle = new Array[Int](places, (i:Int)=> i * places + role);
            for (q in Place.places()) {
                comm.barrier(role);
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
			val role = here.id;
			{
				val src = new Array[Array[Int](1)](places, (i:Int)=>
				new Array[Int](1, role * places + i));
				for (q in Place.places())  {
					comm.barrier(role);
					if (p == q) {
						// message(here + ": input: " + src);
					}
				}
				message(here + " before alltoallv");
				val dst = comm.alltoallv(role, src);
				val oracle = new Array[Int](places, (i:Int)=> i * places + role);
				// message(here + ": alltoallv output: " + dst);
                for (q in Place.places()) {
                  comm.barrier(role);
                  if (q == here) {
                    for (i in 0..(dst.size - 1)) {
                      if (dst(i) != oracle(i))
                        message(here + ": alltoall: received: " + dst(i) + ", expected: " + oracle(i));
                    }
                  }
                }
			}
			{
				val src = new Array[Array[Int](1)](places, (i:Int)=>
				new Array[Int](i, role * places + i));
				for (q in Place.places())  {
					Team.WORLD.barrier(role);
					if (p == q) {
						// message(here + ": input: " + src);
					}
				}
				message(here + " before alltoallv");
				val dst = comm.alltoallv(role, src);
				// message(here + ": alltoallv output: " + dst);
				val oracle = new Array[Int](role * places, (i:Int)=> (i / role) * places + role);
                for (q in Place.places()) {
                  comm.barrier(role);
                  if (q == here) {
                    for (i in 0..(dst.size - 1)) {
                      if (dst(i) != oracle(i))
                        message(here + ": alltoall: received: " + dst(i) + ", expected: " + oracle(i));
                    }
                  }
                }
			}
			{
				val src = new Array[Array[Int](1)](places, (i:Int)=>
				new Array[Int](places - i - 1, role * places + i));
				for (q in Place.places())  {
					Team.WORLD.barrier(role);
					if (p == q) {
						//message(here + ": input: " + src);
					}
				}
				message(here + " before alltoallv");
				val dst = comm.alltoallv(role, src);
				message(here + ": alltoallv output: " + dst);
				val oracle = new Array[Int]((places - role - 1) * places, (i:Int)=> (i / (places - role - 1)) * places + role);
                for (q in Place.places()) {
                  comm.barrier(role);
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
	public static def main(args:Array[String](1)) : void{
		message("Team.WORLD: " + Team.WORLD);
		message("members of Team(0): " + Team.WORLD.places());
		
		//testbcast1();
		//testsplit();
		testscatter();
		testscatterv();
		testallgather();
		testalltoall();
		testalltoallv();
		message("Finish!");
	}
}
