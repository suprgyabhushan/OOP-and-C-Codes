#include<stdio.h>
#include<stdlib.h>

#include<string.h>
int main(int argc,char * argv[])
{
	#define LINE_SIZE 400
	char firstline[LINE_SIZE];
	FILE *music = fopen((argv[1]), "r");	
	int firstlines()
	{
		fgets(firstline,LINE_SIZE,music);
		while(*firstline != '%')
		{
			printf("%s",firstline);
			fgets(firstline,LINE_SIZE,music);
		}	  
		printf("%s",firstline);
	}
	firstlines();
	int value;
	int x=getc(music),count=0;
	while(x!=EOF)
	{
	       	x=getc(music);
	       	if(x==10)
	       	{
			count=count+1;
		}
	}
printf("hello");
printf("%d",count);
	
	
	int i=0,totalNums;
	int numbers[count+1];
	double atof ( const char * str );
	char line[count+1]; /* declare a char array */

while(fgets(line, sizeof line, music)!=NULL) { /* keep looping until NULL pointer... */

numbers[i]=atoi(line); /* convert string to double float*/
i++;
}
totalNums = i;
for (i=0 ; i<totalNums ; i++) {
printf("%d", numbers[i]);
}printf("hello");
fclose(music);
return 0;
}

	
