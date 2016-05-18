#include "printer.h"
printer::printer()
	{
		timev=time(0);
	}	
string printer::getPtype()
	{
		return PType;
	}
time_t printer::getTime()
	{
		return timev;
	}
void printer::AssignName(string name)
	{
		Name=name;
	}
void printer::AssignType(string type)
	{
		Type =type;
	}
string printer::getName()
	{
		return Name;
	}
void printer::AssignPType(string type)
	{
		PType =type;
	}
void printer::addTime()
	{
		int i;
		timev=time(0);
		i=(rand()%7)+3;
		timev += i;
	}
