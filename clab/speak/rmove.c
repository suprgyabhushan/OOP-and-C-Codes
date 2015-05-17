#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
extern float angle;
float degree(float y,float x)
{
	float deg;
	deg=180/M_PI;
	angle=(atan2(y,x))*deg;
	if ((angle>0) && (angle<90))                          
	{
		printf("%3.2f %3.2f \n",x,y);
		speak("right.txt");
	}
	if ((angle<0) && (angle>(-90)))
	{	
		printf("%3.2f %3.2f \n",x,y);
		speak("left.txt");
	}
	if ((angle>90) && (angle<180))
	{
		printf("%3.2f %3.2f \n",x,y);
		speak("left.txt");
	}
	if ((angle>(-180)) && (angle<(-90)))
	{
		printf("%3.2f %3.2f \n",x,y);
		speak("right.txt");
	}
	if ((angle==90 || angle==(-90)))
	{
		printf("%3.2f %3.2f \n",x,y);
		speak("straight.txt");
	}
	if((x==0) && (y==0))
	{
		printf("%3.2f %3.2f \n",x,y);
	}
	if((x>=0) && (y==0))
	{
		printf("%3.2f %3.2f \n",x,y);
	}
	if((x<=0) && (y==0))
	{
		printf("%3.2f %3.2f \n",x,y);
	}
}
int main(int argc,char * argv[])
{
	float a,b,newa,newb,d,newd,newd1;
	a=atof(argv[1]);
	b=atof(argv[2]);
	d=sqrt(a*a + b*b);
	if((a>0) && (b>0))
	{
		newa=a-10;
		newb=b-10;
		newd=sqrt(newa*newa + newb*newb);
		if((newd==d) || (newd>d))
		{
			printf("%3.2f %3.2f \n",a,b);
		}
		if(newd<d)
		{
			newa=newa+10;
			newb=newb+10;
			degree(newb,newa);
			newa=newa-10;
			newb=newb-10;		
			newd1=sqrt(newa*newa + newb*newb);
			degree(newb,newa);		
			newd=newd1;
			if((newa>0) && (newb>0))
			{
				newa=newa-10;
				newb=newb-10;
			}
			else if((newa<=0) && (newb<=0))
			{
				newa=newa+10;
				newb=newb+10;
			}
			else if((newa<=0) && (newb>=0))
			{
				newa=newa+10;
				newb=newb-10;	 
			}
			else if((newa>=0) && (newb<=0))
			{
				newa=newa-10;
				newb=newb+10;

			}
			else if((newa==0) && (newb<=0))
			{
				newa=newa+10;
				newb=newb+10;
			}
			else if((newa==0) && (newb>=0))
			{
				newa=newa+10;
				newb=newb-10;

			}

			
			newd1=sqrt(newa*newa + newb*newb);
			while(newd1<newd)
			{
				degree(newb,newa);
				newd=newd1;
				if((newa>0) && (newb>0))
				{
					newa=newa-10;
					newb=newb-10;

				}
				else if((newa<=0) && (newb<=0))
				{
					newa=newa+10;
					newb=newb+10;

				}
				else if((newa<=0) && (newb>=0))
				{
					newa=newa+10;
					newb=newb-10;
	 
				}
				else if((newa>=0) && (newb<=0))
				{
					newa=newa-10;
					newb=newb+10;

				}
				else if((newa==0) && (newb<=0))
				{
					newa=newa+10;
					newb=newb+10;
				}
				else if((newa==0) && (newb>=0))
				{
					newa=newa+10;
					newb=newb-10;

				}


				newd1=sqrt(newa*newa + newb*newb);				
			}		
		}
	}
	else if((a<=0) && (b<=0))
	{
		newa=a+10;
		newb=b+10;
		newd=sqrt(newa*newa + newb*newb);
		if((newd==d) || (newd>d))
		{
			printf("%3.0f %3.0f \n",a,b);
		}	
		if(newd<d)
		{
			newa=newa-10;
			newb=newb-10;
			degree(newb,newa);
			newa=newa+10;
			newb=newb+10;
			newd1=sqrt(newa*newa + newb*newb);
			degree(newb,newa);		
			newd=newd1;
			if((newa>0) && (newb>0))
			{
				newa=newa-10;
				newb=newb-10;

			}
			else if((newa<=0) && (newb<=0))
			{
				newa=newa+10;
				newb=newb+10;

			}
			else if((newa<=0) && (newb>=0))
			{
				newa=newa+10;
				newb=newb-10;
	 
			}
			else if((newa>=0) && (newb<=0))
			{
				newa=newa-10;
				newb=newb+10;
			
			}
			else if((newa==0) && (newb<=0))
			{
				newa=newa+10;
				newb=newb+10;
			}
			else if((newa==0) && (newb>=0))
			{
				newa=newa+10;
				newb=newb-10;

			}

			
			newd1=sqrt(newa*newa + newb*newb);
			while(newd1<newd)
			{
				degree(newb,newa);
				newd=newd1;
				if((newa>0) && (newb>0))
				{
					newa=newa-10;
					newb=newb-10;

				}		
				else if((newa<=0) && (newb<=0))
				{
					newa=newa+10;
					newb=newb+10;

				}
				else if((newa<=0) && (newb>=0))
				{
					newa=newa+10;
					newb=newb-10;
	 
				}
				else if((newa>=0) && (newb<=0))
				{
					newa=newa-10;
					newb=newb+10;

				}
				else if((newa==0) && (newb<=0))
				{
					newa=newa+10;
					newb=newb+10;
				}
				else if((newa==0) && (newb>=0))
				{
					newa=newa+10;
					newb=newb-10;

				}


				newd1=sqrt(newa*newa + newb*newb);
				
			}		
		}
	}
	else if((a<=0) && (b>0))
	{
		newa=a+10;
		newb=b-10;
		newd=sqrt(newa*newa + newb*newb);
		if((newd==d) || (newd>d))
		{
			printf("%3.0f %3.0f \n",a,b);
		}
		if(newd<d)
		{
			newa=newa-10;
			newb=newb+10;
			degree(newb,newa);
			newa=newa+10;
			newb=newb-10;
			newd1=sqrt(newa*newa + newb*newb);
			degree(newb,newa);		
			newd=newd1;
			if((newa>0) && (newb>0))
			{
				newa=newa-10;
				newb=newb-10;

			}
			else if((newa<=0) && (newb<=0))
			{
				newa=newa+10;
				newb=newb+10;

			}
			else if((newa<=0) && (newb>=0))
			{
				newa=newa+10;
				newb=newb-10;
	 
			}
			else if((newa>=0) && (newb<=0))
			{
				newa=newa-10;
				newb=newb+10;

			}
			else if((newa==0) && (newb<=0))
			{
				newa=newa+10;
				newb=newb+10;
			}
			else if((newa==0) && (newb>=0))
			{
				newa=newa+10;
				newb=newb-10;

			}	

			
			newd1=sqrt(newa*newa + newb*newb);
			while(newd1<newd)
			{
				degree(newb,newa);
				newd=newd1;
				if((newa>0) && (newb>0))
				{
					newa=newa-10;
					newb=newb-10;

				}	
				else if((newa<=0) && (newb<=0))
				{
					newa=newa+10;
					newb=newb+10;

				}		
				else if((newa<=0) && (newb>=0))
				{
					newa=newa+10;
					newb=newb-10;
	 
				}
				else if((newa>=0) && (newb<=0))
				{
					newa=newa-10;
					newb=newb+10;

				}
				else if((newa==0) && (newb<=0))
				{
					newa=newa+10;
					newb=newb+10;
				}
				else if((newa==0) && (newb>=0))
				{
					newa=newa+10;
					newb=newb-10;

				}


				newd1=sqrt(newa*newa + newb*newb);
				
			}		
		}
	}
	else if((a>0) && (b<=0))
	{
		newa=a-10;
		newb=b+10;
		newd=sqrt(newa*newa + newb*newb);
		if((newd==d) || (newd>d))
		{
			printf("%3.0f %3.0f \n",a,b);
		}
		if(newd<d)
		{
			newa=newa+10;
			newb=newb-10;
			degree(newb,newa);
			newa=newa-10;
			newb=newb+10;
			newd1=sqrt(newa*newa + newb*newb);
			degree(newb,newa);		
			newd=newd1;
			if((newa>0) && (newb>0))
			{
				newa=newa-10;
				newb=newb-10;

			}
			else if((newa<=0) && (newb<=0))
			{
				newa=newa+10;
				newb=newb+10;

			}
			else if((newa<=0) && (newb>=0))
			{
				newa=newa+10;
				newb=newb-10;
	 
			}
			else if((newa>=0) && (newb<=0))
			{
				newa=newa-10;
				newb=newb+10;

			}
			else if((newa==0) && (newb<=0))
			{
				newa=newa+10;
				newb=newb+10;
			}
			else if((newa==0) && (newb>=0))
			{
				newa=newa+10;
				newb=newb-10;

			}		

		
			newd1=sqrt(newa*newa + newb*newb);	
			while(newd1<newd)
			{
				degree(newb,newa);
				newd=newd1;
				if((newa>0) && (newb>0))
				{
					newa=newa-10;
					newb=newb-10;

				}		
				else if((newa<=0) && (newb<=0))
				{
					newa=newa+10;
					newb=newb+10;

				}				
				else if((newa<=0) && (newb>=0))
				{
					newa=newa+10;
					newb=newb-10;
	 
				}
				else if((newa>=0) && (newb<=0))
				{
					newa=newa-10;
					newb=newb+10;

				}		
				else if((newa==0) && (newb<=0))
				{
					newa=newa+10;
					newb=newb+10;
				}
				else if((newa==0) && (newb>=0))
				{
					newa=newa+10;
					newb=newb-10;

				}	


				newd1=sqrt(newa*newa + newb*newb);				
			}		
		}
	}

return 0;
}
