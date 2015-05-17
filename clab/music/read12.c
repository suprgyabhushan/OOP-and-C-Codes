#include<stdio.h>
int main(int argc,char * argv[])
{
#define LINE_SIZE 400
char firstline[LINE_SIZE];

FILE *music = fopen((argv[2]), "rt+w");
 
fgets(firstline,LINE_SIZE,music);
while(*firstline != '%')
{
printf("%s",firstline);
fgets(firstline,LINE_SIZE,music);
}  
printf("%s",firstline);
int number,numbert,numbertn;


fscanf(music,"%d",&number);
numbert=atoi(argv[1]);
numbertn=-1*(numbert);
while(fgets(line,400, fr) != 0)

int ch = getc(music);
while (ch != EOF) 
{
	putchar(ch); 

	ch = getc(music);
}

   
fclose(music);
return 0;
}
