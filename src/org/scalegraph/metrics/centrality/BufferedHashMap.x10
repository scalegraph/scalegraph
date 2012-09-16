package org.scalegraph.metrics.centrality;

import x10.util.HashMap;
import x10.util.ArrayList;
import x10.util.Pair;
import x10.util.Set;
import x10.lang.Math;
import x10.array.Dist;
import x10.array.DistArray;

public class BufferedHashMap {
    private static val MAX_BUFFER = 10000;
    private class Data {
        private val key:Pair[Int, Int];
        private val value:Double;
        public def this(key:Pair[Int, Int], value:Double) {
            this.key = key;
            this.value = value;
        }
    };
    
    private val array:DistArray[HashMap[Pair[Int, Int], Double]];
    private val buffer:Array[ArrayList[Data]];
    public def this() {
        array = DistArray.make[HashMap[Pair[Int, Int], Double]]
        (Dist.makeUnique(), (p:Point)=>{new HashMap[Pair[Int, Int], Double]()});
        buffer = new Array[ArrayList[Data]](Place.MAX_PLACES);
        for (i in buffer) {
            buffer(i) = new ArrayList[Data]();
        }
    }

    public def flush(id:Int) {
        at (Place.place(id)) {
            for (data in buffer(id)) {
                val k = data.key;
                val v = data.value;
                array(id).put(k, v);
            }
        }
        buffer(id).clear();
    }
    
    public def put(x:Int, y:Int, value:Double ,id:Int) {
        val key = new Pair[Int, Int](x, y);
        buffer(id).add(new Data(key, value));
        if (buffer(id).size () > MAX_BUFFER) {
            flush(id);
        }
    }

    public def get(x:Int, y:Int) {
        val p = new Pair[Int,Int](x, y);
        assert(array(here.id) != null);
        val v = array(here.id)(p);
        if (v == null) {
            return 0.0;
        }
        return v();
    }

    public def size() {
	    var sum:Int = 0;
	    for (p in Place.places()) {
	        sum += at(p) {
		        array(p.id).size()
	        };
	    }
	    return sum;
    }
}
