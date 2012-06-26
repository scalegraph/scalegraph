#include "DirectoryInfoDriver.h"

x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > DirectoryInfoDriver::listdir(x10aux::ref<x10::lang::String> path){
	DIR *dp;
    struct dirent *ep;
    vector<string> result;
    x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > >  stringArr;
    dp = opendir(path->c_str());

    if(dp != NULL){
    	while (ep = readdir(dp)){
    		if((strcmp(ep->d_name, ".") != 0) && (strcmp(ep->d_name, "..") != 0)){
    			result.push_back(ep->d_name);
    		}
    	}
		(void) closedir(dp);
    }else{
    	perror("Cannot open the directory");
    }

    stringArr = x10::array::Array<x10aux::ref<x10::lang::String> >::_make(result.size());
    char* workdir;
    string wdstr;
    stringstream ss;
   	ss << path;
   	ss << "/";
   	wdstr = ss.str();

    stringstream ss2;
    for(int i=0;i < result.size(); i++){
    	ss2.clear();
    	ss2.str("");
        string r;
        ss2 << wdstr;
    	ss2 << result.at(i);
    	ss2.flush();

    	r = ss2.str();

    	x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > ret1 = stringArr;
    	x10_int cnt1 = i;
    	x10aux::ref<x10::lang::String> ln1 = x10::lang::String::_make(r.c_str(), false);
    	x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > ret2 = ret1;
    	x10_int cnt2 = cnt1;
    	x10aux::ref<x10::lang::String> ln2 = ln1;
    	x10aux::nullCheck(stringArr)->x10::array::Array<x10aux::ref<x10::lang::String> >::__set(cnt2, ln2);
    }

    return stringArr;
}

x10_boolean DirectoryInfoDriver::exists(x10aux::ref<x10::lang::String> path){
	DIR *dp;
    dp = opendir(path->c_str());

    if(dp != NULL){
		(void) closedir(dp);
		return true;
    }else{
    	return false;
    }
}

x10_boolean DirectoryInfoDriver::makedir(x10aux::ref<x10::lang::String> path){
	DIR *dp;
    dp = opendir(path->c_str());

    if(dp != NULL){
		(void) closedir(dp);
		return false;
    }else{
    	int status = -1;
    	status = mkdir(path->c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);

    	if(status == -1){
    		return false;
    	}else{
    		return true;
    	}
    }
}

/**
 *
 * Note : While this method depends on the rm system call, it seems the best option to delete directories with contents
 * since programatic methods will get issues with OS. E.g., Programatic deletion might say the dir does not exist while it is
 * accessible from the OS. While rm is unix specific, since ScaleGraph is for UNIX systems there seems no issue of use of this
 * system call to delete directories with content.
 */

x10_boolean DirectoryInfoDriver::remdir(x10aux::ref<x10::lang::String> path){
	DIR *dp;
    dp = opendir(path->c_str());

    if(dp != NULL){
    	stringstream ss;
    	ss << "rm -rf ";
    	ss << path;
    	system(ss.str().c_str());
    	return true;
    }else{
    	return false;
    }

}
