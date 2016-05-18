#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include "pointint.cpp"
using namespace std;
template <class T>
bool intervalintersection(T * a,T* p)
{
	if(pointinterval(p[0],a,*(a[0].getcoordinate())))
	{
		return true;
	}
	else if(pointinterval(p[1],a,*(a[0].getcoordinate())))
	{
		return true;
	}
	if(pointinterval(a[0],p,*(a[0].getcoordinate())))
	{
		return true;
	}
	else if(pointinterval(a[1],p,*(a[0].getcoordinate())))
	{	
		return true;
	}
	return false;
}