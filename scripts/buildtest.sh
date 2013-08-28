#!/bin/bash

SC_HOME=$(cd $(dirname $0);cd ..;pwd)
SRC_PATH=$SC_HOME/src
INC_PATH=$SC_HOME/include
LIB_PATH=$SC_HOME/lib

if [ $# -lt 1 ]; then
	echo "usage: $0 [options] <test name>"
	exit 0
fi

OPT=
while [ $# -gt 1 ];
do
    OPT="$OPT "$1""
    shift
done
TARGET=$1

set -x

rsync -ru $INC_PATH/ $PWD/

x10c++ $OPT -J-Xmx2000m -sourcepath $SRC_PATH ${SRC_PATH}/test/${TARGET}.x10
