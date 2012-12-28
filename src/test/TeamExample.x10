import x10.util.Team;
import x10.util.Timer;

public class TeamExample {
	private static def message (str:String) : void {
		Console.OUT.println("" + Timer.milliTime() + ":te: " + here + "(" + Runtime.workerId() + ")" + str);
		Console.OUT.flush();
	}
	
	static def testscatter() : void{
		message("Scatter Test");
		finish for (p in Place.places()) async at (p) {
			val old_role = here.id;
			val new_team = Team.WORLD.split(old_role, old_role % 2, old_role / 2);
			val new_role = old_role / 2;
			message(here + ": old role: " + old_role + ", new role: " + new_role + " new team: " + new_team);
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
					message(here + ": input: " + src);
				}
			}
			val dst = comm.allgather(role, src);
			message(here + ": allgather output: " + dst);
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
					message(here + ": input: " + src);
				}
			}
			val dst = comm.allgathervAuto(role, src);
			message(here + ": allgatherv output: " + dst);
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
					message(here + ": input: " + src);
				}
			}
			val dst = comm.alltoall(role, src);
			message(here + ": alltoall output: " + dst);
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
						message(here + ": input: " + src);
					}
				}
				message(here + " before alltoallv");
				val dst = comm.alltoallvAuto(role, src);
				message(here + ": alltoall output: " + dst);
			}
			{
				val src = new Array[Array[Int](1)](places, (i:Int)=>
				new Array[Int](i, role * places + i));
				for (q in Place.places())  {
					Team.WORLD.barrier(role);
					if (p == q) {
						message(here + ": input: " + src);
					}
				}
				message(here + " before alltoallv");
				val dst = comm.alltoallvAuto(role, src);
				message(here + ": alltoall output: " + dst);
			}
			{
				val src = new Array[Array[Int](1)](places, (i:Int)=>
				new Array[Int](places - i - 1, role * places + i));
				for (q in Place.places())  {
					Team.WORLD.barrier(role);
					if (p == q) {
						message(here + ": input: " + src);
					}
				}
				message(here + " before alltoallv");
				val dst = comm.alltoallvAuto(role, src);
				message(here + ": alltoall output: " + dst);
			}
		}
	}
	public static def main(args:Array[String](1)) : void{
		message("Team.WORLD: " + Team.WORLD);
		message("members of Team(0): " + Team.WORLD.places());
		
		testsplit();
		testallgather();
		testallgather();
		testalltoall();
		testalltoallv();
	}
}
