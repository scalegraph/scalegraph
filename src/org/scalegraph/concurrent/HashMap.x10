package org.scalegraph.concurrent;

import x10.util.Timer;
import x10.util.Map;
import x10.util.Box;
import x10.compiler.NonEscaping;
import x10.io.CustomSerialization;
import x10.io.SerialData;
import org.scalegraph.util.LongIndexedMemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;

struct Pair[T, U] {
	val first:T;
	val second:U;

	public def this(first : T, second : U) {
		this.first =  first;
		this.second = second;
	}
}


// Todo x10doc comment
public class HashMap[K,V] {K haszero, V haszero} {
    static struct HashEntry[Key, Value] {Key haszero, Value haszero} {
        public def getKey() = key;
        public def getValue() = value;

        val key: Key;
        val value: Value;
        val hash: Int;
        val occupied : Boolean;

        def this(key: Key, value: Value, h: Int) {
            this.key = key;
            this.value = value;
            this.hash = h;
            this.occupied = true;
        }
    }

    // number of chunks
    // Todo: if NTHREADS isn't power of 2
    val nChunk = Runtime.NTHREADS;
    // number of bit to split table
    val nMaskBits = MathAppend.ceilLog2(nChunk);

    /** The actual table, must be of size 2**n */
    var table: MemoryChunk[HashEntry[K,V]];


    /** Number of non-null, non-removed entries in the table. */
    var size: Int;

    var shouldRehash: Boolean;

    static MAX_PROBES = 3;
    static MIN_SIZE = 4;

    public def this() {
        init(MIN_SIZE);
    }

    public def this(var sz: int) {
        var pow2: int = MIN_SIZE;
        while (pow2 < sz)
            pow2 <<= 1;
        init(pow2);
    }

    @NonEscaping final def init(sz: int): void {
        // check that sz is a power of 2
        assert (sz & -sz) == sz;
        assert sz >= MIN_SIZE;

        assert((Runtime.NTHREADS & -Runtime.NTHREADS) == Runtime.NTHREADS);

        table = MemoryChunk[HashEntry[K, V]](sz as Long);
        size = 0;
        shouldRehash = false;
    }

    protected def hash(k: K): Int = hashInternal(k);
    @NonEscaping protected final def hashInternal(k: K): Int {
        return k.hashCode() * 200000000;
    }

    /** 上位nビットでマスク*/
    private def hashToIndex(idx : Int, n : Int) {
        if (n == 0) return 0;
        return ((idx as UInt) >> (32 - n)) as Int;
    }
/*
    private def mask(idx : Int, n :Int) {
        return (idx >> (64 - n)) << (64 - n);
    }
 */
    public def put(k: K, v: V): Box[V] = putInternal(k,v);
    @NonEscaping protected final def putInternal(k: K, v: V): Box[V] {
        // Todo incomplete condition
        if ((shouldRehash && size >= table.size() / 2))
            rehashInternal();

        val h = hashInternal(k);
        val sz = MathAppend.ceilLog2(table.size());

        var i : Int = hashToIndex(h, sz);
        var cnt : Int = 0;

        while (true) {
            val e = table(i);
            if (!e.occupied) {
                if (cnt > MAX_PROBES)
                    shouldRehash = true;
                table(i) = new HashEntry[K,V](k, v, h);
                size++;
                return null;
            } else if (e.hash == h && k.equals(e.key)) { // already added key k
                val old = e.value;
                table(i) = new HashEntry[K, V](e.key, v, e.hash);
                return new Box[V](old);
            }
            cnt++;
            i = (i + 1) % (table.size() as Int);
        }
    }

    // Todo implement
    public def get(k : MemoryChunk[K]) {

    }

    public def get(k: K): Box[V] {
        val e = getEntry(k);
        if (e == null) return null;
        return new Box[V](e.value.value);
    }

    protected def getEntry(k: K): Box[HashEntry[K,V]] {
        if (size == 0)
            return null;

// incompatible with iterators
//        if (shouldRehash)
//            rehash();

        val h = hash(k);
        val sz = MathAppend.ceilLog2(table.size());

        var i : Int = hashToIndex(h, sz);
        var cnt : Int = 0;

        while (true) {
            val e = table(i);
            if (!e.occupied) {
                if (cnt > MAX_PROBES)
                    shouldRehash = true;
                return null;
            }
            if (e.occupied) {
                if (e.hash == h && k.equals(e.key)) {
                    if (cnt > MAX_PROBES)
                        shouldRehash = true;
                    return new Box[HashEntry[K, V]](e);
                }
                if (cnt > table.size()) {
                    if (cnt > MAX_PROBES)
                        shouldRehash = true;
                    return null;
                }
            }
            i = (i + 1) % (table.size() as Int);
            cnt++;
        }
    }

    public def put(keys : MemoryChunk[K], values : MemoryChunk[V]) {
        assert(keys.size() == values.size());
        var chunk : Array[GrowableMemory[Pair[Int, Long]]] =
            new Array[GrowableMemory[Pair[Int, Long]]](nChunk, (i:Int)=>(new GrowableMemory[Pair[Int, Long]]()));

        // number of chunk's entry
        val nEntryLocal = keys.size() / nChunk as Long;
        val rem = keys.size() % nChunk;
        val offset = new Array[Long](nChunk, (i : Int)=>{
            if (i == 0) {return 0L;}
            else {return i * nEntryLocal as Long;}
        });
        val nEntry = new Array[Long](nChunk, (i : Int) => {
            if (i == nChunk - 1) {return nEntryLocal + rem;}
            else {return nEntryLocal;}
        });

        for (p in 0..(nChunk - 1)) {
            Console.OUT.printf("offset, nEntry = %d, %d\n", offset(p), nEntry(p));
        }

        // split according to upper nMaskBit
        // Todo use scatterGather
        for (p in 0..(nChunk -1)) {
            for (idx in offset(p)..(offset(p) + nEntry(p) - 1)) {
                val h = hash(keys(idx));

                val chunkIdx = hashToIndex(h, nMaskBits) as Int;
                chunk(chunkIdx).add(new Pair[Int, Long](h, idx as Long));
            }
        }

        for (p in 0..(nChunk - 1)) {
            Console.OUT.printf("chunk(%d) = %d\n", p, chunk(p).size());
        }

        // add chunks to table
        for (0..(nChunk - 1)) {
            val nextChunk = new Array[GrowableMemory[Pair[Int, Long]]](nChunk, (i:Int)=>(new GrowableMemory[Pair[Int, Long]]()));
            finish for (p in 0..(nChunk - 1)) async {
                for (i in chunk(p).range()) {
                    val e = chunk(p)(i);
                    val idx = e.second;
                    if (!putLocal(e.first, keys(idx), values(idx))) {
                        // if flow from table, add next chunk
                        nextChunk((p + 1) % nChunk).add(new Pair[Int, Long](((p + 1) % nChunk) << (32 - nMaskBits), idx));
                    }
                }
            }
            chunk = nextChunk;
            if (chunk.reduce(((acc:Boolean, x:GrowableMemory[Pair[Int, Long]])=>x.size()==0L && acc), true)) {break;}
            nextChunk.map((x:GrowableMemory[Pair[Int, Long]])=>{Console.OUT.printf("%d\n", x.size());return 0;});
        }

        for (i in 0..(table.size() - 1)) {
            Console.OUT.println(table(i));
        }

        for (p in 0..(nChunk -1)) {
            assert(chunk(p).size() == 0L);
        }
    }

    // Todo: if elements already stored?
    private def putLocal(h : Int, key : K, value : V) {
        // current working upper bits
        val currentBits = hashToIndex(h, nMaskBits);
        // upper bit of table size
        val sz = MathAppend.ceilLog2(table.size());

        var cur : Int = hashToIndex(h, sz);
        var cnt : Int = 0;

        // while working on current chunk
        while (cur >> (sz - nMaskBits) == currentBits) {
            val e = table(cur);

            if (e.occupied == false) {
                if (cnt > MAX_PROBES) {
                    shouldRehash = true;
                }
                table(cur) = new HashEntry[K, V](key, value, h);
                size++;
                return true;
            }
            cur = (cur + 1) % (table.size() as Int);
            cnt++;
        }
        return false;
    }

    // Todo: implement
    public def rehash():void { rehashInternal(); }
    @NonEscaping protected final def rehashInternal(): void {
        /*
        modCount++;
        val t = table;
        val oldSize = size;
        table = new MemoryChunk[HashEntry[K, V]](t.size() * 2);
        size = 0;
        shouldRehash = false;

        for (var i: int = 0; i < t.size(); i++) {
            if (t(i).occupied) {
                put(t(i).key, t(i).value);
                shouldRehash = false;
            }
        }
        assert size == oldSize;
        size = oldSize;
              */

    }
}
