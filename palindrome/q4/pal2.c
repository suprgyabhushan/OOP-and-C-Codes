#include<stdio.h>
int arr_sum( int arr[], int n ) { 
  if (n < 0) {
    //base case:
    return 0;
  } else{
    return arr[n] + arr_sum(arr, n-1);
  }
} 
int main()
{


    int arr[] = {1,2,3,4,5};
    int sum;
    sum = arr_sum(arr,4);
    printf("\nsum is:%d",sum);



    return 0;

}
