#include<stdio.h>
#include<string.h>
void DisplayAll(char * file,int n)
{
    FILE*input=fopen(file,"r");
    int ch = getc(input);
    while (ch!=EOF) 
    {
        putchar(ch); 
        ch = getc(input);
    }
    fclose(input);
}
void DisplayShortest(char * file,int n)
{
    FILE*input=fopen(file,"r");
    char movie[120],actor[120],movieOut[120]="",actorOut[120];
    int time,year,min=5000,yearOut;
    int i=1;int ch = getc(input);
    while(i<=n) 
    {   
        fscanf(input,"%s",movie);
        fscanf(input,"%s",actor);
        fscanf(input,"%d",&time);
        fscanf(input,"%d",&year);
        if(min>time)
        {
            min=time;
            strcpy(movieOut,movie);
            strcpy(actorOut,actor);
            yearOut=year;
        }

        ch = getc(input); 
	i=i+1;                           
    }
    fclose(input);
    printf("%s %s %d %d\n",movieOut,actorOut,min,yearOut);
}
void DisplayLongest(char * file,int n)
{
    FILE*input=fopen(file,"r");
    char movie[120],actor[120],movieOut[120]="",actorOut[120]="";
    int time,year,max=0,yearOut;
    int i=1;int ch = getc(input);
    while(i<=n)
    {
        fscanf(input,"%s",movie);
        fscanf(input,"%s",actor);
        fscanf(input,"%d",&time);
        fscanf(input,"%d",&year);
        if(max<time)
        {
            max=time;
            strcpy(movieOut,movie);
            strcpy(actorOut,actor);
            yearOut=year;
        }
        ch = getc(input);
	i=i+1;
    }
    fclose(input);
    printf("%s %s %d %d\n",movieOut,actorOut,max,yearOut);
}
void DisplayOlder(char * file,int oldyear,int n)
{
    FILE*input=fopen(file,"r");
    char movie[120],actor[120];
    int time,year;
    int i=1;int ch = getc(input);
    while(i<=n)
    {
        fscanf(input,"%s",movie);
        fscanf(input,"%s",actor);
        fscanf(input,"%d",&time);
        fscanf(input,"%d",&year);
        if(year<oldyear)
        {
            printf("%s %s %d %d\n",movie,actor,time,year);
        }
        ch = getc(input);
	i=i+1;
    }
    fclose(input);
    
}
void DisplayNewer(char * file,int newyear,int n)
{
    FILE*input=fopen(file,"r");
    char movie[120],actor[120];
    int time,year;
    int i=1;int ch = getc(input);
    while(i<=n)
    {
        fscanf(input,"%s",movie);
        fscanf(input,"%s",actor);
        fscanf(input,"%d",&time);
        fscanf(input,"%d",&year);
        if(year>newyear)
        {
            printf("%s %s %d %d\n",movie,actor,time,year);
        }
        ch = getc(input);
	i=i+1;
    }
    fclose(input);
    
}
void DisplayInBetween(char * file,int oldyear,int newyear,int n)
{
    FILE*input=fopen(file,"r");
    char movie[120],actor[120];
    int time,year;
    int i=1;int ch = getc(input);
    while(i<=n)
    {
        fscanf(input,"%s",movie);
        fscanf(input,"%s",actor);
        fscanf(input,"%d",&time);
        fscanf(input,"%d",&year);
        if(year>=oldyear && year<=newyear)
        {
            printf("%s %s %d %d\n",movie,actor,time,year);
        }
        ch = getc(input);
	i=i+1;
    }
    fclose(input);
    
}
void DisplaySameActor(char * file,char check[120],int n)
{
    FILE*input=fopen(file,"r");
    char movie[120],actor[120];
    int time,year;
    int i=1;int ch = getc(input);
    while(i<=n)
    {
        fscanf(input,"%s",movie);
        fscanf(input,"%s",actor);
        fscanf(input,"%d",&time);
        fscanf(input,"%d",&year);
        if(actor==check)
        {
            printf("%s %s %d %d\n",movie,actor,time,year);
        }
        ch = getc(input);
	i=i+1;
    }
    fclose(input);
    
}
void DisplaySameYear(char * file,int sameyear,int n)
{
    FILE*input=fopen(file,"r");
    char movie[120],actor[120];
    int time,year;
    int i=1;int ch = getc(input);
    while(i<=n)
    {
        fscanf(input,"%s",movie);
        fscanf(input,"%s",actor);
        fscanf(input,"%d",&time);
        fscanf(input,"%d",&year);
        if(year==sameyear)
        {
            printf("%s %s %d %d\n",movie,actor,time,year);
        }
        ch = getc(input);
	i=i+1;
    }
    fclose(input);
    
}
void DisplaySameLength(char * file,int samelength,int n)
{
    FILE*input=fopen(file,"r");
    char movie[120],actor[120];
    int time,year;
    int i=1;int ch = getc(input);
    while(i<=n)
    {
        fscanf(input,"%s",movie);
        fscanf(input,"%s",actor);
        fscanf(input,"%d",&time);
        fscanf(input,"%d",&year);
        if(samelength==time)
        {
            printf("%s %s %d %d\n",movie,actor,time,year);
        }
        ch = getc(input);
	i=i+1;
    }
    fclose(input);
    
}
void addMovie(char * file)
{
	char movie[120],actor[120];
    	int time,year;
	printf("Title:");
	scanf("%s",movie);
	printf("Main actors:");
	scanf("%s",actor);
	printf("Year:");
	scanf("%d",&year);
	printf("Length in minutes:");
	scanf("%d",&time);
	FILE*input=fopen(file,"r+w");
    	int ch = getc(input);
    	while (ch!=EOF) 
    	{ 
        	ch = getc(input);
    	}
	fprintf(input,"%s %s %d %d",movie,actor,time,year);
    	fclose(input);
}	
void delete(char * file,int n)
{	
	char movie[120],actor[120];
    	int time,year;
	FILE*input=fopen(file,"r");
	FILE * result=fopen("replica.c","w");
	char movietodelete[120];
	printf("Display movie name?");
	scanf("%s",movietodelete);
	int i=1;int ch = getc(input);
	while (i<=n)
	{
		fscanf(input,"%s",movie);
        	fscanf(input,"%s",actor);
        	fscanf(input,"%d",&time);
        	fscanf(input,"%d",&year);
		if(movie!=movietodelete)
		{
			fprintf(result,"%s %s %d %d\n",movie,actor,time,year);
		}
		ch = getc(input);
		i=i+1;
	}
	fclose(input);
	fclose(result);
	remove("movies.dat");
	rename("replica.c", "movies.dat");	
}

