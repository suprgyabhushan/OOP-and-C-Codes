#include<stdio.h>
int main()
{

FILE *fp;

char string[255];
    
fp = fopen("violinw2.rra", "r+w");

while (fscanf(fp, "%s", string) > 0)
{

fprintf(fp, "%s\n", string);

}
fclose(fp);


     
   
return 0;
}



