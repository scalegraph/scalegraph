#!/bin/env python3
from helper import *
import helper
import os,sys
from optparse import OptionParser
import TAP
from shutil import (rmtree)
import tempfile

DEBUG = False

#-------------------------------------------------#
#ModuleName    = "TeamBenchmark"
#TestFileDir   = os.environ["HOME"]+"/Develop/ScaleGraph/src"
TestWorkDir   = os.environ["prefix"]
src_dir = os.path.join(os.path.abspath(os.path.dirname( __file__ )),
                       "../../../src")

#-------------------------------------------------#
##引数を設定.-hオプションでhelpが見られる
## --mpi {MPI} mpich,mvapich,openmpiのいずれかを指定
## -t {TESTCASE} でテストケースの指定.デフォルトは TESTCASE=small
#-------parser_begin--------#

parser = OptionParser(usage="Usage: # runTest {TESTCASE}")
parser.add_option("-t", "--test", action="store", default="small",
                  type="string",
                  help="Test case to run",dest="testcase")
parser.add_option("-n", action="store", default="4",
                  type="int",
                  help="number of nodes",dest="maxNode")
parser.add_option("--mpi", action="store",
                  default="mvapich",type="string",
                  dest="mpi",help="mpi to run tests",
                  metavar="MPI")
parser.add_option("--yamlDir", action="store", dest="yamlDir",
                  default="./tests",
                  metavar="yamlDir")
parser.add_option("--x10dir", action="store", dest="x10Dir",
                  default=os.path.join(src_dir,"test"),
                  help="Test file directory")
parser.add_option("--workspace", action="store", dest="workspace",
                  default=TestWorkDir,
                  help="directory to build and to run test")
parser.add_option("--source", action="store",
                  dest="src_dir",default=src_dir)
(opts, args) = parser.parse_args()

#os.umask(0o001)
if(DEBUG):
    sys.stderr.write(str(opts))
###-------parser_end-------------

workingDir = opts.workspace
##yamlからの設定の読み込み
testcases = 2
#各ファイルのビルド、テストの実行
if(DEBUG):
    sys.stderr.write(opts.yamlDir+"/*.yaml is loaded")
#if(DEBUG):
#    sys.stderr.write(str(yamlFiles))
helper.initTap(testcases)


for dirpath , dirnames, filenames in os.walk(src_dir):
    #sys.stderr.write(dirpath+"\n")
    yamlfiles = [filename for filename in filenames
                 if os.path.splitext(filename)[1] == ".yaml"]
    #print(yamlfiles)
    for yamlfile in yamlfiles:
        fpfx = os.path.splitext(yamlfile)[0]
        yamlfilepath = os.path.join(dirpath, yamlfile)
        x10filepath  = os.path.join(dirpath, fpfx+".x10")
        tmpdir = tempfile.TemporaryDirectory()
        sandbox = tmpdir.name
        #sys.stderr.write("create temporary directory:"+sandbox)
        helper.initDir(sandbox)
        attributes = helper.loadFromYaml(
            yamlfilepath,
            testcase=opts.testcase
        )
        for attribute in attributes:
            attribute["node"] = opts.maxNode
            buildresult = helper.build_test(
                fpfx,
                x10filepath,
                sandbox,
                opts.src_dir
            )
            if buildresult == 0:
                helper.run_test(
                    name=fpfx,
                    binName=fpfx,
                    workPath=sandbox,
                    mpi=opts.mpi,
                    attributes=attribute
                )
            else:
                helper.fail_run_test(
                    name=fpfx,
                    binName=fpfx,
                    workPath=sandbox,
                    attributes=attribute,
                    describe="build failed"
                )
            if(DEBUG):
                sys.stderr.write("DEBUG: Testcase attributes:" + str(attribute))
        tmpdir.cleanup()
