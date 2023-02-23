#include <stdio.h>
#include <time.h>

int main()
{
	time_t seconds;
	struct tm *timeStruct;

	seconds = time(NULL);

	timeStruct = localtime(&seconds);

	printf("Current time : %d:%d:%d\n", timeStruct->tm_hour, timeStruct->tm_min, timeStruct->tm_sec);
}
