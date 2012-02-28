#include <x10aux/config.h>
#include "LAPACKWrapper.h"

extern "C" {
	int dsygv_(long int *itype, char *jobz, char *uplo, long int *n,
			double *a, long int *lda, double *b, long int *ldb,
			double *w, double *work, long int *lwork, long int *info);
}

int dsygv_wrap(long int itype, x10_char jobz, x10_char uplo, long int n,
		double *a, long int lda, double *b, long int ldb,
		double *w, double *work, long int lwork, long int *info){

	return dsygv_(&itype, (char*)&jobz.v, (char*)&uplo.v, &n, a, &lda, b, &ldb, w, work, &lwork, info);
}

int sum(int *array, int n){
	int i, s = 0;
	for(i = 0; i < n; i++){
		s += array[i];
	}
	return s;
}

void test_ptr(int *p){
	*p = 10;
}
