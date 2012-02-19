package test.scalegraph.util;

import org.scalegraph.util.DirectoryInfo;

/**
 * Class TestDirInfo
 */
public class TestDirInfo {
    /**
     * Main method 
     */
    public static def main(args: Array[String]) {
        var list:Array[String] = DirectoryInfo.listDirContents("/nfs/data1/miyuru/twitter-kaist/output");
        
        for(item in list){
        	Console.OUT.println(list(item));
        }
        
    }
    /**
     * Default constructor 
     */
    public def this() {
        // TODO auto-generated stub
    }
}