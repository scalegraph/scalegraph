#!/bin/sh
host=`hostname`

#if [ host = "sd04.sc.cs.titech.ac.jp" ]; then

#fi

if [ -d /data0/t2gsuzumuralab/scalegraph/autotest ];then
    ##TSUBAME
    export prefix=/data0/t2gsuzumuralab/scalegraph/autotest
else
    export prefix=/nfs/data0/scalegraph/autotest
fi

exec ./main.py
