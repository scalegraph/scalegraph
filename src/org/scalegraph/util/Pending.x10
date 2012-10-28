package org.scalegraph.util;

import x10.util.ArrayList;
// import org.scalegraph.util.ReadRequestPayload;
// import org.scalegraph.util.WriteRequestPayload;
// import org.scalegraph.util.KeyGenerator;
// import org.scalegraph.util.LocalPending;

public interface Pending {
    
    def createReadRequestPayload(ArrayList[ReadRequestPayload], ArrayList[Pending]): void;
    def createWriteRequestPayload(ArrayList[WriteRequestPayload]): void;
    def createRemoteInvocationPayload(ArrayList[RemoteInvocationPayload]): void;
    def updateReadRequestData(data: Any): void;
}