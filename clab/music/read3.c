#include<stdio.h>
int main()
{

FILE *fp;
FILE *fp2;
char string[255];
int number;    
fp = fopen("violinw2.rra", "r");
fp2 = fopen("violinwcopy.rra", "w");
while (fscanf(fp, "%s %d", string, &number) > 0)
{
if(number != 0)
{
fprintf(fp2, "%s %d\n", string, number);
}
}
fclose(fp);
fclose(fp2);
remove("violinw2.rra");
rename( "violinwcopy.rra", "violinw2.rra" );
     
   
return 0;
}



