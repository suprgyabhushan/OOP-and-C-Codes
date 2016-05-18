#include "printer.h"
#include "folder.h"
#include "Request.h"
#include <iostream>
#include <vector>
using namespace std;
class Server
{
private:
	vector <printer> Printers;
	vector <folder> Folders;
	string searchFile(string file);
	printer searchPrinter(string name);
	int getInt(string a);
	int checkPrinter(string print);
	int searchFolder(string Fname);
	vector <Request> requests;
	int searchPrinterIndex(string name);
	string DefaultPrinter;
	string DefaultColour;
public:
	Server();
	//void printAllP();
	void setDefault(string name);
	void setDefaultC(string colour);
	void addRequest(string file, string colour="", string print="");
	void CompleteRequests();
	void pushFile(string Fname,file * f);
	void pushFolder(string Fname);
	void pushPrinter(string name,string type,string ptype);
	int getRequestSize();
};