//main.cpp
#include<iostream>
#include<fstream>
#include<limits>
#include<vector>
#include<string>
#include<stdlib.h>
#include"phone.h"
#include"sim.h"
#include"call.h"
using namespace std;
int main()
{
	vector<Phone*> database;
	vector<SmartPhone*> database1;
	vector<SmartPhone*> database2;
	vector<Feature*> database3;
	vector<Phone*> database4;
	vector<Phone*> database5;
	vector<SmartPhone*> database6;
	vector<Feature*> database7;
	vector<int> number;
	
	int sim;
	int input;
	long int aimei[5];
	
	int nophone,count=0,count1=0;
	int k,j,m=0,n=0;
	string Name;
	string Country;
	string model;
	string manufacture;
	string modelname;
	string modem;
	int nomodems;
	long int imei ;
	long int t;
	int l;		
	string letter;
	string letter1;
	int count3=0;
	
	
	Phone* b1 = new SmartPhone(Name,Country,model,manufacture,modelname,modem,nomodems,aimei); 
	SmartPhone* d1 = dynamic_cast<SmartPhone*>(b1);
  	Feature* d2 = dynamic_cast<Feature*>(b1);
  	cout << "d1 = " << (long)d1 << endl;
  	cout << "d2 = " << (long)d2 << endl;
	
  	
  	
  	

	
	ifstream infile ("in1.txt");
	infile>>nophone;
	cout<<nophone<<'\n';
	int dual[nophone];
	long int phoneno;
	infile.ignore();
	infile.clear();
	while(count<nophone)
	{		
		infile>>letter;
		if(letter=="S")
			l=1;
		else
			l=2;
		switch(l)
		{
			case 1:
			{
				infile>>Name;
				infile>>Country;
				infile>>model;
				infile>>manufacture;
				infile>>modelname;
				infile>>modem;
				infile>>nomodems;
				dual[count]=nomodems;
							
				for(j=0;j<nomodems;j++)
				{			
					infile>>imei;
					aimei[j]=imei;
				}
				database.push_back(new SmartPhone(Name,Country,model,manufacture,modelname,modem,nomodems,aimei));
				
				if(d1!=0)
				{		
					if(manufacture=="Q")
						database1.push_back(new SmartPhone(Name,Country,model,manufacture,modelname,modem,nomodems,aimei));
				}
				
				if(modem=="LTE")
				{
					number.push_back(database.size());
					cout<<number[count3]<<endl;
					count3++;					
					database2.push_back(new SmartPhone(Name,Country,model,manufacture,modelname,modem,nomodems,aimei));
				}								
				if(modem=="GPRS")
					database4.push_back(new SmartPhone(Name,Country,model,manufacture,modelname,modem,nomodems,aimei));
					
				if(modem=="GSM")
					database5.push_back(new SmartPhone(Name,Country,model,manufacture,modelname,modem,nomodems,aimei));
				
				if(modem=="WCDMA")
					database6.push_back(new SmartPhone(Name,Country,model,manufacture,modelname,modem,nomodems,aimei));
				break;
			}
			case 2:
			{
				infile>>Name;
				infile>>Country;
				infile>>model;
				infile>>modem;
				infile>>nomodems;
				dual[count]=nomodems;
				
				for(j=0;j<nomodems;j++)
				{
					infile>>imei;
					aimei[j]=imei;
				}
				database.push_back(new Feature(Name,Country,model,modem,nomodems,aimei));
				
				if(modem=="LTE")
				{
					number[count3]=database.size();
					cout<<number[count3]<<endl;
					count3++;	
					database3.push_back(new Feature(Name,Country,model,modem,nomodems,aimei));
				}
				if(modem=="GPRS")
					database4.push_back(new Feature(Name,Country,model,modem,nomodems,aimei));
					
				if(modem=="GSM")
					database5.push_back(new Feature(Name,Country,model,modem,nomodems,aimei));
				
				if(modem=="WCDMA")
					database7.push_back(new Feature(Name,Country,model,modem,nomodems,aimei));
					
							
				
				break;
			}			
		}
		
		count++;
		infile.clear();
		infile.ignore();
	}
	infile>>sim;
	
	cout<<sim<<endl;
	long int asim[nophone][5];
	for(k=0;k<nophone;k++)
	{
		for(m=0;m<5;m++)
		{
			asim[k][m]=0;
		}
	}
	m=0;	
	while(count1<sim)
	{
			infile.clear();
			infile.ignore();
			infile>>letter1;
			cout<<letter1<<endl;
			infile.clear();
			infile.ignore();
			infile>>phoneno;
			cout<<phoneno<<endl;
			asim[m][0]=phoneno;
			cout<<asim[m][0]<<endl;
			m=m+1;
			count1++;
	}
	infile.close();
	cout<<endl;
	int q;
	int r;
	cout<<"Database size:"<<database.size()<<endl;
	cout<<"Database contains:"<<endl;
	for(k=0;k<database.size();k++)
	{
		database[k]->printStats();
		q=dual[k];
		for(r=0;r<q;r++)
		{
			cout<<"Phone No "<<r<<": "<<asim[k][r]<<endl;
		}
		cout<<endl<<endl;
	}
	
	long int a;
	//long int t;
	
	int b,c,d,z,s,k4;
	long int store;

	Sim S;
	Network N;
	
	int count2=0;
	int count4;	
	
	cout<<"Queries "<<endl;
	cout<<"1 -> Call and Receive "<<endl;
	cout<<"2 -> Add or Remove a Sim "<<endl;
	cout<<"3 -> Country and Manufacture of all Phones in the network "<<endl;
	cout<<"4 -> Wireless Technology of 'Q' Manufacture "<<endl;
	cout<<"5 -> Phone Numbers of LTE "<<endl;
	cout<<"6 -> Number of LTE, GSM, WCDMA, GPRS Phones "<<endl;
	cout<<"7 -> Print the Phone database "<<endl;
	
	
	cin>>input;
	while(input!=0)
	{
		if(input==2)
		{
			
			cout<<"Removing Sim of phone no of a sim no :"<<endl;
			cin>>b;
			cin>>c;
		 	
			if(asim[b][c]==0)
				cout<<"No Sim"<<endl;
			else
			{
				cout<<"Removing Sim"<<endl;
				store=asim[b][c];
				cout<<store<<endl;
				S.remove(asim,b,c);
				
			}
			
			cout<<"Adding this Sim to phone no :"<<endl;
			cin>>d;
			cout<<d<<endl;		
			cout<<dual[d]<<endl;
			if(dual[d]==2)
			{
				S.add2(asim,d,count2,store);
			}
			else if(dual[d]==1)
			{
				S.add1(asim,d,count2,store);
			}
			else if(dual[d]==4)
			{
				S.add4(asim,d,count2,store);
			}
			
		}
		else if(input==1)
		{
			int k2,k3;
			
			cout<<"No calling"<<endl;
			cin>>a;
			cout<<"No called"<<endl;
			cin>>t;
			for(k2=0;k2<database.size();k2++)
			{
				q=dual[k2];
				for(r=0;r<q;r++)
				{
					N.makeCall(asim,a,k2,r);
				}
			
				s=N.receiveCall(asim,t,k2);
				z=N.w;
				if(s==1)
				{
					database[z]->printStats();
					cout<<"Received"<<endl;
				}
			}
		}		
			
		else if(input==3)
		{
			cout<<"Country and Manufacture"<<endl;
			for(k=0;k<database.size();k++)
			{
				database[k]->display1();
				cout<<endl;
			}
		}
		else if(input==4)
		{
			cout<<"Q Manufacture"<<endl;
			for(k=0;k<database1.size();k++)
			{
				database1[k]->display2();
				cout<<endl;
			}
		}
		else if(input==5)
		{
			int k1;
			cout<<"LTE Phone Numbers :"<<endl;
			for(count3=0;count3<number.size();count3++)
			{
				count4=dual[number[count3]-1];
				cout<<"Phone No :"<<number[count3]-1<<endl;
				for(k1=0;k1<count4;k1++)
				{
					cout<<asim[number[count3]-1][k1]<<endl;
				}
				cout<<endl;
			}
		}
		
		else if(input==6)
		{
			cout<<"Total LTE phones :"<<database2.size()+database3.size()<<endl;
			cout<<"Total GPRS phones :"<<database4.size()<<endl;
			cout<<"Total GSM phones :"<<database5.size()<<endl;
			cout<<"Total WCDMA phones :"<<database6.size()+database7.size()<<endl;
		}
		
		else if(input==7)
		{
			for(k=0;k<database.size();k++)
			{
				database[k]->printStats();
				s=dual[k];
				for(r=0;r<s;r++)
				{
					cout<<"Phone No "<<r<<": "<<asim[k][r]<<endl;
				}
				cout<<endl<<endl;
			}
		}
		cout<<"Queries "<<endl;
		cout<<"1 -> Call and Receive "<<endl;
		cout<<"2 -> Add or Remove a Sim "<<endl;
		cout<<"3 -> Country and Manufacture of all Phones in the network "<<endl;
		cout<<"4 -> Wireless Technology of 'Q' Manufacture "<<endl;
		cout<<"5 -> Phone Numbers of LTE "<<endl;
		cout<<"6 -> Number of LTE, GSM, WCDMA, GPRS Phones "<<endl;
		cout<<"7 -> Print the Phone database "<<endl;
		cin>>input;
	}		
	return 0;
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
				
