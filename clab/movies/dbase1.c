#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	FILE * input= fopen(argv[1],"r+w");
	if (argv[1]==NULL || argv[2] )
	{
		printf("Usage: ./dbase <valid-file-name>\n");
	}
	else if((input==NULL))
	{
		printf("File Does Not Exist \n");
	}
        else
	{
		int value;   	
      
		fclose(input);
		do
		{	
    			ShowMenu();
			scanf("%d",&value);
			if(value==1)
			{
				ShowAllMovies(argv[1]);
			}
			else if(value==2)
			{
			ShowShortestMovie(argv[1]);
   			}
			else if(value==3)
			{
			ShowLongestMovie(argv[1]);
   			}
			else if(value==4)
			{			
				int yearbefore;
				ShowBeforeMovie(argv[1],yearbefore);
   			}
			else if(value==5)
			{
				int yearafter;
				ShowAfterMovie(argv[1],yearafter);
   			}
			else if(value==6)
			{			
				int yearbefore;
				int yearafter;
				ShowBetweenMovies(argv[1],yearbefore,yearafter);
   			}
			else if(value==7)
			{				
				char samemoviesactor[400];
				ShowMoviesSameActor(argv[1],samemoviesactor);
   			}
			else if(value==8)
			{
				int moviesofsameyear;
				ShowMoviesSameYear(argv[1],moviesofsameyear);
   			}
			else if(value==9)
			{
				int equallengthmovies;
				ShowMoviesSameLength(argv[1],equallengthmovies);
   			}
			else if(value==10)
			{
				MovieAdding(argv[1]);
   			}
			else if(value==11)
			{
				MovieDelete(argv[1]);
   			}
			}while(value!=0);
        }
	return 0;      
}
