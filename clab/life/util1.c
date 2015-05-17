#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void AllLines(char *file,int n)
	{
	FILE *data=fopen(file,"r");
    	int ch = getc(data);
    	while (ch!=EOF) 
    		{
        	putchar(ch); 
        	ch = getc(data);
    		}
    	fclose(data);
	}
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
void TwoD(char *file,int rows,int columns)
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
			printf("%c",array[i][j]);
			}
		printf("\n");
		}
	fclose(in);
	}
int NeighbourCount(char **array,int r,int c,int rows,int columns)
	{
	int count=0;
	if(r>0)
		{
		if((array[r-1][c])!='.')
			{
			count=count + 1;
			}
		}
	if(r<rows-1)
		{	
		if((array[r+1][c])!='.')
			{
			count=count + 1;
			}
		}
	if(c>0)
		{	
		if((array[r][c-1])!='.')
			{
			count=count + 1;
			}
		}
	if(c<columns-1)
		{	
		if((array[r][c+1])!='.')
			{
			count=count + 1;
			}
		}
	if((r>0) && (c>0))
		{	
		if((array[r-1][c-1])!='.')
			{
			count=count + 1;
			}
		}
	if((r>0) && (c<columns-1))
		{	
		if((array[r-1][c+1])!='.')
			{
			count=count + 1;
			}
		}
	if((r<rows-1) && (c<columns-1))
		{	
		if((array[r+1][c+1])!='.')
			{
			count=count + 1;
			}
		}
	if((r<rows-1) && (c>0))
		{	
		if((array[r+1][c-1])!='.')
			{
			count=count + 1;
			}
		}
	return count;
	}
void LiveCount(int **array,char **array1,int rows,int columns)
	{
	int i,j;
	int a;
	for(i=0;i<(rows);i=i+1)
		{
		for(j=0;j<(columns);j=j+1)
			{
			if(array1[i][j]=='.')
				{
				if(array[i][j]==3)
					{
					array1[i][j]='x';
					printf("%c",array1[i][j]);
					}
				else
					{
					array1[i][j]='.';
					printf("%c",array1[i][j]);
					}
				}	

			else if(array1[i][j]!='.') 
				{
				if((array[i][j]==0) || (array[i][j]==1) || (array[i][j]>=4))
					{
					array1[i][j]='.';
					printf("%c",array1[i][j]);
					}
				else if((array[i][j]==2) || (array[i][j]==3))
					{
					a=toascii(array1[i][j])-1;
					if(a==46)
						{
						a=a-1;
						}
					char b=a;
					array1[i][j]=b;				
					printf("%c",array1[i][j]);
					}
				}	
			}
		printf("\n");
		}
	}
void TwoDn(int **array,char **array1,int genno,int rows,int columns)
	{
	int m,i,j,b;
	for(m=0;m<genno;m++)
		{
		for(i=0;i<(rows);i=i+1)
			{
			for(j=0;j<(columns);j=j+1)
				{
				b=NeighbourCount(array1,i,j,rows,columns);
				array[i][j]=b;				
				}
			}
		printf("Generation %d\n",m+1);
		LiveCount(array,array1,rows,columns);
		}	
	}	
void Generations(int **array,char **array1,int genno,int rows,int columns)					
	{
	TwoDn(array,array1,genno,rows,columns);	
	}
void LiveNeighbourMatrix(char *file,int genno,int rows,int columns)
	{
	FILE *in=fopen(file,"r");
	int i,j;	
	char a;	
	char **array1=(char **)malloc(rows*sizeof(char*));
	for(i=0;i<(rows);i=i+1)
		{
		array1[i]=(char*)malloc(columns*sizeof(char));
		}
	int **array2=(int **)malloc(rows*sizeof(int*));
	for(i=0;i<(rows);i=i+1)
		{
		array2[i]=(int*)malloc(columns*sizeof(int));
		}
	for(i=0;i<(rows);i=i+1)
		{
		for(j=0;j<(columns);j=j+1)
			{
			fscanf(in,"%c\n",&a);
			array1[i][j]=a;
			}
		}
	Generations(array2,array1,genno,rows,columns);
	}   	
