#include <x10aux/config.h>

void sl_init(int *ictxt, int nprow, int npcol);
long numroc(const int n, const int nb, const int iproc, const int isrcproc, const int nprocs);
void descinit(int *desc, const int m, const int n, const int mb, const int nb,
		const int irsrc, const int icsrc, const int ictxt, const int lld, int *info);
void pdelset(double *a, const int ia, const int ja, const int *desca, const double alpha);
void pdsygvx(const int ibtype, const x10_char jobz, const x10_char range, const x10_char uplo, const int n,
		double *a, const int ia, const int ja, const int *desca, double *b,
		const int ib, const int jb, const int *descb, const double vl, const double vu,
		const int il, const int iu, const double abstol, int *m, int *nz,
		double *w, const double orfac, double *z, const int iz, const int jz,
		const int* descz, double *work, const int lwork, int *iwork, const int liwork,
		int *ifail, int *iclustr, double *gap, int *info);
