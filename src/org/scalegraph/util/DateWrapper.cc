#include "DateWrapper.h"

using namespace std;

/**
 * This method returns GMT timestamp from local time input
 * If user uses JST (GMT+9),
 * the result will be the time stamp of input time minus 9 hours
 */
void getGmtTimeStamp(	int year,
							int month,
							int date,
							int hours,
							int minutes,
							int seconds,
							long * result) {

	time_t gmtTimestamp;
	struct tm t;

	t.tm_year = year - 1900; // Year since 1900
	t.tm_mon = month - 1; 	// 0 - 11
	t.tm_mday = date; 		// 1 - 31
	t.tm_hour = hours; 		// 0 -23
	t.tm_min = minutes; 		// 0 - 59
	t.tm_sec = seconds;		// 0 - 61 ** some system support leap seconds

	gmtTimestamp = mktime(&t);

	*result = (long) gmtTimestamp;
}

/**
 * This method returns day of week
 * Sun - 0, Mon - 1, Tue - 2, ..., Sat - 6
 */
void getDayOfWeek(	int year,
						int month,
						int date,
						int hours,
						int minutes,
						int seconds,
						int * result) {

	time_t gmtTimestamp;
	struct tm t;

	t.tm_year = year - 1900; // Year since 1900
	t.tm_mon = month - 1; 	// 0 - 11
	t.tm_mday = date; 		// 1 - 31
	t.tm_hour = hours; 		// 0 -23
	t.tm_min = minutes; 		// 0 - 59
	t.tm_sec = seconds;		// 0 - 61 ** some system support leap seconds

	mktime(&t);

	*result = t.tm_wday;
}

/**
 *
 */
void getTimeString(	int year,
						int month,
						int date,
						int hours,
						int minutes,
						int seconds,
						x10aux::ref<x10::lang::String>  &result) {
	time_t gmtTimestamp;
	struct tm t;

	t.tm_year = year - 1900; // Year since 1900
	t.tm_mon = month - 1; 	// 0 - 11
	t.tm_mday = date; 		// 1 - 31
	t.tm_hour = hours; 		// 0 -23
	t.tm_min = minutes; 		// 0 - 59
	t.tm_sec = seconds;		// 0 - 61 ** some system support leap seconds

	mktime(&t);

	const int MAXIMUM_LEN = 80;
	char * timeString = (char *)malloc(MAXIMUM_LEN);
	strftime(timeString, MAXIMUM_LEN - 1, "\"%c\"", &t);
	result = x10::lang::String::_make(timeString, true);

}
