#include<stdio.h>
void calc(float r,float *d,float *area)
{
	*d=2*r;
	*area=3.14*r*r;
}	
int main()
{
float a=7.00,d=0,area=0;
calc(a,&d,&area);
printf("%f %f \n",d,area);
}
