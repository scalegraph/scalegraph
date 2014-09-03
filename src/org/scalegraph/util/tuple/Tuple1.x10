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

package org.scalegraph.util.tuple;
public final struct Tuple1 [T1] {
    public val1: T1;

    public def this(val1: T1) {
        this.val1 = val1;
    }

    public def get1() = val1;

    public def toString() : String {
        return ("Tuple1("+val1+")");
    }

}
