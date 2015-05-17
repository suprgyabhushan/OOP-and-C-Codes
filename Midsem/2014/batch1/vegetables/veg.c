//preparedBy: MR
// Time: 11 minutes


#include<stdio.h>

int main(int argc, char *argv[])
    {
    FILE *cost,*wish;
    char vegName[500]="",wishVegName[500]="";
    double vegCost=0, wishVegQ=0, total=0;

    cost = fopen(argv[1],"r");
    wish = fopen(argv[2],"r");

    // reading wish.dat file
    fscanf(wish,"%s",wishVegName);
    fscanf(wish,"%lf",&wishVegQ);

    // reading cost.dat file
    while(!feof(cost))
        {
        fscanf(cost,"%s",vegName);
        fscanf(cost,"%lf\n",&vegCost);
        if(!strcmp(vegName,wishVegName)) total = vegCost*wishVegQ; 
        }
    fclose(cost);
    fclose(wish);
    printf("%3.2f\n",total);
    return 0;
    }
