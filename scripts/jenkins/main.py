#!/usr/bin/python
import helper

from optparse import OptionParser

DEBUG=True

## mpirunを実行するスクリプト
##
##

##引数を設定.-hオプションでhelpが見られる
## --mpi {MPI} mpich,mvapich,openmpiのいずれかを指定
## -t {TESTCASE} でテストケースの指定.デフォルトは TESTCASE=small
#parser_begin
usage = "Usage: # runTest {TESTCASE}"
parser = OptionParser(usage=usage)
parser.add_option("-t","--testcase",action="store",default="small",
                  type="string",
                  help="test case to run",dest="testcase")
parser.add_option("--mpi",action="store",
                  default="mvapich",type="string",
                  dest="mpi",help="mpi to run tests",
                  metavar="MPI")
(opts,args) = parser.parse_args()
#parser_end

if(DEBUG):
    helper.printOpts(opts,args)
    
##yamlからの設定の読み込み
attribute = helper \
  .loadFromYaml(filename="input.yaml",testcase="small")
if(DEBUG):print("DEBUG: Testcase attributes:" + str(attribute))
envvals = helper.getMPISettings(opts.mpi,attribute)

