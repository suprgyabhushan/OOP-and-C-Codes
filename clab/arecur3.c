#include<stdio.h>
#include<stdlib.h>
int *getNumbers();
int sum(int *);
int getMean(int *);
int countevens(int *);
int head(int *);
int *tail(int *);

int main()
{
	int size;
        int *numbers = getNumbers(&size);

        //numbers is an array of numbers
	printf("the mean is %d\n",getMean(numbers,size));
	printf("the number of even integers is %d\n",countevens(numbers));
       
        
	
        return 0;
}


    
int *getNumbers()
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
        
        return values;
}
int sum(int *numbers)
{ 
	int size;
	size=sizeof(numbers)/sizeof(numbers[0]);
 	if (size < 0)
	{
    
    		return 0;
  	} 
	else
	{
    		return numbers[size] + sum(numbers, size-1);
  	}
}	 


int getMean(int *numbers)
{
	int size;
	size=sizeof(numbers)/sizeof(numbers[0])
        return sum(numbers,size) / size;
}
int countevens(int *numbers)
{	
	
	if((char) numbers[0])==NULL)
	{
		return 0;
	}
	 if(head(numbers)%2==0)
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
	
	size=sizeof(numbers)/sizeof(numbers[0]);
	size=size-1;
	b=(int*)malloc(size*sizeof(int));
	for(i=0;i<size;i++)
	{
		b[i]=numbers[i+1];
	}
	return b;


}



