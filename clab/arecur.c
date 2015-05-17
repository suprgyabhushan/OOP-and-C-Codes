#include<stdio.h>
#include<stdlib.h>
int getnumbers()
{

	int *a;
	int i,b,c,d,e,f;
	a=(int*)malloc(5*sizeof(int));
	printf("enter a no: ");
	scanf("%d",&b);
	printf("another: ");
	scanf("%d",&c);
	printf("another: ");
	scanf("%d",&d);
	printf("another: ");
	scanf("%d",&e);
	printf("another: ");
	scanf("%d",&f);
	a[0]=b;
	a[1]=c;
	a[2]=d;
	a[3]=e;
	a[4]=f;
	
	return *a;
	
	
	
}
int head(int array[])
{
	return array[0];
}

int tail(int array[])
{
	int i,size;
	
	size=sizeof(array)/sizeof(array[0]);
	int array1[size-1];
	for(i=0;i<(size-1);i++)
	{
		array1[i]=array[i+1];
	}
	return array1;
}

int countevens(int array[])
{

if((head(array))%2==0)
	{
		return 1 + countevens(tail(array));
	}
else
	{
		return 0 + countevens(tail(array));
	}
}

int sum(int arr[], int n )
 { 
  if (n < 0) {
    
    return 0;
  } 
else
{
    return arr[n] + sum(arr, n-1);
  }
} 

int mean(int arr[])
{
	int size=sizeof(arr)/sizeof(arr[0]);
	int m;
	m=sum(arr,5)/size;
	return m;
}


int main()
{
int numbers;
numbers=getnumbers();
printf("the mean is %d \n",mean(numbers));
printf("the even nos are  %p \n",countevens(*numbers));
return 0;
}










