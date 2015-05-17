// preparedBy: MR
// Time: 10 minutes
#include<stdio.h>
#include<stdlib.h>

double compute(double, double*);

int main(int argc, char *argv[])
    {
    double parasitic=0, effort=0, inputs=0;
    inputs = atof(argv[1]);
    parasitic = compute(inputs,&effort);
    if(effort)
        printf("p%3.2f + e%3.2f\n",parasitic,effort);
    else
        printf("p%3.2f\n",parasitic);

    return 0;
    }
