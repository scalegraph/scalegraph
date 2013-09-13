#!/usr/bin/python
import helper
from helper import *
import os
from optparse import OptionParser

DEBUG=False

## mpirunを実行するスクリプト
##
##

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
parser.add_option("--yamlDir",action="store",dest="testDir",
                  default="./tests",
                  metavar="testDir")
parser.add_option("--x10dir",action="store",dest="x10dir",
                  default="../../src/test",
                  help="Test file directory")
parser.add_option("--workspace",action="store",dest="workspace",
                  default="./workspace",
                  help="directory to build and to run test")
(opts,args) = parser.parse_args()
###-------parser_end-------------


workingDir = opts.workspace

if(DEBUG):
    helper.printOpts(opts,args)
    
##yamlからの設定の読み込み

#各ファイルのビルド、テストの実行
print("Test will performed in "+opts.testDir)
files = os.listdir( opts.testDir )

for file in files:
    prefix,ext = os.path.splitext(file)
    if ext != ".yaml":
        continue
    attributes = helper.loadFromYaml(
        opts.testDir+"/"+prefix+".yaml",
        testcase=opts.testcase)
    for attribute in attributes:
        sandbox=workingDir+"/"+prefix
        os.makedirs(sandbox,exist_ok=True)
        build_test_dummy(prefix,sandbox)
        run_test_dummy(name=prefix, describe=prefix,
                   mpi="mvapich", attribute=attribute)
    
if(DEBUG):print("DEBUG: Testcase attributes:" + str(attribute))

