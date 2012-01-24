#ifndef __DATE_H_
#define __DATE_H_

#include <cstdio>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include <x10aux/ref.h>
#include <x10/lang/String.h>

void getGmtTimeStamp(int year, int month, int date, int hours, int minutes, int seconds, long * result);

void getDayOfWeek(int year, int month, int date, int hours, int minutes, int seconds, int * result);

void getTimeString(int year, int month, int date, int hours, int minutes, int seconds, x10aux::ref<x10::lang::String> &result);

#endif
