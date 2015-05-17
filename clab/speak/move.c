#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
extern float angle;
int degree(int y,int x)
{
float deg;
deg=180/M_PI;
angle=(atan2(y,x))*deg;
if ((angle>0) && (angle<90))                          
{
printf("%d %d \n",x,y);
speak("right.txt");
}
if ((angle<0) && (angle>(-90)))
{
printf("%d %d \n",x,y);
speak("left.txt");
}
if ((angle>90) && (angle<180))
{
printf("%d %d \n",x,y);
speak("left.txt");
}
if ((angle>(-180)) && (angle<(-90)))
{
printf("%d %d \n",x,y);
speak("right.txt");
}
if (angle==90)
{
printf("%d %d \n",x,y);
speak("straight.txt");
}
}
int main()
{
int a,b;
FILE *in;

in=fopen("image.dat","r");

while(!feof(in))
{
fscanf(in,"%d %d ",&a,&b);
degree(b,a);
}
fclose(in);

return 0;
}




