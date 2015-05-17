#include<stdio.h>
int main()
{
char line[80];

FILE *stream = fopen("song1.rra","r");

fscanf(stream, "%[^\n]s", line); 
printf("%s",line);
fscanf(stream, "%[^\n]s", line); 
printf("%s",line);
fscanf(stream, "%[^\n]s", line) ;
printf("%s",line);

fscanf(stream, "%[^\n]s", line) ;
printf("%s",line);

fscanf(stream, "%[^\n]s", line) ;
printf("%s",line);




fclose(stream);
return 0;
}
