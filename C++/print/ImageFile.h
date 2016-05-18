#include "file.h"
using namespace std;
class Imagefile : public file
{
	public:
		string PrintCommand();
		Imagefile(string name);
};