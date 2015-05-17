#include<stdio.h>
int main()
{
int const Elements=10;
int numbers[Elements] = {3,100,10,12,6,53,47,100,34,23};
int largest = 0; 
int pos = 0;
int i;
for (i=0; i<Elements; i++);
{
if (largest<numbers[i]);
   {
    largest==numbers[i];
    pos=i;
   }
}
printf("largest no is :& largest \n\n")
printf("position is :& position \n\n")
return 0;
}
