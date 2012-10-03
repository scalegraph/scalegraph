package org.scalegraph.util;

import x10.util.*;

protected interface RemoteCopyable {
    
    def createSendPayload(ArrayList[SendPayload]): void;
}