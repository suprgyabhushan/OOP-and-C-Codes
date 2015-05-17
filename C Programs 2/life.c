#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void readfile(FILE *, int *, int *);
int check(char **, int, int);
int checktoprow(char **, int, int);
int checkbottomrow(char **, int, int);
int checkfirstcolumn(char **, int, int);
int checklastcolumn(char **, int, int);
int check00(char **, int, int);
int check0c(char **, int, int);
int checkr0(char **, int, int);
int checkrc(char **, int, int);
void update(char **, char **, int, int, int);
void store(FILE *, char **);


int main(int argc, char * argv[])
{
	int gen = atoi(argv[2]), rows, columns;
	FILE *in, *in2;
	int *x, *y;
	x = &rows;
	y = &columns;
	in = fopen(argv[1], "r+w");
	readfile(in, x, y);
	char **array1;
	int i,j,k,m,g;
	array1 = (char**)malloc(sizeof(char*) * rows);
	for(i = 0; i < rows; i++)
		array1[i] = (char*)malloc(sizeof(char) * columns);
	char **array2;
	array2 = (char**)malloc(sizeof(char*) * columns);
	for(j = 0; j < rows; j++)
		array2[j] = (char*)malloc(sizeof(char) * columns);
	in2 = fopen(argv[1], "r");
	store(in2, array1);
	fseek(in2, 0, SEEK_SET);
	//in2 = fopen(argv[1], "r");	
	store(in2, array2);

	for(i = 0; i <= gen; i++)
	{
		printf("Generation %d:\n", i);
		for(k = 0; k <rows; k++)
		{
			for (m = 0; m < columns; m++)
			{
				printf("%c", array1[k][m]);
				if(k == 0)
				{
					if(m == 0)
						g = check00(array1, k, m);
					else if(m == columns-1)
						g = check0c(array1, k, m);
					else
						g = checktoprow(array1, k, m);
				}
				else if(m == 0)
				{
					if(k == 0)
						continue;
					else if(k == rows-1)
						g = checkr0(array1, k, m);
					else
						g = checkfirstcolumn(array1, k, m);
				}
				else if(k == rows-1)
				{
					if(m == 0)
						continue;
					else if(m == columns-1)
						g = checkrc(array1, k, m);
					else
						g = checkbottomrow(array1, k, m);
				}
				else if(m == columns-1)
				{
					if(k == 0)
						continue;
					else if(k == rows-1)
						continue;
					else
						g = checklastcolumn(array1, k, m);
				}
				else
				{
					g = check(array1, k, m);
				}
				update(array2, array1, k, m, g);
			}
			printf("\n");
		}
		for(k = 0; k <rows; k++)
		{
			for (m = 0; m < columns; m++)
			{
				array1[k][m]=array2[k][m];
			}
		}

	}
}
