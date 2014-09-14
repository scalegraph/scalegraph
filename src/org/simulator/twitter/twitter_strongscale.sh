x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 256 -hostfile hostfile ./a.out file /work1/t2gcresteu/scalegraph/graph/twitter/ - 21447363 2>&1 | tee profiling/strong4/twitter_full_128node2

x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 128 -hostfile hostfile ./a.out file /work1/t2gcresteu/scalegraph/graph/twitter/ - 21447363 2>&1 | tee profiling/strong4/twitter_full_64node2

x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 64 -hostfile hostfile ./a.out file /work1/t2gcresteu/scalegraph/graph/twitter/ - 21447363 2>&1 | tee profiling/strong4/twitter_full_32node2

x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 32 -hostfile hostfile ./a.out file /work1/t2gcresteu/scalegraph/graph/twitter/ - 21447363 2>&1 | tee profiling/strongscaling3/twitter_full_16node2

#x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 16 -hostfile hostfile ./a.out file /work1/t2gcresteu/scalegraph/graph/twitter/ - 21447363 2>&1 | tee profiling/strongscale/twitter_full_8node2

exit
