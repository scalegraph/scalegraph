#include "RandomDriver.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RandomDriver::init(){
	srand(time(NULL));
}

double RandomDriver::getRandom(){

	return (double)((rand()%100)/100.0);
}
