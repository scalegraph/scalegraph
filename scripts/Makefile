TMP		= hoge
SG_PREFIX	= `dirname $(echo $(cd $(dirname $0); pwd))`
X10		= $(shell echo $(TMP))
ARPACK		= arpack96.tar.gz patch.tar.gz parpack96.tar.gz ppatch.tar.gz



all: $(ARPACK)
clean:
	rm *.tar.gz

arpack96.tar.gz:
	curl -O \
	http://www.caam.rice.edu/software/ARPACK/SRC/arpack96.tar.gz
patch.tar.gz:
	curl -O \
	http://www.caam.rice.edu/software/ARPACK/SRC/patch.tar.gz
parpack96.tar.gz:
	curl -O \
	http://www.caam.rice.edu/software/ARPACK/SRC/parpack96.tar.gz
ppatch.tar.gz:
	curl -O \
	http://www.caam.rice.edu/software/ARPACK/SRC/ppatch.tar.gz
