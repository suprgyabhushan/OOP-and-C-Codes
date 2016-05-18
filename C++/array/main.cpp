//in main.cpp
#include<iostream>
#include<cstdlib>
#include<fstream>
#include"mechanic.h"
#include"frontdesk.h"
using namespace std;


int main()
{
    cout << " " << endl;
    cout << "Garage\n" << endl;
    FrontDesk Customers;
    cout << "Reading all customer's data from file" << endl;
    Customers.readFile();
 	return 0;
}
