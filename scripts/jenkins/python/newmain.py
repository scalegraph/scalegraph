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
src_dir= os.path.abspath(os.path.dirname( __file__ ))+"/../../../src"

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
                  default=SrcDir+"/test",
                  help="Test file directory")
parser.add_option("--workspace", action="store", dest="workspace",
                  default=TestWorkDir,
                  help="directory to build and to run test")
parser.add_option("--source", action="store",
                  dest="srcDir",default=SrcDir)
(opts, args) = parser.parse_args()

os.umask(0o001)
if(DEBUG):
    sys.stderr.write(str(opts))
###-------parser_end-------------

workingDir = opts.workspace
##yamlからの設定の読み込み

#各ファイルのビルド、テストの実行
if(DEBUG):
    sys.stderr.write(opts.yamlDir+"/*.yaml is loaded")
if(DEBUG):
    sys.stderr.write(str(yamlFiles))
helper.initTap(len(yamlFiles)*2)


for dirpath , dirnames, filenames in os.walk(src_dir):
    yamlfiles = [filename for filename in filenames
                 if os.path.splitext(filename)[1] == ".yaml"]
    for yamlfile in yamlfiles:
        fpfx = os.path.splitext(yamlfile)[0]
        yamlfilepath = os.path.join(dirpath, yamlfile)
        x10filepath  = os.path.join(dirpath, fpfx+".x10")
        tmpdir = tempfile.TemporaryDirectory()
        sandbox = tmpdir.name
        helper.initDir(sandbox)
        attributes = helper.loadFromYaml(
            yamlfilepath,
            testcase=opts.testcase
        )
        for attribute in attributes:
            attribute["node"] = opts.maxNode
            buildresult = helper.build_test(
                x10filepath,
                sandbox,
                opts.srcDir
            )
            if buildresult == 0:
                helper.run_test(
                    name=fpfx,
                    binname=fpfx,
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

"""
for filename in yamlFiles:
    filePref, ext = os.path.splitext(filename)
    if ext != ".yaml":
        continue

    sandbox    = workingDir+"/"+filePref

    helper.initDir(sandbox)
    #print("load yamlfile:"+filename)
    attributes = helper.loadFromYaml(
        opts.yamlDir+"/"+filename,
        testcase=opts.testcase)

    for attribute in attributes:
        attribute["node"] = opts.maxNode

        buildresult = helper.build_test(filePref,
                        opts.x10Dir+"/"+filePref+".x10",
                        sandbox,
                        opts.srcDir)

        if buildresult == 0:
            helper.run_test(name=filePref,
                            binName=filePref,
                            workPath=sandbox,
                            mpi=opts.mpi,
                            attributes=attribute)
        else:
            helper.fail_run_test(name = filePref,
                            binName=filePref,
                            workPath=sandbox,
                            attributes=attribute,
                            describe="build failed")
    rmtree(sandbox)

    if(DEBUG):
        sys.stderr.write("DEBUG: Testcase attributes:" + str(attribute))
"""
