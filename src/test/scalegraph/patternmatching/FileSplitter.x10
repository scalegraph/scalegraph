package test.scalegraph.patternmatching;

import x10.io.IOException;
import x10.io.File;
import x10.io.FileReader;
import x10.io.FileWriter;

import org.scalegraph.util.DirectoryInfo;

public class FileSplitter {
    public def split(fileName: String, outDir: String){
    	if(DirectoryInfo.exists(outDir)){
    		Console.OUT.println("The sample data directory exists");
    	}else{
    		DirectoryInfo.mkdir(outDir);
    	}    	
    	
    	var reader: FileReader = new FileReader(new File(fileName));
    	var line:String = "";
    	var totalContent:String = "";
    	var outName:String = "";
    	var firstFlag:Boolean = true;
    	
    	while(true){
    		try{
    			line = reader.readLine();
    			
    			if(line.indexOf("t #") != -1){
    				if(firstFlag){
    					var strArr:Array[String] = line.split(" ");
    					outName = outDir+ "/" + strArr(strArr.size - 1);
    					firstFlag = false; 					
    				}else{
    					var outFile: File = new File(outName);
    					var writer: FileWriter;
    					
    					writer = new FileWriter(outFile);
    					writer.write(totalContent.bytes());
    					writer.close();
    					totalContent = "";    					
    					
    					var strArr:Array[String] = line.split(" ");
    					outName = outDir + "/" + strArr(strArr.size - 1);
    				}

    				continue;
    			}else{
    				totalContent += line + "\n";
    			}    			
    		}catch(IOException){  			
    			if(totalContent.length() != 0){
    				var outFile: File = new File(outName);
    				var writer: FileWriter;
    				
    				writer = new FileWriter(outFile);
    				writer.write(totalContent.bytes());
    				writer.close();
    			}
    			break;
    		}
    	}

    }
}