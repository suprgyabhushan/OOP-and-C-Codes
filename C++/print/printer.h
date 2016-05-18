#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
class printer
{
	private:
	string Type;	//laser or inkjet or dot
	string Name;
	string PType;	//BW or colour
	time_t timev;
	public:
	printer();
	time_t getTime();
	void AssignName(string name);
	void AssignType(string type);
	string getName();
	string getPtype();
	void AssignPType(string type);
	void addTime();
};