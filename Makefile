ARPACK		= arpack96.tar.gz patch.tar.gz parpack96.tar.gz ppatch.tar.gz
DLIBS		= lib/libarpack_LINUX.a lib/libparpack_MPI-LINUX.a
SG_PREFIX	= $(CURDIR)
.SUFFIXES	= .tar.gz
TMPDIR		= $(PWD)/tmp

LIBS		= -cxx-postarg -larpack_LINUX -cxx-postarg -lparpack_MPI-LINUX -cxx-prearg -L$(SG_PREFIX)/lib -cxx-prearg -I$(SG_PREFIX)/include
LIBPATH		= $(SG_PREFIX)/x10lib
X10FILES	= $(shell find $(SG_PREFIX)/src/org | grep .x10$)

all: makelib

$(DLIBS): buildDlib

buildDlib: $(ARPACK)
	sed -i -e "24s/^/\*/g" ARPACK/UTIL/second.f
	cat ARPACK/ARMAKES/ARmake.MPI-SUN4 > ARPACK/ARmake.inc
	cd ARPACK && $(MAKE) HOME=$(SG_PREFIX) FC=gfortran FFLAGS="-O -fPIC" PFC=mpif77 PFFLAGS="-O -fPIC" MAKE=make all
	@ mkdir -p lib
	cp ARPACK/libarpack_SUN4.a $(SG_PREFIX)/lib/libarpack_LINUX.a
	cp ARPACK/parpack_MPI-SUN4.a $(SG_PREFIX)/lib/libparpack_MPI-LINUX.a

clean:
	rm *.tar.gz
	rm -r lib
	rm -r ARPACK
	rm -r x10lib
.tar.gz:
	echo $*
	tar xvf $*.tar.gz

$(ARPACK): %:
	curl -O http://www.caam.rice.edu/software/ARPACK/SRC/$@
	tar xvf $@

makelib: x10lib/ScaleGraph.jar

x10lib/ScaleGraph.jar: $(DLIBS)
	@ mkdir -p x10lib/lib
	x10c++ $(LIBS) -x10rt mpi -sourcepath ./src -buildx10lib $(LIBPATH) -o ScaleGraph -d $(LIBPATH)/include $(X10FILES)
	jar cvf $(LIBPATH)/ScaleGraph.jar $(X10FILES)
