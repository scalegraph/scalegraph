#include <x10aux/config.h>
#include "ARPACKWrapper.h"

extern "C" {
int dsaupd_(int *ido, char *bmat, int *n, char *which, int *nev,
            double *tol, double *resid, int *ncv, double *v, int *ldv,
            int *iparam, int *ipntr, double *workd, double *workl, int *lworkl,
            int *info);

int dseupd_(int *rvec, char *howmny, int *select, double *d, double *z,
            int *ldz, double *sigma, char *bmat, int *n, char *which,
            int *nev, double *tol, double *resid, int *ncv, double *v,
            int *ldv, int *iparam, int *ipntr, double *workd, double *workl,
            int *lworkl, int *info);

int pdsaupd_(int *comm, int *ido, char *bmat, int *n, char *which, int *nev,
             double *tol, double *resid, int *ncv, double *v, int *ldv,
             int *iparam, int *ipntr, double *workd, double *workl, int *lworkl,
             int *info);

int pdseupd_(int *comm, int *rvec, char *howmny, int *select, double *d, double *z,
             int *ldz, double *sigma, char *bmat, int *n, char *which,
             int *nev, double *tol, double *resid, int *ncv, double *v,
             int *ldv, int *iparam, int *ipntr, double *workd, double *workl,
             int *lworkl, int *info);

double pdlamch_(int *ictxt, char *cmach);
}

int dsaupd_wrap(int *ido, x10_char bmat, int n, int which_, int nev,
                double tol, double *resid, int ncv, double *v, int ldv,
                int *iparam, int *ipntr, double *workd, double *workl, int lworkl,
                int *info){
	char which[2];
	if(which_ == 1){
		which[0] = 'L'; which[1] = 'A';
	}else if(which_ == 2){
		which[0] = 'S'; which[1] = 'A';
	}else if(which_ == 3){
		which[0] = 'L'; which[1] = 'M';
	}else if(which_ == 4){
		which[0] = 'S'; which[1] = 'M';
	}else{
		which[0] = 'B'; which[1] = 'E';
	}
	return dsaupd_(ido, (char *)&bmat.v, &n, which, &nev,
                   &tol, resid, &ncv, v, &ldv,
                   iparam, ipntr, workd, workl, &lworkl,
                   info);
}

int dseupd_wrap(int rvec, x10_char howmny, int *select, double *d, double *z,
                int ldz, double sigma, x10_char bmat, int n, int which_,
                int nev, double tol, double *resid, int ncv, double *v,
                int ldv, int *iparam, int *ipntr, double *workd, double *workl,
                int lworkl, int *info){
	char which[2];
	if(which_ == 1){
		which[0] = 'L'; which[1] = 'A';
	}else if(which_ == 2){
		which[0] = 'S'; which[1] = 'A';
	}else if(which_ == 3){
		which[0] = 'L'; which[1] = 'M';
	}else if(which_ == 4){
		which[0] = 'S'; which[1] = 'M';
	}else{
		which[0] = 'B'; which[1] = 'E';
	}
	return dseupd_(&rvec, (char *)&howmny.v, select, d, z,
                   &ldz, &sigma, (char *)&bmat.v, &n, which,
                   &nev, &tol, resid, &ncv, v,
                   &ldv, iparam, ipntr, workd, workl,
                   &lworkl, info);
}

int pdsaupd_wrap(int comm, int *ido, x10_char bmat, int n, int which_, int nev,
                 double tol, double *resid, int ncv, double *v, int ldv,
                 int *iparam, int *ipntr, double *workd, double *workl, int lworkl,
                 int *info){
	char which[2];
	if(which_ == 1){
		which[0] = 'L'; which[1] = 'A';
	}else if(which_ == 2){
		which[0] = 'S'; which[1] = 'A';
	}else if(which_ == 3){
		which[0] = 'L'; which[1] = 'M';
	}else if(which_ == 4){
		which[0] = 'S'; which[1] = 'M';
	}else{
		which[0] = 'B'; which[1] = 'E';
	}
	return pdsaupd_(&comm, ido, (char *)&bmat.v, &n, which, &nev,
                   &tol, resid, &ncv, v, &ldv,
                   iparam, ipntr, workd, workl, &lworkl,
                   info);
}

int pdseupd_wrap(int comm, int rvec, x10_char howmny, int *select, double *d, double *z,
                int ldz, double sigma, x10_char bmat, int n, int which_,
                int nev, double tol, double *resid, int ncv, double *v,
                int ldv, int *iparam, int *ipntr, double *workd, double *workl,
                int lworkl, int *info){
	char which[2];
	if(which_ == 1){
		which[0] = 'L'; which[1] = 'A';
	}else if(which_ == 2){
		which[0] = 'S'; which[1] = 'A';
	}else if(which_ == 3){
		which[0] = 'L'; which[1] = 'M';
	}else if(which_ == 4){
		which[0] = 'S'; which[1] = 'M';
	}else{
		which[0] = 'B'; which[1] = 'E';
	}
	return pdseupd_(&comm, &rvec, (char *)&howmny.v, select, d, z,
                   &ldz, &sigma, (char *)&bmat.v, &n, which,
                   &nev, &tol, resid, &ncv, v,
                   &ldv, iparam, ipntr, workd, workl,
                   &lworkl, info);
}

double pdlamch_wrap(int ictxt, x10_char cmach){
	return pdlamch_(&ictxt, (char *)&cmach.v);
}
