#include<stdio.h>
#include<string.h>


 int *reverse( int *str,int index)

{

  if (--index < 0 )

  {

     return ;

  }

  else

  {

        printf("%d",*(str+index)) ;  

       reverse(str,index) ;

 
      
}
  


}

int main (void)

{

  int n;

   printf ("Enter a no : ") ; 

   scanf("%d",&n) ;

  *reverse(n,4) ;
printf("\n");

}


