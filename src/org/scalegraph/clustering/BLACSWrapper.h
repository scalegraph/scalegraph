#include <x10aux/config.h>

void blacs_pinfo(int *mypnum, int *nprocs);
void blacs_setup(int *mypnum, int *nprocs);
void blacs_get(const int ictxt, const int what, int *val);
void blacs_gridinit(int *ictxt, const x10_char order, const int nprow, const int npcol);
void blacs_gridinfo(const int ictxt, int nprow, int npcol, int *myrow, int *mycol);
void blacs_gridexit(const int ictxt);
void blacs_exit(const int n);
void blacs_barrier(const int ictxt, const x10_char c);
