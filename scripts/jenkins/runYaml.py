#!/bin/env python3
from helper import *
from optparse import OptionParser
import os,TAP
from shutil import (rmtree)
usage = "Usage: # run_yaml [options] {YAMLFILE}"

#-------------------------------------------------#
if "prefix" in os.environ:
    TestWorkDir   = os.environ["prefix"]
else:
    TestWorkDir   = os.environ["prefix"] = "/nfs/data0/scalegraph/autotest"
SrcDir            = os.path.abspath(os.path.dirname(__file__))+"/../../src"
#-------------------------------------------------#

parser = OptionParser(usage=usage)
parser.add_option("-b",action="store",default=None,
                  type="string",help="binary to run.",dest="bin")
parser.add_option("-t","--test",action="store",default="small",
                  type="string",
                  help="Test case to run",dest="testcase")
parser.add_option("-n",action="store",default="4",
                  type="int",
                  help="number of nodes",dest="maxNode")
parser.add_option("--mpi",action="store",
                  default="mvapich",type="string",
                  dest="mpi",help="mpi to run tests",
                  metavar="MPI")
parser.add_option("--yamlDir",action="store",dest="yamlDir",
                  default="./tests",
                  metavar="yamlDir")
parser.add_option("--x10dir",action="store",dest="x10Dir",
                  default="../../src/test",
                  help="Test file directory")
parser.add_option("--workspace",action="store",dest="workspace",
                  default=TestWorkDir,
                  help="directory to build and to run test")
parser.add_option("--source",action="store",
                  dest="srcDir",default=SrcDir)
(opts,yamlfiles) = parser.parse_args()

if yamlfiles == []:
    sys.stderr.write("No yaml file is selected.\n")
    sys.exit(0)
else:
    filepath=yamlfiles[0]
    filename=os.path.basename(filepath)

initTap(len(yamlfiles)*2)

fPrefix, ext = os.path.splitext(filename)
if ext != ".yaml":
    sys.stderr.write("file suffix is not \".yaml\"")
    sys.exit(0)

sandbox =opts.workspace+"/"+fPrefix
yamldata = loadFromYaml(filepath,opts.testcase)

if opts.bin == None:
    initDir(sandbox)
    buildResult = build_test(fPrefix,opts.x10Dir+"/"+fPrefix+".x10",sandbox,opts.srcDir)
    if buildResult != 0:
        sys.stderr.write("biuld failed.")
        rmtree(sandbox)
        sys.exit(1)

for testcase in yamldata:
    testcase["node"]=opts.maxNode
    os.chdir(sandbox+"/bin")
    run_test(name=fPrefix,
             binName=fPrefix,
             workPath=sandbox,
             mpi=opts.mpi,
             attributes=testcase)
    rmtree(sandbox)
