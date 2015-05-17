//template for testing code
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>  // if your using math.h, then while compiling you have to link math library such as gcc tester.c -o tester -lm

 
int main()
    {

   
	int miles;
	float cost,costm,mpgb,mpga,ywom,ywm;

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
			ywm=(((1/mpga)*miles)*cost) + costm;
			printf("Yearly cost without modification is %0.2f \n",ywom);
			printf("Yearly cost with modification is %0.2f \n",ywm);



    return 0;
    }
