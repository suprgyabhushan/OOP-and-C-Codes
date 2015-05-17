#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char * argv[])
{
	FILE* music = fopen(argv[1], "r");	
	#define LINE_SIZE 400
	char firstline[LINE_SIZE];
	fgets(firstline,LINE_SIZE,music);
	while(*firstline != '%')
	{
		printf("%s",firstline);
		fgets(firstline,LINE_SIZE,music);
	}	  
	printf("%s",firstline);

	int ch, line = 0;

	do 
	{
    		ch = fgetc(music);
    		if(ch == '\n')
    		line++;
	} while (ch != EOF);

	// last line doesn't end with a new line!
	// but there has to be a line at least before the last line
	
	fclose(music);

	music = fopen(argv[1], "r");	
	#define LINE_SIZE 400
	
	fgets(firstline,LINE_SIZE,music);
	while(*firstline != '%')
	{
			
		fgets(firstline,LINE_SIZE,music);
	}
		
	int *a,*b;
	int c,d,num;
	a=(int*)malloc(line*sizeof(int));
    	b=(int*)malloc(line*sizeof(int));
	for(c=0;c<line;c++)
	{ 
        	fscanf(music,"%d",&num);		
		a[c]=num;
		
	}
	for(c=line-1,d=0;c>=0;c--,d++)
	{
		b[d]=a[c];
		printf("%d\n",b[d]);
	}
	

	fclose(music);
	return 0;
}    
