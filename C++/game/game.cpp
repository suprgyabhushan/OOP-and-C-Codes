#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
//#include "circle.h"
//#include "pos.h"
#include "game.h"
using namespace std;
//in game.cpp
int Game::distance( int x1, int y1, int x2, int y2 )
{
	return sqrt( pow( x2 - x1, 2 ) + pow( y2 -y1, 2 ) );
}

int Game::checkcollision(Circle A , Circle B)
{
	if( distance( A.X(), A.Y(), B.X(), B.Y() ) < ( A.R() + B.R() ) )
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
		
void Game::LL(int a,int b,int c)
{
	node * top1= new node;
	top1->C.position.x= a;
	top1->C.position.y= b;
	top1->C.position.radius= c;
	count++;
	if (count%3==0)
	{
		top1->C.type=1;
	}
	else if(count%6==0)
	{
		top1->C.type=2;
	}
	else if(count%10==0)
	{	
		top1->C.type=3;
	}
	else
	{
		top1->C.type=0;
	}
	top1->next=top;
	top=top1;
}

int Game::random1()
{
	int rand1 = rand()%500 ;
	return rand1;
}

int Game::random2()
{
	int rand2 = rand()% 2;
	return rand2;
}


void Game::NewCircles()
{
	int random;
	node * top1 = top;
	while(top1!=NULL)
	{
		if(top1->C.Type()==0)
		{
			random=random1();
			top1->C.position.x=random ;
			random=random1();
			top1->C.position.y=random ;
		}
		else if(top1->C.Type()==1)
		{
			random=random2();
			top1->C.position.radius += random;
		}
		else if(top1->C.Type()==2)
		{
			random=random2();
			top1->C.position.radius -= random;
		}
		else if(top1->C.Type()==3)
		{
			LL(top1->C.X(),top1->C.Y(),top1->C.R());
			random=random1();
			top1->C.position.x=random;
			random=random1();
			top1->C.position.y= random;
		}
		top1=top1->next;
	}
}

int Game::Score()
{
	return count;
}
