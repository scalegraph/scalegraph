#include <mpi.h>

int initialize(){
	int provided;
	MPI_Init_thread(NULL, NULL, MPI_THREAD_FUNNELED, &provided);
	return provided;
}

void finalize(){
	MPI_Finalize();
}

int get_size(){
	int size;
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	return size;
}

int get_rank(){
	int my_rank;
	MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
	return my_rank;
}
