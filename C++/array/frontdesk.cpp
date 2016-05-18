//in frontdesk.cpp
#include<iostream>
#include<cstdlib>
#include<fstream>
#include "frontdesk.h"
#include "mechanic.h"

void FrontDesk::readFile()
{
	Mechanic obj;
	int j;
	ifstream fin;
	fin.open("test");
	if (!fin.good())
	{
   		cout << "File not found" << endl;
	}
	while(!fin.eof())
	{
		fin >> Letter;
		if(Letter=="R")
		{                     
   			fin >> ID ;
   			obj.push(ID);
   		}	     
		else if(Letter=="N")
		{
			obj.pop();
		}
		else if(Letter=="E")
		{
       		obj.pope();
    		break;    		
		}
	}
	fin.close();
}    
