#include <stdio.h>
#include <stdlib.h>

int main(void)

{
char *data;
long m,n,o,p;
printf("%s%c%c\n",
"Content-Type:text/html;charset=iso-8859-1",13,10);
printf("<TITLE>Sorting Array elements</TITLE>\n");
printf("<H3>Sorting Array elements</H3>\n");
data = getenv("QUERY_STRING");
if(data == NULL)
  printf("<P>Error! Error in passing data from form to script.");
else if(sscanf(data,"m=%ld&n=%ld",&m,&n)!=2)
  printf("<P>Error! Invalid data. Data must be numeric.");
else
{
    int i, j, a, number[30];

number[0]=m;
number[1]=n;
number[2]=o;
number[3]=p;

    

     for (i = 0; i < 4; ++i)

    {

        for (j = i + 1; j < 4; ++j)

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

    for (i = 0; i < 4; ++i)

        printf("%d\n", number[i]);

}
