//phone.h
#ifndef PHONE_H
#define PHONE_H
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Phone
{
	protected:
		string mFirstName;
		string mCountry;
	
	public:
		Phone()
		{
			mFirstName="";
			mCountry="";
		}
		Phone(string Name,string Country)
		{
			mFirstName=Name;
			mCountry=Country;
		}
		virtual ~Phone(){};
		virtual void printStats();
		virtual void printStats1();
		void display1();
};

class SmartPhone: public Phone
{
	private:
		int i;
	protected:
		string mFirstName;
		string mCountry;
		string mmodel;
		string mmanufacture;
		string mmodelname;
		string mmodem;
		int mnomodems;
		long int mimei[5]; 
	
	
	public:	
	
		SmartPhone()
		{};
		SmartPhone(string Name,string Country,string model,string manufacture,string modelname,string modem,int nomodems,long int arr[]):Phone(Name,Country)
		{	
			mmodel=model;
			mmanufacture=manufacture;
			mmodelname=modelname;
			mmodem=modem;
			mnomodems=nomodems;
			for(i=0;i<mnomodems;i++)
			{
				mimei[i]=arr[i];
			}		
		}
		void printStats();
		
		void printStats1();
		
		void display2();
		
};

class Feature: public Phone
{
	private:
		int i;
	protected:
		string mFirstName;
		string mCountry;
		string mmodel;
		string mmodem;
		int mnomodems;
		long int mimei[5];
	
	public:
		Feature(string Name,string Country,string model,string modem,int nomodems,long int arr[]):Phone(Name,Country)
		{
			mmodel=model;
			mmodem=modem;
			mnomodems=nomodems;
			for(i=0;i<mnomodems;i++)
			{
				mimei[i]=arr[i];
			}	
		}
		void printStats();
		
		
		void display();
		
};


#endif
