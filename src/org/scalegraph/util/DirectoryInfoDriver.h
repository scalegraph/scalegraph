#include <stdio.h>
#include <sys/types.h>
#include <sys/param.h>
#include <dirent.h>
#include <iostream>
#include <vector>
#include <string.h>

#include <x10aux/ref.h>
#include <x10/lang/String.h>
#include <x10/array/Array.h>

using namespace std;

class DirectoryInfoDriver {

public:
	static x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > listdir(x10aux::ref<x10::lang::String>);
};
