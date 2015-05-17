#include<stdio.h>
int threshold()
{
int number,numbert,numbertn;


fscanf(music,"%d",&number);
numbert=atoi(argv[1]);
numbertn=-(numbert);

while(number<numbert && number>numbertn)
{
	fscanf(music,"%d",&number);
}	
printf("%d",number);
}
int whole()
{
int ch = getc(music);
while (ch != EOF) 
{
	putchar(ch); 

	ch = getc(music);
}
}
int main(int argc,char * argv[])
{
#define LINE_SIZE 400
char firstline[LINE_SIZE];

FILE *music = fopen((argv[2]), "rt+w");
 
fgets(firstline,LINE_SIZE,music);


while(*firstline != '%')'%
{
printf("%s",firstline);
fgets(firstline,LINE_SIZE,music);
}  
printf("%s",firstline);

threshold();
whole();

   
fclose(music);
return 0;
}
