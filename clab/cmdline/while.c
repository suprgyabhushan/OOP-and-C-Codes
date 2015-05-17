#include<stdio.h>
int main( int argc , char *argv[])


{
int a,b,step,i;
a = atoi(argv[1]);
b = atoi(argv[2]);
step = atoi(argv[3]);
i=a;

	while (i<=b)
	{
	printf ("%d ",i);
	i=i+step;

	}
printf ("\n");
return 0;
}

