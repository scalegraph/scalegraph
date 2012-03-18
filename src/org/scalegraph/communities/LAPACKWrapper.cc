extern "C" {
    int dgetri_(long int *n, double *a, long int *lda, long int *ipiv, double *work,
            long int *lwork, long int *info);
    int dgetrf_(long int *m, long int *n, double *a, long int *lda, long int *ipiv, long int *info);
}

int dgetri_wrap(long int n, double *a, long int lda, long int *ipiv, double *work,
        long int lwork, long int *info) {
    dgetrf_(&n, &n, a, &lda, ipiv, info);
    dgetri_(&n, a, &lda, ipiv, work, &lwork, info);
    return 0;
}
