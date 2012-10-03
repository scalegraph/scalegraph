package org.scalegraph.util;

import x10.util.*;
import org.scalegraph.util.KeyGenerator;

protected final class InstanceWaitEntry[U] {
    
    var key: Key;
    var indices: ArrayList[Long] = new ArrayList[Long]();
}