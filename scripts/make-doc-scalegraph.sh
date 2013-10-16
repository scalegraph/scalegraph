#!/bin/bash
#source /nfs/home/sakamoto/.bashvar
#source $APPDIR/x10/env.sh -x develop

SRC_X10=x10/x10.runtime/src-x10
echo $0
SRC_SG=`dirname $0`/../src
DOCDIR=`dirname $0`/../doc

make_doc () {
  TESTNO=$1
  NAME=$2
  cd $SRC_SG
  find . -iname '*.x10' | xargs x10doc -d $DOCDIR/doc-$NAME -sourcepath . | tee $NAME.log
}
make_doc 2 scalegraph
