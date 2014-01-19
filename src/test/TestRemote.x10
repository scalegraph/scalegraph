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
import x10.array.PlaceGroup;
import x10.util.Timer;
import x10.util.Random;
import x10.util.Pair;

import org.scalegraph.test.STest;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.Remote;

public final class TestRemote extends STest {
	public static def main(args: Array[String](1)) {
		new GeneratorTest().execute(args);
	}

    def createData(pg : PlaceGroup, size : Long) {
        val dst = new DistMemoryChunk[Long](pg, ()=>(MemoryChunk.make[Long](size)));
        val src = new DistMemoryChunk[Long](pg, ()=>(MemoryChunk.make[Long](64)));


        finish for (p in pg) at (p) async {
            val random = new Random(p.id);
            val dst_local = dst();
            for (i in dst_local.range()) {
                dst_local(i) = random.nextLong(64 * pg.size());
            }
        }
        finish for (p in pg) at (p) async {
            val random = new Random(p.id * 100);
            val src_local = src();
            for (i in src_local.range()) {
                src_local(i) = random.nextLong();
            }
        }

        val p = new Pair[DistMemoryChunk[Long], DistMemoryChunk[Long]](dst, src);
        return p;
    }

    def testGet(comm : Team, size : Long) : void {
        Console.OUT.println("Remote.get test");
        val pg = comm.placeGroup();

        val nPlaces = pg.size();

        val v1 = (()=>{
            val data= createData(pg, size);

            val vertices = data.first;
            val mapping = data.second;
            val start = Timer.nanoTime();
            finish for (p in pg) at (p) async {
                val vs_local = vertices();
                for (i in vs_local.range()) {
                    val v = vs_local(i);
                    vs_local(i) = at (pg((v % nPlaces) as Int)) mapping()(v / nPlaces);
                }
            }
            Console.OUT.printf("at version time = %g\n", (Timer.nanoTime() - start) / (1000. * 1000. * 1000.));
            return vertices;
        })();

        val v2 = (()=>{
            val data = createData(pg, size);

            val vertices = data.first;
            val mapping = data.second;
            val start = Timer.nanoTime();
            finish for (p in pg) at (p) async {
                val vs_local = vertices();
                Console.OUT.println("getting");
                Remote.get(comm, mapping(), vs_local, vs_local.range(), (i : Long, get : (Long, Int, Long)=>void) => {
                    val v = vs_local(i);
                    //val v = i % (64 * pg.size());
                    get(i, (v % nPlaces) as Int, v / nPlaces);
                });
                Console.OUT.println("getted");
            }
            Console.OUT.printf("Remote.get version time = %g\n", (Timer.nanoTime() - start) / (1000. * 1000. * 1000.));
            return vertices;
        })();

        finish for (p in pg) at(p) async {

            val v1_local = v1();
            val v2_local = v2();
            assert(v1_local.size() == v2_local.size());
            for (i in v1_local.range()) {
                assert(v1_local(i) == v2_local(i));
            }
        }
    }

    def createPutData(pg : PlaceGroup, size : Long) = new DistMemoryChunk[Long](pg, ()=>(MemoryChunk.make[Long](size)));

    def testPut(comm : Team, size : Long) {
        Console.OUT.println("Remote.put test");

        val pg = comm.placeGroup();

        val nPlaces = pg.size();

        val data1 = (()=>{
            val data = createPutData(pg, size * nPlaces);
            val start = Timer.nanoTime();

            finish for (p in pg) at (p) async {
                val data_local = data();
                for (i in data_local.range()) {
                    at(pg((i % nPlaces) as Int)) {
                        data()(i / nPlaces + size * p.id) = i;
                    }
                }
            }
            Console.OUT.printf("at version time = %g \n", (Timer.nanoTime() - start) / (1000. * 1000. * 1000.));
            return data;
        })();

        val data2 = (()=>{
            val data = createPutData(pg, size * nPlaces);
            val start = Timer.nanoTime();
            finish for (p in pg) at (p) async {
                val data_local = data();
                Remote.put(comm, data_local, data_local.range(), (i : Long, put : (Int, Long, Long)=>void)=>{
                    put((i % nPlaces) as Int, i / nPlaces +  size * p.id, i);
                });
            }
            Console.OUT.printf("Remote.put version time = %g\n", (Timer.nanoTime() - start) / (1000. * 1000. * 1000.));
            return data;
        })();

        // validation code
        finish for (p in pg) at (p) {
            val d1_local = data1();
            val d2_local = data2();
            assert(d1_local.size() == d2_local.size());
            for (i in d1_local.range()) {
                assert(d1_local(i) == d2_local(i));
            }
        }
    }

    public def run(args: Array[String](1)): Boolean {
        // val size = Int.parse(args(0));
        val size = 1 << 15;

        val comm = Team.WORLD;
        testGet(comm, size);
        testPut(comm, size);
        return true;
    }
}
