#include<stdio.h>
#include<stdlib.h>

int *getNumbers();
int *tail(int *);
int head(int *);
int sum(int *);
int getMean(int *);
int countevens(int *);

int main()
{
	
        int *numbers = getNumbers();

        int a;
	a=getMean(numbers);
	if(a==1)
	{
		printf("the mean is %d\n",numbers[0]);
	}
	else
	{
	
		printf("the mean is %d\n",getMean(numbers));
	}
	
        printf("the number of even integers are %d\n",countevens(numbers));
        
	
        return 0;
}


    
int *getNumbers()
{
    	int size;
	printf("enter the number of elements:");
	scanf("%d",&size);
        int *values;
	values=(int*)malloc(size*sizeof(int));        
	int i,num;
        for (i = 0; i < size; i++)
        {
	    scanf("%d",&num);		
            values[i] = num;           
        }
        
        return values;
}

int sum(int *numbers)
{ 
 	if ((char)head(numbers)=='\0')
	{
    
    		return 0;
  	} 
	else
	{
    		return numbers[0] + sum(tail(numbers));
  	}
}	 


int getMean(int *numbers)
{
	int size;
	size=sizeof(numbers)/sizeof(numbers[0]);
	if(size==1)
	{
		return sum(numbers)/size + 1;
	}
	else
	{

	        return sum(numbers)/size;
	}
}
int countevens(int *numbers)
{	
	
	if((char)head(numbers)=='\0')
	{
		return 0;
	}
	else if((head(numbers))%2==0)
	{
		
		return 1 + countevens(tail(numbers));
	}
	else
	{
		return 0 + countevens(tail(numbers));
	}

}

int head(int *numbers)
{
	return numbers[0];
}

int *tail(int *numbers)
{
	int size;
	int *b;
	int i;
	
	size=5;
	b=(int*)malloc(size*sizeof(int));
	for(i=0;i<size-1;i++)
	{
		b[i]=numbers[i+1];
	
	}
	return b;
	
}

