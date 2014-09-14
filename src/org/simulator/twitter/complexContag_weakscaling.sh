x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 4 -hostfile hostfile ./a.out rmat 25 - 84 2>&1 | tee profiling/weakscaling/reult_rmat25_2node2

x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 8 -hostfile hostfile ./a.out rmat 26 - 84 2>&1 | tee profiling/weakscaling/reult_rmat26_4node2

x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 16 -hostfile hostfile ./a.out rmat 27 - 84 2>&1 | tee profiling/weakscaling/reult_rmat27_8node2


x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 32 -hostfile hostfile ./a.out rmat 28 - 84 > profiling/weakscaling/reult_rmat28_16node 2>&1

x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 64 -hostfile hostfile ./a.out rmat 29 - 84 2>&1 | tee profiling/weakscaling/reult_rmat29_32node

x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 128 -hostfile hostfile ./a.out rmat 30 - 84 2>&1 | tee profiling/weakscaling/reult_rmat30_64node

exit

