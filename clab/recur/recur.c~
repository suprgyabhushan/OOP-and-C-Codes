#include<stdio.h>
#include<math.h>
#include<string.h>
int factorial3(int n)
	{
	return fact(1,1,n);
	}

int fact(int a,int m,int n)
	{
	if(m==n+1)
		{
		return a;/*the accumulator should be alone */
		}
	else
		{
		return fact(a*m,m+1,n);
		}
	}

int prod(int m,int n,int (*fptr)(int x))
	{
	if(m==n)
		{
		return fptr(m);
		}
	else
		{	
		return fptr(m) * prod(m+1,n,fptr);
		}	
	}

int id(int m)
	{
	return m;
	}

int sqr(int x)
	{
	return x*x;
	}


int emult(int a,int b)
	{
	return up(a,b,1);
	}

int up(int a,int b,int c)
	{
	if(c<=a)
		{
		return up(a,2*b,2*c);
		}
	else
		{
		return down(a,b,c,0);
		}
	}

int down(int a,int b,int c,int d)
	{
	if(a<1)
		{	
		return d;	
		}	
	else if(c<=a)
		{
		return down(a-c,b/2,c/2,d+b);
		}
	else
		{
		return down(a,b/2,c/2,d);
		}
	}


int main()
	{
	int a,b,c,d,e;
	printf("Simple Factorial\n");
	printf("enter a no \n");
	scanf("%d",&a);
	printf("The factorial of no %d is %d \n\n",a,factorial3(a));
	
	
	printf("Generalization\n");
	printf("enter a no \n");
	scanf("%d",&e);
	printf("factorial of %d is %d \n",e,prod(1,e,id));
	printf("factorial of square of nos from 1 to %d is %d \n\n",e,prod(1,e,sqr));
	
	
	printf("Egyptian Multiplication\n");
	printf("enter a no \n");
	scanf("%d",&b);
	printf("enter a no \n");
	scanf("%d",&c);
	printf("The egyptian multiplication of %d and %d is %d \n",b,c,emult(b,c));
	return 0;
	}	
