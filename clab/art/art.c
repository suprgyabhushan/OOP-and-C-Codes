#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
	{
	FILE *in;
	int i,j;
	in=fopen(argv[1],"r");
	int rows=0,columns=0,r=0,c=0;
	fscanf(in,"%d",&rows);
	fscanf(in," %d",&columns);
	char **array=(char **)malloc(rows*sizeof(char*));
	for(i=0;i<rows;i++)
		{
		array[i]=(char*)malloc(columns*sizeof(char));
		}
	for(i=0;i<rows;i++)
		{
		for(j=0;j<columns;j++)
			{
			fscanf(in,"%d",&r);
			fscanf(in," %d ",&c);
			fscanf(in,"%c",&array[i][j]);
			printf("%c",array[i][j]);
			}
		printf("\n");
		}
	printf("\n");
	fclose(in);
	return 0;
	}

