#!/bin/sh

for src in *.x10
do
  echo ${src%.x10}
  x10c++ -cxx-prearg -g -x10rt mpi -O -NO_CHECKS -define NO_BOUNDS_CHECKS $src -o ${src%.x10}
done
rm *.cc
rm *.h
rm *~
