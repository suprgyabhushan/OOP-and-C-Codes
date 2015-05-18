#include<stdio.h>
int main(int argc,char *argv[])
    {

    FILE *read;
    char ch[100];
    read=fopen(argv[1],"r");
fgets (ch, 100, read);
 fclose(read);
    

    return 0;
    }

