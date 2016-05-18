#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include "circle.h"
//#include "pos.h"
using namespace std;
int Circle::Type()
{
	return type;
}
int Circle::R()
{
	return position.radius;
}
int Circle::X()
{
	return position.x;
}
int Circle::Y()
{
	return position.y;
}