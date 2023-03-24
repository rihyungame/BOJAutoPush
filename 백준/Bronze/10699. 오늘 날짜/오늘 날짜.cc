#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>

int main()
{
    time_t timer;
    struct tm* t;
    timer = time(NULL);
    t = localtime(&timer);

    printf("%d-", t->tm_year + 1900);
    printf("%02d-", t->tm_mon + 1);
    printf("%d", t->tm_mday);
    return 0;
}