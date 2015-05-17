#include<stdio.h>
#include<stdlib.h>
float add(float x,float y)
	{
	return x+y;
	}
float subtract(float x,float  y)
	{
	return x-y;
	}
float multiply(float x,float y)
	{
	return x*y;
	}
float division(float x,float y)
	{
	return x/y;
	}
int main(int argc ,char *argv[])
	{
	float a,b;
	a=atof(argv[1]);
	b=atof(argv[3]);
	float (*fptr)(float,float);
	if(*argv[2]=='+')
		{
		fptr=add;
		printf("%0.2f\n",fptr(a,b));
		}
	if(*argv[2]=='-')
                {
                fptr=subtract;
                printf("%0.2f\n",fptr(a,b));
                }
	if(*argv[2]=='*')
                {
                fptr=multiply;
                printf("%0.2f\n",fptr(a,b));
                }
	if(*argv[2]=='/')
                {
                fptr=division;
                printf("%0.2f\n",fptr(a,b));
                }
	return 0;
	}
