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

package org.scalegraph.util;

import x10.xrx.Runtime;
import x10.util.Timer;
import x10.util.Map;
import x10.util.Box;
import x10.util.RailUtils;
import x10.util.concurrent.AtomicInteger;
import x10.util.NoSuchElementException;
import x10.compiler.NonEscaping;
import x10.compiler.Inline;
import x10.io.CustomSerialization;
//import x10.io.SerialData;
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

public final class HashMap[K,V] {K haszero, V haszero} {
  static struct HashEntry[Key, Value] {Key haszero, Value haszero} {

    static EMPTY : Byte = 0 as Byte;
    static OCCUPIED : Byte = 1 as Byte;
    static DUMMY : Byte = 2 as Byte;

    public def getKey() = key;
    public def getValue() = value;

    val key: Key;
    val value: Value;
    val hash: Int;
    val flag : Byte;
    def this () {
      this.key = Zero.get[Key]();
      this.value = Zero.get[Value]();
      this.hash = 0n;
      this.flag = EMPTY; /* not occpied */
    }

    def this(key: Key, value: Value, h: Int) {
      this.key = key;
      this.value = value;
      this.hash = h;
      this.flag = OCCUPIED;
    }

    def this(key : Key, value : Value, h : Int, flag : Byte) {
      this.key = key;
      this.value = value;
      this.hash = h;
      this.flag = flag;
    }
  }

  static def pow2floor(x : Int) {
    var pow2 : int = 1n;
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
  /* Todo : log of table size */
  var logSize : Int;

  var shouldRehash: Boolean;

  static MAX_PROBES = 3n;
  static MIN_SIZE = 4n;

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

    table = MemoryChunk.make[HashEntry[K, V]](init_size as Long);
    this.logSize = MathAppend.ceilLog2(table.size());
    this.size = 0n;
    shouldRehash = false;
  }

  public def clear() {
    for (i in table.range()) {
      table(i) = HashEntry[K, V]();
    }
    size = 0n;
    logSize = MathAppend.ceilLog2(table.size());
    shouldRehash = false;
  }

  public def size() = size;

  @Inline protected final def hash(k: K): Int = hashInternal(k);
  @NonEscaping @Inline protected final def hashInternal(k: K): Int {
    return k.hashCode() * 200000000n;
  }

  /** mask and shift upper n bits */
  @NonEscaping static protected final @Inline def hashToIndex(idx : Int, n : Int) {
    return ((idx as UInt) >> (32 - n)) as Int;
  }

  public def put(k: K, v: V): Box[V] = putInternal(k,v);
  @NonEscaping protected final def putInternal(k: K, v: V): Box[V] {
    if ((shouldRehash && size >= table.size() / 2))
      rehashInternal();

    val h = hashInternal(k);
    val sz = this.logSize;

    var i : Int = hashToIndex(h, sz);
    var cnt : Int = 0n;

    while (true) {
      val e = table(i);
      if (e.flag == HashEntry.EMPTY) {
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
      i = (i + 1n) % (table.size() as Int);
    }
  }

  public def get(k: K): Box[V] {
    val idx = getEntryIndex(k);
    if (idx < 0) return null;
    return new Box[V](table(idx).value);
  }

  public def get(k : K, defValue : V) {
    val idx = getEntryIndex(k);
    if (idx < 0) return defValue;
    return (table(idx).value);
  }

  public def get(ks : MemoryChunk[K], defValue : V) {
    val vs = MemoryChunk.make[V](ks.size());

    val eachSize = new Rail[Long](nChunk, (i:Long)=>{
      if (i == nChunk - 1) {return ks.size() / nChunk + ks.size() % nChunk;}
      else {return ks.size() / nChunk;}});
    val offset = new Rail[Long](nChunk + 1);
    for (i in 1..nChunk) {
      offset(i) = offset(i - 1) + eachSize(i - 1);
    }

    finish for (p in 0..(nChunk - 1)) async {
      for (i in offset(p)..(offset(p) + eachSize(p) - 1)) {
        vs(i) = get(ks(i), defValue);
      }
    }
    return vs;
  }

  public def getOrThrow(key : K) {
    val idx = getEntryIndex(key);
    if (idx < 0) throw new NoSuchElementException("Not Found");
    return (table(idx).value);
  }

  public def containsKey(key : K) {
    return getEntryIndex(key) >= 0;
  }

  public def newKeys(ks : MemoryChunk[K], defValue : V) {
    if (size + ks.size() >= table.size() / 2) {
      rehashInternal();
    }
    val chunk = MemoryChunk.make[Pair[Int, Long]](ks.size());

    // closure__1
    val scatterGather = new ScatterGather(nChunk);
    Parallel.iter(ks.range(), (tid: Long, r : LongRange)=> {
      val counts = scatterGather.counts(tid as Int);
      for (i in r) {
        val h = hash(ks(i));
        val chunkIdx = (nMaskBits == 0n) ? 0n : hashToIndex(h, nMaskBits);
        counts(chunkIdx)++;
      }
    });
    scatterGather.sum();
    // split according to upper nMaskBit
    // closure__2
    Parallel.iter(ks.range(), (tid: Long, r : LongRange)=>{
      val offsets = scatterGather.offsets(tid as Int);
      for (i in r) {
        val k = ks(i);
        val h = hash(ks(i));
        val chunkIdx = (nMaskBits == 0n) ? 0n : hashToIndex(h, nMaskBits);
        val idx = offsets(chunkIdx)++;
        chunk(idx) = new Pair[Int, Long](h, i);
      }
    });

    val offsets = scatterGather.offsets();
    val counts = scatterGather.counts();
    // add chunks to table

    // closure__3
    val localSize = new Rail[Int](nChunk);
    var currentChunk : Rail[GrowableMemory[Tuple3[Int, Long, Int]]] =
      new Rail[GrowableMemory[Tuple3[Int, Long, Int]]](nChunk,
        (i:Long)=>new GrowableMemory[Tuple3[Int, Long, Int]]());

    val pushed = MemoryChunk.make[Int](ks.size());
    for (i in pushed.range()) {
      pushed(i) = -1n;
    }

    finish for (p in 0..(nChunk - 1)) async {
      var cnt:Int = 0n;
      for (i in (offsets(p)..(offsets(p) + counts(p) - 1))) {
        val e = chunk(i);
        val idx = e.second;
        val ret = putDummyLocal(e.first, e.first, ks(idx), defValue);
        if (ret == -2n) { // not added on local
                         // if flow from table, add next chunk
          currentChunk((p + 1) % nChunk).add(
            new Tuple3[Int, Long, Int]( (((p + 1) % nChunk) << (32 - nMaskBits)) as Int, idx, e.first));
        } else if (ret >= 0n) { // added
          cnt++;
          pushed(i) = ret;
        }
      }
      localSize(p) = cnt;
    }

    for (var count : Int = 0n; count < nChunk - 1 &&
      //!currentChunk.reduce(((acc:Boolean, x:GrowableMemory[Tuple3[Int, Long, Int]])=>x.size()==0L && acc), true);
      !RailUtils.reduce(currentChunk, ((acc:Boolean, x:GrowableMemory[Tuple3[Int, Long, Int]])=>x.size()==0L && acc), true);
      count++) {
      val nextChunk = new Rail[GrowableMemory[Tuple3[Int, Long, Int]]](nChunk,
        (i:Long)=>new GrowableMemory[Tuple3[Int, Long, Int]]());
      finish for (p in 0..(nChunk - 1)) async {
        for (i in currentChunk(p).range()) {
          val e = currentChunk(p)(i);
          val idx = e.val2;
          val ret = putDummyLocal(e.val1, e.val3, ks(idx), defValue);
          if (ret == -2n) {
            // if flow from table, add next chunk
            nextChunk((p + 1n) % nChunk).add(
              new Tuple3[Int, Long, Int]( (((p + 1n) % nChunk) << (32n - nMaskBits)) as Int, idx, e.val3));
          } else {
            pushed(i) = ret;
            localSize(p)++;
          }
        }
      }
      currentChunk = nextChunk;
    }
    //val dummysize = localSize.reduce((acc:Int, x:Int)=>(acc + x), 0n);
    val dummysize = RailUtils.reduce(localSize, ((acc:Int, x:Int)=>(acc + x)), 0n);

    val newKeys = MemoryChunk.make[K](dummysize);

    val counts2 = new Rail[Int](nChunk, 0n);
    Parallel.iter(pushed.range(), (tid : Long, r : LongRange) =>{
      for (i in r) {
        if (pushed(i) >= 0) {
          counts2(tid as Int)++;
        }
      }
    });
    val offsets2 = new Rail[Int](nChunk + 1n, 0n);
    for (i in (1..nChunk)) {
      offsets2(i) = offsets2(i - 1n) + counts2(i - 1n);
    }

    Parallel.iter(pushed.range(), (tid : Long, r : LongRange) => {
      for (i in r) {
        if (pushed(i) >= 0) {
          val e = table(pushed(i));
          newKeys(offsets2(tid as Int)) = e.key;
          offsets2(tid as Int)++;
          table(pushed(i)) = new HashEntry[K, V]();
        }
      }
    });
    return newKeys;
  }

  @Inline private def putDummyLocal(h : Int, proper_h : Int, key : K, value : V) {
    // current working upper bits
    val currentBits = (nMaskBits == 0n) ? 0n : hashToIndex(h, nMaskBits);
    // upper bit of table size
    val sz = this.logSize;

    var cur : Int = hashToIndex(h, sz);
    var cnt : Int = 0n;

    // while working on current chunk
    while (cur >> (sz - nMaskBits) == currentBits) {
      val e = table(cur);

      if (e.flag == HashEntry.EMPTY) {
        if (cnt > MAX_PROBES) {
          shouldRehash = true;
        }
        table(cur) = HashEntry[K, V](key, value, proper_h, HashEntry.DUMMY);
        return cur;
      } else if (e.flag == HashEntry.OCCUPIED || e.flag == HashEntry.DUMMY) {
        if (e.key == key) {
          return -1n; // already added
        }
      }
      cur = (cur + 1n) % (table.size() as Int);
      cnt++;
    }
    return -2n; // Add on next chunk
  }

  protected def getEntryIndex(k: K): Int {
    if (size == 0n)
      return -1n;

    // incompatible with iterators
    //        if (shouldRehash)
    //            rehash();

    val h = hash(k);
    val sz = this.logSize;

    var i : Int = hashToIndex(h, sz);
    var cnt : Int = 0n;

    while (true) {
      val e = table(i);
      if (e.flag == HashEntry.EMPTY) {
        if (cnt > MAX_PROBES)
          shouldRehash = true;
        return -1n;
      }
      if (e.flag == HashEntry.OCCUPIED) {
        if (e.hash == h && k.equals(e.key)) {
          if (cnt > MAX_PROBES)
            shouldRehash = true;
          return i;
        }
        if (cnt > table.size()) {
          if (cnt > MAX_PROBES)
            shouldRehash = true;
          return -1n;
        }
      }
      i = (i + 1n) % (table.size() as Int);
      cnt++;
    }
  }

  public def put(ks : MemoryChunk[K], vs : MemoryChunk[V]) {
    if (size + ks.size() >= table.size() / 2) {
      rehashInternal();
    }
    assert(ks.size() == vs.size());
    val chunk = MemoryChunk.make[Pair[Int, Long]](ks.size());

    val scatterGather = new ScatterGather(nChunk);
    Parallel.iter(ks.range(), (tid: Long, r : LongRange)=>{
      val counts = scatterGather.counts(tid as Int);
      for (i in r) {
        val h = hash(ks(i));
        val chunkIdx = (nMaskBits == 0n) ? 0n : hashToIndex(h, nMaskBits);
        counts(chunkIdx)++;
      }
    });
    scatterGather.sum();

    // split elements according to upper nMaskBits
    Parallel.iter(ks.range(), (tid: Long, r : LongRange)=>{
      val offsets = scatterGather.offsets(tid as Int);
      for (i in r) {
        val k = ks(i);
        val v = vs(i);
        val h = hash(ks(i));
        val chunkIdx = (nMaskBits == 0n) ? 0n : hashToIndex(h, nMaskBits);
        val idx = offsets(chunkIdx)++;
        chunk(idx) = new Pair[Int, Long](h, i);
      }
    });

    val offsets = scatterGather.offsets();
    val counts = scatterGather.counts();

    // put elements to table parallel
    val localSize = new Rail[Int](nChunk);
    var currentChunk : Rail[GrowableMemory[Tuple3[Int, Long, Int]]] =
      new Rail[GrowableMemory[Tuple3[Int, Long, Int]]](nChunk,
        (i:Long)=>new GrowableMemory[Tuple3[Int, Long, Int]]());

    finish for (p in 0..(nChunk - 1)) async {
      var cnt:Int = 0n;
      for (i in (offsets(p)..(offsets(p) + counts(p) - 1))) {
        val e = chunk(i);
        val idx = e.second;
        if (!putLocal(e.first, e.first, ks(idx), vs(idx))) {
          // if flow from table, add next chunk
          currentChunk((p + 1n) % nChunk).add(
            new Tuple3[Int, Long, Int]( (((p + 1) % nChunk) << (32 - nMaskBits)) as int, idx, e.first));
        } else {
          cnt++;
        }
      }
      localSize(p) = cnt;
    }

    // put flow elements to table
    for (var count : Int = 0n; count < nChunk - 1 &&
      //!currentChunk.reduce(((acc:Boolean, x:GrowableMemory[Tuple3[Int, Long, Int]])=>x.size()==0L && acc), true);
      !RailUtils.reduce(currentChunk, ((acc:Boolean, x:GrowableMemory[Tuple3[Int, Long, Int]])=>x.size()==0L && acc), true);
      count++) {
      val nextChunk = new Rail[GrowableMemory[Tuple3[Int, Long, Int]]](nChunk,
        (i:Long)=>new GrowableMemory[Tuple3[Int, Long, Int]]());
      finish for (p in 0..(nChunk - 1)) async {
        for (i in currentChunk(p).range()) {
          val e = currentChunk(p)(i);
          val idx = e.val2;
          if (!putLocal(e.val1, e.val3, ks(idx), vs(idx))) {
            // if flow from table, add next chunk
            nextChunk((p + 1) % nChunk).add(
              new Tuple3[Int, Long, Int]( (((p + 1) % nChunk) << (32 - nMaskBits)) as Int, idx, e.val3));
          } else {
            localSize(p)++;
          }
        }
      }
      currentChunk = nextChunk;
    }
    //size += localSize.reduce((acc:Int, x:Int)=>(acc + x), 0n);
    size += RailUtils.reduce(localSize, ((acc : Int, x : Int)=> (acc + x)), 0n);
  }

  @Inline private def putLocal(h : Int, proper_h : Int, key : K, value : V) {
    // current working upper bits
    val currentBits = (nMaskBits == 0n) ? 0n : hashToIndex(h, nMaskBits);
    // upper bit of table size
    val sz = this.logSize;

    var cur : Int = hashToIndex(h, sz);
    var cnt : Int = 0n;

    // while working on current chunk
    while (cur >> (sz - nMaskBits) == currentBits) {
      val e = table(cur);

      if (e.flag == HashEntry.EMPTY) {
        if (cnt > MAX_PROBES) {
          shouldRehash = true;
        }
        table(cur) = HashEntry[K, V](key, value, proper_h);
        return true;
      }
      cur = (cur + 1n) % (table.size() as Int);
      cnt++;
    }
    return false;
  }

  public def rehash():void { rehashInternal(); }
  @NonEscaping protected final def rehashInternal(): void {
    val t = table;
    val oldSize = size;
    size = 0n;
    table = MemoryChunk.make[HashEntry[K, V]](t.size() * 2);
    this.logSize = MathAppend.ceilLog2(table.size());


    val scatterGather = new ScatterGather(nChunk);
    Parallel.iter(t.range(), (tid: Long, r : LongRange)=> {
      val counts = scatterGather.counts(tid as Int);
      for (i in r) {
        val e = t(i);
        if (e.flag == HashEntry.OCCUPIED) {
          val h = e.hash;
          val chunkIdx = ((nMaskBits == 0n) ? 0n : hashToIndex(h, nMaskBits));
          counts(chunkIdx)++;
        }
      }
    });
    scatterGather.sum();

    val chunk = MemoryChunk.make[Pair[Int, Long]](scatterGather.size());

    // split elements according to upper nMaskBit
    Parallel.iter(t.range(), (tid: Long, r : LongRange)=>{
      val offsets = scatterGather.offsets(tid as Int);
      for (i in r) {
        val e = t(i);
        if (e.flag == HashEntry.OCCUPIED) {
          val h = e.hash;
          val chunkIdx = ((nMaskBits == 0n) ? 0n : hashToIndex(h, nMaskBits));
          val idx = offsets(chunkIdx)++;
          chunk(idx) = new Pair[Int, Long](h, i);
        }
      }
    });

    val offsets = scatterGather.offsets();
    val counts = scatterGather.counts();


    val localSize = new Rail[Int](nChunk);
    var currentChunk : Rail[GrowableMemory[Tuple3[Int, Long, Int]]] =
      new Rail[GrowableMemory[Tuple3[Int, Long, Int]]](nChunk,
        (i:Long)=>new GrowableMemory[Tuple3[Int, Long, Int]]());

    // put elements to table parallel
    finish for (p in 0..(nChunk - 1)) async {
      var cnt:Int = 0n;
      for (i in (offsets(p)..(offsets(p) + counts(p) - 1))) {
        val e = chunk(i);
        val idx = e.second;
        if (!putLocal(e.first, e.first, t(idx).key, t(idx).value)) {
          // if flow from table, add next chunk
          currentChunk((p + 1n) % nChunk).add(
            new Tuple3[Int, Long, Int]( (((p + 1) % nChunk) << (32 - nMaskBits)) as Int, idx, e.first));
        } else {
          cnt++;
        }
      }
      localSize(p) = cnt;
    }

    // put flow elements to table
    for (var count : Int = 0n; count < nChunk - 1 &&
      //!currentChunk.reduce(((acc:Boolean, x:GrowableMemory[Tuple3[Int, Long, Int]])=>x.size()==0L && acc), true);
      !RailUtils.reduce(currentChunk, ((acc:Boolean, x:GrowableMemory[Tuple3[Int, Long, Int]])=>x.size()==0L && acc), true);
      count++) {
      val nextChunk = new Rail[GrowableMemory[Tuple3[Int, Long, Int]]](nChunk,
        (i:Long)=>new GrowableMemory[Tuple3[Int, Long, Int]]());
      finish for (p in 0..(nChunk - 1)) async {
        for (i in currentChunk(p).range()) {
          val e = currentChunk(p)(i);
          val idx = e.val2;
          if (!putLocal(e.val1, e.val3, t(idx).key, t(idx).value)) {
            // if flow from table, add next chunk
            nextChunk((p + 1) % nChunk).add(
              new Tuple3[Int, Long, Int]( (((p + 1) % nChunk) << (32 - nMaskBits)) as Int, idx, e.val3));
          } else {
            localSize(p)++;
          }
        }
      }
      currentChunk = nextChunk;
    }

    //size += localSize.reduce((acc : Int, x : Int)=> (acc + x), 0n);
    size += RailUtils.reduce(localSize, ((acc : Int, x : Int)=> (acc + x)), 0n);

    for (p in 0..(nChunk -1)) {
      assert(currentChunk(p).size() == 0);
    }
    assert(size == oldSize);
  }
}
