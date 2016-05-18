#include <string>
#include <iostream>
#include "Server.h"
using namespace std;
string Server::searchFile(string File)
	{
		int j;
		file * temp;
		for (int i = 0; i < Folders.size(); ++i)
		{
			for(j=0;j<Folders[i].getNoFiles();j++)
			{
				temp=Folders[i].getFile(j);
				if(File.compare(temp->getName())==0)
				{
					return temp->PrintCommand();
				}
			}
		}
		return "";
	}
void Server::setDefault(string name)
{
	DefaultPrinter=name;
}
void Server::setDefaultC(string colour)
{
	DefaultColour=colour;
}
int Server::searchPrinterIndex(string name)
	{
		int i;
		for(i=0;i<Printers.size();i++)
		{
			if(Printers[i].getName()== name)
				return i;
		}
		return 0;
	}
printer Server::searchPrinter(string name)
	{
		int i;
		for(i=0;i<Printers.size();i++)
		{
			if(Printers[i].getName()== name)
				return Printers[i];
		}	
		return Printers[0];
	}
int Server::getInt(string a)
	{
		if(a=="BW")
			return 1;
		else if (a=="COLOUR")
			return 2;
		return 3;
	}
int Server::checkPrinter(string print)
	{
		for (int i = 0; i < Printers.size(); ++i)
		{
			if(print.compare(Printers[i].getName())==0)
				return 1;
		}
		return 0;
	}
int Server::searchFolder(string Fname)
	{
		for (int i = 0; i < Folders.size(); ++i)
		{
			if(Fname.compare(Folders[i].name)==0)
				return i;
		}
		return 0;
	}
/*void Server::printAllP()
	{
		for (int i = 0; i < Printers.size(); ++i)
		{
			cout<<Printers[i].getName()<<" "<<Printers[i].getPtype()<<endl;
		}
	}*/
Server::Server()
	{
		DefaultColour="BW";
	}
void Server::addRequest(string file, string colour, string print)
	{
		if(colour=="")
			colour=DefaultColour;
		if(print=="")
			print=DefaultPrinter;
		if(checkPrinter(colour)!=1)
		{
			printer Default = searchPrinter(print);
			if(getInt(Default.getPtype())<getInt(colour))
				return;
			else
			{
				requests.push_back(Request(print,file,colour));
			}
		}
		else
		{
			print=colour;
			colour=DefaultColour;
			printer Default = searchPrinter(print);
			if(getInt(Default.getPtype())<getInt(colour))
				return;
			else
			{
				requests.push_back(Request(print,file,colour));
			}

		}
	}
	
void Server::CompleteRequests()
	{
		int i;

		printer * temp;
		for(i=0;i<requests.size();i++)
		{
			temp=&(Printers[searchPrinterIndex(requests[i].printer)]);
			if(time(0)>(temp->getTime()))
			{
				if(searchFile(requests[i].file)!="")
				{
					temp->addTime();
					cout<<searchFile(requests[i].file)<<" by "<<temp->getName()<<endl;
				}	
				else
					cout<<"File not Supported"<<endl;
				requests.erase(requests.begin()+i);
				i--;
			}	
		}
	}
void Server::pushFile(string Fname,file * f)
	{
		Folders[searchFolder(Fname)].pushFile(f);
	}
void Server::pushFolder(string Fname)
	{
		folder temp;
		temp.name=Fname;
		Folders.push_back(temp);
	}
void Server::pushPrinter(string name,string type,string ptype)
	{
		printer temp;
		temp.AssignName(name);
		temp.AssignType(type);
		temp.AssignPType(ptype);
		Printers.push_back(temp);
	}
int Server::getRequestSize()
	{
	return requests.size();
	}
