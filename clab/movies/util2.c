#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int Menu(char *Movies)
{

	int ShowMenu()
	{
		printf("Welcome to the C Movie Database!\nMain menu:\n1: display all movies\n2: display shortest movie\n3: display longest movie\n4: display older movies\n5: display newer movies\n6: display movies in the region specified\n7: display all movies of same actor\n8: display all movies released in same year\n9: display all movies of same length\n10: add movie\n0: quit the program\nEnter option number: ");
	}

	void ShowAllMovies(char *movies)
	{
		FILE *data=fopen(movies,"r");
    		int ch = getc(data);
    		while (ch!=EOF) 
    		{
        		putchar(ch); 
        		ch = getc(data);
    		}
    		fclose(data);
	}

	void ShowShortestMovie(char *movies)
	{
    		FILE *data=fopen(movies,"r");
    		int time,minimum=5000,yr,yr2; 	
    		#define LINE_SIZE 400 	
    		char moviename[LINE_SIZE],actorname[LINE_SIZE],movie2name[LINE_SIZE]="",actor2name[LINE_SIZE];
       
    		while(!feof(data)) 
    		{   
        		fscanf(data,"%s",moviename);
        		fscanf(data,"%s",actorname);
        		fscanf(data,"%d",&time);
        		fscanf(data,"%d\n",&yr);
        		if(minimum>time)
        		{
            			minimum=time;
            			strcpy(movie2name,moviename);
            			strcpy(actor2name,actorname);
            			yr2=yr;
        		}
			                                
    		}
    		fclose(data);
    		printf("%s ",movie2name);
		printf("%s ",actor2name); 
		printf("%d ",minimum); 
		printf("%d \n",yr2);
	}

	void ShowLongestMovie(char *movies)
	{
    		FILE *data=fopen(movies,"r");
    		int time,maximum=0,yr,yr2;
    		#define LINE_SIZE 400
    		char moviename[LINE_SIZE],actorname[LINE_SIZE],movie2name[LINE_SIZE]="",actor2name[LINE_SIZE]="";
      
    		while(!feof(data))
    		{
        		fscanf(data,"%s",moviename);
        		fscanf(data,"%s",actorname);
        		fscanf(data,"%d",&time);
        		fscanf(data,"%d\n",&yr);
        		if(maximum<time)
        		{
            			maximum=time;
            			strcpy(movie2name,moviename);
            			strcpy(actor2name,actorname);
            			yr2=yr;
        		}
       
    		}
    		fclose(data);
    		printf("%s %s %d %d\n",movie2name,actor2name,maximum,yr2);
	}

	void ShowBeforeMovie(char * movies)
	{
    		FILE*data=fopen(movies,"r");
		int time,yr,yearbefore;
    		#define LINE_SIZE 400	
    		char moviename[LINE_SIZE],actorname[LINE_SIZE];
   
    		printf("Display movies older than what year? ");
    		scanf("%d",&yearbefore);
		while(!feof(data))
    		{
        		fscanf(data,"%s",moviename);
        		fscanf(data,"%s",actorname);
        		fscanf(data,"%d",&time);
        		fscanf(data,"%d",&yr);
        		if(yr<yearbefore)
        		{
            			printf("%s %s %d %d\n",moviename,actorname,time,yr);
        		}
        	}
		fclose(data);
    
	}

	void ShowAfterMovie(char * movies)
	{
    		FILE*data=fopen(movies,"r");
    		int time,yr;
		int yearafter;
    		#define LINE_SIZE 400	
    		char moviename[LINE_SIZE],actorname[LINE_SIZE];
    
    		printf("Display movies newer than what year? ");
  	  	scanf("%d",&yearafter);
		while(!feof(data))
    		{
        		fscanf(data,"%s",moviename);
        		fscanf(data,"%s",actorname);
        		fscanf(data,"%d",&time);
        		fscanf(data,"%d \n",&yr);
        		if(yr>yearafter)
        		{
            			printf("%s %s %d %d\n",moviename,actorname,time,yr);
        		}	       
		}
	
		fclose(data);
    
	}

	void ShowBetweenMovies(char *movies)
	{
    		FILE*data=fopen(movies,"r");
    		int time,yr;
    		#define LINE_SIZE 400
    		char moviename[LINE_SIZE],actorname[LINE_SIZE];
    		int yearbefore,yearafter;
    		printf("Display movies in between what years? ");
    		scanf("%d %d",&yearbefore,&yearafter);
    		
    		while(!feof(data))
    		{
        		fscanf(data,"%s",moviename);
        		fscanf(data,"%s",actorname);
        		fscanf(data,"%d",&time);
        		fscanf(data,"%d \n",&yr);
        		if(yr>=yearbefore && yr<=yearafter)
        		{
            			printf("%s %s %d %d\n",moviename,actorname,time,yr);
        		}
        
    		}
    		fclose(data);
    
	}

	void ShowMoviesSameActor(char *movies,char samemoviesactor[400])
	{
    		FILE*data=fopen(movies,"r");
   		int time,yr;
    
    		#define LINE_SIZE 400
    		char moviename[LINE_SIZE],actorname[LINE_SIZE];
    		char *a;
    		char *b;
    		char *c;
    		void ToLower( char *p )
    		{
       			while( *p )
       			{
          			*p=tolower( *p );
          			p++;
       			}
    		} 


    		printf("Display movies of which actor? ");
    		scanf("%s",samemoviesactor);
    
    		while(!feof(data))
    		{
        		fscanf(data,"%s",moviename);
        		fscanf(data,"%s",actorname);
        		fscanf(data,"%d",&time);
        		fscanf(data,"%d\n",&yr);
       
		
        		if(strcasecmp(samemoviesactor,actorname)==0)
        		{
            
            			printf("%s %s %d %d\n",moviename,actorname,time,yr);
        		}       
	
    		}
    		fclose(data);
    
	}

	void ShowMoviesSameYear(char *movies)
	{
    		FILE*data=fopen(movies,"r");
    		#define LINE_SIZE 400
    		char moviename[LINE_SIZE],actorname[LINE_SIZE];
   		int time,yr;
		int moviesofsameyear;
    		printf("Display movies of what year? ");
    		scanf("%d",&moviesofsameyear);
    
    		while(!feof(data))
    		{
        		fscanf(data,"%s",moviename);
        		fscanf(data,"%s",actorname);
        		fscanf(data,"%d",&time);
        		fscanf(data,"%d \n",&yr);
        		if(yr==moviesofsameyear)
        		{
            			printf("%s %s %d %d\n",moviename,actorname,time,yr);
        		}
    		}
    		fclose(data);
    
	}

	void ShowMoviesSameLength(char *movies)
	{
    		FILE*data=fopen(movies,"r");
   		int time,yr;
    		#define LINE_SIZE 400
    		char moviename[LINE_SIZE],actorname[LINE_SIZE];
    		int equallengthmovies;
    		printf("Display movies of what length? ");
    		scanf("%d",&equallengthmovies);
    
    		while(!feof(data))
    		{
        		fscanf(data,"%s",moviename);
        		fscanf(data,"%s",actorname);
        		fscanf(data,"%d",&time);
        		fscanf(data,"%d \n",&yr);
        		if(equallengthmovies==time)
        		{
            			printf("%s %s %d %d\n",moviename,actorname,time,yr);
        		}
        
    		}
    		fclose(data);
    
	}

	void MovieAdding(char *movies)
	{
        
		#define LINE_SIZE 400
		int time,yr;
		char moviename[LINE_SIZE],actorname[LINE_SIZE];
		printf("Adding movie...\n");
  	
		printf("    Title: ");
		scanf("%s",moviename);
		printf("    Main actors: ");
		scanf("%s",actorname);
		printf("    Year: ");
		scanf("%d",&yr);
		printf("    Length in minutes: ");
		scanf("%d",&time);
		
		FILE*data=fopen(movies,"r+w");
        	int ch=getc(data);
    		while (ch!=EOF) 
    		{	 
        		ch = getc(data);
    		}	
		fprintf(data,"%s %s %d %d \n",moviename,actorname,time,yr);
    		fclose(data);
		printf("Movie Added.\n");
	}
	
	void MovieDelete(char * movies)
	{
		#define LINE_SIZE 400
		int time,yr;	
		char moviename[LINE_SIZE],actorname[LINE_SIZE];
    	
		FILE*data=fopen(movies,"r");
		FILE *data1=fopen("replica.c","w");
		char delmov[LINE_SIZE];
		printf("Display movie name? ");
		scanf("%s",delmov);
	
		while (!feof(data))
		{
			fscanf(data,"%s",moviename);
        		fscanf(data,"%s",actorname);
        		fscanf(data,"%d",&time);
        		fscanf(data,"%d\n",&yr);
			if(!(strcmp(moviename,delmov)==0))
			{
				fprintf(data1,"%s %s %d %d\n",moviename,actorname,time,yr);
			}
		
		}
		fclose(data);
		fclose(data1);
		remove(movies);
		rename("replica.c", movies);	
	}

	int value; 

	do
	{	
    		ShowMenu();
		scanf("%d",&value);
		if(value==1)
		{
			ShowAllMovies(Movies);
		}
		else if(value==2)
		{
			ShowShortestMovie(Movies);
   		}
		else if(value==3)
		{
			ShowLongestMovie(Movies);
   		}
		else if(value==4)
		{			
			ShowBeforeMovie(Movies);
   		}
		else if(value==5)
		{
			ShowAfterMovie(Movies);
   		}
		else if(value==6)
		{			
			ShowBetweenMovies(Movies);
   		}
		else if(value==7)
		{				
			char samemoviesactor[400];
			ShowMoviesSameActor(Movies,samemoviesactor);
   		}
		else if(value==8)
		{
			ShowMoviesSameYear(Movies);
   		}
		else if(value==9)
		{
			ShowMoviesSameLength(Movies);
   		}
		else if(value==10)
		{
			MovieAdding(Movies);
   		}
		else if(value==11)
		{
			MovieDelete(Movies);
   		}
	}while(value!=0);

	return 0;
}

