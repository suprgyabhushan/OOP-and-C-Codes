#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include "point1.h"
using namespace std;
template <class P1>
float distance3(P1 a, P1 b,int D)
{
    P1 p;
    return sqrt(p.apply(a, b,*(a[0].getcoordinate())));
}