#!/bin/sh

loop=10
echo places $1
for filename in *.x10
  do 
  echo ${filename%.x10}
  # 1KiB, 512KiB, 1MiB, 512MiB, 1GiB
  for scale in 8 17 18 27 28
    do
    mpirun_rsh -n $1 -hostfile hosts X10_NTHREADS=12 GC_NPROCS=6 X10RT_MPI_THREAD_MULTIPLE=true MV2_ENABLE_AFFINITY=0 ${filename%.x10} $scale $loop
  done
  echo
done
