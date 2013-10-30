#!/bin/sh

SG_PREFIX=`dirname $(echo $(cd $(dirname $0); pwd))`
mkdir -p $SG_PREFIX/lib
LIBPATH=$SG_PREFIX/x10lib
mkdir -p $LIBPATH
mkdir -p $LIBPATH/lib

#ARPACKの取得
if [ ! \( -e $SG_PREFIX/lib/libarpack_LINUX.a -a -e $SG_PREFIX/lib/libparpack_MPI-LINUX.a \) ] ; then
    TMPDIR=$SG_PREFIX/tmp
    mkdir -p $TMPDIR
    cd $TMPDIR
    curl -O http://www.caam.rice.edu/software/ARPACK/SRC/arpack96.tar.gz
    curl -O http://www.caam.rice.edu/software/ARPACK/SRC/patch.tar.gz
    zcat arpack96.tar.gz | tar -xvf -
    zcat patch.tar.gz    | tar -xvf -
    curl -O http://www.caam.rice.edu/software/ARPACK/SRC/parpack96.tar.gz
    curl -O http://www.caam.rice.edu/software/ARPACK/SRC/ppatch.tar.gz
    zcat parpack96.tar.gz | tar -xvf -
    zcat ppatch.tar.gz | tar -xvf -
    cd ARPACK
    sed -i -e "24s/^/\*/g" UTIL/second.f
    cat ARMAKES/ARmake.MPI-SUN4 > ARmake.inc
    make HOME=$TMPDIR FC=gfortran FFLAGS="-O -fPIC" PFC=mpif77 PFFLAGS="-O -fPIC" MAKE=make all
    cp libarpack_SUN4.a $SG_PREFIX/lib/libarpack_LINUX.a
    cp parpack_MPI-SUN4.a $SG_PREFIX/lib/libparpack_MPI-LINUX.a
    cd $SG_PREFIX
    rm -rf $TMPDIR
fi

#ライブラリの作成
cd $SG_PREFIX/src
LIBS="-cxx-postarg -larpack_LINUX -cxx-postarg -lparpack_MPI-LINUX -cxx-prearg -L${SG_PREFIX}/lib -cxx-prearg -I${SG_PREFIX}/include "
files=`find org | grep .x10$`
echo $files
x10c++ $LIBS -x10rt mpi -sourcepath ./src -buildx10lib $LIBPATH -o ScaleGraph -d $LIBPATH/include $files
jar cvf $LIBPATH/ScaleGraph.jar $files
