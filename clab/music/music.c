#include<stdio.h>
int main(int ac,char * av[])
{
	char line[255];
	FILE * input;FILE * result;
	input=fopen(av[2],"r+w");
	fgets(line,255,(FILE*)input);
	while(*line!='%')
	{	
		printf("%s",line);
		fgets(line,255,(FILE*)input);
	}
	printf("%s",line);
	int value,thrshold,negthrshold;
	fscanf(input,"%d",&value);
	thrshold=atoi(av[1]);
	negthrshold=-thrshold;
	while(value<=thrshold && value>=negthrshold)
	{
		fscanf(input,"%d",&value);
	}	
	printf("%d",value);
	int ch = getc(input);
	while (ch != EOF) 
	{
		putchar(ch); 
 
		ch = getc(input);
	}
	fclose(input);
}
