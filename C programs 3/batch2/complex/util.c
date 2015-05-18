#include<math.h>
double compute(double phi, double k, double z, double *imagnary)
    {
    double real = 0;
    real = exp(phi)*cos(k*z);
    *imagnary =  exp(phi)*sin(k*z); 
    return real;
    }
