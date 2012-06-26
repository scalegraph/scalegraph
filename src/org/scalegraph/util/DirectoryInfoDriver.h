#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/param.h>
#include <sys/stat.h>
#include <dirent.h>
#include <iostream>
#include <vector>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

#include <x10aux/ref.h>
#include <x10/lang/String.h>
#include <x10/array/Array.h>

using namespace std;

class DirectoryInfoDriver {

public:
	static x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > listdir(x10aux::ref<x10::lang::String>);
	static x10_boolean exists(x10aux::ref<x10::lang::String>);
	static x10_boolean makedir(x10aux::ref<x10::lang::String>);
	static x10_boolean remdir(x10aux::ref<x10::lang::String>);
};
