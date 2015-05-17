#include<stdio.h>
int fib1[100];
int fib(int n)
{
	
	fib1[0]=0;
	fib1[1]=1;

	if(fib1[n]!=(-1))
	{
		return fib1[n];
	}
	fib1[n]=fib(n-1)+fib(n-2);

	return fib1[n];
}
int main()
{	
	int i;
	for(i=0;i<=100;i++)
	{
		fib1[i]=-1;
	
	}
	printf("%d",fib(6));
}

