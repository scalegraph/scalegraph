package org.scalegraph.util;

import x10.util.*;
import org.scalegraph.util.ReadRequestPayload;
import org.scalegraph.util.KeyGenerator;

protected interface RemoteCopyable {
    
    def createSendPayload(ArrayList[ReadRequestPayload]): void;
}