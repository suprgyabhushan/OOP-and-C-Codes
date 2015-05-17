#include<stdio.h>
int main(int ac,char * av[])
{
	char line[255];
	FILE * input;FILE * result;
	input=fopen(av[1],"r+w");
	fgets(line,255,(FILE*)input);
	while(*line!='%')
	{	
		printf("%s",line);
		fgets(line,255,(FILE*)input);
		
}

fclose(input);
printf("%%");
return 0;
}
