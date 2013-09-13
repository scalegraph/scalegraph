#!/bin/env python
import subprocess as SProc
import yaml,re
import contextlib
from os import path
import os
import TAP

tap=None
##kriiyamaのテスト用の変数
ModuleName="TeamBenchmark"
TestFile=os.environ["HOME"]+"/Develop/ScaleGraph/src/test/"+ModuleName+".x10"

TestWorkDir= os.environ["HOME"]+"/Develop/ScaleGraph/scripts/jenkins/workspace"
SrcDir=os.environ["HOME"]+"/Develop/ScaleGraph/src"

def runBuild():
    global tap
    initDir(TestWorkDir)
    tap  = TAP.Builder.create(1)
    build_test(ModuleName,TestFile,TestWorkDir,SrcDir)

def genHostFile(file,dest,numHosts,duplicates):
    with open(file) as file:
        hosts = file.readlines()
    newhosts=[]
    for n in numHosts:
        for _ in range(duplicates):
            newhosts.append(hosts[n])
    with opne(dest,'w') as file:
        for host in newhosts:
            file.write(host)
    

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
    with open(filename) as file : 
        loadedData=yaml.load(file.read())
    if testcase in loadedData:
        attribute=loadedData[testcase]
    elif 'small' in loadedData: 
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
            os.makedirs(workdir+directory)


def initTap(testNum,tapBulider):
    """
    @param testNum テストの個数を指定する
    """
    
                
def x10outToYaml(src,dst):
    """
    @param src 入力ファイルパス
    @param dst 出力先のファイルパス
    """
    x10out2yaml = "./iyuuscripts/x10output2yaml.sh"
    inFile = open(src,'r')
    outFile = open(dst,'w')
    with contextlib.ExitStack() as stack:
        cat = stack.enter_context(SProc.Popen(["cat",src],stdin=inFile,stdout=SProc.PIPE))
        sed = stack.enter_context(SProc.Popen(["sed","-e",r"s/^.*\/workspace\/src\(\/.*\)$/\1/"],stdin=cat.stdout,stdout=SProc.PIPE))
        SProc.call([x10out2yaml],stdin=sed.stdout,stdout=outFile)

def run_test_dummy(name,describe,mpi,attribute):
    print("-------------------------------")
    print("run_test_dummy method")
    print("args:")
    print("    moduleName:"+name)
    print("    describe:"+describe)
    print("    mpi:"+mpi)
    print("    attribute"+str(attribute))
    print("-------------------------------")
    
def run_test(name,describe,mpi,attributes):
    (env,args) = getMPISettings(mpi,attributes)
    args = list(map(os.path.expandvars,args))
    
    if "WORKSPACE" not in os.environ:
        print("evnvironment value \"WORKSPACE\" is undefined.\
        please set. ")
        return
    for k,v in env:
        os.environ[k] = v
    runCmd = ["mpirun", "-n", "8", "-hosts",
             "st01,st02,st03,st04,st05,st06,st07,st08",
             os.environ["WORKSPACE"]+"/bin/$NAME"] \
             + args
    runResult = SProc.call(runCmd)
    tap.ok(runResult == 0, name + " " + describe)
    
def build_test_dummy(name,workingDir="./"):
    print("----------------------------")
    print("build_test_dummy() is called")
    print("args:")
    print("    moduleName:"+name)
    print("    workingDir:"+workingDir)
    print("----------------------------")
    
def build_test(name,x10file,workingDir,srcDir):
    """
    @param name      ビルドするモジュールの名前(hoge.x10 なら hoge)
    @param describe  実行中のジョブの説明
    """
    bindir = workingDir + "/bin/"
    logdir = workingDir + "/log/"
    
    outputdir = workingDir + "/output/"
    outFileName = outputdir + "output-build-" + name + ".txt"
    yamlFileName = outputdir + "output-build-" + name + ".yaml"
    
    X10CXX = "x10c++"
    buildCmd = [X10CXX, "-cxx-prearg", "-g", "-x10rt", "mpi",
                "-sourcepath",srcDir, "-o", bindir + name, x10file]
    logFile = open(logdir+"buildlog-"+name+".log",'w')
    errFile = open(outFileName,'w')

    buildResult = SProc.call(buildCmd,stdout=logFile,stderr=errFile)
    x10outToYaml(outFileName,yamlFileName)
    errors = SProc.check_output(["tail","-n1",outFileName])
    tap.ok(buildResult == 0,name+".x10 "+errors.decode()) #buildResult == 0 ならビルドに成功
    print("   ---")
    with open(yamlFileName) as yamlFile:
        for line in yamlFile.readlines():
            print("    "+line,end="")
    return buildResult
