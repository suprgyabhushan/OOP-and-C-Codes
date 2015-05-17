#include<stdio.h>
#include<stdlib.h>
#include<math.h>
extern float angle;
void change(float *u,float*v)
{
if(*u>0)
	*u=*u-10;
else
        *u=*u+10;
if(*v>0)
        *v=*v-10;
else
        *v=*v+10;
}
int main(int argc,char* argv[])
{   
    float currD,finalD;
    float u,x=atof(argv[1]);
    float v,y=atof(argv[2]);
	while(1)
    {	
	printf("%0.2f %0.2f\n",x,y);
	currD=powf(x,2)+powf(y,2);
	u=x;
	v=y;        
	change(&u,&v);
        finalD=powf(u,2)+powf(v,2);
        if(finalD>=currD)
	 break;
	
	angle=atan2(y,x)*180/M_PI;
        if(angle==90||angle==-90)
        	{
            speak("straight.txt");
    		}
        else if(((0<angle)&&(angle<90))||((-180<angle)&&(angle<-90)))
        	{
            speak("right.txt");
            }
        else if(((90<angle)&&(angle<180))||((0>angle)&&(angle>-90)))
        	{
            	speak("left.txt");
            	}
        change(&x,&y);
	}
}
