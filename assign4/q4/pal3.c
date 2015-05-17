#include<stdio.h>
int print( int arr[], int n ) { 
  if (n < 0) {
    //base case:
    return ;
  } else{
	printf("%d",arr[n]);
    return print(arr, n-1);
  }
} 
int main()
{


    int arr[] = {1,2,3,4,5};
    int sum;
    sum = print(arr,4);
    printf("\nsum is:%d",sum);



    return 0;

}
