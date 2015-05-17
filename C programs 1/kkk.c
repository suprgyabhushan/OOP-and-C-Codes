#include<stdio.h>
int main()
	{
	int a,x,y;
	float c,t;
	float cm;
	float mpgbm;
	float mpgam;
	float ngbm;
	float ngam;
	float ycgwm;
	float ycgam;
	printf("the no. of miles driven per year ");
	scanf("%d",&a);
	printf("the cost in dollars of a gallon of a gasoline");
	scanf("%f",&c);
	printf("the cost of modification ");
	scanf("%f",&cm);
	printf("the mpg before the modification");
	scanf("%f",&mpgbm);
	printf("the mpg after the modification");
	scanf("%f",&mpgam);
	ngbm=a/mpgbm;
	ngam=a/mpgam;
	ycgwm=ngbm*c;
	ycgam=ngam*c;
	t=cm/(ycgwm-ycgam);
	x=cm/(ycgwm-ycgam);
	y=(t-x)*365;
	printf("the yearly cost of gasoline without the modification is %f",ycgwm);
	printf("the yearly cost of gasoline after the modification is %f \n",ycgam);
	printf("%d yrs %d days",x,y);
	return 0;
	}
