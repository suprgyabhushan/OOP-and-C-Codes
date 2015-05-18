#include<stdio.h>
int print( int arr[], int n ) { 
  int i=0;
if (i > n) {
    //base case:
    break;
  } else{
	printf("%d",arr[i]);
    return print(arr, i+1);
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
