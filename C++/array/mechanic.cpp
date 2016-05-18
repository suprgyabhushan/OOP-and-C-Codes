//in mechanic.cpp
#include<iostream>
#include<cstdlib>
#include<fstream>
#include "mechanic.h"
void Mechanic::push(int id)
{
	if(top==size)
	{
		cout<<"Stack is already full"<<endl;
	}
	else
	{
	    array[++top]=id;
	}
}
void Mechanic::pop()
{
	if(top==-1)
	{
		cout<<"The stack is empty"<<endl;
	}
	else
	{
		item=array[top--];
		cout<<"The id whose work done is "<<item<<endl;
	}
}
void Mechanic::pope()
{
    int i;
    for(i=top;i>=0;i--)
    {
        cout<<"The id whose work done is "<<array[i]<<endl;
    }
}
