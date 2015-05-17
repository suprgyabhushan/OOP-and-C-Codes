#include<stdio.h>
#include<string.h>
void DisplayAllMovies(char *movies,int n)
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
void DisplayShortestMovie(char *movies,int n)
{
    FILE *data=fopen(movies,"r");
    #define LINE_SIZE 400 	
    char moviename[LINE_SIZE],actorname[LINE_SIZE],movie2name[LINE_SIZE]="",actor2name[LINE_SIZE];
    int time,yr,minimum=5000,yr2;
    int i=1;int ch = getc(data);
    while(i<=n) 
    {   
        fscanf(data,"%s",moviename);
        fscanf(data,"%s",actorname);
        fscanf(data,"%d",&time);
        fscanf(data,"%d",&yr);
        if(minimum>time)
        {
            minimum=time;
            strcpy(movie2name,moviename);
            strcpy(actor2name,actorname);
            yr2=yr;
        }

        ch = getc(data); 
	i=i+1;                           
    }
    fclose(data);
    printf("%s %s %d %d\n",movie2name,actor2name,minimum,yr2);
}
void DisplayLongest(char *movies,int n)
{
    FILE *data=fopen(movies,"r");
    #define LINE_SIZE 400
    char moviename[LINE_SIZE],actorname[LINE_SIZE],movie2name[LINE_SIZE]="",actor2name[LINE_SIZE]="";
    int time,yr,maximum=0,yr2;
    int i=1;int ch = getc(data);
    while(i<=n)
    {
        fscanf(data,"%s",moviename);
        fscanf(data,"%s",actorname);
        fscanf(data,"%d",&time);
        fscanf(data,"%d",&yr);
        if(maximum<time)
        {
            maximum=time;
            strcpy(movie2name,moviename);
            strcpy(actor2name,actorname);
            yr2=yr;
        }
        ch = getc(data);
	i=i+1;
    }
    fclose(data);
    printf("%s %s %d %d\n",movie2name,actor2name,maximum,yr2);
}
void DisplayOlder(char * movies,int yearbefore,int n)
{
    FILE*data=fopen(movies,"r");
    #define LINE_SIZE 400	
    char moviename[LINE_SIZE],actorname[LINE_SIZE];
    int time,yr;
    
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
void DisplayNewer(char * movies,int newyear,int n)
{
    FILE*data=fopen(movies,"r");
    char moviename[120],actorname[120];
    int time,yr;
    int i=1;int ch = getc(data);
    while(i<=n)
    {
        fscanf(data,"%s",moviename);
        fscanf(data,"%s",actorname);
        fscanf(data,"%d",&time);
        fscanf(data,"%d",&yr);
        if(yr>newyear)
        {
            printf("%s %s %d %d\n",moviename,actorname,time,yr);
        }
        ch = getc(data);
	i=i+1;
    }
    fclose(data);
    
}
void DisplayInBetween(char * movies,int oldyear,int newyear,int n)
{
    FILE*data=fopen(movies,"r");
    char moviename[120],actorname[120];
    int time,yr;
    int i=1;int ch = getc(data);
    while(i<=n)
    {
        fscanf(data,"%s",moviename);
        fscanf(data,"%s",actorname);
        fscanf(data,"%d",&time);
        fscanf(data,"%d",&yr);
        if(yr>=oldyear && yr<=newyear)
        {
            printf("%s %s %d %d\n",moviename,actorname,time,yr);
        }
        ch = getc(data);
	i=i+1;
    }
    fclose(data);
    
}
void DisplaySameActor(char * movies,char check[120],int n)
{
    FILE*data=fopen(movies,"r");
    char moviename[120],actorname[120];
    int time,yr;
    int i=1;int ch = getc(data);
    while(i<=n)
    {
        fscanf(data,"%s",moviename);
        fscanf(data,"%s",actorname);
        fscanf(data,"%d",&time);
        fscanf(data,"%d",&yr);
        if(strcmp(actorname,check)==0)
        {
            printf("%s %s %d %d\n",moviename,actorname,time,yr);
        }
        ch = getc(data);
	i=i+1;
    }
    fclose(data);
    
}
void DisplaySameYear(char * movies,int sameyear,int n)
{
    FILE*data=fopen(movies,"r");
    char moviename[120],actorname[120];
    int time,yr;
    int i=1;int ch = getc(data);
    while(i<=n)
    {
        fscanf(data,"%s",moviename);
        fscanf(data,"%s",actorname);
        fscanf(data,"%d",&time);
        fscanf(data,"%d",&yr);
        if(yr==sameyear)
        {
            printf("%s %s %d %d\n",moviename,actorname,time,yr);
        }
        ch = getc(data);
	i=i+1;
    }
    fclose(data);
    
}
void DisplaySameLength(char * movies,int samelength,int n)
{
    FILE*data=fopen(movies,"r");
    char moviename[120],actorname[120];
    int time,yr;
    int i=1;int ch = getc(data);
    while(i<=n)
    {
        fscanf(data,"%s",moviename);
        fscanf(data,"%s",actorname);
        fscanf(data,"%d",&time);
        fscanf(data,"%d",&yr);
        if(samelength==time)
        {
            printf("%s %s %d %d\n",moviename,actorname,time,yr);
        }
        ch = getc(data);
	i=i+1;
    }
    fclose(data);
    
}
void addMovie(char * movies)
{
	char moviename[120],actorname[120];
    	int time,yr;
	printf("Title:");
	scanf("%s",moviename);
	printf("Main actors:");
	scanf("%s",actorname);
	printf("Year:");
	scanf("%d",&yr);
	printf("Length in minutes:");
	scanf("%d",&time);
	
	FILE*data=fopen(movies,"r+w");
	fprintf(data,"%s %s %d %d \n",moviename,actorname,time,yr);
    	int ch = getc(data);
    	while (ch!=EOF) 
    	{ 
        	ch = getc(data);
    	}
	
    	fclose(data);
}	
void delete(char * movies,int n)
{	
	char moviename[120],actorname[120];
    	int time,yr;
	FILE*data=fopen(movies,"r");
	FILE * result=fopen("replica.c","w");
	char movietodelete[120];
	printf("Display moviename name?");
	scanf("%s",movietodelete);
	int i=1;int ch;
	while (i<=n)
	{
		fscanf(data,"%s",moviename);
        	fscanf(data,"%s",actorname);
        	fscanf(data,"%d",&time);
        	fscanf(data,"%d",&yr);
		if(!(strcmp(moviename,movietodelete)==0))
		{
			fprintf(result,"%s %s %d %d\n",moviename,actorname,time,yr);
		}
		ch = getc(data);
		i=i+1;
	}
	fclose(data);
	fclose(result);
	remove("movies.dat");
	rename("replica.c", "movies.dat");	
}

