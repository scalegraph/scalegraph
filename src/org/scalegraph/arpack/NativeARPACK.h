/*
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

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

int pdsaupd_wrap(/*int comm,*/ int *ido, x10_char bmat, int n, int which_, int nev,
                 double tol, double *resid, int ncv, double *v, int ldv,
                 int *iparam, int *ipntr, double *workd, double *workl, int lworkl,
                 int *info);

int pdseupd_wrap(/*int comm,*/ int rvec, x10_char howmny, int *select, double *d, double *z,
                 int ldz, double sigma, x10_char bmat, int n, int which_,
                 int nev, double tol, double *resid, int ncv, double *v,
                 int ldv, int *iparam, int *ipntr, double *workd, double *workl,
                 int lworkl, int *info);
