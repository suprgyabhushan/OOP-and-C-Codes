#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
//#include "circle.h"
//#include "pos.h"
//#include "game.h"
#include "player.h"
using namespace std;
// in player.cpp

int Player::Main(int a,int b ,int c )
{
	node * top1= MovingCircles.top;
	Circle randomcircle(0,a,b,c);
	while(top1!=NULL)
	{
		if(MovingCircles.checkcollision(randomcircle,top1->C)==1)
		{
			break;
		}
		else
			top1=top1->next;
	}
	MovingCircles.LL(a,b,c);
	return 0;
}	
int Player::Score1()
{
	return MovingCircles.Score();
}
void Player::setcircles()
{
	MovingCircles.NewCircles();
}
