#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char * argv[])
{
	if ((argc<3) || (argc>3))
	{
		printf("Usage: ./play <threshold value> <file name>  <new file name>\n");
	}
	else
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
		int number,numbert=atoi(argv[1]);
		fscanf(music,"%d",&number);	

		while(number<numbert && number>(-1*numbert))
		{
			fscanf(music,"%d",&number);
		}	
		printf("%d",number);

		int ch = getc(music);
		while(1)
		{
			if(ch=EOF)
			{ 
				break;
			}
			
			putchar(ch);
			ch = getc(music);
		}
		fclose(music);
	}   

return 0;

}
