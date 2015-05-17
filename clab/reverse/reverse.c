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

	
	int NumOfField;
	int number[count];
	int index=0;

	while (NumOfField == 1)
	{
    	NumOfField = fscanf(music,"%d", &number[index]);
    	index++;
	}
	fclose(music);
	index--;




	

    


	int FuncIndex;
	for (FuncIndex = index; FuncIndex != EOF; FuncIndex--)
	{
    		printf("%d\n",number[FuncIndex]);
	}

	
	
	
	
	
	
	getline();
	return 0;
}
	
	    
	    
		
