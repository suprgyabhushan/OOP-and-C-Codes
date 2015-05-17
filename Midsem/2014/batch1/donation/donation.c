//preparedBy: Mr
// Time: 9 minutes

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[])
    {
   
    int donation=0; // 17 bits are required hence integer variable

    donation = atoi(argv[1])/10; // Units of Rs. 10
    donation = (donation << 3) | (atoi(argv[2])/5); // Units of Rs. 5
    donation = (donation << 4) | (atoi(argv[3])/2); // Units of Rs. 2
    donation = (donation << 5) | atoi(argv[4]); // Units of Rs. 1

    printf("%d\n",donation);
    return 0;
    }
