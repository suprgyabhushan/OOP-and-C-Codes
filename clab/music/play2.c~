#include<stdio.h>
int main(int argc,char * argv[])
{
#define LINE_SIZE 400
char firstline[LINE_SIZE];
FILE *music = fopen((argv[2]), "rt+w");
		
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

int threshold()
{
	int number,numbert=atoi(argv[1]);
	fscanf(music,"%d",&number);
	while((number>(-1*numbert)) && (number<numbert))
	{
		fscanf(music,"%d",&number);
	}	
	printf("%d",number);
}

if ((argc<3) || (argc>3)) 
{
	printf("Usage: ./play <threshold value> <songname.rra file> \n");
}
else
{
	firstlines();
	threshold();
	int ch = getc(music);
	while(!feof(music))
		{		
		putchar(ch);
		ch = getc(music);
		
	}	   
	fclose(music);
}
return 0;
}
