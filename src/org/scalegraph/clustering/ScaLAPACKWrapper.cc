#include <x10aux/config.h>

extern "C" {
	void sl_init_(int*, int*, int*);
	long numroc_(const int*, const int*, const int*, const int*, const int*);
	void descinit_(int*, const int*, const int*, const int*, const int*,
			const int*, const int*, const int*, const int*, int*);
	void pdelset_(double*, const int*, const int*, const int*, const double*);
	void pdsygvx_(const int*, const char*, const char*, const char*, const int*,
			double*, const int*, const int*, const int*, double*,
			const int*, const int*, const int*, const double*, const double*,
			const int*, const int*, const double*, int*, int*,
			double*, const double*, double*, const int*, const int*,
			const int*, double*, const int*, int*, const int*,
			int*, int*, double*, int*);
}

void sl_init(int *ictxt, int nprow, int npcol){
	sl_init_(ictxt, &nprow, &npcol);
}

long numroc(const int n, const int nb, const int iproc, const int isrcproc, const int nprocs){
	return numroc_(&n, &nb, &iproc, &isrcproc, &nprocs);
}

void descinit(int *desc, const int m, const int n, const int mb, const int nb,
		const int irsrc, const int icsrc, const int ictxt, const int lld, int *info){
	descinit_(desc, &m, &n, &mb, &nb, &irsrc, &icsrc, &ictxt, &lld, info);
}

void pdelset(double *a, const int ia, const int ja, const int *desca, const double alpha){
	pdelset_(a, &ia, &ja, desca, &alpha);
}

void pdsygvx(const int ibtype, const x10_char jobz, const x10_char range, const x10_char uplo, const int n,
		double *a, const int ia, const int ja, const int *desca, double *b,
		const int ib, const int jb, const int *descb, const double vl, const double vu,
		const int il, const int iu, const double abstol, int *m, int *nz,
		double *w, const double orfac, double *z, const int iz, const int jz,
		const int* descz, double *work, const int lwork, int *iwork, const int liwork,
		int *ifail, int *iclustr, double *gap, int *info){
	pdsygvx_(&ibtype, (char *)&jobz.v, (char *)&range.v, (char *)&uplo.v, &n,
			a, &ia, &ja, desca, b,
			&ib, &jb, descb, &vl, &vu,
			&il, &iu, &abstol, m, nz,
			w, &orfac, z, &iz, &jz,
			descz, work, &lwork, iwork, &liwork,
			ifail, iclustr, gap, info);
}
