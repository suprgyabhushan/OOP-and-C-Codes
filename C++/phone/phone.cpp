//in phone.cpp
#include"phone.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void Phone::printStats()
{
	cout<<"Name:"<<mFirstName<<endl;
	cout<<"Country:"<<mCountry<<endl;
} 
void Phone::printStats1()
{
	cout<<"Country:"<<mCountry<<endl;
}
void Phone::display1()
{
	cout<<"Name:"<<mFirstName<<endl;
	cout<<"Country:"<<mCountry<<endl;
}

void SmartPhone::printStats()
{
	Phone::printStats();
	cout<<"model:"<<mmodel<<endl;
	cout<<"manufacture name:"<<mmanufacture<<endl;
	cout<<"model name:"<<mmodelname<<endl;
	cout<<"modem:"<<mmodem<<endl;
	cout<<"nomodems:"<<mnomodems<<endl;
	for(i=0;i<mnomodems;i++)
	{
		cout<<"imei"<<i+1<<":"<<mimei[i]<<endl;
	}		
}	
void SmartPhone::printStats1()
{
	Phone::printStats1();
	cout<<"manufacture name:"<<mmanufacture<<endl;
}
void SmartPhone::display2()
{
	cout<<"modem:"<<mmodem<<endl;
}

void Feature::printStats()
{
	Phone::printStats();
	cout<<"model:"<<mmodel<<endl;
	cout<<"modem:"<<mmodem<<endl;
	cout<<"nomodems:"<<mnomodems<<endl;
	for(i=0;i<mnomodems;i++)
	{
		cout<<"imei"<<i+1<<":"<<mimei[i]<<endl;
	}	
}
	
void Feature::display()
{
	cout<<mnomodems<<endl;
}
