//in mechanic.h
using namespace std;

#define size 100
class Mechanic
{
	private :
		int array[size];
		int top;
		int item;
	public : 
		Mechanic()
		{
			top=-1;
		}
		void push(int);		
		void pop();
		void pope();		
};
