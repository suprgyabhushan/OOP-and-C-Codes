#include<stdio.h>

int main()
	{
	int miles,days,year,days1;
	float cost,costm,mpgb,mpga,ywom,ywm,savings,time;

		printf("Please enter miles! \n");
		scanf("%d",&miles);
		printf("Please enter cost \n");
		scanf("%f",&cost);
		printf("Please enter cost of modification \n");
		scanf("%f",&costm);
		printf("Please enter mpg before modification \n");
		scanf("%f",&mpgb);
		printf("Please enter mpg after modification \n");
		scanf("%f",&mpga);

		ywom=(((1/mpgb)*miles)*cost); 
		ywm=(((1/mpga)*miles)*cost);
                savings=(ywom-ywm);
                time=(1/savings)*costm;
                days=(time)*365;
		year=(days)/365;
		days1=days-(year*365);
                        
		printf("Yearly cost without modification is %0.2f \n",ywom);
		printf("Yearly cost with modification is %0.2f \n",ywm);
				
		
			if (time>2)
			{
				printf("The time it will take to break on the investment made is %d years and %d days 						\n",year,days1); 
			
			}
			else if ((time<2) && (time>1))
			{
				printf("The time it will take to break on the investment made is %d year and %d days 						\n",year,days1);
			}		
			

				
			else if (time<1)
			{
				 printf("The number of days it will take to break on the investment made is %d days \n",days);
			}
										

	return 0;
	}
