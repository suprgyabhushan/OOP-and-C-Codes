#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	FILE * input= fopen(argv[1],"r+w");
	if ((argv[1]==NULL) || argv[2] ))
	{
		printf("Usage: ./dbase <valid-file-name>\n");
	}
	else if((input==NULL))
	{
		printf("File Does Not Exist \n");
	}
        else
	{	  	
      
		fclose(input);
		Menu(argv[1]);
	}
	
	return 0;      
}
