#include<stdio.h>
#include<stdlib.h>
int main()
	{
	int row,column,r,c,i,j,m,o;
	printf("No of rows : \n");
	scanf("%d",&row);
	printf("No of columns : \n");
	scanf("%d",&column);
	r=row;
	c=column;
	int **a=(int **)malloc(sizeof(int *)*r);
	for (j=0; j<r; j++)
	{
         a[j] = (int *)malloc(c * sizeof(int));
	}


	int count = 0,k=0,l=0;	
	while((k<r)&&(l<c))
	{    		
        for (m = l; m < c; m=m+1)
        	{
		count=count+1;
        	a[k][m] = count;
				  
        	}
        k=k+1;
        	
        for (m = k; m < r; m=m+1)
        	{
		count=count+1;
        	a[m][c-1]= count;
		}
       	 c=c-1;
	 /*printf("%d\n",count);*/
	 if ( k < r)
         	{
            	for (m = c-1; m >= l; m=m-1)
           		{
			count=count+1;
                	a[r-1][m]=count;
            		}
            	r=r-1;
        	}
	/*printf("%d\n",count);*/
	 			
        	
        if (l < c)
        	{
        	for (m = r-1; m >= k; m=m-1)
        		{
			count=count+1;
               		a[m][l]=count;
			 
            		}
            	l=l+1 ; 
        	}  
	}     
    	/*printf("%d\n",count); 

	for (i = 0; i <  r; i++)
	{
     		 for (o= 0; o< c; o++)
		{
        		 printf("%d ", a[i][o]);
		}
	printf("\n");
	}
	printf("%d",a[0][0]);
	printf("\t");
	printf("%d",a[0][1]);
	printf("\t");
	printf("%d",a[0][2]);
	printf("\n");
	printf("%d",a[1][0]);
	printf("\t");
	printf("%d",a[1][1]);
	printf("\t");
	printf("%d",a[1][2]);
	printf("\n");
	printf("%d",a[2][0]);
	printf("\t");
	printf("%d",a[2][1]);
	printf("\t");
	printf("%d",a[2][2]);
	printf("\n");
    	for (i = 0; i <  r; i++)
	{
      		for (j = 0; j < c; j++)
		{
         		arr[i][j] = ++count;  
		}
	}*/
	int p;
    	for(i=0;i<row;i=i+1)
	{
     		for(p=0;p<column;p=p+1)
		{
 printf("%d \t", a[i][p]);
		}
	printf("\n");
	}

return 0;
}





	




	
