package org.scalegraph.communities;

import x10.util.HashMap;
import x10.util.ArrayList;
import x10.util.Set;
import x10.lang.Math;
import x10.array.Dist;
import x10.array.DistArray;

public class LongToIntMap {
    private val map:DistArray[HashMap[Long, Int]];
    public def this() {
        this.map =
            DistArray.make[HashMap[Long, Int]]
            (Dist.makeUnique(),
             (p:Point)=>{new HashMap[Long,Int]()});
    }

    public def hash(key:Long):Int {
        return (Math.abs(key) % Place.MAX_PLACES) as Int;
    }
        
    public def put(key:Long, v:Int):Int {
        val h = hash(key);
        val ret = at (Place.place(h)) {
            map(h).put(key, v);
            v
        };
        return ret;
    }

    public operator this(key:Long) {
      val h = hash(key);
      return at (Place.place(h)) {map(h)(key)};
    }

    public def keySet() {
        val keys = new ArrayList[Long]();
        for (p in Place.places()) {
            keys.addAll(at (p) {map(p.id).keySet()});
        }
        return keys;
    }
}
