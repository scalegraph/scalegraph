package org.scalegraph.graph;

import x10.util.*;
import org.scalegraph.util.*;

public class BigGraph {
    
    protected val localHandle:PlaceLocalHandle[LocalState];
    protected var isLocalPointerValid: boolean;
    protected var cachedLocal: LocalState;
    
    protected def this(nodes: long, isDirect: boolean) {
        
        val dist = Dist.makeUnique();
        val const_nodes = nodes;
        val const_isDirect = isDirect;
        val init = () => {
            
            return new LocalState(const_nodes, const_isDirect);
        };
        
        localHandle = PlaceLocalHandle.make[LocalState](dist, init);
    }
    
    public static def make(nodes: Long, isDirect: boolean): BigGraph {
        
        return new BigGraph(nodes, isDirect);
    }
    
    protected final def local(): LocalState {
        
        if (!isLocalPointerValid) {
            
            cachedLocal = localHandle();
            x10.util.concurrent.Fences.storeStoreBarrier();
            isLocalPointerValid = true;
        }
        
        return cachedLocal;
    }
    
    protected static class LocalState {
        
        private val nodes: Long;
        
        private val storage: BigArray[ArrayList[Long]];
        
        private var isDirect: boolean;
        
        protected def this(nodes: Long, isDirect: boolean) {
            
            this.nodes = nodes;
            this.isDirect = isDirect;
            this.storage = BigArray.make[ArrayList[Long]](nodes);
    	}
    }
    
    
    
}