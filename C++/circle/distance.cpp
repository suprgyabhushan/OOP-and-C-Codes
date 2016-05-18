#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
template <class P, class P1>
float distance4(P a,P b,P1 c)
{
	float result;
	P1 * A= a.getcoordinate();
	P1 * B= b.getcoordinate();
	for (int i = 0; i < a.dim();i++)
	{
		result= result+ ((A[i]-B[i])*(A[i]-B[i]));
	}
	return sqrt(result);
}