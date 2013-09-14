#!/usr/bin/python
import helper
from helper import *
import os
from optparse import OptionParser
import TAP

DEBUG=False

## mpirunを実行するスクリプト
##
##

#-------------------------------------------------#
ModuleName="TeamBenchmark"
TestFileDir=os.environ["HOME"]+"/Develop/ScaleGraph/src"

TestWorkDir= os.environ["HOME"]+"/Develop/ScaleGraph/scripts/jenkins/workspace"
SrcDir=os.environ["HOME"]+"/Develop/ScaleGraph/src"
#-------------------------------------------------#

##引数を設定.-hオプションでhelpが見られる
## --mpi {MPI} mpich,mvapich,openmpiのいずれかを指定
## -t {TESTCASE} でテストケースの指定.デフォルトは TESTCASE=small
#-------parser_begin--------
usage = "Usage: # runTest {TESTCASE}"
parser = OptionParser(usage=usage)
parser.add_option("-t","--test",action="store",default="small",
                  type="string",
                  help="Test case to run",dest="testcase")
parser.add_option("--mpi",action="store",
                  default="mvapich",type="string",
                  dest="mpi",help="mpi to run tests",
                  metavar="MPI")
parser.add_option("--yamlDir",action="store",dest="yamlDir",
                  default="./tests",
                  metavar="yamlDir")
parser.add_option("--x10dir",action="store",dest="x10dir",
                  default="../../src/test",
                  help="Test file directory")
parser.add_option("--workspace",action="store",dest="workspace",
                  default="./workspace",
                  help="directory to build and to run test")
parser.add_option("--source",action="store",dest="srcDir",default=SrcDir)
(opts,args) = parser.parse_args()
###-------parser_end-------------


workingDir = opts.workspace


if(DEBUG):
    helper.printOpts(opts,args)
    
##yamlからの設定の読み込み

#各ファイルのビルド、テストの実行
print("Test will performed in "+opts.yamlDir)
x10files = os.listdir( opts.x10dir )
print(x10files)
tap = TAP.Builder.create(len(x10files))

for file in x10files:
    fPrefix,ext = os.path.splitext(file)

    if ext != ".yaml":
        continue
    modWorkDir = workingDir+"/"+fPrefix
    initDir(modWorkDir)
    attributes = helper.loadFromYaml(
        opts.yamlDir+"/"+prefix+".yaml",
        testcase=opts.testcase)
    sandbox=workingDir+"/"+prefix
    os.makedirs(sandbox,exist_ok=True)
    
    for attribute in attributes:
        build_test_dummy(prefix, x10Dir+"/"+fPrefix+".x10", sandbox, opts.srcDir)
        run_test_dummy(name=prefix, describe=prefix,
                   mpi="mvapich", attribute=attribute)
    
if(DEBUG):print("DEBUG: Testcase attributes:" + str(attribute))

