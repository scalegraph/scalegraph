package org.scalegraph.concurrent;

import x10.util.Timer;
import x10.util.Map;
import x10.util.Box;
import x10.util.concurrent.AtomicInteger;
import x10.compiler.NonEscaping;
import x10.compiler.Inline;
import x10.io.CustomSerialization;
import x10.io.SerialData;
import org.scalegraph.util.StopWatch;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.tuple.Tuple3;

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
        def this () {
        	this.key = Zero.get[Key]();
        	this.value = Zero.get[Value]();
        	this.hash = 0;
        	this.occupied = false;
        }

        def this(key: Key, value: Value, h: Int) {
            this.key = key;
            this.value = value;
            this.hash = h;
            this.occupied = true;
        }
    }

    static def pow2floor(x : Int) {
        var pow2 : int = 1;
        while (pow2 < x) {
            pow2 <<= 1;
        }
        return pow2;
    }

    // number of chunks
    private static val nChunk = pow2floor(Runtime.NTHREADS as Int);
    // number of bit to split table
    private static val nMaskBits = MathAppend.ceilLog2(nChunk) as Int;

    /** The actual table, must be of size 2**n */
    var table: MemoryChunk[HashEntry[K,V]];

    /** Number of non-null, non-removed entries in the table. */
    var size: Int;
    /* Todo : rename */
    var logSize : Int;

    var shouldRehash: Boolean;

    static MAX_PROBES = 3;
    static MIN_SIZE = 4;

    public def this() {
        init(MIN_SIZE);
    }

    public def this(var sz: int) {
        val pow2 = pow2floor(sz);
        init(Math.max(pow2, MIN_SIZE));
    }

    @NonEscaping final def init(init_size: int): void {
        // check that sz is a power of 2
        assert (init_size & -init_size) == init_size;
        assert init_size >= MIN_SIZE;

        assert((nChunk & -nChunk) == nChunk);

        table = MemoryChunk[HashEntry[K, V]](init_size as Long);
        this.logSize = MathAppend.ceilLog2(table.size());
        Console.OUT.printf("logSize = %d\n", logSize);
        this.size = 0;
        shouldRehash = false;
    }

    public def clear() {
        for (i in table.range()) {
            table(i) = HashEntry[K, V]();
        }
        size = 0;
        logSize = MathAppend.ceilLog2(table.size());
        shouldRehash = false;
    }

    @Inline protected final def hash(k: K): Int = hashInternal(k);
    @NonEscaping @Inline protected final def hashInternal(k: K): Int {
        return k.hashCode() * 200000000;
    }

    /** mask and shift upper n bits */
    @NonEscaping protected final @Inline def hashToIndex(idx : Int, n : Int) {
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
        val sz = this.logSize;

        var i : Int = hashToIndex(h, sz);
        var cnt : Int = 0;
/*
        Console.OUT.printf("sz = %d\n", sz);
        Console.OUT.printf("i = %d\n", i);
 */

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
        val sz = this.logSize;

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
        if (size + keys.size() >= table.size() / 2) {
            rehashInternal();
        }
        assert(keys.size() == values.size());
        val chunk = new MemoryChunk[Pair[Int, Long]](keys.size());

        // closure__1
        val scatterGather = new ScatterGather(nChunk);
        Parallel.iter(keys.range(), (tid: Long, r : LongRange)=> {
            val counts = scatterGather.getCounts(tid as Int);
            for (i in r) {
                val h = hash(keys(i));
                val chunkIdx = (nMaskBits == 0) ? 0 : hashToIndex(h, nMaskBits);
                counts(chunkIdx)++;
            }
        });
        scatterGather.sum();
        // split according to upper nMaskBit
        // Todo use scatterGather
        // closure__2
        Parallel.iter(keys.range(), (tid: Long, r : LongRange)=> {
            val offsets = scatterGather.getOffsets(tid as Int);
            for (i in r) {
                val k = keys(i);
                val v = values(i);
                val h = hash(keys(i));
                val chunkIdx = (nMaskBits == 0) ? 0 : hashToIndex(h, nMaskBits);
                val idx = offsets(chunkIdx)++;
                chunk(idx) = new Pair[Int, Long](h, i);
            }
        });

        val offsets = scatterGather.getChunkOffset();
        val counts = scatterGather.getChunkCounts();
        // add chunks to table

        // closure__3
        val localSize = new Array[Int](nChunk);
        var currentChunk : Array[GrowableMemory[Tuple3[Int, Long, Int]]](1) =
            new Array[GrowableMemory[Tuple3[Int, Long, Int]]](nChunk,
                (i:Int)=>new GrowableMemory[Tuple3[Int, Long, Int]]());
        finish for (p in 0..(nChunk - 1)) async {
            var cnt:Int = 0;
            for (i in (offsets(p)..(offsets(p) + counts(p) - 1))) {
                val e = chunk(i);
                val idx = e.second;
                if (!putLocal(e.first, e.first, keys(idx), values(idx))) {
                    // if flow from table, add next chunk
                    currentChunk((p + 1) % nChunk).add(
                        new Tuple3[Int, Long, Int](((p + 1) % nChunk) << (32 - nMaskBits), idx, e.first));
                } else {
                    cnt++;
                }
            }
            localSize(p) = cnt;
        }

        for (var count : Int = 0; count < nChunk - 1 &&
            !currentChunk.reduce(((acc:Boolean, x:GrowableMemory[Tuple3[Int, Long, Int]])=>x.size()==0L && acc), true);
        count++) {
            val nextChunk = new Array[GrowableMemory[Tuple3[Int, Long, Int]]](nChunk,
                (i:Int)=>new GrowableMemory[Tuple3[Int, Long, Int]]());
            finish for (p in 0..(nChunk - 1)) async {
                for (i in currentChunk(p).range()) {
                    val e = currentChunk(p)(i);
                    val idx = e.val2;
                    if (!putLocal(e.val1, e.val3, keys(idx), values(idx))) {
                        // if flow from table, add next chunk
                        nextChunk((p + 1) % nChunk).add(
                            new Tuple3[Int, Long, Int](((p + 1) % nChunk) << (32 - nMaskBits), idx, e.val3));
                    } else {
                        localSize(p)++;
                    }
                }
            }
            currentChunk = nextChunk;
        }
        size += localSize.reduce((acc:Int, x:Int)=>(acc + x), 0);
    }

    // Todo: if elements already stored?
    @Inline private def putLocal(h : Int, proper_h : Int, key : K, value : V) {
        // current working upper bits
        val currentBits = (nMaskBits == 0) ? 0 : hashToIndex(h, nMaskBits);
        // upper bit of table size
        val sz = this.logSize;

        var cur : Int = hashToIndex(h, sz);
        var cnt : Int = 0;

        // while working on current chunk
        while (cur >> (sz - nMaskBits) == currentBits) {
            val e = table(cur);

            if (e.occupied == false) {
                if (cnt > MAX_PROBES) {
                    shouldRehash = true;
                }
                table(cur) = HashEntry[K, V](key, value, proper_h);
                //	size.incrementAndGet(); // Todo remove
                return true;
            }
            cur = (cur + 1) % (table.size() as Int);
            cnt++;
        }
        return false;
    }

    public def rehash():void { rehashInternal(); }
    @NonEscaping protected final def rehashInternal(): void {
        val t = table;
        val oldSize = size;
        size = 0;
        table = new MemoryChunk[HashEntry[K, V]](t.size() * 2);
        this.logSize = MathAppend.ceilLog2(table.size());

        Console.OUT.printf("size = %d\n", oldSize);
        val scatterGather = new ScatterGather(nChunk);
        Parallel.iter(t.range(), (tid: Long, r : LongRange)=> {
            val counts = scatterGather.getCounts(tid as Int);
            for (i in r) {
                val e = t(i);
                if (e.occupied) {
                    val h = e.hash;
                    // Todo : NonEscaping
                    val chunkIdx : Int = ((nMaskBits == 0) ? (0 as Int) : (((h as UInt) >> (32 - nMaskBits)) as Int));
                    counts(chunkIdx)++;
                }
            }
        });
        scatterGather.sum();

        val chunk = new MemoryChunk[Pair[Int, Long]](scatterGather.getChunkSize());
        Console.OUT.printf("sum = %d\n", scatterGather.getChunkSize());

        // split according to upper nMaskBit
        // Todo use scatterGather
        Parallel.iter(t.range(), (tid: Long, r : LongRange)=> {
            val offsets = scatterGather.getOffsets(tid as Int);
            for (i in r) {
                val e = t(i);
                if (e.occupied) {
                    val h = e.hash;
                    // Todo : NonEscaping
                    val chunkIdx : Int = ((nMaskBits == 0) ? (0 as Int) : (((h as UInt) >> (32 - nMaskBits)) as Int));
                    val idx = offsets(chunkIdx)++;
                    chunk(idx) = new Pair[Int, Long](h, i);
                }
            }
        });

        val offsets = scatterGather.getChunkOffset();
        val counts = scatterGather.getChunkCounts();
        // add chunks to table

        var currentChunk : Array[GrowableMemory[Tuple3[Int, Long, Int]]](1) =
            new Array[GrowableMemory[Tuple3[Int, Long, Int]]](nChunk, (i:Int)=>new GrowableMemory[Tuple3[Int, Long, Int]]());
        finish for (p in (0..(nChunk - 1))) async {
            Console.OUT.printf("offset, counts = %d, %d\n", offsets(p), counts(p));
            for (i in (0..(counts(p) - 1))) {
                val pair = chunk(offsets(p) + i);
                currentChunk(p).add(new Tuple3[Int, Long, Int](pair.first, pair.second, pair.first));
            }
        }

        for (p in (0..(nChunk - 1))) {
            Console.OUT.printf("%d\n", p);
            for (i in currentChunk(p).range()) {
                Console.OUT.println(currentChunk(p)(i));
            }
        }

        val sz = this.logSize;

        for (0..(nChunk - 1)) {
            val nextChunk = new Array[GrowableMemory[Tuple3[Int, Long, Int]]](nChunk, (i:Int)=>new GrowableMemory[Tuple3[Int, Long, Int]]());
            finish for (p in 0..(nChunk - 1)) async {
                for (i in (currentChunk(p).range())) {
                    val e = currentChunk(p)(i);
                    val idx = e.val2;
                    if (!putLocal(e.val1, e.val3, t(idx).key, t(idx).value)) {
                        // if flow from table, add next chunk
                        nextChunk((p + 1) % nChunk).add(new Tuple3[Int, Long, Int](((p + 1) % nChunk) << (32 - nMaskBits), idx, e.val3));
                    }
                }
            }
            currentChunk = nextChunk;
            if (currentChunk.reduce(((acc:Boolean, x:GrowableMemory[Tuple3[Int, Long, Int]])=>x.size()==0L && acc), true)) {break;}
            nextChunk.map((x:GrowableMemory[Tuple3[Int, Long, Int]])=>{Console.OUT.printf("%d\n", x.size());return 0;});
        }

        for (i in 0..(table.size() - 1)) {
            Console.OUT.println(table(i));
        }

        for (p in 0..(nChunk -1)) {
            assert(currentChunk(p).size() == 0L);
            Console.OUT.printf("assert %d ok\n", p);
        }
        Console.OUT.printf("old, new = %d, %d\n", oldSize, size);
        assert(size == oldSize);
        Console.OUT.println("assert ok");
    }
}
