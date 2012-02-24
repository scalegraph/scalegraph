#include <x10aux/config.h>

int dsygv_wrap(long int itype, x10_char jobz, x10_char uplo, long int n,
		double *a, long int lda, double *b, long int ldb,
		double *w, double *work, long int lwork, long int *info);

int sum(int *array, int n);
void test_ptr(int *p);
