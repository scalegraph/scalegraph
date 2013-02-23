#!/bin/sh

filename=("Barrier_test" "Bcast_test" "Scatter_test" "Alltoall_test" "Reduce_test" "Allreduce_test")
loop=10

for i in 0 1 2 3 4 5
  do
  echo ${filename[$i]}
  for scale in 8 17 18 27 28
    do
    #echo scale $scale
    mpirun_rsh -n $1 -hostfile hosts X10_NTHREADS=12 GC_NPROCS=6 X10RT_MPI_THREAD_MULTIPLE=true MV2_ENABLE_AFFINITY=0 X10RT_EMULATE_COLLECTIVES=true ${filename[$i]} $scale $loop
  done
  echo
done
