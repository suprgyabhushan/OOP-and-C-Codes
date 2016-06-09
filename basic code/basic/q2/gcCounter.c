#include<stdio.h>
#include<string.h>
int chCount(char *str, char x)
{
int len, count=0, i;
len = strlen(str);
for (i=0;i<len;i++)       /*counting g and c*/
if(str[i] == x) count++;
return count;
}
float gcCount(char *seq)
{
int lenSeq, cCount, gCount;
float gcPercent;
lenSeq = strlen(seq);
2gCount = chCount(seq,'g');/*counting percentage*/
cCount = chCount(seq,'c');
gcPercent = 100 * (float)(gCount+cCount)/lenSeq;
return gcPercent;
}
int main()
{
char dna[100];
printf("Enter a DNA sequence: ");
scanf("%s",dna);
printf("The g-c and c-g combinations in this dna is:%3.2f\n",gcCount(dna));
return 0;
}
