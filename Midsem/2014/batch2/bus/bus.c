//preparedBy: MR
// Time: 11 minutes


#include<stdio.h>

int main(int argc, char *argv[])
    {
    FILE *cost,*journey;
    char busStationName[500]="",startingPoint[500]="", destination[500]="";
    double sCost=0, startingCost=0, destinationCost=0; 

    cost = fopen(argv[1],"r");
    journey = fopen(argv[2],"r");

    // reading journey.dat file
    fscanf(journey,"%s",startingPoint);
    fscanf(journey,"%s\n",destination);

    // reading cost.dat file
    while(!feof(cost))
        {
        fscanf(cost,"%s",busStationName);
        fscanf(cost,"%lf\n",&sCost);
        if(!strcmp(busStationName,startingPoint)) 
            startingCost = sCost;
        if(!strcmp(busStationName,destination)) 
            destinationCost = sCost;
        }
    fclose(cost);
    fclose(journey);
    if(destination && startingCost)
        printf("%3.2f\n",destinationCost-startingCost);
    return 0;
    }
