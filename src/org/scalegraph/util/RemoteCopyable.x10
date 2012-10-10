package org.scalegraph.util;

import x10.util.*;
import org.scalegraph.util.RequestPayload;
import org.scalegraph.util.KeyGenerator;

protected interface RemoteCopyable {
    
    def createSendPayload(ArrayList[RequestPayload]): void;
}