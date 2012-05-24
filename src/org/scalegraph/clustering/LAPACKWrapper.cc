#include <x10aux/config.h>
#include "LAPACKWrapper.h"

extern "C" {
	int dsygv_(int *itype, char *jobz, char *uplo, int *n,
			double *a, int *lda, double *b, int *ldb,
			double *w, double *work, int *lwork, int *info);

	int dgeev_(const char *jobvl, const char *jobvr, const int *n, double *a,
			const int *lda, double *wr, double *wi, double *vl, const int *ldvl,
			const double *vr, int *ldvr, double *work, const int *lwork, int *info);

	int dsyev_(const char *jobz, const char *uplo, const int *n, double *a, const int *lda,
			double *w, double *work, const int *lwork, int *info);
}

int dsygv_wrap(int itype, x10_char jobz, x10_char uplo, int n,
		double *a, int lda, double *b, int ldb,
		double *w, double *work, int lwork, int *info){

	return dsygv_(&itype, (char*)&jobz.v, (char*)&uplo.v, &n, a, &lda, b, &ldb, w, work, &lwork, info);
}

int dgeev_wrap(const x10_char jobvl, const x10_char jobvr, const int n, double *a,
		const int lda, double *wr, double *wi, double *vl, const int ldvl,
		const double *vr, int ldvr, double *work, const int lwork, int *info){

	return dgeev_((char*)&jobvl.v, (char*)&jobvr.v, &n, a, &lda, wr, wi, vl, &ldvl, vr, &ldvr, work, &lwork, info);
}

int dsyev_wrap(const x10_char jobz, const x10_char uplo, const int n, double *a, const int lda,
		double *w, double *work, const int lwork, int *info){
	return dsyev_((char*)&jobz.v, (char*)&uplo.v, &n, a, &lda, w, work, &lwork, info);
}
