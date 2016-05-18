#ifndef FILE_H
#define FILE_H
#include <iostream>
#include <fstream>
using namespace std;
class file
{
	protected:
		string Name;
	public:
		void AssignName(string name);
		string getName();
		virtual string PrintCommand();
};
#endif