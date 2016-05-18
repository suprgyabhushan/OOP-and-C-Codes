//in sim.cpp
#include<iostream>
#include<string>
#include<stdlib.h>
#include"sim.h"
using namespace std;
void Sim::remove(long int arr[][5],int x,int y)
{	
			arr[x][y]=0;
}
	
void Sim::add2(long int arr[][5],int x,int y,long int z)
{
    while((arr[x][y]!=0) && (y<2))
	{
    	y++;
   	}
	if(y==2)
	{
		cout<<"No place"<<endl;
	}
	cout<<y<<endl;
	arr[x][y]=z;
} 
		
void Sim::add1(long int arr[][5],int x,int y,long int z)
{
    while((arr[x][y]!=0) && (y<1))
    {
        y++;
    }   
	if(y==1)
	{
		cout<<"No place"<<endl;
	}
	cout<<y<<endl;
	arr[x][y]=z;
}	 
		
void Sim::add4(long int arr[][5],int x,int y,long int z)
{
    while((arr[x][y]!=0) && (y<4))
	{
		y++;
	}
	if(y==4)
	{
		cout<<"No place"<<endl;
	}
	cout<<y<<endl;
	arr[x][y]=z;
}
