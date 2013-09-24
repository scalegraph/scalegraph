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

curl -O http://www.caam.rice.edu/software/ARPACK/SRC/arpack96.tar.gz
curl -O http://www.caam.rice.edu/software/ARPACK/SRC/parpack96.tar.gz
mv arpack96.tar.gz $LIBPATH
mv parpack96.tar.gz $LIBPATH
cd $LIBPATH
tar xvf arpack96.tar.gz
tar xvf parpack96.tar.gz
ARPAC=/usr/global/x10/arpack/libarpack_LINUX.a
PARPAC=/usr/global/x10/arpack/libarpack_LINUX.a

LIBS="-cxx-postarg ${PARPACK} -cxx-postarg ${ARPACK}"


files=`find $SG_PREFIX/src/org | grep .x10$`
x10c++ $LIBS -x10rt mpi -buildx10lib $LIBPATH -o libScaleGrpaph -d $LIBPATH/include $files
