#include<stdio.h>
double compute(double n, double *edelay)
    {
    double parasitic = 0;
    parasitic = ((n*n) + n + 2)/3;
    *edelay = ((2*n) - 1)/5;
    return parasitic;
    }
