#include <x10aux/config.h>

extern "C" {
	void blacs_pinfo_(int*, int*);
	void blacs_setup_(int*, int*);
	void blacs_get_(const int*, const int*, int*);
	void blacs_gridinit_(int*, const char*, const int*, const int*);
	void blacs_gridinfo_(const int*, int*, int*, int*, int*);
	void blacs_gridexit_(const int*);
	void blacs_exit_(const int*);
	void blacs_barrier_(const int*, const char*);
}

void blacs_pinfo(int *mypnum, int *nprocs){
	blacs_pinfo_(mypnum, nprocs);
}

void blacs_setup(int *mypnum, int *nprocs){
	blacs_setup_(mypnum, nprocs);
}

void blacs_get(const int ictxt, const int what, int *val){
	blacs_get_(&ictxt, &what, val);
}

void blacs_gridinit(int *ictxt, const x10_char order, const int nprow, const int npcol){
	blacs_gridinit_(ictxt, (const char *)&order.v, &nprow, &npcol);
}

void blacs_gridinfo(const int ictxt, int nprow, int npcol, int *myrow, int *mycol){
	blacs_gridinfo_(&ictxt, &nprow, &npcol, myrow, mycol);
}

void blacs_gridexit(const int ictxt){
	blacs_gridexit_(&ictxt);
}

void blacs_exit(const int n){
	blacs_exit_(&n);
}

void blacs_barrier(const int ictxt, const x10_char c){
	blacs_barrier_(&ictxt, (const char *)&c.v);
}
