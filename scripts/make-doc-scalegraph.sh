#!/bin/bash

SC_HOME=$(cd $(dirname $0); cd ..; pwd)
SC_SRC=${SC_HOME}/src
SC_DOC=${SC_HOME}/doc

find ${SC_SRC}/org/scalegraph -name '*.x10' | xargs x10doc -d ${SC_DOC} -sourcepath ${SC_SRC} | tee make-doc.log

