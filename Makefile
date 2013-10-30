ARPACK		= arpack96.tar.gz patch.tar.gz parpack96.tar.gz ppatch.tar.gz
PAR_METIS	= parmetis-4.0.3.tar.gz
PAR_METIS_FOLDER = $(SG_PREFIX)/$(patsubst %.tar.gz,%, $(PAR_METIS))
DLIBS		= lib/libarpack_LINUX.a lib/libparpack_MPI-LINUX.a lib/libparmetis.so lib/libparmetis.so
SG_PREFIX	= $(CURDIR)
.SUFFIXES	= .tar.gz
TMPDIR		= $(PWD)/tmp

LIBS		= -cxx-postarg -larpack_LINUX -cxx-postarg -lparpack_MPI-LINUX -cxx-postarg -lparmetis -cxx-prearg -L$(SG_PREFIX)/lib -cxx-prearg -I$(SG_PREFIX)/include
LIBPATH		= $(SG_PREFIX)/x10lib
X10FILES	= $(shell find $(SG_PREFIX)/src/org | grep .x10$)

all: makelib

$(DLIBS): buildDlib buildParmetis

buildDlib: $(ARPACK)
	sed -i -e "24s/^/\*/g" ARPACK/UTIL/second.f
	cat ARPACK/ARMAKES/ARmake.MPI-SUN4 > ARPACK/ARmake.inc
	cd ARPACK && $(MAKE) HOME=$(SG_PREFIX) FC=gfortran FFLAGS="-O -fPIC" PFC=mpif77 PFFLAGS="-O -fPIC" MAKE=make all
	@ mkdir -p lib
	cp ARPACK/libarpack_SUN4.a $(SG_PREFIX)/lib/libarpack_LINUX.a
	cp ARPACK/parpack_MPI-SUN4.a $(SG_PREFIX)/lib/libparpack_MPI-LINUX.a

buildParmetis: $(PAR_METIS)
	mkdir -p $(SG_PREFIX)/metis
	make -C $(PAR_METIS_FOLDER) --environment-overrides clean
	make -C $(PAR_METIS_FOLDER) --environment-overrides config shared=1 prefix=$(SG_PREFIX)/metis debug=1 assert=1 assert2=1
	make -C $(PAR_METIS_FOLDER) --environment-overrides
	make -C $(PAR_METIS_FOLDER) --environment-overrides install
	
	sed  -i "s/#define IDXTYPEWIDTH 32/#define IDXTYPEWIDTH 64/g"  $(PAR_METIS_FOLDER)/metis/include/metis.h
	sed  -i "s/#define REALTYPEWIDTH 32/#define REALTYPEWIDTH 64/g"  $(PAR_METIS_FOLDER)/metis/include/metis.h
	
	ln -sf  $(SG_PREFIX)/metis/include/parmetis.h  $(SG_PREFIX)/include/parmetis.h
	ln -sf  $(PAR_METIS_FOLDER)/metis/include/metis.h  $(SG_PREFIX)/include/metis.h
	ln -sf  $(SG_PREFIX)/metis/lib/libparmetis.so  $(SG_PREFIX)/lib/libparmetis.so

clean:
	rm *.tar.gz
	rm -r lib
	rm -r ARPACK
	rm -r x10lib
	rm -fr metis
	rm -fr $(PAR_METIS_FOLDER) 
.tar.gz:
	echo $*
	tar xvf $*.tar.gz

$(ARPACK): %:
	curl -O http://www.caam.rice.edu/software/ARPACK/SRC/$@
	tar xvf $@
	
$(PAR_METIS):
	curl -O http://glaros.dtc.umn.edu/gkhome/fetch/sw/parmetis/$@
	tar xvf $@
	

makelib: x10lib/ScaleGraph.jar

x10lib/ScaleGraph.jar: $(DLIBS)
	@ mkdir -p x10lib/lib
	x10c++ $(LIBS) -x10rt mpi -sourcepath ./src -buildx10lib $(LIBPATH) -o ScaleGraph -d $(LIBPATH)/include $(X10FILES)
	jar cvf $(LIBPATH)/ScaleGraph.jar $(X10FILES)
