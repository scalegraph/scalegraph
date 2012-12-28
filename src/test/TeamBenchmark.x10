package test;
import x10.util.Team;
import x10.util.Timer;
import org.scalegraph.util.Debug;
import org.scalegraph.concurrent.RemoteGetContext;
import org.scalegraph.concurrent.RemotePutContext;
import org.scalegraph.concurrent.RemoteContextEmulation;

public class TeamBenchmark {
    private static def message (str:String) : void {
        Console.OUT.println("" + Timer.milliTime() + ":tb: " + here + "(" + Runtime.workerId() + ")" + str);
        Console.OUT.flush();
    }

    static def testBarrier(comm: Team, size: Int, count: Int) : void{
        message("Barrier Test");
        val places = comm.size();
        val mapping = PlaceLocalHandle.make[Array[Long]](PlaceGroup.WORLD, ()=>new Array[Long](size));
        finish for ([p] in comm.places()) async at (comm.places()(p)) {
            val role = p;
            val root = 0;
            if (role == root) {
                val vertices = new Array[Long](places * size, (i:Int)=> i as Long);

                message("Barrier start");
                comm.barrier(role);
                val time_start = Timer.nanoTime();
                for (i in 1..count) finish {
                    comm.barrier(role);
                }
                message("Barrier end");
                val time_end = Timer.nanoTime();

                message("Barrier: ellapsed time: each: " + (time_end - time_start) / (count as Double));
                message("Barrier: ellapsed time: total: " + (time_end - time_start));
            } else {
                comm.barrier(role);
                for (i in 1..count)
                    comm.barrier(role);
            }
        }
    }

    static def testScatter(comm: Team, size: Int, count: Int) : void{
        message("Scatter Test");
        val places = comm.size();
        val mapping = PlaceLocalHandle.make[Array[Long]](PlaceGroup.WORLD, ()=>new Array[Long](size));
        finish for ([p] in comm.places()) async at (comm.places()(p)) {
            val role = p;
            val root = 0;
            if (role == root) {
                val vertices = new Array[Long](places * size, (i:Int)=> i as Long);

                message("scatter start");
                comm.barrier(role);
                val time_start = Timer.nanoTime();
                for (i in 1..count) finish {
                    val receivedArray = comm.scatterSend(role, root, vertices, size);
                }
                message("scatter end");
                val time_end = Timer.nanoTime();

                message("scatter: ellapsed time: each: " + (time_end - time_start) / (count as Double));
                message("scatter: ellapsed time: total: " + (time_end - time_start));
            } else {
                comm.barrier(role);
                for (i in 1..count) finish
                comm.scatterRecv[Long](role, root, size);
            }
        }
    }
    static def testScatterAuto(comm: Team, size: Int, count: Int) : void{
        message("ScatterAuto Test");
        val places = comm.size();
        val mapping = PlaceLocalHandle.make[Array[Long]](PlaceGroup.WORLD, ()=>new Array[Long](size));
        finish for ([p] in comm.places()) async at (comm.places()(p)) {
            val role = p;
            val root = 0;
            if (role == root) {
                val vertices = new Array[Long](places * size, (i:Int)=> i as Long);

                message("scatterAuto start");
                comm.barrier(role);
                val time_start = Timer.nanoTime();
                for (i in 1..count) finish {
                    val receivedArray = comm.scatterSendAuto(role, root, vertices);
                }
                message("scatterAuto end");
                val time_end = Timer.nanoTime();

                message("scatterAuto: ellapsed time: each: " + (time_end - time_start) / (count as Double));
                message("scatterAuto: ellapsed time: total: " + (time_end - time_start));
            } else {
                comm.barrier(role);
                for (i in 1..count) finish
                comm.scatterRecvAuto[Long](role, root);
            }
        }
    }
    static def testScattervAuto(comm: Team, size: Int, count: Int) : void{
        message("ScattervAuto Test");
        val places = comm.size();
        val mapping = PlaceLocalHandle.make[Array[Long]](PlaceGroup.WORLD, ()=>new Array[Long](size));
        finish for ([p] in comm.places()) async at (comm.places()(p)) {
            val role = p;
            val root = 0;
            if (role == root) {
                val vertices = new Array[Long](size, (i:Int)=> i as Long);
                val arrCounts = new Array[Int](places, size);

                message("ScattervAuto start");
                comm.barrier(role);
                val time_start = Timer.nanoTime();
                for (i in 1..count) finish {
                    val receivedArray = comm.scattervSendAuto(role, root, vertices, arrCounts);
                }
                message("ScattervAuto end");
                val time_end = Timer.nanoTime();

                message("scattervAuto: ellapsed time: each: " + (time_end - time_start) / (count as Double));
                message("scattervAuto: ellapsed time: total: " + (time_end - time_start));
            } else {
                comm.barrier(role);
                for (i in 1..count) finish
                comm.scattervRecvAuto[Long](role, root);
            }
        }
    }
    static def testGather(comm: Team, size: Int, count: Int) : void{
        message("Gather Test");
        val places = comm.size();
        val mapping = PlaceLocalHandle.make[Array[Long]](PlaceGroup.WORLD, ()=>new Array[Long](size));
        finish for ([p] in comm.places()) async at (comm.places()(p)) {
            val role = p;
            val root = 0;
            if (role == root) {
                val vertices = new Array[Long](size, (i:Int)=> i as Long);

                message("gather start");
                comm.barrier(role);
                val time_start = Timer.nanoTime();
                for (i in 1..count) finish {
                    val receivedArray = comm.gatherRecv(role, root, vertices, size);
                }
                message("gather end");
                val time_end = Timer.nanoTime();

                message("gather: ellapsed time: each: " + (time_end - time_start) / (count as Double));
                message("gather: ellapsed time: total: " + (time_end - time_start));
            } else {
                val vertices = new Array[Long](size, (i:Int)=> ((size * role) + i) as Long);
                comm.barrier(role);
                for (i in 1..count) finish
                comm.gatherSend(role, root, vertices, size);
            }
        }
    }
    static def testGathervAuto(comm: Team, size: Int, count: Int) : void{
        message("GathervAuto Test");
        val places = comm.size();
        val mapping = PlaceLocalHandle.make[Array[Long]](PlaceGroup.WORLD, ()=>new Array[Long](size));
        finish for ([p] in comm.places()) async at (comm.places()(p)) {
            val role = p;
            val root = 0;
            if (role == root) {
                val vertices = new Array[Long](size, (i:Int)=> i as Long);

                message("gathervAuto start");
                comm.barrier(role);
                val time_start = Timer.nanoTime();
                for (i in 1..count) finish {
                    val receivedArray = comm.gathervRecvAuto(role, root, vertices);
                }
                message("gathervAuto end");
                val time_end = Timer.nanoTime();

                message("gathervAuto: ellapsed time: each: " + (time_end - time_start) / (count as Double));
                message("gathervAuto: ellapsed time: total: " + (time_end - time_start));
            } else {
                val vertices = new Array[Long](size, (i:Int)=> ((size * role) + i) as Long);
                comm.barrier(role);
                for (i in 1..count) finish
                comm.gathervSendAuto(role, root, vertices);
            }
        }
    }
    static def testAlltoall(comm: Team, size: Int, count: Int) : void {
        message("Alltoall Test");
        val places = comm.size();
        finish for ([p] in comm.places()) async at (comm.places()(p)) {
            val role = p;
            val root = 0;
            if (role == root) {
                val vertices = new Array[Long](places * size, (i:Int)=> places * size * (role as Long) + i);

                message("alltoall start");
                comm.barrier(role);
                val time_start = Timer.nanoTime();
                for (i in 1..count) finish {
                    val receivedArray = comm.alltoall(role, vertices);
                }
                message("alltoall end");
                val time_end = Timer.nanoTime();

                message("alltoall: ellapsed time: each: " + (time_end - time_start) / (count as Double));
                message("alltoall: ellapsed time: total: " + (time_end - time_start));
            } else {
                val vertices = new Array[Long](places * size, (i:Int)=> places * size * (role as Long) + i);
                comm.barrier(role);
                for (i in 1..count) finish
                comm.alltoall(role, vertices);
            }
        }
    }
    static def testAlltoallvAuto(comm: Team, size: Int, count: Int) : void {
        message("AlltoallvAuto Test");
        val places = comm.size();
        finish for ([p] in comm.places()) async at (comm.places()(p)) {
            val role = p;
            val root = 0;
            if (role == root) {
                val vertices = new Array[Long](places * size, (i:Int)=> places * size * (role as Long) + i);
                val arrCounts = new Array[Int](places, size);

                message("alltoallvAuto start");
                comm.barrier(role);
                val time_start = Timer.nanoTime();
                for (i in 1..count) finish {
                    val receivedArray = comm.alltoallvAuto(role, vertices, arrCounts);
                }
                message("alltoallvAuto end");
                val time_end = Timer.nanoTime();

                message("alltoallvAuto: ellapsed time: each: " + (time_end - time_start) / (count as Double));
                message("alltoallvAuto: ellapsed time: total: " + (time_end - time_start));
            } else {
                val vertices = new Array[Long](places * size, (i:Int)=> places * size * (role as Long) + i);
                val arrCounts = new Array[Int](places, size);
                comm.barrier(role);
                for (i in 1..count) finish
                comm.alltoallvAuto(role, vertices, arrCounts);
            }
        }
    }
    static def testAllgather(comm: Team, size: Int, count: Int) : void{
        message("Allgather Test");
        val places = comm.size();
        finish for ([p] in comm.places()) async at (comm.places()(p)) {
            val role = p;
            val root = 0;
            if (role == root) {
                val vertices = new Array[Long](size, (i:Int)=> size * (role as Long) + i);

                message("allgather start");
                comm.barrier(role);
                val time_start = Timer.nanoTime();
                for (i in 1..count) finish {
                    val receivedArray = comm.allgather(role, vertices);
                }
                message("allgather end");
                val time_end = Timer.nanoTime();

                message("allgather: ellapsed time: each: " + (time_end - time_start) / (count as Double));
                message("allgather: ellapsed time: total: " + (time_end - time_start));
            } else {
                val vertices = new Array[Long](size, (i:Int)=> size * (role as Long) + i);
                comm.barrier(role);
                for (i in 1..count) finish
                comm.allgather(role, vertices);
            }
        }
    }
    static def testAllgathervAuto(comm: Team, size: Int, count: Int) : void {
        message("AllgathervAuto Test");
        val places = comm.size();
        finish for ([p] in comm.places()) async at (comm.places()(p)) {
            val role = p;
            val root = 0;
            if (role == root) {
                val vertices = new Array[Long](size, (i:Int)=> size * (role as Long) + i);

                message("allgathervAuto start");
                comm.barrier(role);
                val time_start = Timer.nanoTime();
                for (i in 1..count) finish {
                    val receivedArray = comm.allgathervAuto(role, vertices);
                }
                message("allgathervAuto end");
                val time_end = Timer.nanoTime();

                message("allgathervAuto: ellapsed time: each: " + (time_end - time_start) / (count as Double));
                message("allgathervAuto: ellapsed time: total: " + (time_end - time_start));
            } else {
                val vertices = new Array[Long](size, (i:Int)=> size * (role as Long) + i);
                comm.barrier(role);
                for (i in 1..count) finish
                comm.allgathervAuto(role, vertices);
            }
        }
    }
    public static def main(args:Array[String](1)) : void {
        val size = Int.parse(args(0));
        val count = Int.parse(args(1));
        var tests: Int = ~0;
	if (args.size >= 2) {
		tests = Int.parse(args(2),2);
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
