#include<stdio.h>
#include<stdlib.h>
int *getNumbers(int *);
int sum(int *,int);
int getMean(int *,int);
int countevens(int *,int);

int main()
{
	int size;
        int *numbers = getNumbers(&size);

        //numbers is an array of numbers
	printf("the number of even integers is %d\n",countevens(numbers,size));
        printf("the mean is %d\n",getMean(numbers,size));
        
	
        return 0;
}


    
int *getNumbers(int *size)
{
    	int count;
	printf("enter the number of elements:");
	scanf("%d",&count);
        int *values;
	values=(int*)malloc(count*sizeof(int)); 
        
	int i,num;
        for (i = 0; i < count; ++i)
        {
	    scanf("%d",&num);		
            values[i] = num;
           
        }
        *size = count;
        return values;
}
int sum(int *numbers,int size)
{ 
 	if (size < 0)
	{
    
    		return 0;
  	} 
	else
	{
    		return numbers[size] + sum(numbers, size-1);
  	}
}	 


int getMean(int *numbers,int size)
{
        return sum(numbers,size) / size;
}
int countevens(int *numbers,int size)
{	
	
	if(size==0)
	{
		return 0;
	}
	else if((numbers[0])%2==0)
	{
		
		return 1 + countevens(numbers+1,size-1);
	}
	else
	{
		return 0 + countevens(numbers+1,size-1);
	}

}


