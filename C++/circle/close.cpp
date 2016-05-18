#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
template <class P>
P closestdistance(P a,vector <P> p)
{
	float min= distance4(a,p[0],*(a.getcoordinate()));
	int j=0;
	for (int i = 1; i < p.size();i++)
	{
		if(min>distance4(a,p[i],*(a.getcoordinate())))
			j=i;
	}
	return p[j];
}