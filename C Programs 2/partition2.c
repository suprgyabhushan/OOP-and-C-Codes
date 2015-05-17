#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
	{
	int i,no1,no2,z;
	FILE *in,*stereo;
	stereo=fopen(argv[1],"r");
	char ch;
	while(ch!='%')
		{
		fscanf(stereo,"%c",&ch);
		for(i=2;i<argc;i++)
			{
			in=fopen(argv[i],"a");
			fprintf(in,"%c",ch);
			fclose(in);
			}
		}
	for(i=2;i<argc;i++)
		{
		in=fopen(argv[i],"a+");
		fprintf(in,"%%\n");
		fclose(in);
		}
	fscanf(stereo,"%c",&ch);
	while(!feof(stereo))
		{
		fscanf(stereo,"%d %d",&no1,&no2);
		for(z=1;z<argc-1;z++)
			{
			if(no1==z)
				{
				in=fopen(argv[no1+1],"a");
				fprintf(in,"%d\n",no2);
				fclose(in);
				}
			else if(no1>=argc)
				continue;
			}
		}
	return 0;
	}
