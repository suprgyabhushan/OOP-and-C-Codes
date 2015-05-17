#include<stdio.h>
#include<string.h>
 char *reverse ( char *str,int index) ;

int main (void)

{

   char name[100];
char *a;	

   printf ("Enter a mutli-word string : ") ; 

   scanf("%s",name) ;

   a=reverse (name,strlen(name) ) ;
printf("\n");
printf("%s",a);

printf("\n");

}

char *reverse ( char *str,int index)

{

  if (--index < 0 )

  {

     return ;

  }

  else

  {

        putchar ( *(str + index) ) ;  

       reverse (str,index) ;

  }


}
