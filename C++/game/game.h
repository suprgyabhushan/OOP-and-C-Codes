#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include "circle.h"
//#include "pos.h"
//in game.h
using namespace std;
class node
{
	public:
		Circle C;
		node * next;
};


class Game
{
	private:
		int count;
	public:
		node * top;
		Game()
		{
			top=NULL;
			count = 0;
		}

		int distance( int , int , int , int );
		int checkcollision(Circle A , Circle B);
		void LL(int ,int ,int );
		int random1();
		int random2();
		void NewCircles();
		int Score();
		
};