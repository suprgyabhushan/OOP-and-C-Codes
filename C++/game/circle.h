#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include "pos.h"
using namespace std;
// in circle.h

class Circle
{	
public:
	int type;
	Pos position;
	Circle()
	{	
		position.x=0;
		position.y=0;
		position.radius=0;
	}
	Circle(int t,int a,int b,int c)
	{
		type=t;
		position.x=a;
		position.y=b;
		position.radius=c;
	}	
	int Type();
	int R();
	int X();
	int Y();
};