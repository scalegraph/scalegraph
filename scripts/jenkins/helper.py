#!/bin/env python
import subprocess as SProc
import yaml,re
from os import path
import os

def getMPISettings(mpi,attr):
    """
    @param mpi        使用するmpiの種類
    @param attr  yamlから読み取ったtestcaseごとの特徴
    String -> (String -> param) -> ([String],[String])
    @return (env,args) (環境変数のディクショナリ,mpiへの引数)
    """
    # mpirunへの引数
    args=attr["args"]
    # 環境変数
    env={}
    env["X10_NTHREADS"] = str(attr["thread"])
    env["GC_PROCS"]     = str(attr["gcproc"])
    if mpi == "mvapich":
        # TSUBAME2.0にはInfiniBandのホストアダプタが2個あるが、
        # デフォルトだと1個しか使ってくれないので、これを指定する。
        env["MV2_NUM_HCAS"]="2"
        env["MV2_ENABLE_AFFINITY"]="0"
    elif mpi == "openmpi":
        return (env,args)
    else:
        print("please specify mpi.")
    return (env,args)

def loadFromYaml(filename,testcase="small"):
    """
    @param filename 読み込むファイル名
    @param testcase テストケースの名前
    """
    file = open(filename)
    loadedData=yaml.load(file.read())
    file.close()
    if loadedData.has_key(testcase) :
        attribute=loadedData[testcase]
    elif loadedData.has_key("small"): 
        attribute=loadedData["small"]
    else:
        print("No valid test case in " + filename)
        
    return attribute

def printOpts(opts,args):
    """
    debug用のメソッド
    """
    print("DEBUG: arguments")
    print("  opts:     "+str(opts))
    print("  testcase: "+opts.testcase)
    print("  mpi:      "+opts.mpi)
    print("  args:     "+str(args))

def initDir(workdir):
    """
    ディレクトリの初期化をする。
    """
    dirs = ["/bin","/log","/output","/results"]
    for directory in dirs:
        if not path.isdir(workdir+directory):
            os.mkdir(workdir+directory)
    
def x10outToYaml(src,dst):
    """
    @param src 入力ファイルパス
    @param dst 出力先のファイルパス
    """
    x10out2yaml = "./iyuuscripts/"
    inFile = open(src,'r')
    outFile = open(dst,'w')
    with SProc.Popen(["cat","src"],stdin=inFile,stdout=SProc.PIPE) as cat:
        with SProc.Popen(["sed","-e",
            r"s/^.*\/workspace\/src\(\/.*\)$/\1/"],
        stdin=cat.stdout,stdout=SProc.PIPE) as sed:
            SProc.call([x10out2yaml],
                       stdin=sed.stdout,
                       stdout=outFile)


def run_test(name, describe,mpi,testcase,attributes):
    (env,args) = getMPISettings(mpi,attributes)
    for k,v in env:
        os.environ[k] = v
    runCmd=["mpirun", "-n", "8", "-hosts",
             "st01,st02,st03,st04,st05,st06,st07,st08",
              "$WORKSPACE/bin/$NAME"]
    
def build_test(name,moduleName,workingDir="./"):
    """
    @param name      ビルドするモジュールの名前
    @param describe  実行中のジョブの説明
    """
    bindir = workingDir + "bin/"
    logdir = workingDir + "log/"
    outputdir = workingDir + "output/"
    outFileName = outputdir + "output-build-" + name + ".txt"
    yamlFileName = outputdir + "output-build-" + name + ".yaml"
    X10CXX = "x10c++"
    buildCmd = [X10CXX, "-cxx-prearg", "-g", "-x10rt", "mpi",
                "-o", bindir + moduleName]
    logFile = open(logdir+"buildlog-"+name+".log",'r+')
    errFile = open(outFileName,'r+')
    buildResult = SProc.call(buildCmd,
                             stdout=logFile,stderr=errFile)

    x10outToYaml(outFileName,yamlFileName)
    errors = SProc.check_output(["tail","-n1",outFileName])

    tapFile = open(yamlFileName,'a')
    if buildResult == 0:
        tapFile.write("ok 1 - "+ moduleName +" "+ errors + "\n")
    else:
        tapFile.write("not ok 1 - "+ moduleName + " " + errors + "\n")
    tapFile.write("  ---\n")
    return buildResult
