/* 
 *
 * Two dimensional arrays, pointer arrays, pointer to pointer class activity
 * createdBy: M. Rao
 * Date: November-4-2013
 * Revision: 1.4
 * 
 *
 */


#include<stdio.h>

void display5(int *a);
void display6(int *a);
void display(int a[][4]);
void display2(int (*a)[4]);
void display3(int *a[]);
void display4(int **a);


// 2D arrays are stored in continuous memory
void display5(int *a)
    {
    int i=0; 
    for(i=0;i<12;i++)
        {
        //printf("%3d ",a[i]);
        printf("%3d ",*(a+i)); //alternate way 
        }
    printf("\n");
    }

void display6(int *a)
    {
    int i=0,j=0;
    for(i=0;i<3;i++)
        {
        for(j=0;j<4;j++)
            //printf("%3d ",*(a+(i*4)+j));
            //printf("%3d ",(a[i*4+j])); // alternate way 
            printf("%3d ",*(&a[i*4]+j)); // alternate way 
        printf("\n");
        }
    }

void display(int a[][4])
    {
    int i,j;
    for(i=0;i<3;i++)
        {
        for(j=0;j<4;j++)
            printf("%3d ",a[i][j]);
        printf("\n");
        }
    }

void display2(int (*a)[4])
    {
    int i,j;
    //printf("a:%p\n",a);
    //printf("a+1:%p\n",a+1); // address is 16 bytes space 
    for(i=0;i<3;i++)
        {
        for(j=0;j<4;j++)
            printf("%3d ",a[i][j]);
        printf("\n");
        }
    }

void display3(int *a[])
    {
    int i,j;
    //printf("a:%p\n",a);
    //printf("a+1:%p\n",a+1); // address is 8 bytes space
    for(i=0;i<3;i++)
        {
        for(j=0;j<4;j++)
            printf("%3d ",a[i][j]);
        printf("\n");
        }
    }


void display4(int **a)
    {
    int i,j;
    for(i=0;i<3;i++)
        {
        for(j=0;j<4;j++)
            printf("%3d ",a[i][j]);
        printf("\n");
        }
    }



int main()
    {
    int adata[3][4],i,j,count=0,*lines[3],*otherlines[3], **other,*x;

    int array[2]={10,10};


    // initializing the 2-D array
    for (i=0;i<3;i++)
        {
        for(j=0;j<4;j++)
            {
            adata[i][j]=count++;
            }
        }

    //Initializing pointer array
    for(i=0;i<3;i++)
        lines[i] = adata[i];

    //Initializing pointer array
    for(j=0;j<3;j++)
        otherlines[j] = &adata[0][j];


    printf("after display5()\n");
    display5((int*)adata);

    printf("after display6()\n");
    display6((int*)adata);


    printf("after display()\n");
    display(adata);

    printf("after display2()\n");
    display2(adata);

    printf("lines: after display3()\n");
    //display3(adata);  // segmentation fault
    display3(lines);

    printf("otherlines: after display3()\n");
    display3(otherlines);

    other = lines;
    printf("other: after display3()\n");
    display3(other);

    other = lines;
    printf("other: after display4()\n");
    display4(other);

    x = &adata[0][0];
    other = &x;
    printf("other: after display4()\n");
    display4(other);


    return 1;
    }
