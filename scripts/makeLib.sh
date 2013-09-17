#!/bin/sh

#SG_PREFIX=$1
SG_PREFIX=$HOME/Develop/ScaleGraph
LIBPATH=$SG_PREFIX/lib

mkdir -p $LIBPATH
mkdir -p $LIBPATH/lib

echo LIBPATH:$LIBPATH

files=`find $SG_PREFIX/src/org | grep .x10$`
x10c++ -buildx10lib $LIBPATH -o libScaleGrpaph -d $LIBPATH/include $files 
