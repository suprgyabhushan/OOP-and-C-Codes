#include<stdio.h>
int main( int argc , char *argv[])


{
int a,b,step,i;
a = atoi(argv[1]);
b = atoi(argv[2]);
step = atoi(argv[3]);

	for  (i=a;i<=b;i=i+step)
	{
	printf ("%d ",i);

	}
printf ("\n");
return 0;
}

