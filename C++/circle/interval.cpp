#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
template <class P, class P1>
P * interval(vector<P> p,P1 a)
{
	P * result=new P[2];
	P1 * A=p[0].getcoordinate();
	P1 * B=p[0].getcoordinate();
	result[0]=p[0];
	result[1]=p[0];
	P1* C;
	int dim= p[0].dim();
	for (int i = 0; i < dim;i++)
	{
		for (int j = 0; j < p.size(); ++j)
		{
			C= p[j].getcoordinate();
			if(C[i]<A[i])
			{
				A[i]=C[i];
			}
			if(C[i]>B[i])
			{
				B[i]=C[i];
			}
		}
	}
	result[0].setcoordinate(A);
	result[1].setcoordinate(B);
	return result;
}