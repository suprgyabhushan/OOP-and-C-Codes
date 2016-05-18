#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
//#include "circle.h"
//#include "pos.h"
//#include "game.h"
#include "player.h"
using namespace std;

int main()
{
	Player Gamer;
	int cx,cy,rad,score;
	cout<<"Let The Game Begin"<<endl;
	cin>>cx;
	cin>>cy;
	cin>>rad;
	
	while((cx!=0 && cy!=0 && rad!=0) && ((cx<500) && (cy<500)))
	{
		Gamer.Main(cx,cy,rad);
		cout<<"Score is "<<Gamer.Score1()<<endl;
		Gamer.setcircles();
		cin>>cx;
		cin>>cy;
		cin>>rad;
	}
	score=Gamer.Score1();
	cout<<"Score is "<<score<<endl;
}
