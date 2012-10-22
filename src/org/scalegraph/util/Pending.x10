package org.scalegraph.util;

import x10.util.*;
import org.scalegraph.util.ReadRequestPayload;
import org.scalegraph.util.WriteRequestPayload;
import org.scalegraph.util.KeyGenerator;

protected interface Pending {
    
    def createReadRequestPayload(ArrayList[ReadRequestPayload]): void;
    def createWriteRequestPayload(ArrayList[WriteRequestPayload]): void;
    def createRemoteInvocationPayload(ArrayList[RemoteInvocationPayload]): void;
    
    def updateReadRequestData(data: Any): void;
}