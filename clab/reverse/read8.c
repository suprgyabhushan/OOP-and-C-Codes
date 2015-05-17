#include<stdio.h>
int main()
{
int c;
FILE *in;
in=fopen("song.rra","r");
   c = getc(in) ;

   fclose(in);
printf ("%d",c)
}

