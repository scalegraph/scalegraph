#include <x10aux/config.h>

int dsygv_wrap(int itype, x10_char jobz, x10_char uplo, int n,
		double *a, int lda, double *b, int ldb,
		double *w, double *work, int lwork, int *info);

int dgeev_wrap(const x10_char jobvl, const x10_char jobvr, const int n, double *a,
		const int lda, double *wr, double *wi, double *vl, const int ldvl,
		const double *vr, int ldvr, double *work, const int lwork, int *info);

int dsyev_wrap(const x10_char jobz, const x10_char uplo, const int n, double *a, const int lda,
		double *w, double *work, const int lwork, int *info);
