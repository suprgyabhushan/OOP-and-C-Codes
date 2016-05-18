#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
template <class P, class P1>
bool pointinterval(P a,P * p,P1 b)
{
	P1 * coords=a.getcoordinate();
	P1 * min=p[0].getcoordinate();
	P1 * max=p[1].getcoordinate();
	int dim = a.dim();
	for (int i = 0; i < dim;i++)
	{
		if(coords[i]<min[i] || coords[i]>max[i])
		{
			return true;
		}
	}
	return false;
}