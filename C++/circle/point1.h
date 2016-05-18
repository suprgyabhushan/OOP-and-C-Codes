#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include "distance.cpp"
using namespace std;
template <typename T>
class mypoint
{
	private:
		T * coordinate;
		vector <T> coordinate1;
		int Dim;
	public:
		float dist;
		mypoint()
		{
			Dim =0;
		}
		mypoint(int n)
		{
			Dim=n;
			coordinate= new T[n];
			
			for (int i = 0; i < n; ++i)
			{
				coordinate[i]=0;
			}
		}	
		T * getcoordinate()
		{
			return coordinate;
		}
		vector <T> getcoordinate1()
		{
			return coordinate1;
		}
		void setcoordinate(T * value)
		{
			for (int i = 0; i < Dim; ++i)
			{
				coordinate[i]=value[i];
			}
		}
		int dim()
		{
			return Dim;
		}
		static bool DistanceComp(mypoint <T> a,mypoint <T> b)
		{
			return (a.dist < b.dist);
		}
		static void DSort(mypoint <T> a,vector<mypoint <T> >&p)
		{
			for (int i = 0; i < p.size(); ++i)
			{
				p[i].dist=distance4(a,p[i],*(p[i].getcoordinate()));
			}
			sort(p.begin(),p.end(),DistanceComp);
		}
		static bool LexicComp(mypoint <T> a,mypoint <T> b)
    	{
      		return lexicographical_compare(a.getcoordinate1().begin(),a.getcoordinate1().end(),b.getcoordinate1().begin(),b.getcoordinate1().end());
    	}
		static void LexicSort(vector<mypoint <T> >&p)
		{
			sort(p.begin(),p.end(),LexicComp);
		}
		void print_coordinate()
		{
			for (int i = 0; i < Dim; ++i)
			{
				cout<<coordinate[i];
			}
			cout<<endl;
		}
};
namespace traits
{
    template <class P,int D>
    struct access {};
}
namespace traits
{
	template <class T>    
  struct access<T, 0>
  {
       static double get(T p)
        {
            return p.x;
        }
    };
    template <class T>
    struct access<T, 1>
    {
        static double get(T p)
        {
            return p.y;
        }
    };
	template <class T>
    struct access<T, 2>
    {
        static double get(T p)
        {
            return p.z;
        }
    };
    template <class T>
    struct access<T, 3>
    {
        static double get(T p)
        {
            return p.t;
        }
    };
}
template <int D, class P>
inline float get(P p)
{
    return traits::access<P, D>::get(p);
}
template <class P1, class P2, int D>
float apply(P1 a, P1 b,P2 c)
{
	P2 * A=a.getcoordinate();
	P2 * B=b.getcoordinate(); 
	float d = get<D-1>(A) - get<D-1>(B);
	return d * d + apply(a, b);
}
