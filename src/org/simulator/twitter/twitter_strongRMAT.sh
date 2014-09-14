EADS=6 GC_NPROCS=6 mpirun -n 256 -hostfile hostfile ./a.out rmat 30 - 84 2>&1 | tee profiling/strongscaling/twitter_full_128node2

x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 128 -hostfile hostfile ./a.out rmat 30 - 84 2>&1 | tee profiling/strongscaling/twitter_full_64node2

x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 64 -hostfile hostfile ./a.out rmat 30 - 84 2>&1 | tee profiling/strongscaling/twitter_full_32node2

x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 32 -hostfile hostfile ./a.out rmat 30 - 84 2>&1 | tee profiling/strongscaling/twitter_full_16node2
