#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int Row(char *file)
	{
	FILE *data=fopen(file,"r");
	int value;	
	int x=getc(data),row=0;
    	while(x!=EOF)
	    	{
        	x=getc(data);
		if(x==10)
        	    	{
			row=row+1;
			}
    		}
	return row;
	fclose(data);
	}
int Col(char *file)
	{
	FILE *data=fopen(file,"r");
        int x=getc(data),col=0;
	while(x!='\n')
	    	{
        	x=getc(data);		
		col=col+1;	
            	}
	return col;
	fclose(data);
	}

void PrintPac(char *file,int rows,int columns)
	{
	FILE *in=fopen(file,"r");
	int i,j;	
	char a;
	char **array=(char **)malloc(rows*sizeof(char*));
	for(i=0;i<rows;i++)
		{
		array[i]=(char*)malloc(columns*sizeof(char));
		}
	for(i=0;i<rows;i++)
		{
		for(j=0;j<columns;j++)
			{
			fscanf(in,"%c\n",&a);
			array[i][j]=a;
			printf("%40c",array[i][j]);			
			}
		printf("\t");
		}
	fclose(in);
	}










int main(int argc,char *argv[])
	{
	FILE *file1=fopen(argv[1],"r");
	FILE *file2=fopen(argv[2],"r");
	int rows,columns;
	rows=Row(file1);
	columns=Col(file2);
	PrintPac(file1);
	}
	
