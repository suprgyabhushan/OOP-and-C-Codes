#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char * argv[])
{
	FILE *in;
	char line[511];
	in = fopen(argv[1], "r");
	while(!feof(in))
	{
		fgets(line, 511 , in);
		if (strcmp("sentence1: <s> DIAL TWO </s>\n", line) == 0)
		{
			printf("%s\n", line);
			printf("raghav\n");
			break;
		}
	}
	fclose(in);
	return 0;
}
