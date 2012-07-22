#include <x10aux/config.h>

int dsaupd_wrap(int *ido, x10_char bmat, int n, int which_, int nev,
                double tol, double *resid, int ncv, double *v, int ldv,
                int *iparam, int *ipntr, double *workd, double *workl, int lworkl,
                int *info);

int dseupd_wrap(int rvec, x10_char howmny, int *select, double *d, double *z,
                int ldz, double sigma, x10_char bmat, int n, int which_,
                int nev, double tol, double *resid, int ncv, double *v,
                int ldv, int *iparam, int *ipntr, double *workd, double *workl,
                int lworkl, int *info);

/*int pdsaupd_wrap(int comm, int *ido, x10_char bmat, int n, int which_, int nev,
                 double tol, double *resid, int ncv, double *v, int ldv,
                 int *iparam, int *ipntr, double *workd, double *workl, int lworkl,
                 int *info);

int pdseupd_wrap(int comm, int rvec, x10_char howmny, int *select, double *d, double *z,
                 int ldz, double sigma, x10_char bmat, int n, int which_,
                 int nev, double tol, double *resid, int ncv, double *v,
                 int ldv, int *iparam, int *ipntr, double *workd, double *workl,
                 int lworkl, int *info);
*/
