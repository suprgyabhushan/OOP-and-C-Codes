#include <stdio.h>

int main(int argc, char *argv[])
{
	char line[5];
	FILE *fp;

	if(argc == 1)
	{
		printf("-no input file name is given");
		exit(0);
	}

	if((fp=fopen(argv[1], "rt")) == NULL)
	{
		printf("cannot open file %s", argv[1]);
		exit(1);
	}

	while((fgets(line[1],4,fp) != NULL))
		printf("%s", line[1]);

	fclose(fp);

	return 0;
}
