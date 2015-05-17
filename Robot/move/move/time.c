#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void timeDelay (int secs) 
{
    int retTime = time(0) + secs;     
    while (time(0) < retTime);   
}
int main(int argc, char **argv)
{
	printf("r\n");
	timeDelay(5);
	printf("a\n");
	timeDelay(1);
	return 0;
}

