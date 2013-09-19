#!/bin/env python
import subprocess as SProc
import yaml,re
import contextlib
from os import path
import os
import tempfile as tmp
import TAP
import sys

DEBUG=False

tap=None
##kriiyamaのテスト用の変数
#ModuleName="TeamBenchmark"
#TestFile=os.environ["HOME"]+"/Develop/ScaleGraph/src/test/"+ModuleName+".x10"

#TestWorkDir= os.environ["HOME"]+"/Develop/ScaleGraph/scripts/jenkins/workspace"
#SrcDir=os.environ["HOME"]+"/Develop/ScaleGraph/src"

def indentDeeper(str,n=1):
    """
    
    """
    lines=str.splitlines()
    retStr=""
    delimiter=""
    for _ in range(n):
        delimiter=delimiter+"  "
    for line in lines:
        retStr = retStr + delimiter +line +"\n"
    return retStr
        
def check_env():
    """
    環境変数が正しく設定されているかを確認する
    """
    envs = ["prefix"]
    for env in envs:
        if env not in os.environ:
            return False
    return True
        
def genHostFile(file,dest,numHosts,duplicate):
    """
    mpirunを実行する際に使用するHostFileを file から読み込み, dest に生成する.
    @param file       使用できるノードのいちらんが書かれたファイルへのPath
    @param dest       生成したHostFileの出力先のPATH
    @param numHosts   使用するホストノードの数
    @param duplicates 1nodeあたりのPlace数
    """
    file = os.path.expandvars(file)
    dest = os.path.expandvars(dest)
    with open(file) as file:
        hosts = file.readlines()
    newhosts=[]
    for n in range(numHosts):
        for _ in range(duplicate):
            newhosts.append(hosts[n])
    with open(dest,'w') as file:
        for host in newhosts:
            file.write(host)
    
def isValidAttr(attr):
    
    if not isinstance(attr,dict):
        if(DEBUG):
            sys.stderr.write("attr:"+attr+"\n"+"type:"+str(type(attr)))
        return False
    
    param = ["args","thread","gcproc","place","duplicate"]
    for x in param:
        if x in attr:
            continue
        else:
            return False
    return True

def getMPISettings(mpi,attr):
    """
    @param mpi        使用するmpiの種類
    @param attr  yamlから読み取ったtestcaseごとの特徴
    String -> (String -> param) -> ([String],[String])
    @return (env,args) (環境変数のディクショナリ,mpiへの引数)
    """
    # mpirunへの引数
    args=os.path.expandvars(attr["args"]).split()
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


def initDir(workdir):
    """
    ディレクトリの初期化をする。
    """
    dirs = ["/bin","/log","/output","/results"]
    for directory in dirs:
        if not path.isdir(workdir+directory):
            os.makedirs(workdir+directory)


def initTap(testNum):
    """
    @param testNum テストの個数を指定する
    """
    global tap
    tap  = TAP.Builder.create(testNum)
                
def x10outToYaml(src,dst):
    """
    @param src 入力ファイルパス
    @param dst 出力先のファイルパス
    """
    global DEBUG
    x10out2yaml = "./iyuuscripts/x10output2yaml.sh"
    inFile = open(src,'r')
    outFile = open(dst,'w')
    with contextlib.ExitStack() as stack:
        cat = stack.enter_context(SProc.Popen(["cat",src],stdin=inFile,stdout=SProc.PIPE))
        sed = stack.enter_context(SProc.Popen(["sed","-e",r"s/^.*\/workspace\/src\(\/.*\)$/\1/"],stdin=cat.stdout,stdout=SProc.PIPE))
        SProc.call([x10out2yaml],stdin=sed.stdout,stdout=outFile)

"""
def run_test_dummy(name,describe,mpi,attribute):
    if DEBUG:
        print("-------------------------------")
        print("run_test_dummy method")
        print("args:")
        print("    moduleName:"+name)
        print("    describe:"+describe)
        print("    mpi:"+mpi)
        print("    attribute"+str(attribute))
        print("-------------------------------")
"""

def fail_run_test(name,binName,attributes,workPath,describe):
    tap.ok(0,"running "+binName+" failure."+describe,skip=True)
    
def run_test(name,binName,attributes,workPath,mpi="mvapich"):
    """
    @param name       runするモジュールの名前
    @param attributes テストパラメータ
    @param workPath   作業を行うpath
    """
    global DEBUG
    if isValidAttr(attributes) == False:
        tap.ok(0, name+".yaml is invalid testfile.")
        return
    if "name" not in attributes:
        attributes["name"] = name
    if "duplicate" not in attributes:
        attributes["duplicate"]="2"
    if "thread" not in attributes:
        attributes["thread"]=str(24 // int(attributes["duplicate"]) )
    if "gcproc" not in attributes:
        attributes["gcproc"]=str( int(attributes["thread"]) // 2)
    if "place" not in attributes:
        attributes["place"] = str( int(attributes["node"]) * int(attributes["duplicate"]))
    

    (env,args) = getMPISettings(mpi,attributes)
    
    if(DEBUG):
        print("    env :"+str(env))
        print("    args:"+str(args))
        
    if(DEBUG):sys.stderr.write("generating hostfile.")
    hostSrc = os.path.expandvars("$prefix/hosts.txt")
    hostDst = os.path.expandvars("$prefix/py_temp/hosts.txt")
    if(DEBUG):
        sys.stderr.write("hostSrc:"+hostSrc+"\n")
        sys.stderr.write("hostDst:"+hostDst+"\n")
    
    os.makedirs(os.path.expandvars("$prefix/py_temp"),exist_ok=True)

    genHostFile(hostSrc,hostDst,
                numHosts  =attributes["node"],
                duplicate =attributes["duplicate"] )
    
    
    #---argument settings--------------------#
    numPlace = str(attributes["place"])
    hostFile   = hostDst
    binPath    = workPath+"/bin/"+binName
    args = list(map(os.path.expandvars,args))
    stdout = tmp.TemporaryFile()
    stderr = tmp.TemporaryFile()
    if "timeout" in attributes:
        timeOut = attributes["timeout"]
    else:
        timeOut = None
    #----------------------------------------#
    
    for k in env:

        os.environ[k] = env[k]

    runCmd = [
        "mpirun","-np",numPlace,
        "--hostfile", hostFile,
        binPath] + args

    #run
    if(DEBUG):
        print(runCmd)

    isTimeOut=False
    mpirunProc = SProc.Popen(runCmd,
                             stdout=SProc.PIPE,stderr=SProc.PIPE)
    try:
        stdout, stderr = mpirunProc.communicate(timeout = timeOut)
    except SProc.TimeoutExpired:
        mpirunProc.kill()
        isTimeOut=True
        stdout, stderr = mpirunProc.communicate()
    runResult = mpirunProc.poll()
    Message = "name:"  + name           + "\n" + \
              "stderr:\n"+ indentDeeper(stderr.decode(),2)+ "\n" + \
              "stdout:\n"+ indentDeeper(stdout.decode(),2)
    if isTimeOut:
        Message="This test case exceeds timeout.\n"+Message
    tap.ok(runResult == 0,
           "Run "+name + "\n" + \
           "  ---\n" + \
           "  Message:\n" + \
           indentDeeper(Message,2) + \
           "  ---\n")

def build_test_dummy(name,workingDir="./"):
    if DEBUG:
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
    @return buildResult ビルドの終了コード
    """
    global DEBUG
    bindir = workingDir + "/bin/"
    logdir = workingDir + "/log/"
    
    outputdir = workingDir + "/output/"
    outFileName = outputdir + "output-build-" + name + ".txt"
    yamlFileName = outputdir + "output-build-" + name + ".yaml"
    
    X10CXX = "x10c++"
    buildCmd = [X10CXX, "-cxx-prearg", "-I"+srcDir+"/../include", "-cxx-prearg","-g", "-x10rt", "mpi",
                "-sourcepath",srcDir, "-o", bindir + name, x10file]
    if(DEBUG):print("build command:"+str(buildCmd))
    logFile = open(logdir+"buildlog-"+name+".log",'w')
    errFile = open(outFileName,'w')

    buildResult = SProc.call(buildCmd,stdout=logFile,stderr=errFile)
    x10outToYaml(outFileName,yamlFileName)
    errors = SProc.check_output(["tail","-n1",outFileName])
    with open(yamlFileName) as yamlFile:
        tap.ok(buildResult == 0,"Building "+name+".x10 "+
           errors.decode()+indentDeeper(yamlFile.read())) #buildResult == 0 ならビルドに成功
    #print("   ---")
    """
    with open(yamlFileName) as yamlFile:
        for line in yamlFile.readlines():
            print("    "+line,end="")
    """
    return buildResult
