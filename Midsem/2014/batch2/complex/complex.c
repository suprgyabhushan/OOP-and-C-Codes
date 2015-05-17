// preparedBy: MR
// Time: 10 minutes
#include<stdio.h>
#include<stdlib.h>

double compute(double phi, double k, double z, double *imag);

int main(int argc, char *argv[])
    {
    double real=0, imagnary=0, phi=0, k=0, z=0;
    real = compute(atof(argv[1]), atof(argv[2]), atof(argv[3]),&imagnary);
    if(imagnary)
        printf("%3.2f + i%3.2f\n",real,imagnary);
    else 
        printf("%3.2f\n",real);

    return 0;
    }
