#include<stdio.h>
int main()
{
char ch[255];
FILE *fp;
FILE *fp2;

    
fp = fopen("song.rra", "r");
fp2 = fopen("songcopy.rra", "w");
while (fscanf(fp, "%s", ch) > 0)
{

fprintf(fp2, "%s",ch);

}
fclose(fp);
fclose(fp2);
remove("song.rra");
rename( "songcopy.rra", "song.rra" );
     
   
return 0;
}



