#include <vector>
#include <fstream>
#include "point1.h"
#include "close.cpp"
#include "interval.cpp"
#include "pointint2.cpp"
using namespace std;
int main()
{
    int icoords[] ={0,3,5, 73,
        50, 7, 34, 52,
        43, 92, 8, 1,
        4, 5, 6, 90,
        45,31, 14, 55,
        15,92, 64, 16,
        11,44, 22, 72,
        34,82, 9, 23,
        8,7, 72, 17,
        82,11, 7, 11};
    float dcoords[] ={0.0, 3.1, 5.2, 73.1,
        50.1, 7.8, 34.2, 52.1,
        43.4, 92.2, 8.1, 1.7,
        4.0, 5.9, 6.2, 90.4,
        45.1, 31.2, 14.3, 55.4,
        15.7, 92.7, 64.6, 16.5,
        11.1, 44.4, 22.2, 72.2,
        34.4, 82.8, 9.1, 23.5,
        8.3, 7.5, 72.1, 17.9,
        82.1, 11.6, 7.7, 11.9};
    
    vector <mypoint <int> > buff;
    int i=1;
    while(i<5)
    {
        for(int j=0;j<10;j++)
        {
            int * temp= new int[i];
            for(int k=0;k<i;k++)
            {
                 temp[k]=icoords[k+(i*j)];
            }
            buff.push_back(mypoint<int>(i));
            buff[j].setcoordinate(temp);
        }
        int * temp= new int[i];
        for(int k=0;k<i;k++)
        {
             temp[k]=0;
        }
        cout<<distance4(buff[3],buff[5],1)<<endl;
        vector <mypoint <int> > interval5(buff.begin(),buff.begin()+5);
        (closestdistance(buff[7],interval5)).print_coordinate();
        mypoint <int> * temp1 = interval(vector <mypoint <int> > (buff.begin(),buff.begin()+4),1);
        if(pointinterval(buff[6],temp1,1)==true)
        {
            cout<<"sixth point is intersecting"<<endl;
        }
        if(pointinterval(buff[7],temp1,1)==true)
        {
            cout<<"seventh point is intersecting"<<endl;
        }
        if(pointinterval(buff[8],temp1,1)==true)
        {
            cout<<"eigth point is intersecting"<<endl;
        }
        mypoint <int> * interval1= interval(vector <mypoint <int> > (buff.begin(),buff.begin()+5),1);
        mypoint <int> * interval2= interval(vector <mypoint <int> > (buff.begin()+6,buff.end()),1);
        if(intervalintersection(interval1,interval2))
        {
            cout<<"Yes"<<endl;
        }
        vector <mypoint <int> > interval3 (buff.begin(),buff.begin()+6);
        mypoint <int> :: DSort(buff[4],interval3);
        for (int k = 0; k < 6; ++k)
        {
            interval3[k].print_coordinate();
        }
        vector <mypoint <int> > interval4 (buff.begin(),buff.begin()+7);
        mypoint <int> :: LexicSort(interval4);
        for (int k = 0; k < 7; ++k)
        {
            interval4[k].print_coordinate();
        }
        cout<<endl;
        delete temp;
        buff.erase(buff.begin(),buff.end());
        i++;
    }
    i=1;
    vector <mypoint <float> > buff1;
    while(i<5)
    {
        for(int j=0;j<10;j++)
        {
            float * temp1= new float[i];
            for(int k=0;k<i;k++)
            {
                 temp1[k]=dcoords[k+(i*j)];
            }
            buff1.push_back(mypoint<float>(i));
            buff1[j].setcoordinate(temp1);
        }
        float * temp1= new float[i+1];
        for(int k=0;k<i;k++)
        {
             temp1[k]=0;
        }
        cout<<distance4(buff1[3],buff1[5],(float)0.0)<<endl;
        vector <mypoint <float> > interval5(buff1.begin(),buff1.begin()+6);
        (closestdistance(buff1[7],interval5)).print_coordinate();

        mypoint <float> * temp2=interval(vector <mypoint <float> > (buff1.begin(),buff1.begin()+5),(float)1.1);
        if(pointinterval(buff1[6],temp2,(float)1.1)==true)
        {
            cout<<"sixth point is intersecting"<<endl;
        }
        if(pointinterval(buff1[7],temp2,(float)1.1)==true)
        {
            cout<<"seventh point is intersecting"<<endl;
        }
        if(pointinterval(buff1[8],temp2,(float)1.1)==true)
        {
            cout<<"eight point is intersecting"<<endl;
        }
        mypoint <float> * interval1= interval(vector <mypoint <float> > (buff1.begin(),buff1.begin()+5),(float)1.1);
        mypoint <float> * interval2= interval(vector <mypoint <float> > (buff1.begin()+6,buff1.end()),(float)1.1);
        if(intervalintersection(interval1,interval2)==true)
        {
            cout<<"Yes"<<endl;
        }
        vector <mypoint <float> > interval3 (buff1.begin(),buff1.begin()+6);
        mypoint <float> :: DSort(buff1[2],interval3);
        for (int k = 0; k < 6; ++k)
        {
            interval3[k].print_coordinate();
        }
        vector <mypoint <float> > interval4 (buff1.begin(),buff1.begin()+7);
        mypoint <float> :: LexicSort(interval4);
        for (int k = 0; k < 6; ++k)
        {
             interval4[k].print_coordinate();
        }
        i++;
        cout<<endl;
        delete temp1;
        buff1.erase(buff1.begin(),buff1.end());
    }
    i=1;
}
