#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <time.h>

int main()
{
	time_t now_time;
	struct tm* gm_timeinfo;

	now_time = time(NULL);
	gm_timeinfo = gmtime(&now_time);
	std::cout << gm_timeinfo->tm_year + 1900 << '\n';
	std::cout << gm_timeinfo->tm_mon + 1<< '\n';
	std::cout << gm_timeinfo->tm_mday << '\n';
	return 0;
}