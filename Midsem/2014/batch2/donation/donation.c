//preparedBy: Mr
// Time: 15 minutes

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[])
    {
   
    unsigned int donation = 0; 
    unsigned int donationTen=0, donationFive=0, donationTwo=0, donationOne=0;
    donation=atoi(argv[1]);
    donationOne = donation&0x1f; // Unit of Rs. 1
    donation = donation>>5;
    donationTwo = donation&0xf; // Unit of Rs. 2
    donation = donation>>4;
    donationFive = donation&0x7; // Unit of Rs. 5
    donation = donation>>3;
    donationTen = donation&0x1f; // Unit of Rs. 10

    // display
    printf("Following donation  were made\n");
    if(donationTen) printf("Rs. %d\n",donationTen*10);
    if(donationFive) printf("Rs. %d\n",donationFive*5);
    if(donationTwo) printf("Rs. %d\n",donationTwo*2);
    if(donationOne) printf("Rs. %d\n",donationOne);

    return 0;
    }
