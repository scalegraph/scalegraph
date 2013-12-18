ARPACK_ARCHIVE		= arpack96.tar.gz patch.tar.gz parpack96.tar.gz ppatch.tar.gz
PAR_METIS_ARCHIVE	= parmetis-4.0.3.tar.gz
PAR_METIS_FOLDER = $(SG_PREFIX)/$(patsubst %.tar.gz,%, $(PAR_METIS_ARCHIVE))
DLIBS		= libarpack_LINUX.a libparpack_MPI-LINUX.a libparmetis.so libparmetis.so
SG_PREFIX	= $(CURDIR)
TMPDIR		= $(PWD)/tmp
X10FILES	= $(shell find $(SG_PREFIX)/src/org -name '*.x10')

LIBS		= -cxx-postarg -larpack_LINUX -cxx-postarg -lparpack_MPI-LINUX -cxx-postarg -lparmetis -cxx-prearg -L$(SG_PREFIX)/lib -cxx-prearg -I$(SG_PREFIX)/include
LIBPATH		= $(SG_PREFIX)/x10lib
.SUFFIXES	= .tar.gz
VPATH		= x10libs $(SG_PREFIX)/lib

ARPACK_LIB	= libarpack_LINUX.a libparpack_MPI-LINUX.a

all: ScaleGraph.jar
fetch: $(ARPACK_ARCHIVE) $(PAR_METIS_ARCHIVE)

ScaleGraph.jar: $(ARPACK_LIB) libparmetis.so
	@ mkdir -p x10lib/lib
	x10c++ $(LIBS) -x10rt mpi -sourcepath ./src -buildx10lib $(LIBPATH) -o ScaleGraph -d $(LIBPATH)/include $(X10FILES)
	cd src && jar cvf $(LIBPATH)/ScaleGraph.jar {org,x10}

ARPACK: $(ARPACK_ARCHIVE)
	for x in $^;do tar xf $$x;done

$(ARPACK_ARCHIVE): %:
	curl -O http://www.caam.rice.edu/software/ARPACK/SRC/$@

#$(DLIBS): buildDlib libparmetis.so

$(ARPACK_LIB): ARPACK
	sed -i -e "24s/^/\*/g" ARPACK/UTIL/second.f
	cat ARPACK/ARMAKES/ARmake.MPI-SUN4 > ARPACK/ARmake.inc
	cd ARPACK && $(MAKE) HOME=$(SG_PREFIX) FC=gfortran FFLAGS="-O -fPIC" PFC=mpif77 PFFLAGS="-O -fPIC" MAKE=make all
	@ mkdir -p lib
	cp ARPACK/libarpack_SUN4.a $(SG_PREFIX)/lib/libarpack_LINUX.a
	cp ARPACK/parpack_MPI-SUN4.a $(SG_PREFIX)/lib/libparpack_MPI-LINUX.a

libparmetis.so: $(PAR_METIS_FOLDER)
	mkdir -p $(SG_PREFIX)/metis
	rm -rf $(PAR_METIS_FOLDER)
	tar xvf $(PAR_METIS_ARCHIVE)
	patch -N $(PAR_METIS_FOLDER)/metis/include/metis.h < $(SG_PREFIX)/patches/metis.h.patch
	patch -N $(PAR_METIS_FOLDER)/metis/GKlib/GKlibSystem.cmake < $(SG_PREFIX)/patches/cc_flag.patch


	make -C $(PAR_METIS_FOLDER) --environment-overrides clean
	make -C $(PAR_METIS_FOLDER) --environment-overrides config shared=1 prefix=$(SG_PREFIX)/metis debug=1 assert=1 assert2=1
	make -C $(PAR_METIS_FOLDER) --environment-overrides
	make -C $(PAR_METIS_FOLDER) --environment-overrides install

	ln -sf  $(SG_PREFIX)/metis/include/parmetis.h  $(SG_PREFIX)/include/parmetis.h
	ln -sf  $(PAR_METIS_FOLDER)/metis/include/metis.h  $(SG_PREFIX)/include/metis.h
	ln -sf  $(SG_PREFIX)/metis/lib/libparmetis.so  $(SG_PREFIX)/lib/libparmetis.so

clean:
	#rm -f *.tar.gz
	rm -fr lib
	rm -fr ARPACK
	rm -fr x10lib
	rm -fr metis
	rm -fr $(PAR_METIS_FOLDER)
.tar.gz:
	echo $*
	tar xvf $*.tar.gz

$(PAR_METIS_ARCHIVE):
	curl -O http://glaros.dtc.umn.edu/gkhome/fetch/sw/parmetis/$@

$(PAR_METIS_FOLDER): $(PAR_METIS_ARCHIVE)
	tar xvf $<
