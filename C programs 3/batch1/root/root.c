// preparedBy: M.R
// Time taken = 8 minutes

#include<stdio.h>
#include<stdlib.h>

int checkSquare(int number)
    {
    int i = 1; 
    for (i=1;i<=100;i++)
        {
        if(i*i == number)
            return 1;
        }
    return 0;
    }

int checkCube(int number)
    {
    int i = 1; 
    for (i=1;i<=100;i++)
        {
        if(i*i*i == number)
            return 1;
        }
    return 0;
    }

int main(int argc, char *argv[])
    {
    FILE *croot,*sqroot,*others;
    int i = 1;

    sqroot = fopen("sqroot.dat","w");
    croot = fopen("croot.dat","w");
    others = fopen("others.dat","w");

    for (i=1;i<argc;i++)
        {
        if(checkSquare(atoi(argv[i])))
            fprintf(sqroot,"%d ",atoi(argv[i]));
        else if(checkCube(atoi(argv[i])))
            fprintf(croot,"%d ",atoi(argv[i]));
        else
            fprintf(others,"%d ",atoi(argv[i]));
        }

    fclose(sqroot);
    fclose(croot);
    fclose(others);
    return 0;
    }
