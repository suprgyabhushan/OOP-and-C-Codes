//in call.cpp
#include<iostream>
#include<string>
#include<stdlib.h>
#include"call.h"
using namespace std;
void Network::makeCall(long int arr[][5],long int x,int y,int z)
{
    if(arr[y][z]==x)
    {
    	w=y;
    	cout<<"Call Calling"<<endl;
	}
}
int Network::receiveCall(long int arr[][5],long int v,int y)  
{
    if(arr[y][0]==v)
	{
        return 1;	
	}
	else
	{
    	return 0;
	}
}
