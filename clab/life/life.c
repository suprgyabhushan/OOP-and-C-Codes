#include<stdio.h>
#include<stdlib.h>
#include "util.h"
int main(int argc,char *argv[])
	{
	FILE *in=fopen(argv[1],"r+w");	
	getfilename(argv[1]);	    	
	if((in==NULL) && ((argv[2])>=0))
		{
		printf("Usage: ./life <valid-file-name> <positive number generations>\n");
		}
	else if(argv[1]==NULL || argv[2]==NULL || argv[3] )
		{
		printf("Usage: ./life <valid-file-name> <positive number generations>\n");
		}
	else if(atoi(argv[2])<0)
		{
		printf("Usage: ./life <valid-file-name> <positive number generations>\n");
		}		
	else if(argv[2]!=NULL)
		{
		int row,col,count1,count2;
		row=Row(argv[1]);
		col=Col(argv[1]);
		int genno=atoi(argv[2]);
		if(genno==0)
			{
			FILE *infile;
			printf("Generation 0\n");
			count1=Lines(argv[1]);
			count2=Count(count1);
			AllLines(argv[1],count2);
			}
		else
			{
			printf("Generation 0\n");
			TwoD(argv[1],row,col);
			NextGeneration(argv[1],genno,row,col);
						
			}
		}
	return 0;
	}

