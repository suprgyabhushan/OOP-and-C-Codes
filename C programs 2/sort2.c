#include <stdio.h>
#include <stdlib.h>

int main(void)

{
char *data;
int m,n,o,p;
printf("%s%c%c\n",
"Content-Type:text/html;charset=iso-8859-1",13,10);
printf("<TITLE>Sorting Array elements</TITLE>\n");
printf("<H3>Sorting Array elements</H3>\n");
data = getenv("QUERY_STRING");
if(data == NULL)
  printf("<P>Error! Error in passing data from form to script.");
sscanf(data,"m=%d",&m);
int number[m],i,j;
int l=m;  

     for (i = 0; i < l; i++)

    {
	
	sscanf(data,"m=%d",&m);
	number[i]=m;
        for (j = i + 1; j < l; j++)

        {

            if (number[i] > number[j])

            {

                a =  number[i];

                number[i] = number[j];

                number[j] = a;

            }

        }

    }

    printf("The numbers arranged in ascending order are given below \n");

    printf("%d\n",number[0]);
printf("%d\n",number[1]);
printf("%d\n",number[2]);
printf("%d\n",number[3]);


}
