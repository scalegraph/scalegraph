SG_PREFIX	= $(CURDIR)
TMPDIR		= $(PWD)/tmp
X10FILES	= $(shell find $(SG_PREFIX)/src/org -name '*.x10')

LIBPATH		= $(SG_PREFIX)/lib
LIBS		= -cxx-postarg -larpack -cxx-postarg -lparpack -cxx-postarg -lparmetis -cxx-postarg -lgfortran -cxx-postarg -lmpifort -cxx-prearg -L$(LIBPATH) -cxx-prearg -I$(SG_PREFIX)/include
OUTPATH		= $(SG_PREFIX)/x10lib

# PARPACK
ARPACK_ARCHIVE = arpack96.tar.gz patch.tar.gz parpack96.tar.gz ppatch.tar.gz
ARPACK_LIB = lib/libparpack.a

# ParMETIS
PAR_METIS_ARCHIVE       = parmetis-4.0.3.tar.gz
PAR_METIS_FOLDER = $(patsubst %.tar.gz,%, $(PAR_METIS_ARCHIVE))
PAR_METIS_LIB = $(LIBPATH)/libparmetis.so

all: $(OUTPATH)/ScaleGraph.jar $(OUTPATH)/ScaleGraphd.jar
fetch: $(ARPACK_ARCHIVE) $(PAR_METIS_ARCHIVE)

$(OUTPATH)/ScaleGraph.jar: $(ARPACK_LIB) $(PAR_METIS_LIB)
	@ mkdir -p x10lib/lib
	x10c++ $(LIBS) -x10rt mpi -sourcepath ./src -buildx10lib $(OUTPATH) -cxx-prearg -g -O -NO_CHECKS -define NO_BOUNDS_CHECKS -o ScaleGraph -d $(OUTPATH)/include $(X10FILES)
	cd src && jar cvf $(OUTPATH)/ScaleGraph.jar org x10

$(OUTPATH)/ScaleGraphd.jar: $(ARPACK_LIB) $(PAR_METIS_LIB)
	@ mkdir -p x10lib/lib
	x10c++ $(LIBS) -x10rt mpi -sourcepath ./src -buildx10lib $(OUTPATH) -cxx-prearg -g -o ScaleGraphd -d $(OUTPATH)/include $(X10FILES)
	cd src && jar cvf $(OUTPATH)/ScaleGraphd.jar org x10

ARPACK: $(ARPACK_ARCHIVE)
	for x in $^;do tar xf $$x;done

$(ARPACK_ARCHIVE): %:
	curl -O http://www.caam.rice.edu/software/ARPACK/SRC/$@

$(ARPACK_LIB): ARPACK
	echo $(ARPACK_LIB)
	sed -i -e "24s/^/\*/g" ARPACK/UTIL/second.f
	cat ARPACK/ARMAKES/ARmake.MPI-SUN4 > ARPACK/ARmake.inc
	cd ARPACK && make HOME=$(SG_PREFIX) FC=gfortran FFLAGS="-O -fPIC" PFC=mpif77 PFFLAGS="-O -fPIC" MAKE=make all
	@ mkdir -p lib
	cp ARPACK/libarpack_SUN4.a $(LIBPATH)/libarpack.a
	cp ARPACK/parpack_MPI-SUN4.a $(LIBPATH)/libparpack.a

$(PAR_METIS_LIB): $(PAR_METIS_FOLDER)
	make -C $(PAR_METIS_FOLDER) --environment-overrides distclean
	make -C $(PAR_METIS_FOLDER) --environment-overrides config shared=1 prefix=$(SG_PREFIX)/metis debug=1 assert=1 assert2=1
	make -C $(PAR_METIS_FOLDER) --environment-overrides
	make -C $(PAR_METIS_FOLDER) --environment-overrides install

	rm -f  $(SG_PREFIX)/include/parmetis.h
	rm -f  $(SG_PREFIX)/include/metis.h
	rm -f  $(SG_PREFIX)/lib/libparmetis.so

	cp  $(SG_PREFIX)/metis/include/parmetis.h  $(SG_PREFIX)/include/parmetis.h
	cp  $(PAR_METIS_FOLDER)/metis/include/metis.h  $(SG_PREFIX)/include/metis.h
	cp  $(SG_PREFIX)/metis/lib/libparmetis.so  $(SG_PREFIX)/lib/libparmetis.so

clean:
	#rm -f *.tar.gz
	rm -fr lib
	rm -fr ARPACK
	rm -fr x10lib
	rm -fr metis
	rm -fr $(PAR_METIS_FOLDER)  $(SG_PREFIX)/include/parmetis.h $(SG_PREFIX)/include/metis.h  $(SG_PREFIX)/lib/libparmetis.so

$(PAR_METIS_ARCHIVE):
	curl -O http://glaros.dtc.umn.edu/gkhome/fetch/sw/parmetis/$@

$(PAR_METIS_FOLDER): $(PAR_METIS_ARCHIVE)
	tar xf $<
	touch $(PAR_METIS_FOLDER)
	patch -N $(PAR_METIS_FOLDER)/metis/include/metis.h < $(SG_PREFIX)/patches/metis.h.patch
	patch -N $(PAR_METIS_FOLDER)/metis/GKlib/GKlibSystem.cmake < $(SG_PREFIX)/patches/cc_flag.patch

