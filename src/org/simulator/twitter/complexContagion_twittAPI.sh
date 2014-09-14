echo "Staring weak scaling analysis"

echo "starting for 2 nodes"
#allocnode -g t2gcresteu -n 2 -w 2 -q S
#cp $PBS_NODEFILE hostfile
x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 4 -hostfile hostfile ./a.out rmat 25 - 84 2>&1 | tee profiling/weakscale3/reult_rmat25_2node3.csv

#exit

echo "starting for 4 nodes"
#allocnode -g t2gcresteu -n 4 -w 2 -q S 
#cp $PBS_NODEFILE hostfile
x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 8 -hostfile hostfile ./a.out rmat 26 - 84 2>&1 | tee profiling/weakscale3/reult_rmat26_4node3.csv


#exit

#allocnode -g t2gcresteu -n 64 -w 3 -q S
#cp $PBS_NODEFILE hostfile
x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 16 -hostfile hostfile ./a.out rmat  - 84 2>&1 | tee profiling/weakscale3/result_rmat30_8node3.csv


#allocnode -g t2gcresteu -n 16 -w 3 -q S
#cp $PBS_NODEFILE hostfile
x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 32 -hostfile hostfile ./a.out rmat 30 - 84 2>&1 | tee profiling/weakscale3/result_rmat30_16node1.csv



#exit

#allocnode -g t2gcresteu -n 32 -w 4 -q S
#cp $PBS_NODEFILE hostfile
x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 64 -hostfile hostfile ./a.out rmat 30 - 84 2>&1 | tee profiling/weakscale3/result_rmat30_32node1.csv

#exit

#llocnode -g t2gcresteu -n 64 -w 4 -q S
#cp $PBS_NODEFILE hostfile
x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 128 -hostfile hostfile ./a.out rmat 30 - 84 2>&1 | tee profiling/weakscale3/result_rmat30_64node1.csv



x10_NTHREADS=6 GC_NPROCS=6 mpirun -n 256 -hostfile hostfile ./a.out rmat 31 - 84 2>&1 | tee profiling/weakscale3/result_rmat31_128node1.csv


exit
#'
