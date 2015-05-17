#include<stdio.h>
int main(int argc,char *argv[])
    {

char  a[255];
    FILE *read;
    
    read=fopen(argv[1],"r");
{
     fgets(a,"%s",stdin);
  fclose(read);
}
	printf("%s",a);
  
    return 0;
    }

