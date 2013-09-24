#!/bin/sh


#SG_PREFIX=$1
SG_PREFIX=$HOME/Develop/ScaleGraph

##
# To do
# arpack , metis は SG_PREFIX/lib 以下に置く
##




LIBPATH=$SG_PREFIX/x10lib

#LIBPATH ... ビルドした
mkdir -p $LIBPATH
mkdir -p $LIBPATH/lib

echo LIBPATH:$LIBPATH


ARPAC=/usr/global/x10/arpack/libarpack_LINUX.a
PARPAC=/usr/global/x10/arpack/libarpack_LINUX.a

LIBS="-cxx-postarg ${PARPACK} -cxx-postarg ${ARPACK}"


files=`find $SG_PREFIX/src/org | grep .x10$`
x10c++ $LIBS -x10rt mpi -buildx10lib $LIBPATH -o libScaleGrpaph -d $LIBPATH/include $files
