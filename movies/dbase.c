#include<stdio.h>
#include<string.h>
int main()
{
	int value;
	FILE * input= fopen("movies.dat","r+w");
	int x=getc(input),count=0;
    	while(x!=EOF)/*no of lines counted by this program*/
    	{
        	x=getc(input);
        	if(x==10)
            	{
			count=count+1;
		}
    	}
    	fclose(input);
	do
	{	
    		printf("Welcome to the C Movie Database!\nMain menu:\n1: display all movies\n2: display shortest movie\n3: display longest movie\n4: display older movies\n5: display newer movies\n6: display movies in the region specified\n7: display all movies of same actor\n8: display all movies released in same year\n9: display all movies of same length\n10: add movie\n0: quit the program\nEnter option number:");
		scanf("%d",&value);
		if(value==1)
		{
			DisplayAll("movies.dat",count);
		}
		else if(value==2)
		{
			DisplayShortest("movies.dat",count);
   		}
		else if(value==3)
		{
			DisplayLongest("movies.dat",count);
   		}
		else if(value==4)
		{	
			int oldyear;
			printf("Display movies older than what year?");
			scanf("%d",&oldyear);
			DisplayOlder("movies.dat",oldyear);
   		}
		else if(value==5)
		{
			int newyear;
			printf("Display movies newer than what year?");
			scanf("%d",&newyear);
			DisplayNewer("movies.dat",newyear,count);
   		}
		else if(value==6)
		{
			int newyear,oldyear;
			printf("Display movies in between what year?");
			scanf("%d %d",&oldyear,&newyear);
			DisplayInBetween("movies.dat",oldyear,newyear,count);
   		}
		else if(value==7)
		{
			char check[120];
			printf("Display movies of which actor?");
			scanf("%s",check);
			DisplaySameActor("movies.dat",check,count);
   		}
		else if(value==8)
		{
			int sameyear;
			printf("Display movies of what year?");
			scanf("%d",&sameyear);
			DisplaySameYear("movies.dat",sameyear,count);
   		}
		else if(value==9)
		{
			int samelength;
			printf("Display movies of what length?");
			scanf("%d",&samelength);
			DisplaySameLength("movies.dat",samelength,count);
   		}
		else if(value==10)
		{
			addMovie("movies.dat");
   		}
		else if(value==11)
		{
			delete("movies.dat",count);
   		}
	}while(value!=0);
}
