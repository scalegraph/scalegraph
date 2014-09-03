#!/bin/bash

X10RT=mpi
X10CXX=x10c++
X10FLAGS=-x10rt ${X10RT} 
X10FLAGS+="-VERBOSE_CHECKS"
X10FLAGS+="-cxx-prearg -g -cxx-prearg -Og"

SRC_DIR=$(pwd)/src
BIN_DIR=$(pwd)/bin

x10cxx_build () {
	TEST_NAME=$1
	[[ -d ${BIN_DIR} ]] || mkdir ${BIN_DIR}
	cd ${BIN_DIR}
	${X10CXX} ${X10FLAGS} -o $@ -MAIN_STUB_NAME=${TEST_NAME}_main -sourcepath ${SRC_DIR} ${SRC_DIR}/${TEST_NAME}
}

x10cxx_build () {
	PROC_NAME=$2
	LIMITTIME=$1
	COMMAND=$3
	bash -c "${COMMAND} & count=${LIMITTIME} ; while [ $$count -gt 0 ] ; do count=$$(( count - 1 )) ; ps $$! >/dev/null || exit 0 ; sleep 1 ; done ; pkill -f ${PROC_NAME} ; exit 130"
}

x10cxx_run () {
	TEST_NO=$1
	TEST_NAME=$2
	[[ -d ${BIN_DIR} ]] || mkdir ${BIN_DIR}
	cd ${BIN_DIR}
	${X10CXX} ${X10FLAGS} -o $@ -MAIN_STUB_NAME=${TEST_NAME}_main -sourcepath ${SRC_DIR} ${SRC_DIR}/${TEST_NAME}
}

